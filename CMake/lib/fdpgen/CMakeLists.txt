add_library(${LIB_FDPGEN}
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/clusteredges.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/comp.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/dbg.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/fdpinit.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/grid.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/layout.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/tlayout.c
    ${GRAPHVIZ_SRC_DIR}/lib/fdpgen/xlayout.c
)

target_link_libraries(${LIB_FDPGEN}
    ${LIB_COMMON}
    ${LIB_GRAPH}
    ${LIB_NEATOGEN}
)
