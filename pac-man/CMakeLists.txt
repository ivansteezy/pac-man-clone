add_executable(pac-man-app app/main.cpp)

target_link_libraries(pac-man-app PRIVATE game-framework)

target_compile_definitions(pac-man-app PRIVATE RESOURCE_PATH="${CMAKE_BINARY_DIR}/resources/")