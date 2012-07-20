include_directories(
    # We need to add these includes before the existing ones, as neatogen
    # also include fPQ.h (but an incompatible version).
    BEFORE
    ${GRAPHVIZ_SRC_DIR}/lib/ortho
    ${GRAPHVIZ_SRC_DIR}
)

add_library(${LIB_ORTHO}
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/fPQ.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/fPQ.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/intset.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/intset.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/maze.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/maze.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/ortho.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/ortho.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/partition.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/partition.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/rawgraph.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/rawgraph.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/sgraph.c
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/sgraph.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/structures.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/trap.h
    ${GRAPHVIZ_SRC_DIR}/lib/ortho/trapezoid.c
)

target_link_libraries(${LIB_ORTHO}
    ${LIB_COMMON})
