cmake_minimum_required (VERSION 3.0 FATAL_ERROR)

project (SGCTConfig)

# Remove MinSizeRel build option
set(CMAKE_CONFIGURATION_TYPES Debug Release RelWithDebInfo CACHE TYPE INTERNAL FORCE)
mark_as_advanced(CMAKE_CONFIGURATION_TYPES)
mark_as_advanced(CMAKE_INSTALL_PREFIX)

set_property(GLOBAL PROPERTY USE_FOLDERS On)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER CMake)

# Qt
# Unfortunately, we have to set this value manually; sigh
# In the future, if the Qt version is updated, just add to this variable ---abock
if (APPLE)
    set(CMAKE_PREFIX_PATH "~/Qt/5.5/clang_64/lib/cmake")
endif ()

set(SOURCE_FILES 
    main.cpp
    src/sgctconfig.cpp
    src/capture/capturewidget.cpp
    src/node/fisheyewidget.cpp
    src/node/nodewidget.cpp
    src/node/planeprojectionwidget.cpp
    src/node/viewplanewidget.cpp
    src/node/windowwidget.cpp
    src/scene/scenewidget.cpp
    src/settings/osdtextwidget.cpp
    src/settings/settingswidget.cpp
    src/tracker/axeswidget.cpp
    src/tracker/buttonswidget.cpp
    src/tracker/devicewidget.cpp
    src/tracker/sensorwidget.cpp
    src/tracker/trackerwidget.cpp
    src/user/individualuserwidget.cpp
    src/user/userwidget.cpp
)

set(HEADER_FILES
    src/sgctconfig.h
    src/capture/capturewidget.h
    src/node/fisheyewidget.h
    src/node/nodewidget.h
    src/node/planeprojectionwidget.h
    src/node/viewplanewidget.h
    src/node/windowwidget.h
    src/scene/scenewidget.h
    src/settings/osdtextwidget.h
    src/settings/settingswidget.h
    src/tracker/axeswidget.h
    src/tracker/buttonswidget.h
    src/tracker/devicewidget.h
    src/tracker/sensorwidget.h
    src/tracker/trackerwidget.h
    src/user/individualuserwidget.h
    src/user/userwidget.h
)

find_package(Qt5Widgets)
qt5_wrap_cpp(MOC_FILES ${HEADER_FILES})
# qt5_add_resources(RESOURCE_FILES ${application_path}/files.qrc)

add_executable(
    SGCTConfig MACOSX_BUNDLE
    ${SOURCE_FILES}
    ${HEADER_FILES}
    ${MOC_FILES}
)

set_property(TARGET SGCTConfig PROPERTY CXX_STANDARD 11)
set_property(TARGET SGCTConfig PROPERTY CXX_STANDARD_REQUIRED On)


target_include_directories(SGCTConfig PUBLIC src)


target_link_libraries(SGCTConfig
    Qt5::Widgets
)

# set_property(TARGET SGCTConfig PROPERTY CXX_STANDARD 11)
# set_property(TARGET SGCTConfig PROPERTY CXX_STANDARD_REQUIRED On)
