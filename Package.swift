// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterVerilog",
    products: [
        .library(name: "TreeSitterVerilog", targets: ["TreeSitterVerilog"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterVerilog",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterVerilogTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterVerilog",
            ],
            path: "bindings/swift/TreeSitterVerilogTests"
        )
    ],
    cLanguageStandard: .c11
)
