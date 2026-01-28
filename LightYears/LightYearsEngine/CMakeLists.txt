
add_library(${LIGHT_YEARS_ENGINE_TARGET_NAME} STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/EntryPoint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Application.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/EntryPoint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Application.cpp
)
target_include_directories(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC sfml-graphics sfml-window sfml-system sfml-audio)

