#ifndef D890UVCODEPLUG_HH
#define D890UVCODEPLUG_HH

#include "anytone_codeplug_gen2.hh"


/** Represents the binary codeplug of the AnyTone AT-D890UV.
 *
 * Encoding and decoding are not implemented yet.
 *
 * @ingroup d890uv */
class D890UVCodeplug : public AnytoneCodeplugGen2
{
  Q_OBJECT

public:
  /** Empty constructor. */
  explicit D890UVCodeplug(QObject *parent=nullptr);

  bool index(Config *config, Context &ctx, const ErrorStack &err=ErrorStack()) const override;
  bool decode(Config *config, const ErrorStack &err=ErrorStack()) override;
  bool encode(Config *config, const Flags &flags=Flags(), const ErrorStack &err=ErrorStack()) override;

protected:
  void allocateUpdated() override;
  void allocateForDecoding() override;
};

#endif // D890UVCODEPLUG_HH
