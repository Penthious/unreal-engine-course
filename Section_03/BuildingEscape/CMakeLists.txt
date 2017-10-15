cmake_minimum_required (VERSION 2.6)
project (UE4)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_C_COMPILER "/usr/bin/clang")

include("/Users/tomas/projects/ue4/Section_03/BuildingEscape/Intermediate/ProjectFiles/IncludeDirectories.cmake")
include("/Users/tomas/projects/ue4/Section_03/BuildingEscape/Intermediate/ProjectFiles/Definitions.cmake")
include("/Users/tomas/projects/ue4/Section_03/BuildingEscape/Intermediate/ProjectFiles/UE4Editor.cmake")

set(MONO_ROOT_PATH "/Users/Shared/Epic Games/UE_4.17/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

# Custom target for UE4Editor project, Development configuration
add_custom_target(UE4Editor-Development ${BUILD} && mono UnrealBuildTool.exe UE4Editor Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -game -progress)
add_custom_target(UE4Editor-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe UE4Editor Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -clean)

include("/Users/tomas/projects/ue4/Section_03/BuildingEscape/Intermediate/ProjectFiles/UE4Game.cmake")

# Custom target for UE4Game project, Development configuration
add_custom_target(UE4Game-Development ${BUILD} && mono UnrealBuildTool.exe UE4Game Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -game -progress)
add_custom_target(UE4Game-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe UE4Game Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -clean)

include("/Users/tomas/projects/ue4/Section_03/BuildingEscape/Intermediate/ProjectFiles/BuildingEscape.cmake")

# Custom target for BuildingEscape project, Development configuration
add_custom_target(BuildingEscape-Development ${BUILD} && mono UnrealBuildTool.exe BuildingEscape Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -game -progress)
add_custom_target(BuildingEscape-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe BuildingEscape Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -clean)

include("/Users/tomas/projects/ue4/Section_03/BuildingEscape/Intermediate/ProjectFiles/BuildingEscapeEditor.cmake")

# Custom target for BuildingEscapeEditor project, Development configuration
add_custom_target(BuildingEscapeEditor-Development ${BUILD} && mono UnrealBuildTool.exe BuildingEscapeEditor Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -game -progress)
add_custom_target(BuildingEscapeEditor-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe BuildingEscapeEditor Mac Development -project="/Users/tomas/projects/ue4/Section_03/BuildingEscape/BuildingEscape.uproject" -clean)

add_executable(PleaseIgnoreMe ${BuildingEscapeEditor_FILES})