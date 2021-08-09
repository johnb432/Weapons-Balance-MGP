class CfgPatches {
    class ADDON {
        name = "FKM - Fix Project BLUFOR";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "milgp_data",
            "milgp_headgear",
            "milgp_headgear_cfg",
            "milgp_uniforms",
            "milgp_uniforms_cfg",
            "milgp_vests",
            "milgp_vests_cfg"
        };
        author = "FK Gaming";
        authors[] = {
            "johnb43"
        };
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
