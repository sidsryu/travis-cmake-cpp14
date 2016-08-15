set(test_src
    main.cpp
)

add_executable(build-test ${test_src})
install(TARGETS build-test DESTINATION bin)
