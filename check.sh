#!/bin/bash
# Exit the script if any commands return with non-zero code
set -e
# DO NOT MODIFY ANY OF THE LINES ABOVE

# TODO: Fill in this file with commands to compile, execute, and check output

gcc -Wall -Werror -std=c99 -o ./bin/ex2q1 ./src/ex2q1.c
gcc -Wall -Werror -std=c99 -o ./bin/ex2q2 ./src/ex2q2.c -lm

echo "ex2q1 start"
	./bin/ex2q1 < ./Testcases/1-1-input.txt >| ./Testcases/1-1-student.txt
	diff -u ./Testcases/1-1-output.txt ./Testcases/1-1-student.txt
echo "ex2q1 tc1 passed"
	./bin/ex2q1 < ./Testcases/1-2-input.txt >| ./Testcases/1-2-student.txt
	diff -u ./Testcases/1-2-output.txt ./Testcases/1-2-student.txt
echo "ex2q1 tc2 passed"
	./bin/ex2q1 < ./Testcases/1-3-input.txt >| ./Testcases/1-3-student.txt
	diff -u ./Testcases/1-3-output.txt ./Testcases/1-3-student.txt
echo "ex2q1 tc3 passed"
	./bin/ex2q1 < ./Testcases/1-4-input.txt >| ./Testcases/1-4-student.txt
	diff -u ./Testcases/1-4-output.txt ./Testcases/1-4-student.txt
echo "ex2q1 tc4 passed"

echo "q2 start"
	./bin/ex2q2 < ./Testcases/2-1-input.txt >| ./Testcases/2-1-student.txt
	diff -u ./Testcases/2-1-output.txt ./Testcases/2-1-student.txt
echo "ex2q2 tc1 passed"	
	./bin/ex2q2 < ./Testcases/2-2-input.txt >| ./Testcases/2-2-student.txt
	diff -u ./Testcases/2-2-output.txt ./Testcases/2-2-student.txt
echo "ex2q2 tc2 passed"	
	./bin/ex2q2 < ./Testcases/2-3-input.txt >| ./Testcases/2-3-student.txt
	diff -u ./Testcases/2-3-output.txt ./Testcases/2-3-student.txt
echo "ex2q2 tc3 passed"	
	./bin/ex2q2 < ./Testcases/2-4-input.txt >| ./Testcases/2-4-student.txt
	diff -u ./Testcases/2-4-output.txt ./Testcases/2-4-student.txt
echo "ex2q2 tc4 passed"

echo "All testcases passed" 


