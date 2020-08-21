//Code written by (a1771235) and (a1774281)
/*IF YOURE AN ADELAIDE UNI STUDENT, NO MATTER HOW MUCH YOU CHANGE VARIABLES
OR FLOW OF CODE, YOULL GET HIT BY PLAGARISM DETECTION, SEE README.txt FOR HELP*/

/*Code created to demonstrate Karatsuba Multiplication with numbers up to and 
exceeding 100 digits of any base between 2-10 using string manipulation

Code takes three numbers as input seperated by spaces, the first two
represent numbers to be added and multiplied the third being the base being
used. Output is sum of numbers by school addition followed by product of numbers
by karatsuba multiplication*/


#include <iostream>
#include <string>
#include <sstream>
#include <tgmath.h>
#include <bits/stdc++.h>

using namespace std;

string SchoolAddition(string num1, string num2, string base);
string SchoolSubtraction(string num1, string num2, string base);
string SchoolMultiplication(string num1, string num2, string base);
string MakeStringsEqual(string num1, string num2, int exit);
string KaratsubaMultiplication(string num1, string num2, string base);
string ShiftToLeft(string str, int numOfShifts);

int main(){
    //Parse input into three strings for each number and the base
	string str1, str2, base, inpLine;
	getline(cin, inpLine);
	istringstream iss(inpLine);
    iss >> str1 >> str2 >> base;
	cout << SchoolAddition(str1, str2, base) << " "<< KaratsubaMultiplication(str1, str2, base) << endl;
}

//Takes both strings and recursively (cause fun to learn to use)
//to add leading zeroes to make both numbers of equal length
//Note:Kindof self explanatory with some messy and unneeded recursion
string MakeStringsEqual(string num1, string num2, int exit){
    int num1len = num1.length();
    int num2len = num2.length();
    if (num1len > num2len && exit == 0){
    	return MakeStringsEqual(num1, num2, 1);
    }
    else if (num1len < num2len && exit == 0){
    	return MakeStringsEqual(num1, num2, 2);
    }
    else {
	    while (num1len > num2len){
	    	num2 = '0' + num2;
	    	return MakeStringsEqual(num1, num2, 1);
	    }
	    while (num1len < num2len){
	    	num1 = '0' + num1;
	    	return MakeStringsEqual(num1, num2, 2);
	    }
	    if (num1len == num2len && exit == 1){
	    	return num2;
	    }
	    else if (num1len == num2len && exit == 2){
	    	return num1;
	    }
    }
    return 0;
}

//Takes number and shifts number to the left by the number of shifts
string ShiftToLeft(string str, int numOfShifts){
	for (int i = 0; i < numOfShifts; i++){
		str += '0';
	}
	return str;
}

string KaratsubaMultiplication(string num1, string num2, string base){
    int num1len = num1.length();
    int num2len = num2.length();

    //Makes strings equal length
    if (num1len > num2len){
    	num2 = MakeStringsEqual(num1, num2, 0);
    }
    else if (num1len < num2len) {
    	num1 = MakeStringsEqual(num1, num2, 0);
    }
    //Recheck strings lengths
    num1len = num1.length();
    num2len = num2.length();

    //Finding position of string substrings
    int p0size = num1len/2;
    int p2size = num1len - (num1len/2);

    //Creates string substrings
    string a0 = num1.substr(0, p0size);
    string a1 = num1.substr(p0size, p2size);
    string b0 = num2.substr(0, p0size);
    string b1 = num2.substr(p0size, p2size);
    //Karatsuba Multiplication (Compute three Products)
    string P0 = SchoolMultiplication(a0, b0, base); //P0=a0·b0
    string P1 = SchoolMultiplication(SchoolAddition(a0, a1, base), SchoolAddition(b0, b1, base), base); //P1=(a1+a0)·(b1+b0)
    string P2 = SchoolMultiplication(a1, b1, base); //P2=a1·b1

    //Add aligned products to obtain results
    string answer = SchoolAddition(SchoolAddition(ShiftToLeft(P0, 2*p2size), P2, base),ShiftToLeft(SchoolSubtraction(P1, SchoolAddition(P0, P2, base), base), p2size), base);    //(P0+P2)+(P1-(P0+P2))  (Bases also present with ShiftToLeft)
    
    //removes/ignores zeros at beginning of string (Messy and added last second)
    string result;
    int i = 0, anslen = answer.length();
    if (answer[i] == '0'){
    	while (answer[i] == '0'){
    		i++;
    	} 
    	for (int j = i; j < anslen; j++){
    		result += answer[j];
    	}
	}
    else {
    	return answer;
    }
    return result;
}


