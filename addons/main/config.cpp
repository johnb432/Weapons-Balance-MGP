#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "milgp_data",
            "milgp_headgear",
            "milgp_headgear_cfg",
            "milgp_uniforms",
            "milgp_uniforms_cfg",
            "milgp_vests",
            "milgp_vests_cfg"
        };
        author = "johnb43";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
