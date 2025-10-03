cmake_minimum_required(VERSION 3.19)
project(gateway-host-service LANGUAGES CXX)

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    add_definitions(-DAPP_ENV_DEV)
endif()

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(gateway-host-service
    main.cpp

    src/database/databasemanager.h
    src/database/databasemanager.cpp

    src/services/edge_gateway/edge_gateway.h
    src/services/edge_gateway/edge_gateway.cpp
)


target_link_libraries(gateway-host-service
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)
target_include_directories(gateway-host-service
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src
)

install(TARGETS gateway-host-service
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET gateway-host-service
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