//Takes both strings and finds their sum using School Addition
//and storing in a result string,
//Note: Accepts any base between 2-10
string SchoolAddition(string num1, string num2, string base){
    //Base to integer
    int baseInt = stoi(base);
    //Variables
    //Find length of string
    int num1len = num1.length();
    int num2len = num2.length();
    //return variables
    string tempStr;
    string result;

    //IF num1 is larger than num2, switch their values
    if(num1len > num2len){
        tempStr = num1;
        num1 = num2;
        num2 = tempStr;
    }

    //Clears tempString and resets lengths
    tempStr.clear();
    //Find length
    num1len = num1.length();
    num2len = num2.length();

    //Reverses Strings
    for (int i = num1len - 1; i >= 0; i--) {
        //append result to tempStr
        tempStr += num1[i];
    }
    num1=tempStr;
    //Clears tempString and resets lengths
    tempStr.clear();
     for (int i = num2len - 1; i >= 0; i--) {
      tempStr += num2[i];
    }
    num2 = tempStr;
    //Clears tempString and resets lengths
    tempStr.clear();

    //School Method of Addition (Compute sum of current digits and carry)
    int carry = 0;
    for (int i = 0; i < num1len; i++){
        int sum = ((num1[i] - '0') + (num2[i] - '0') + carry);
        result.push_back(sum % baseInt + '0');
        // Calculate carry
        carry = sum / baseInt;
    }

    //Add remaining digits of larger number
    for (int i = num1len; i < num2len; i++){
        int sum = ((num2[i] - '0') + carry);
        result.push_back(sum % baseInt + '0');
        carry = sum / baseInt;

    }

    // Add carry
    if(carry){
        result.push_back(carry + '0');
    }

    //Reverse String
    for (int i = result.length() - 1; i >= 0; i--) {
          tempStr += result[i];
    }
    result = tempStr;
    return result;
}


//Takes both strings and finds their difference using School Subtraction
//and storing in a result string
//Note: Accepts any base between 2-10
string SchoolSubtraction(string num1, string num2, string base){
    //convert string to int
    int baseInt = stoi(base);
    //calculates string length
    int num1len = num1.length();
    int num2len = num2.length();
    //return variables
    string tempstr;
    string result;

	//IF num2 is larger than num1, switch their values
	  if(num1len < num2len){
        tempstr = num1;
        num1 = num2;
        num2 = tempstr;
    }

	//Create empty string
	//Clears tempstring and resets lengths
    tempstr.clear();
    num1len = num1.length();
    num2len = num2.length();


     //Reverses Strings
     //Loops the result backwards and appends.
    for (int i = num1len - 1; i >= 0; i--) {
        tempstr += num1[i];
    }
    num1=tempstr;
    //Clears tempstring and resets lengths
    tempstr.clear();
    //Loops the result backwards and appends.
     for (int i = num2len - 1; i >= 0; i--) {
      tempstr += num2[i];
    }
    num2 = tempstr;
    //Clears tempstring and resets lengths
    tempstr.clear();


    int carry = 0;
    for (int i = 0; i < num2len; i++){
    	//school subtraction
    	int subtract = ((num1[i]-'0')-(num2[i]-'0')-carry);

        //If subtraction less than 0, add baseInt
		if (subtract < 0){
            subtract += baseInt;
            carry = 1;
        }
        else
            carry = 0;

        tempstr.push_back(subtract + '0');
    }
     // subtract digits of num2
    for (int i=num2len; i<num1len; i++){
        int subtract = ((num1[i]-'0') - carry);

        // if value is a negative make it positive
        if (subtract < 0)
        {
            subtract += baseInt;
            carry = 1;
        }
        else
            carry = 0;
        //Adds a new element at the end of the vector
        tempstr.push_back(subtract + '0');
    }
     //Loops the result backwards and appends to result;
    for (int i = tempstr.length() - 1; i >= 0; i--) {
          result += tempstr[i];
    }

    return result;
}


//Takes both strings and finds their product using School Multiplication
//and storing in a result vector, before returning answer as int
//Note: Accepts any base between 2-10
string SchoolMultiplication(string num1, string num2, string base){
    int num1Size = num1.size(), num2Size = num2.size();
    //convert string into an int
    int baseInt = stoi(base);
    //Store result into vector in reverse
    vector<int> result(num1Size+num2Size, 0);
    int tempInt1 = 0, tempInt2 = 0;

    //loop from right to left
    for (int i=num1Size-1; i>=0; i--)
    {
        int carry = 0;
        int tn1 = num1[i] - '0';
        //switches position to the left after every multiplication for num2
        tempInt2 = 0;
        for (int j=num2Size-1; j>=0; j--)
        {
            int tn2= num2[j] - '0';
            //Multiplies current number and adds it to result
            int sum = tn1*tn2 + result[tempInt1 + tempInt2] + carry;
            carry = sum/baseInt;
            result[tempInt1 + tempInt2] = sum % baseInt;
            //determines position of next mulitplication of num2
            tempInt2++;
        }
        if (carry > 0){
            result[tempInt1 + tempInt2] += carry;
        }
        tempInt1++;
    }
    //removes/ignores zeros at beginning of string
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0){
        i--;
    }
    string str;
    //increments to str
    while (i >= 0){
        str += to_string(result[i--]);
    }
    return str;
}
