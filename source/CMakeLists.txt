add_library(consumer consumer.cpp)
target_include_directories(consumer PUBLIC ../include)
target_compile_features(consumer PUBLIC cxx_std_11)

add_library(provider provider.cpp)
target_include_directories(provider PUBLIC ../include)
target_compile_features(provider PUBLIC cxx_std_11)