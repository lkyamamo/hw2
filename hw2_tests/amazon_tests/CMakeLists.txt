
add_makefile_problem(
    NAME amazon
    EXECUTABLE_NAME amazon
    TEST_SOURCE
        amazon_tests.cpp
        amazon_stress_tests.cpp
        ConsoleParser.cpp
        DatabaseParser.cpp
        Utility.cpp
        amazon_checker.cpp)