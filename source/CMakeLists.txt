add_library(consumer consumer.cpp)
target_include_directories(consumer PUBLIC ../include)
target_compile_features(consumer PUBLIC cxx_std_11)

add_library(producer producer.cpp)
target_include_directories(producer PUBLIC ../include)
target_compile_features(producer PUBLIC cxx_std_11)