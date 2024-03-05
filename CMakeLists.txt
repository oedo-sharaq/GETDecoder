cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(GETDecoder)

list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})

# Locate ROOT libraries
find_package(ROOT REQUIRED COMPONENTS RIO Net)

# Locate the yaml-cpp package
# If find_package(yaml-cpp) faild, it tries pkg_check_modules()
find_package(yaml-cpp)
if(yaml-cpp_FOUND)
    set(yaml_cpp_INCLUDEDIR ${YAML_CPP_INCLUDE_DIR})
    set(yaml_cpp_LIBRARIES ${YAML_CPP_LIBRARIES})
    set(yaml_cpp_LIBDIR ${YAML_CPP_LIBRARY_DIR})
else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(yaml_cpp REQUIRED yaml-cpp)
endif()

include(${ROOT_USE_FILE})

set(GET_SRCS
    src/GETBasicFrame.cc
    src/GETBasicFrameHeader.cc
    src/GETCoboFrame.cc
    src/GETDecoder.cc
    src/GETFileChecker.cc
    src/GETFrameInfo.cc
    src/GETHeaderBase.cc
    src/GETLayeredFrame.cc
    src/GETMutantFrame.cc
    src/GETTopologyFrame.cc
    #src_getevt/IEventStore.cc
    #src_getevt/TAttParameter.cc
    #src_getevt/TEventHeader.cc
    src_getevt/TGetEventStore.cc
    #src_getevt/TLoop.cc
    #src_getevt/TProcessor.cc
    #src_getevt/TRawDataFadc.cc
    #src_getevt/TRawDataObject.cc
)

set(GET_HEADERS
#    TTimeStamp.h
#    TSegmentInfo.h
#    TSegmentedData.h
#    TRunInfo.h
#    TRawDataObject.h
#    TRawDataFadc.h
#    TProcessorParameter.h
#    TProcessor.h
#    TParameterStrings.h
#    TParameterObject.h
#    TEventObject.h
#    TEventHeader.h
#    TEventCollection.h
#    TConditionBit.h
#    TAttParameter.h
#    TArtTypes.h
#    TAnalysisInfo.h
#    IProcessorHelper.h
#    IEventStore.h
#    TLoop.h
    TGetEventStore.h
    GETTopologyFrame.hh
    GETMutantFrame.hh
    GETMath.hh
    GETLayerHeader.hh
    GETLayeredFrame.hh
    GETHeaderBase.hh
    GETFrameInfo.hh
    GETFileChecker.hh
    GETDecoder.hh
    GETCoboFrame.hh
    GETBasicFrame.hh
    GETBasicFrameHeader.hh
)
add_library(GETDecoder SHARED ${GET_SRCS})

#target_include_directories(GETDecoder
#    PUBLIC
#        $<INSTALL_INTERFACE:include>
#        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#)

target_include_directories(GETDecoder PRIVATE ${yaml_cpp_INCLUDEDIR} include)
target_link_libraries(GETDecoder ${YAML_CPP_LIBRARIES})

ROOT_GENERATE_DICTIONARY(artget 
    ${GET_HEADERS}
    LINKDEF include/artget_linkdef.h    
    MODULE GETDecoder
)

#set_target_properties(
#    GETDecoder
#    PROPERTIES
#        PUBLIC_HEADER "include/${GET_HEADERS}"
#)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libGETDecoder_rdict.pcm DESTINATION lib)
install(TARGETS GETDecoder
    INCLUDES DESTINATION include
    LIBRARY DESTINATION lib
    #PUBLIC_HEADER DESTINATION include
)