add_library(${LIB_SPARSE}
    ${GRAPHVIZ_SRC_DIR}/lib/sparse/general.c
    ${GRAPHVIZ_SRC_DIR}/lib/sparse/BinaryHeap.c
    ${GRAPHVIZ_SRC_DIR}/lib/sparse/IntStack.c
    ${GRAPHVIZ_SRC_DIR}/lib/sparse/SparseMatrix.c
)

target_link_libraries(${LIB_SPARSE}
    ${LIB_COMMON}
)
