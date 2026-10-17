#include "d890uv_limits.hh"


D890UVLimits::D890UVLimits(const QString &hardwareRevision, QObject *parent)
  : AnytoneLimits(hardwareRevision, "V100", true, parent)
{
  // pass...
}
