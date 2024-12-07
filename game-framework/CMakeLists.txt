add_library(game-framework STATIC)

target_include_directories(game-framework PUBLIC include)

target_sources(game-framework PRIVATE
    source/component.cpp
    source/entity.cpp
    source/scene.cpp
    source/transform-component.cpp
    source/graphics-component.cpp
    source/game-manager.cpp
)