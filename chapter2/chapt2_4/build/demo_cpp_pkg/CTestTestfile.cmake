# CMake generated Testfile for 
# Source directory: /home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg
# Build directory: /home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/home/qing/下载/enter/envs/ros_test/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/cppcheck.xunit.xml" "--package-name" "demo_cpp_pkg" "--output-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/cppcheck.xunit.xml" "--include_dirs" "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;43;ament_package;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;0;")
add_test(flake8 "/home/qing/下载/enter/envs/ros_test/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/flake8.xunit.xml" "--package-name" "demo_cpp_pkg" "--output-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/ament_flake8/flake8.txt" "--command" "/opt/ros/humble/bin/ament_flake8" "--xunit-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_flake8.cmake;63;ament_add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;43;ament_package;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;0;")
add_test(lint_cmake "/home/qing/下载/enter/envs/ros_test/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/lint_cmake.xunit.xml" "--package-name" "demo_cpp_pkg" "--output-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;43;ament_package;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;0;")
add_test(pep257 "/home/qing/下载/enter/envs/ros_test/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/pep257.xunit.xml" "--package-name" "demo_cpp_pkg" "--output-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/ament_pep257/pep257.txt" "--command" "/opt/ros/humble/bin/ament_pep257" "--xunit-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;43;ament_package;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;0;")
add_test(uncrustify "/home/qing/下载/enter/envs/ros_test/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/uncrustify.xunit.xml" "--package-name" "demo_cpp_pkg" "--output-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;43;ament_package;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;0;")
add_test(xmllint "/home/qing/下载/enter/envs/ros_test/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/xmllint.xunit.xml" "--package-name" "demo_cpp_pkg" "--output-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/qing/ros2_humble/chapter2/chapt2_4/build/demo_cpp_pkg/test_results/demo_cpp_pkg/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;43;ament_package;/home/qing/ros2_humble/chapter2/chapt2_4/src/demo_cpp_pkg/CMakeLists.txt;0;")
