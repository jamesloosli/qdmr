#ifndef ANYTONECODEPLUGGEN2_HH
#define ANYTONECODEPLUGGEN2_HH

#include "anytone_codeplugbase.hh"


/** Base class of the second generation of AnyTone codeplugs, starting with the AT-D890UV.
 *
 * The second generation shares the transfer protocol with the first one (see
 * @c AnytoneCodeplugGen1), but breaks large parts of the binary codeplug format. Hence it does
 * not reuse any of the first generation codeplug elements.
 *
 * @ingroup anytone */
class AnytoneCodeplugGen2 : public AnytoneCodeplugBase
{
  Q_OBJECT

protected:
  /** Hidden constructor.
   * @param label Specifies the label of the image, the codeplug is stored in. */
  explicit AnytoneCodeplugGen2(const QString &label, QObject *parent=nullptr);

public:
  /** Clears the codeplug, leaving an empty image. */
  void clear() override;

protected:
  /** The label of the image. */
  QString _label;
};

#endif // ANYTONECODEPLUGGEN2_HH
