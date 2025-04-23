add_executable(testmain test.cpp)
target_compile_features(testmain PRIVATE cxx_std_11)
target_link_libraries(testmain PRIVATE consumer producer gtest gtest_main)

gtest_discover_tests(testmain)