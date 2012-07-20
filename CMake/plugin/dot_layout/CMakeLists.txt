add_library(${LIB_PLUGIN_DOT_LAYOUT}
    ${GRAPHVIZ_SRC_DIR}/plugin/dot_layout/gvlayout_dot_layout.c
    ${GRAPHVIZ_SRC_DIR}/plugin/dot_layout/gvplugin_dot_layout.c
)

target_link_libraries (${LIB_PLUGIN_DOT_LAYOUT}
    ${LIB_DOTGEN}
)
