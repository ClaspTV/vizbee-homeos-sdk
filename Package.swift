// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "VizbeeHomeOSKit",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "VizbeeHomeOSKit",
            targets: ["VizbeeHomeOSKit"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "VizbeeHomeOSKit",
            path: "VizbeeHomeOSKit.xcframework"
        ),
    ]
)
