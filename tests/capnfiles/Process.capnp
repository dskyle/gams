# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xb160a6a67565d36e;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Thread.capnp".Thread;

# Type definition
struct Process {
   name @0: Text;
   percentMemory @1: Float32;
   args @2: Text;
   pid @3: Int32;
   percentCpu @4: Float32;
   threads @5: List(Thread);
   
}