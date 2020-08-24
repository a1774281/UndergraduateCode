#!/bin/bash
# Kings Custom Shell Commands

#On terminal start
echo "Hello $USER! Enter 'kinghelp' for assistance with shortcuts"
#ALIAS#

#El Classico
alias Hello='echo World!'
alias ..='cd ..'
alias ...='cd ..; cd ..'
alias ....='cd ..; cd ..; cd ..'
alias home='cd ~'
alias root='cd /'
alias doc='cd ~/Documents'
alias update='svn update'
alias add='svn add'
alias o='./a.out'

#FUNCTIONS#

function kinghelp(){
	echo "Simple Commands - "
	echo " "
	echo " - 'update' (shortcut for 'svn update')"
	echo " - 'doc' (shortcut for cd ~/Documents)"
	echo " - 'home' (shortcut for cd ~/)"
	echo " "
	echo " "
	echo "Commands -"
	echo " "
	echo " - 'main' (creates a formatted main file in current directory)"
	echo " - '.cpp [FILENAME]' (creates a formatted .cpp file in current directory with name FILENAME)"
	echo " - '.hpp [CLASSNAME]' (creates a formatted .hpp file of class CLASSNAME in current directory)"
	echo " - '.h [CLASSNAME]' (creates a formatted .h file of class CLASSNAME in current directory)"
	echo " - 's2', 'pssd', 'cs', and 'adsa' (will change current directory)"
	echo " - 'commit' (will svn commit with automated message)"
	echo " - 'newsvn [USERNAME]' (will checkout a working copy of your svn in your documents folder)"
	echo " "
}

function main(){
	touch main.cpp
	printf "#include <iostream>\n#include <string>\n#include <stdlib.h>\n#include <vector>\n#include <algorithm>\nusing namespace std;\n\nint main() {\n\tint answer = 0;\n\t// CODE HERE\n\n\treturn answer;\n}">>main.cpp
	echo "main.cpp has been created in the current directory"
	subl $PWD/main.cpp
}

function .cpp(){
	if [[ $# -eq 0 ]] ; then
    echo "ERROR! Please enter a name for the .cpp file (ie. '.cpp King')"
	else
		touch $1.cpp
		printf "#include <iostream>\n#include <string>\n#include <stdlib.h>\n#include <vector>\n#include <algorithm>\nusing namespace std;\n\nint main() {\n\tint answer = 0;\n\t// CODE HERE\n\n\treturn answer;\n}">>$1.cpp
		echo "$.cpp has been created in the current directory"
		subl $PWD/$1.cpp
	fi
}

function .h(){
	if [[ $# -eq 0 ]] ; then
    echo "ERROR! Please enter a name for the .cpp file (ie. '.h King')"
	else
		touch $1.h
		printf "#include <iostream>\n#include <string>\n#include <stdlib.h>\n#include <vector>\n#include <algorithm>\nusing namespace std;\n\nclass %s {\nprivate:\n\t//Variables and Methods Here!\npublic:\n\t//Or Variables and Methods Here!\n\tint METHOD(int VARIABLE) {\n\t\tint answer = 0;\n\t\t// CODE HERE\n\n\t\treturn answer;\n\t}\n};" "$1">> $1.h
		echo "File Named $1.h has been created in the current directory"
		subl $PWD/$1.h
	fi
}

function .hpp(){
	if [[ $# -eq 0 ]] ; then
    echo "ERROR! Please enter a name for the .cpp file (ie. '.hpp King')"
	else
		touch $1.hpp
		printf "#include <iostream>\n#include <string>\n#include <stdlib.h>\n#include <vector>\n#include <algorithm>\nusing namespace std;\n\nclass %s {\nprivate:\n\t//Variables and Methods Here!\npublic:\n\t//Or Variables and Methods Here!\n\tint METHOD(int VARIABLE) {\n\t\tint answer = 0;\n\t\t// CODE HERE\n\n\t\treturn answer;\n\t}\n};" "$1">> $1.hpp
		echo "File Named $1.hpp has been created in the current directory"
		subl $PWD/$1.hpp
	fi
}

function commit(){
	fileparent=$(basename -- $PWD)
	svn commit -m "$fileparent Submission"
}

function open(){
	subl $PWD/$1
}

files=(/home/$USER/Documents/a1774281 /home/$USER/Documents/a1771235 /home/$USER/Documents/SVN/a1771235 /users/1/a1774281/Documents/SVN/a1774281 /users/5/a1771235/Documents/SVN/a1771235)

function s2(){
	for file in "${files[@]}"
	do
		if [[ -d "$file" ]]; then
			cd "${file}/2020/s2"
			echo "Changed to Semester 2 Directory"
		fi
	done
}

function pssd(){
	for file in "${files[@]}"
	do
		if [[ -d "$file" ]]; then
			cd "${file}/2020/s2/pssd"
			echo "Changed to Problem Solving and Software Development Directory"
		fi
	done
}

function cs(){
	for file in "${files[@]}"
	do
		if [[ -d "$file" ]]; then
			cd "${file}/2020/s2/cs"
			echo "Changed to Computer Systems Directory"
		fi
	done
}

function adsa(){
	for file in "${files[@]}"
	do
		if [[ -d "$file" ]]; then
			cd "${file}/2020/s2/adsa"
			echo "Changed to Algorithm and Data Structure Analysis Directory"
		fi
	done
}

function newsvn(){
	if [[ $# -eq 0 ]] ; then
    echo "ERROR! Please enter your username (ie. 'newsvn a1774281')"
	else
		cd ~/Documents
		svn co https://version-control.adelaide.edu.au/svn/$1
		echo "SVN file structure for user $1 has been created in Documents directory"
	fi
}
