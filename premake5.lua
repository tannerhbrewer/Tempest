-- premake5.lua
workspace "Tempest"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "Tempest"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
include "Walnut/WalnutExternal.lua"

include "Tempest"