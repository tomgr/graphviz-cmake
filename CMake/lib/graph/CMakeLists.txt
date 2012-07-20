add_library(${LIB_GRAPH}
    ${GRAPHVIZ_SRC_DIR}/lib/graph/agxbuf.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/attribs.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/edge.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/graph.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/graphio.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/lexer.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/node.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/parser.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/refstr.c
    ${GRAPHVIZ_SRC_DIR}/lib/graph/trie.c
)

target_link_libraries(${LIB_GRAPH}
    ${LIB_CDT}
)
