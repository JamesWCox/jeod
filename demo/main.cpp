
#include <iostream>
using std::cout;
using std::endl;

/*
TODO Deets of S_define example 


*/


#include "environment/time/include/time_manager.hh"
//#include "environment/time/include/time_manager_init.hh"

//#include "environment/time/include/time_tai.hh"
//#include "environment/time/include/time_converter_dyn_tai.hh"

//#include "environment/time/include/time_ut1.hh"
//#include "environment/time/include/time_converter_tai_ut1.hh"
//#include "environment/time/data/include/tai_to_ut1.hh"
class S_JeodTimeSimObject //: public Trick::SimObject
{
public:
    // The time manager and its initializer
    //jeod::TimeManager time_manager;
    //jeod::TimeManagerInit time_manager_init;

    // TAI and dynamic time to TAI converter
    //jeod::TimeTAI time_tai;
    //jeod::TimeConverter_Dyn_TAI time_converter_dyn_tai;

    // UT1, TAI to UT1 converter, and UT1 default data
    //jeod::TimeUT1 time_ut1;
    //jeod::TimeConverter_TAI_UT1 time_converter_tai_ut1;
    //jeod::TimeConverter_TAI_UT1_tai_to_ut1_default_data time_converter_tai_ut1_default_data;

    S_JeodTimeSimObject(){}
    ~S_JeodTimeSimObject(){}
};


#include "dynamics_init_only.h"

//#include "Base/vehicle_baseline.sm"
#include "vehicle_basic.h"
class S_define_runner {
public:
#define DYNAMICS       0.5
#define CALENDAR_INTERVAL 1.0
// Include the default system classes:
// #include "sim_objects/default_trick_sys.sm"

// Include the default jeod object
// #include "jeod_sys.sm"

// Define the phase initialization priorities.
// #include "default_priority_settings.sm"

    S_JeodTimeSimObject jeod_time;

// Include the most basic dynamics class and object
// #include "dynamics_init_only.sm" // OG
// DynamicsInitSimObject dynamics(jeod_time.time_manager);
S_DynamicsInitSimObject dynamics;

// Include a basic vehicle class and object
// #include "vehicle_basic.sm" // OG
S_VehicleBasicSimObject vehicle;

    // S_define_runner() : jeod_time, dynamics(jeod_time.time_manager), vehicle(dynamics.dyn_manager) {}
    S_define_runner() : jeod_time(), dynamics(), vehicle() {}
    ~S_define_runner(){}

    int init() {
        return 0;
    }
    int cycle() { 
        
        cout << "S_define_runner cycle()" << endl;
        return 0; 
    }
};

int main()
{
    int retCode = 0;
    cout << "Running JEOD test" << endl;
    S_define_runner sim = S_define_runner();
    retCode = sim.init();
    retCode = sim.cycle();
    return 0;
}