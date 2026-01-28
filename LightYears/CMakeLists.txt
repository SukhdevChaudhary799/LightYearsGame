cmake_minimum_required(VERSION 3.22.1)

project(LightYears
    VERSION 1.0.0
    LANGUAGES C CXX 
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


include(FetchContent)
set(SFML_LIB_NAME SFML)

FetchContent_Declare(
    ${SFML_LIB_NAME}
    GIT_REPOSITORY https://github.com/SFML/SFML
    GIT_TAG 3.0.2
    GIT_SHALLOW False
)
    
FetchContent_MakeAvailable(${SFML_LIB_NAME})
    
# Define target name variable
set(LIGHT_YEARS_ENGINE_TARGET_NAME LightYearsGame)
set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsEngine)

add_subdirectory(LightYearsEngine)
add_subdirectory(LightYearsGame)


