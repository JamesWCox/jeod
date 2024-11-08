
#include <iostream>
//#include "dynamics/dyn_manager/include/dyn_manager.hh"
//#include "dynamics/dyn_manager/include/dyn_manager_init.hh"
//#include "environment/time/include/time_manager.hh"

class S_DynamicsInitSimObject //: public Trick::SimObject
{
protected:
    // Reference to the external time manager.
    //jeod::TimeManager & time_manager;
public:
    //jeod::DynManager dyn_manager;
    //jeod::DynManagerInit dyn_manager_init;


    //DynamicsInitSimObject dynamics(jeod_time.time_manager);
    // S_DynamicsInitSimObject(S_JeodTimeSimObject & time_manager_in) : time_manager(time_manager_in) {}
    S_DynamicsInitSimObject() {}
    ~S_DynamicsInitSimObject(){}
};
