# CMake generated Testfile for 
# Source directory: D:/Development/op3d_active/netcdf-c-4.3.3.1/examples/CDL
# Build directory: D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/examples/CDL
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(cdl_create_sample_files "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/examples/CDL;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/examples/CDL/create_sample_files.sh")
ADD_TEST(cdl_do_comps "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/examples/CDL;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/examples/CDL/do_comps.sh")
