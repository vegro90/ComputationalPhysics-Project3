#include "satellite.h"

Satellite::Satellite() {


}

double Satellite::mass() const
{
    return m_mass;
}

void Satellite::setMass(double mass)
{
    m_mass = mass;
}
