# CMake generated Testfile for 
# Source directory: D:/Development/op3d_active/netcdf-c-4.3.3.1/ncdap_test
# Build directory: D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/ncdap_test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(ncdap_tst_ncdap3 "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/ncdap_test;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/ncdap_test/tst_ncdap3.sh")
ADD_TEST(ncdap_tst_remote3 "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/ncdap_test;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/ncdap_test/tst_remote3.sh")
ADD_TEST(ncdap_tst_formatx "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/ncdap_test;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/ncdap_test/tst_formatx.sh")
ADD_TEST(ncdap_test_partvar "/ncdap_test_partvar")
SET_TESTS_PROPERTIES(ncdap_test_partvar PROPERTIES  FOLDER "tests/")
ADD_TEST(ncdap_testurl "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/ncdap_test;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/ncdap_test/testurl.sh")
ADD_TEST(ncdap_test_nstride_cached "/ncdap_test_nstride_cached")
SET_TESTS_PROPERTIES(ncdap_test_nstride_cached PROPERTIES  FOLDER "tests/")
ADD_TEST(ncdap_t_misc "/ncdap_t_misc")
SET_TESTS_PROPERTIES(ncdap_t_misc PROPERTIES  FOLDER "tests/")
ADD_TEST(ncdap_test_varm3 "/ncdap_test_varm3")
SET_TESTS_PROPERTIES(ncdap_test_varm3 PROPERTIES  FOLDER "tests/")
SUBDIRS(testdata3)
SUBDIRS(expected3)
SUBDIRS(expected4)
SUBDIRS(expectremote3)
SUBDIRS(expectremote4)
