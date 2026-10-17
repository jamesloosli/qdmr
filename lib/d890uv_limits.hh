#ifndef D890UVLIMITS_HH
#define D890UVLIMITS_HH

#include "anytone_limits.hh"

/** Implements the limits for the AnyTone AT-D890UV.
 *
 * Only checks the hardware revision so far. The limits get defined along with the codeplug
 * elements they describe.
 *
 * @ingroup d890uv */
class D890UVLimits: public AnytoneLimits
{
  Q_OBJECT

public:
  /** Constructor.
   * @param hardwareRevision Specifies the hardware revision as reported by the radio. */
  explicit D890UVLimits(const QString &hardwareRevision, QObject *parent=nullptr);
};

#endif // D890UVLIMITS_HH
