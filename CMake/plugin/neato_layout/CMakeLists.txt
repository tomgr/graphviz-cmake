add_library(${LIB_PLUGIN_NEATO_LAYOUT}
    ${GRAPHVIZ_SRC_DIR}/plugin/neato_layout/gvlayout_neato_layout.c
    ${GRAPHVIZ_SRC_DIR}/plugin/neato_layout/gvplugin_neato_layout.c
)

target_link_libraries(${LIB_PLUGIN_NEATO_LAYOUT}
    ${LIB_NEATOGEN}
    ${LIB_PATCHWORK}
    ${LIB_TWOPIGEN}
    ${LIB_OSAGE}
    ${LIB_FDPGEN}
)
