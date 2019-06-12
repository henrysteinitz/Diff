# TODO(henrysteinitz): describe this package.

cc_library(
    name = "graph",
    srcs = ["graph.cc"],
    hdrs = ["graph.h"],
    deps = [
        ":node",
        "//third_party/absl/container:flat_hash_map",
    ],
)

cc_library(
    name = "op_node",
    srcs = ["op_node.cc"],
    hdrs = ["op_node.h"],
)

cc_library(
    name = "node",
    srcs = ["node.cc"],
    hdrs = ["node.h"],
    deps = [":graph"],
)

cc_library(
    name = "tensor_node",
    srcs = ["tensor_node.cc"],
    hdrs = ["tensor_node.h"],
)

cc_library(
    name = "tensor_op_graph",
    srcs = ["tensor_op_graph.cc"],
    hdrs = ["tensor_op_graph.h"],
)
