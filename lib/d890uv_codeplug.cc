#include "d890uv_codeplug.hh"
#include "errorstack.hh"


/* ********************************************************************************************* *
 * Implementation of D890UVCodeplug
 * ********************************************************************************************* */
D890UVCodeplug::D890UVCodeplug(QObject *parent)
  : AnytoneCodeplugGen2("AnyTone AT-D890UV Codeplug", parent)
{
  // pass...
}

bool
D890UVCodeplug::index(Config *config, Context &ctx, const ErrorStack &err) const {
  Q_UNUSED(config); Q_UNUSED(ctx);
  errMsg(err) << "Encoding the AT-D890UV codeplug is not implemented yet.";
  return false;
}

bool
D890UVCodeplug::decode(Config *config, const ErrorStack &err) {
  Q_UNUSED(config);
  errMsg(err) << "Decoding the AT-D890UV codeplug is not implemented yet.";
  return false;
}

bool
D890UVCodeplug::encode(Config *config, const Flags &flags, const ErrorStack &err) {
  Q_UNUSED(config); Q_UNUSED(flags);
  errMsg(err) << "Encoding the AT-D890UV codeplug is not implemented yet.";
  return false;
}

void
D890UVCodeplug::allocateUpdated() {
  // pass...
}

void
D890UVCodeplug::allocateForDecoding() {
  // pass...
}
