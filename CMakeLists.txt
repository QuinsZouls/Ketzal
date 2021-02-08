# cmake_minimum_required(VERSION <specify CMake version here>)
project(Ketzalcoin)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ketzalcoin src/main.cpp src/components/block.h src/components/blockchain.h src/crypto/sha256.h src/crypto/sha256.cpp src/components/block.cpp src/components/blockchain.cpp)