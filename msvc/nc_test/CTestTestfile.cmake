# CMake generated Testfile for 
# Source directory: D:/Development/op3d_active/netcdf-c-4.3.3.1/nc_test
# Build directory: D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/nc_test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(nc_test_t_nc "/nc_test_t_nc")
SET_TESTS_PROPERTIES(nc_test_t_nc PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_small "/nc_test_tst_small")
SET_TESTS_PROPERTIES(nc_test_tst_small PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_misc "/nc_test_tst_misc")
SET_TESTS_PROPERTIES(nc_test_tst_misc PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_norm "/nc_test_tst_norm")
SET_TESTS_PROPERTIES(nc_test_tst_norm PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_names "/nc_test_tst_names")
SET_TESTS_PROPERTIES(nc_test_tst_names PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_nofill "/nc_test_tst_nofill")
SET_TESTS_PROPERTIES(nc_test_tst_nofill PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_nofill2 "/nc_test_tst_nofill2")
SET_TESTS_PROPERTIES(nc_test_tst_nofill2 PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_nofill3 "/nc_test_tst_nofill3")
SET_TESTS_PROPERTIES(nc_test_tst_nofill3 PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_meta "/nc_test_tst_meta")
SET_TESTS_PROPERTIES(nc_test_tst_meta PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test_tst_atts "/nc_test_tst_atts")
SET_TESTS_PROPERTIES(nc_test_tst_atts PROPERTIES  FOLDER "tests/")
ADD_TEST(nc_test "/nc_test")
ADD_TEST(nc_test_run_diskless "bash" "-c" "export srcdir=D:/Development/op3d_active/netcdf-c-4.3.3.1/nc_test;export TOPSRCDIR=D:/Development/op3d_active/netcdf-c-4.3.3.1;D:/Development/op3d_active/netcdf-c-4.3.3.1/msvc/nc_test/run_diskless.sh")
