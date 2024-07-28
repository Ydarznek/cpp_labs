cmake_minimum_required(VERSION 3.24)
project(final)

set(CMAKE_CXX_STANDARD 17)

add_executable(final main.cpp include/Person.h include/Student.h include/Teacher.h include/University.h include/AddressBook.h include/AddressBookInterface.h src/Student.cpp src/Teacher.cpp src/University.cpp src/AddressBook.cpp src/AddressBookInterface.cpp)
