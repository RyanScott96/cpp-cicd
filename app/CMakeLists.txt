add_executable(main main.cpp)
target_link_libraries(main PRIVATE consumer producer)
target_compile_features(main PRIVATE cxx_std_11)