CFLAGS="-fprofile-arcs -ftest-coverage"
LDFLAGS=-lgcov
g++ --coverage main.cpp -o ProjectMain ${LDFLAGS} ${CFLAGS}
./ProjectMain > /dev/null
mkdir -p report
lcov -t "my-pretty-report" -o report/report.info --rc branch_coverage=1 -c -d .
genhtml --rc branch_coverage=1 -o report report/report.info
