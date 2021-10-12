// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "projections-ios",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "projections-ios",
            targets: ["projections-ios"]),
    ],
    dependencies: [
        .package(
            name: "coordinate-reference-systems-ios",
            url: "git@github.com:peroper/coordinate-reference-systems-ios.git",
            branch: "spm-support"
        )
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "projections-ios",
            path: "XCFrameworks/proj_ios.xcframework"
        )
    ]
)
