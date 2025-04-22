find_package(GTest REQUIRED)

add_executable(testmain test.cpp)
target_compile_features(testmain PRIVATE cxx_std_11)
target_link_libraries(testmain PRIVATE consumer provider GTest::GTest GTest::gtest_main)

gtest_discover_tests(testmain)