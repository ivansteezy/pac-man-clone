add_library(invisible-ghost)

target_include_directories(invisible-ghost PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_sources(invisible-ghost PRIVATE
    invisible-ghost.cpp
)

target_link_libraries(invisible-ghost PUBLIC game-framework pac-man)