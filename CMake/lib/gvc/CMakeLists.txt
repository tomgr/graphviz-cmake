# We build this library as static since this depends on libcommon, which
# depends on us (i.e. there is a cyclic dependency).

add_library(${LIB_GVC} STATIC
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvc.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvconfig.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvcontext.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvdevice.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvevent.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvjobs.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvlayout.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvloadimage.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvplugin.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvrender.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvtextlayout.c
    ${GRAPHVIZ_SRC_DIR}/lib/gvc/gvusershape.c
    #${GRAPHVIZ_SRC_DIR}/lib/gvc/no_demand_loading.c
)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux" AND CMAKE_COMPILER_IS_GNUCC)
    set_target_properties(${LIB_GVC} PROPERTIES COMPILE_FLAGS -fPIC)
endif()

target_link_libraries(${LIB_GVC}
    ${LIB_CDT}
    ${LIB_GRAPH}
)
