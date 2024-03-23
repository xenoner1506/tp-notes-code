CFLAGS=-fprofile-arcs -ftest-coverage
LDFLAGS=-lgcov
REPORT_NAME="my-pretty-report"

all: ProjectMain

ProjectMain: main.cpp
	g++ --coverage main.cpp -o ProjectMain ${LDFLAGS} ${CFLAGS} 

run: ProjectMain
	./ProjectMain > /dev/null

docs:
	lcov -t "my-pretty-report" -o report.info --rc lcov_branch_coverage=1 -c -d .  
	genhtml --rc lcov_branch_coverage=1 -o report report.info

clear:
	rm -r ProjectMain report main.gcda main.gcno report.info
