# A CMake build file for GraphViz. This has been heavily based on the work of
# Gordon Smith at
# https://github.com/hpcc-systems/GraphControl/tree/master/libs/graphlayout.

cmake_minimum_required (VERSION 2.8)

project(GraphViz)

set(GRAPHVIZ_CMAKE_DIR "${CMAKE_SOURCE_DIR}/CMake")
set(GRAPHVIZ_SRC_DIR "${CMAKE_SOURCE_DIR}")
set(LIB_GRAPHVIZ "graphviz")
set(GRAPHVIZ_LIB_PREFIX "graphviz_lib_")
set(GRAPHVIZ_PLUGIN_PREFIX "graphviz_plugin_")

set(LIB_CDT ${GRAPHVIZ_LIB_PREFIX}cdt)
set(LIB_CIRCOGEN ${GRAPHVIZ_LIB_PREFIX}circogen)
set(LIB_COMMON ${GRAPHVIZ_LIB_PREFIX}common)
set(LIB_DOTGEN ${GRAPHVIZ_LIB_PREFIX}dotgen)
set(LIB_FDPGEN ${GRAPHVIZ_LIB_PREFIX}fdpgen)
set(LIB_GRAPH ${GRAPHVIZ_LIB_PREFIX}graph)
set(LIB_GVC ${GRAPHVIZ_LIB_PREFIX}gvc)
set(LIB_NEATOGEN ${GRAPHVIZ_LIB_PREFIX}neatogen)
set(LIB_ORTHO ${GRAPHVIZ_LIB_PREFIX}ortho)
set(LIB_OSAGE ${GRAPHVIZ_LIB_PREFIX}osage)
set(LIB_PACK ${GRAPHVIZ_LIB_PREFIX}pack)
set(LIB_PATCHWORK ${GRAPHVIZ_LIB_PREFIX}patchwork)
set(LIB_PATHPLAN ${GRAPHVIZ_LIB_PREFIX}pathplan)
set(LIB_SFDPGEN ${GRAPHVIZ_LIB_PREFIX}sfdpgen)
set(LIB_SPARSE ${GRAPHVIZ_LIB_PREFIX}sparse)
set(LIB_TWOPIGEN ${GRAPHVIZ_LIB_PREFIX}twopigen)
set(LIB_XDOT ${GRAPHVIZ_LIB_PREFIX}xdot)
set(LIB_VPSC ${GRAPHVIZ_LIB_PREFIX}vpsc)

set(LIB_PLUGIN_CORE ${GRAPHVIZ_PLUGIN_PREFIX}core)
set(LIB_PLUGIN_DOT_LAYOUT ${GRAPHVIZ_PLUGIN_PREFIX}dot_layout)
set(LIB_PLUGIN_NEATO_LAYOUT ${GRAPHVIZ_PLUGIN_PREFIX}neato_layout)

include_directories (
    ${GRAPHVIZ_SRC_DIR}/lib/graph
    ${GRAPHVIZ_SRC_DIR}/lib/pathplan
    ${GRAPHVIZ_SRC_DIR}/lib/common
    ${GRAPHVIZ_SRC_DIR}/lib/gvc
    ${GRAPHVIZ_SRC_DIR}/lib/dotgen
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen
    ${GRAPHVIZ_SRC_DIR}/lib/sfdpgen
    ${GRAPHVIZ_SRC_DIR}/lib/cdt
    ${GRAPHVIZ_SRC_DIR}/lib/twopigen
    ${GRAPHVIZ_SRC_DIR}/lib/circogen
    ${GRAPHVIZ_SRC_DIR}/lib/patchwork
    ${GRAPHVIZ_SRC_DIR}/lib/sfdpgen
    ${GRAPHVIZ_SRC_DIR}/lib/sparse
    ${GRAPHVIZ_SRC_DIR}/lib/xdot
    ${GRAPHVIZ_SRC_DIR}/lib/gd
    ${GRAPHVIZ_SRC_DIR}/lib/ortho
    ${GRAPHVIZ_SRC_DIR}/lib/vpsc
    ${GRAPHVIZ_SRC_DIR}/lib/pack
    ${GRAPHVIZ_SRC_DIR}
)

add_definitions(-DHAVE_CONFIG_H -DHAVE_SETMODE)

add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/cdt)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/circogen)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/common)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/dotgen)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/fdpgen)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/graph)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/gvc)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/neatogen)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/osage)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/ortho)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/pack)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/patchwork)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/pathplan)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/sfdpgen)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/sparse)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/twopigen)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/xdot)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/lib/vpsc)

add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/plugin/core)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/plugin/dot_layout)
add_subdirectory(${GRAPHVIZ_CMAKE_DIR}/plugin/neato_layout)

add_library(
    ${LIB_GRAPHVIZ}
    ${GRAPHVIZ_CMAKE_DIR}/graphviz-static.c
)

target_link_libraries(${LIB_GRAPHVIZ}
    ${LIB_PLUGIN_CORE}
    ${LIB_PLUGIN_DOT_LAYOUT}
    ${LIB_PLUGIN_NEATO_LAYOUT}
)
