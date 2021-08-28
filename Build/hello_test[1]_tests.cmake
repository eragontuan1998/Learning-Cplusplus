add_test( HelloTest.BasicAssertions D:/Learning-Cplusplus/Build/hello_test.exe [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY D:/Learning-Cplusplus/Build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS HelloTest.BasicAssertions)
