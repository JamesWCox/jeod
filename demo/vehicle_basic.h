

#include <iostream>

//#include "dynamics/dyn_body/include/dyn_body.hh"
//#include "environment/gravity/include/spherical_harmonics_gravity_controls.hh"
//#include "dynamics/body_action/include/dyn_body_init_trans_state.hh"
//#include "dynamics/body_action/include/dyn_body_init_rot_state.hh"
//#include "dynamics/body_action/include/mass_body_init.hh"
class S_VehicleBasicSimObject //: public Trick::SimObject
{
protected:
    //jeod::DynManager & dyn_manager;

public:
    //jeod::DynBody dyn_body;
    //jeod::SphericalHarmonicsGravityControls grav_control;

    //jeod::DynBodyInitTransState trans_init;
    //jeod::DynBodyInitRotState rot_init;
    //jeod::MassBodyInit mass_init;
    // S_VehicleBasicSimObject(jeod::DynManager & dyn_mngr_in) : dyn_manager(dyn_mngr_in) {}
    S_VehicleBasicSimObject(){}
    ~S_VehicleBasicSimObject(){}
};
// HMMMMMMM
//##include "environment/gravity/include/gravity_manager.hh"

class S_VehicleSimObject : public S_VehicleBasicSimObject
{
public:
    // S_VehicleSimObject(jeod::DynManager & dyn_mngr_in) : S_VehicleBasicSimObject(dyn_mngr_in) {}
    S_VehicleSimObject() : S_VehicleBasicSimObject() {}
    ~S_VehicleSimObject(){}
};