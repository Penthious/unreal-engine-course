cmake_minimum_required(VERSION 3.8)
project(BuildingEscape)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Intermediate/Build/Mac/UE4Editor/Development/BuildingEscape/Definitions.BuildingEscape.h
        Intermediate/Build/Mac/UE4Editor/Inc/BuildingEscape/BuildingEscape.init.gen.cpp
        Intermediate/Build/Mac/UE4Editor/Inc/BuildingEscape/BuildingEscapeClasses.h
        Intermediate/Build/Mac/UE4Editor/Inc/BuildingEscape/BuildingEscapeGameModeBase.gen.cpp
        Intermediate/Build/Mac/UE4Editor/Inc/BuildingEscape/BuildingEscapeGameModeBase.generated.h
        Source/BuildingEscape/BuildingEscape.cpp
        Source/BuildingEscape/BuildingEscape.h
        Source/BuildingEscape/BuildingEscapeGameModeBase.cpp
        Source/BuildingEscape/BuildingEscapeGameModeBase.h)

add_executable(BuildingEscape ${SOURCE_FILES})