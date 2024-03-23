g++ --coverage main.cpp -o main
./main
lcov -t "my-pretty-report" -o report.info --rc lcov_branch_coverage=1 -c -d .  
genhtml --rc lcov_branch_coverage=1 -o report report.info
