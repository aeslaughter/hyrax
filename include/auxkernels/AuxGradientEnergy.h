/*************************************************************************
*
*  Welcome to HYRAX!
*  Andrea M. Jokisaari
*  CASL/MOOSE
*
*  9 January 2014
*
*************************************************************************/

#ifndef AUXGRADIENTENERGY_H
#define AUXGRADIENTENERGY_H

#include "AuxKernel.h"

class AuxGradientEnergy;

template<>
InputParameters validParams<AuxGradientEnergy>();

class AuxGradientEnergy : public AuxKernel
{
public:
    AuxGradientEnergy(const InputParameters & parameters);

protected:
  virtual Real computeValue();

private:

  const VariableGradient & _grad_c;
  const VariableGradient & _grad_OP;

  const MaterialProperty<Real> & _kappa_c;
  const MaterialProperty<Real> & _kappa_OP;
};

#endif //AUXGRADIENTENERGY_H
