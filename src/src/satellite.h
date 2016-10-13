#ifndef SATELLITE_H
#define SATELLITE_H


class Satellite {
public:
    Satellite();
    Satellite(double mass);

    double mass() const;
    void setMass(double mass);

private:
    double m_mass;
};

#endif // SATELLITE_H
