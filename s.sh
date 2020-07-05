#!/bin/bash

i=1

# You can change the version of C++ or add the compiler flags you wish 
g++ -std=c++17 gen.cpp -o generator
g++ -std=c++17 solution.cpp -o original
g++ -std=c++17 brute.cpp -o brute

max_tests=10 # change it accordingly
diff_found=0

# to color the output text in different colours
green=$(tput setaf 71);
red=$(tput setaf 1);
blue=$(tput setaf 32);
orange=$(tput setaf 178);
bold=$(tput bold);
reset=$(tput sgr0);

while [ $i -le $max_tests ]
do
	# Generate test_case and save it in input1.txt
	./generator > input1.txt

	# run original solution, take input from above generated test case i.e. from input1.txt
	# and save it in original_output.txt
	./original < input1.txt > original_output.txt

	# run brute force solution, take input from above generated test case i.e. from input1.txt
	# and save it in brute_output.txt
	./brute < input1.txt > brute_output.txt

	# check if files original_output and brute_output
	# differs(we are ignoring spaces and then comparing files)
        if diff --tabsize=1 -F --label --side-by-side --ignore-space-change original_output.txt brute_output.txt > dont_show_on_terminal.txt; 
        then
	        echo "<p>Unable to parse markup [type=CF_MATHJAX]</p>{bold}$$${green}Accepted$$${reset}"
	else
		echo "<p>Unable to parse markup [type=CF_MATHJAX]</p>{bold}$$${red}Wrong Answer$$${reset}"
		diff_found=1
		break
	fi
	i=$((i+1))
done

if [ $diff_found -eq 1 ]
then
	echo "$$${blue}Input: $$${reset}"
	cat input1.txt
	echo ""

	echo "$$${blue}Output: $$${reset}"
	cat original_output.txt
	echo ""
	echo ""

	echo "$$${blue}Expected: $$${reset}"
	cat brute_output.txt
	echo ""
fi

rm input1.txt
rm generator
rm original
rm brute
rm original_output.txt
rm brute_output.txt
rm dont_show_on_terminal.txt
