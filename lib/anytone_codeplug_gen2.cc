#include "anytone_codeplug_gen2.hh"


/* ********************************************************************************************* *
 * Implementation of AnytoneCodeplugGen2
 * ********************************************************************************************* */
AnytoneCodeplugGen2::AnytoneCodeplugGen2(const QString &label, QObject *parent)
  : AnytoneCodeplugBase(parent), _label(label)
{
  // pass...
}

void
AnytoneCodeplugGen2::clear() {
  while (this->numImages())
    remImage(0);
  addImage(_label);
}
