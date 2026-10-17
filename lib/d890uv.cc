#include "d890uv.hh"
#include "logger.hh"

#include "d890uv_limits.hh"
#include "d890uv_codeplug.hh"


D890UV::D890UV(AnytoneInterface *device, QObject *parent)
  : AnytoneRadio("Anytone AT-D890UV", device, parent), _limits(nullptr)
{
  _codeplug = new D890UVCodeplug(this);
  _codeplug->clear();

  AnytoneInterface::RadioVariant info;
  if (_dev)
    _dev->getInfo(info);
  logDebug() << "AT-D890UV reports band code 0x" << QString::number(int(info.bands), 16)
             << ", HW rev. '" << info.version << "'.";

  _limits = new D890UVLimits(info.version, this);
}

const RadioLimits &
D890UV::limits() const {
  return *_limits;
}

bool
D890UV::startUploadCallsignDB(UserDatabase *db, const CallsignDB::Flags &selection, const ErrorStack &err) {
  Q_UNUSED(db); Q_UNUSED(selection);
  errMsg(err) << tr("Writing the call-sign DB to the AT-D890UV is not implemented yet.");
  return false;
}

bool
D890UV::startUploadSatelliteConfig(SatelliteDatabase *db, const TransferFlags &flags, const ErrorStack &err) {
  Q_UNUSED(db); Q_UNUSED(flags);
  errMsg(err) << tr("Writing the satellite config to the AT-D890UV is not implemented yet.");
  return false;
}

RadioInfo
D890UV::defaultRadioInfo() {
  return RadioInfo(
        RadioInfo::D890UV, "d890uv", "AT-D890UV", "AnyTone", {D890UVInterface::interfaceInfo()});
}
