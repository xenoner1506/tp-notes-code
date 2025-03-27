CFLAGS=-fprofile-arcs -ftest-coverage
LDFLAGS=-lgcov
REPORT_NAME="my-pretty-report"

all: ProjectMain

ProjectMain: main.cpp
	g++ --coverage main.cpp -o ProjectMain ${LDFLAGS} ${CFLAGS} 

profile-files/ProjectMain-main.gcda: ProjectMain
	./ProjectMain > /dev/null

docs: profile-files/ProjectMain-main.gcda
	mkdir -p report
	lcov -t ${REPORT_NAME} -o report/report.info --rc branch_coverage=1 -c -d .
	genhtml --rc branch_coverage=1 -o report report/report.info

clean:
	rm -r ProjectMain report *.gcda *.gcno
