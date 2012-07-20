add_library(${LIB_PLUGIN_CORE}
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvloadimage_core.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvplugin_core.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_dot.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_fig.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_map.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_ps.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_svg.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_tk.c
    ${GRAPHVIZ_SRC_DIR}/plugin/core/gvrender_core_vml.c
)

target_link_libraries(${LIB_PLUGIN_CORE}
    ${LIB_COMMON}
    ${LIB_GRAPH}
    ${LIB_XDOT}
)
