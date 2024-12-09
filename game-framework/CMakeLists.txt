add_library(game-framework STATIC)

target_include_directories(game-framework PUBLIC include ${SFML_INCLUDE_DIR})

target_link_libraries(game-framework PUBLIC sfml-system sfml-network sfml-graphics sfml-window sfml-audio)

target_sources(game-framework PRIVATE
    source/component.cpp
    source/entity.cpp
    source/scene.cpp
    source/transform-component.cpp
    source/graphics-component.cpp
    source/game-manager.cpp
)