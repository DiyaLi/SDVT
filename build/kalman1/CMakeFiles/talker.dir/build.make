# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diya/sdvt2017/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diya/sdvt2017/build

# Include any dependencies generated for this target.
include kalman1/CMakeFiles/talker.dir/depend.make

# Include the progress variables for this target.
include kalman1/CMakeFiles/talker.dir/progress.make

# Include the compile flags for this target's objects.
include kalman1/CMakeFiles/talker.dir/flags.make

kalman1/CMakeFiles/talker.dir/src/talker.cpp.o: kalman1/CMakeFiles/talker.dir/flags.make
kalman1/CMakeFiles/talker.dir/src/talker.cpp.o: /home/diya/sdvt2017/src/kalman1/src/talker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/diya/sdvt2017/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object kalman1/CMakeFiles/talker.dir/src/talker.cpp.o"
	cd /home/diya/sdvt2017/build/kalman1 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/talker.dir/src/talker.cpp.o -c /home/diya/sdvt2017/src/kalman1/src/talker.cpp

kalman1/CMakeFiles/talker.dir/src/talker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/talker.dir/src/talker.cpp.i"
	cd /home/diya/sdvt2017/build/kalman1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/diya/sdvt2017/src/kalman1/src/talker.cpp > CMakeFiles/talker.dir/src/talker.cpp.i

kalman1/CMakeFiles/talker.dir/src/talker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/talker.dir/src/talker.cpp.s"
	cd /home/diya/sdvt2017/build/kalman1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/diya/sdvt2017/src/kalman1/src/talker.cpp -o CMakeFiles/talker.dir/src/talker.cpp.s

kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.requires:
.PHONY : kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.requires

kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.provides: kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.requires
	$(MAKE) -f kalman1/CMakeFiles/talker.dir/build.make kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.provides.build
.PHONY : kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.provides

kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.provides.build: kalman1/CMakeFiles/talker.dir/src/talker.cpp.o

# Object files for target talker
talker_OBJECTS = \
"CMakeFiles/talker.dir/src/talker.cpp.o"

# External object files for target talker
talker_EXTERNAL_OBJECTS =

/home/diya/sdvt2017/devel/lib/kalman1/talker: kalman1/CMakeFiles/talker.dir/src/talker.cpp.o
/home/diya/sdvt2017/devel/lib/kalman1/talker: kalman1/CMakeFiles/talker.dir/build.make
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/libroscpp.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/librosconsole.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/liblog4cxx.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/librostime.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /opt/ros/indigo/lib/libcpp_common.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/diya/sdvt2017/devel/lib/kalman1/talker: kalman1/CMakeFiles/talker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/diya/sdvt2017/devel/lib/kalman1/talker"
	cd /home/diya/sdvt2017/build/kalman1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/talker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
kalman1/CMakeFiles/talker.dir/build: /home/diya/sdvt2017/devel/lib/kalman1/talker
.PHONY : kalman1/CMakeFiles/talker.dir/build

kalman1/CMakeFiles/talker.dir/requires: kalman1/CMakeFiles/talker.dir/src/talker.cpp.o.requires
.PHONY : kalman1/CMakeFiles/talker.dir/requires

kalman1/CMakeFiles/talker.dir/clean:
	cd /home/diya/sdvt2017/build/kalman1 && $(CMAKE_COMMAND) -P CMakeFiles/talker.dir/cmake_clean.cmake
.PHONY : kalman1/CMakeFiles/talker.dir/clean

kalman1/CMakeFiles/talker.dir/depend:
	cd /home/diya/sdvt2017/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diya/sdvt2017/src /home/diya/sdvt2017/src/kalman1 /home/diya/sdvt2017/build /home/diya/sdvt2017/build/kalman1 /home/diya/sdvt2017/build/kalman1/CMakeFiles/talker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : kalman1/CMakeFiles/talker.dir/depend

