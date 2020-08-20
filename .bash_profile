#!/bin/bash
# Kings Custom Shell Commands
#I know bash should have two space tabs but I dont care

#ALIAS##############################################################################

#El Classico
alias Hello='echo World!'

#Convience for directory changing
alias ..='cd ..'
alias ...='cd ..; cd ..'
alias ....='cd ..; cd ..; cd ..'
alias home='cd ~'
alias root='cd /'
alias doc='cd ~/Documents'
alias update='svn update'

#FUNCTIONS###########################################################################

function .cpp(){
	touch main.cpp

}

function .h(){
	touch $1.h
	printf "#include <iostream>\n#include <string>\n#include <stdlib.h>\n#include <vector>\n#include <algorithm>\nusing namespace std;\n\nclass %s {\nprivate:\n\t//Variables and Methods Here!\npublic:\n\t//Or Variables and Methods Here!\n\tint METHOD(int VARIABLE) {\n\t\tint answer = 0;\n\t\t// CODE HERE\n\n\t\treturn answer;\n\t}\n};" "$1">> $1.h
	echo "File Named $1.h has been created in the current directory"
	echo "-Reminder to change the method name (currently METHOD) and method type (int) to whatever you require-"
}

function .hpp(){
	touch $1.hpp
	printf "#include <iostream>\n#include <string>\n#include <stdlib.h>\n#include <vector>\n#include <algorithm>\nusing namespace std;\n\nclass %s {\nprivate:\n\t//Variables and Methods Here!\npublic:\n\t//Or Variables and Methods Here!\n\tint METHOD(int VARIABLE) {\n\t\tint answer = 0;\n\t\t// CODE HERE\n\n\t\treturn answer;\n\t}\n};" "$1">> $1.hpp
	echo "File Named $1.hpp has been created in the current directory"
	echo "-Reminder to change the method name (currently METHOD) and method type (int) to whatever you require-"
}

function commit(){
	fileparent=$(basename -- $PWD)
	svn commit -m "$fileparent Submission"
}

function s2(){
	files=(/home/kingmatthew/Documents/a1774281 /users/1/a1774281/Documents/SVN)
	for file in "${files[@]}"
	do
		if [ -d "$file" ]; then
			cd "${file}/2020/s2"
			echo "Changed to Semester 2 Directory"
		fi
	done
}

function pssd(){
	files=(/home/kingmatthew/Documents/a1774281 /users/1/a1774281/Documents/SVN)
	for file in "${files[@]}"
	do
		if [ -d "$file" ]; then
			cd "${file}/2020/s2/pssd"
			echo "Changed to Problem Solving and Software Development Directory"
		fi
	done
}

function cs(){
	files=(/home/kingmatthew/Documents/a1774281 /users/1/a1774281/Documents/SVN)
	for file in "${files[@]}"
	do
		if [ -d "$file" ]; then
			cd "${file}/2020/s2/cs"
			echo "Changed to Computer Systems Directory"
		fi
	done
}

function adsa(){
	files=(/home/kingmatthew/Documents/a1774281 /users/1/a1774281/Documents/SVN)
	for file in "${files[@]}"
	do
		if [ -d "$file" ]; then
			cd "${file}/2020/s2/adsa"
			echo "Changed to Algorithm and Data Structure Analysis Directory"
		fi
	done
}

function newsvn(){
	svn co https://version-control.adelaide.edu.au/svn/a1774281/2020/s2/
	echo "SVN file structure has been created in current directory"
}
