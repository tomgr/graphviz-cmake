add_library(${LIB_PATCHWORK}
    ${GRAPHVIZ_SRC_DIR}/lib/patchwork/patchwork.c
    ${GRAPHVIZ_SRC_DIR}/lib/patchwork/tree_map.c
    ${GRAPHVIZ_SRC_DIR}/lib/patchwork/patchworkinit.c
)

target_link_libraries (${LIB_PATCHWORK}
    ${LIB_COMMON}
    ${LIB_XDOT}
)
