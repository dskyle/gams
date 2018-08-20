# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0x9c8c55ee48b6dd6d;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "PointDefinition.capnp".PointDefinition;
using import "Header.capnp".Header;
using import "Quaternion.capnp".Quaternion;

# Type definition
struct GoalPathDefinition {
   header @0: Header;
   points @1: List(PointDefinition);
   orientation @2: Quaternion;
   
}