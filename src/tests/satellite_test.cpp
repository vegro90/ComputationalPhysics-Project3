#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/satellite.h"


TEST_CASE("Creating satellite") {
    Satellite satellite;
    SECTION ( "Create satellite object with position, velocity and mass" );
    INFO ( "FAILED to set mass" ) satellite.setMass(10);
    CAPTURE ( satellite.mass() );
    CHECK (satellite.mass() == 10) ;
}
