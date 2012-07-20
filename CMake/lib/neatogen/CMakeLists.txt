add_library(${LIB_NEATOGEN}
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/adjust.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/bfs.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/call_tri.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/circuit.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/closest.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/compute_hierarchy.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/conjgrad.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/constrained_majorization.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/constrained_majorization_ipsep.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/constraint.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/delaunay.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/dijkstra.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/edges.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/embed_graph.c
    #${GRAPHVIZ_SRC_DIR}/lib/neatogen/find_ints.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/geometry.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/heap.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/hedges.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/info.c
    #${GRAPHVIZ_SRC_DIR}/lib/neatogen/intersect.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/kkutils.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/legal.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/lu.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/matinv.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/matrix_ops.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/memory.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/multispline.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/neatoinit.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/neatosplines.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/opt_arrangement.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/overlap.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/pca.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/poly.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/printvis.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/quad_prog_solve.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/site.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/smart_ini_x.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/solve.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/stress.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/stuff.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/voronoi.c
    ${GRAPHVIZ_SRC_DIR}/lib/neatogen/quad_prog_vpsc.c
)

target_link_libraries(${LIB_NEATOGEN}
    ${LIB_COMMON}
    ${LIB_PATHPLAN}
    ${LIB_PACK}
    ${LIB_VPSC}
    ${LIB_SPARSE}
    ${LIB_ORTHO}
#    ${LIB_FDPGEN}
 #   ${LIB_OSAGE}
  #  ${LIB_TWOPI}
   # ${LIB_TWOPI}
    #${LIB_SFDPGEN}
)
