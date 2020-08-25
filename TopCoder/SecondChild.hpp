/*Messy Script that was written under pressure, its very inelegant and I may eventually rewrite it*/

#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

//Class definition of SecondChild
class SecondChild
{
    public:
        string chooseName(string Father, string Mather, string Child1, string Gender)
        {
        	string result, first, surname;
            if(Child1[0] == 'A' || Child1[0] == 'E' || Child1[0] == 'I' || Child1[0] == 'O' || Child1[0] == 'U' || Child1[0] == 'Y') {
            	if (Gender == "Boy"){
					string to_split = Father;
					int i = 0;
					string a;
					string b;
					bool space = false;
					while (to_split[i] != '\0'){    
						if (space == false){    
							if (to_split[i] == ' ') {
				    			space = true;        
							}	        
							else {            
								a += to_split[i];        
							}    
			    		}   
						else{	        
							b += to_split[i];    
						}    
						i++;
					}
            	result = b + " " + a;    
            	return result;  
            	}
            	else if (Gender == "Girl"){
            		string Child1F, Child1S, MatherF, MatherS;
					string to_split = Child1;
					int i = 0;
					string a;
					string b;
					bool space = false;
					while (to_split[i] != '\0'){    
						if (space == false){    
							if (to_split[i] == ' ') {
								space = true;        
							}        
							else {            
								a += to_split[i];        
							}    
						}   
						else{	        
							b += to_split[i];    
						}    
						i++;
					}
					to_split = Mather;
					i = 0;
					string c;
					string d;
					space = false;
					while (to_split[i] != '\0'){    
						if (space == false){    
							if (to_split[i] == ' ') {
								space = true;        
							}        
							else {            
								c+= to_split[i];        
							}    
						}   
						else{	        
							d+= to_split[i];    
						}    
						i++;
					}            		
            		result = c + " " + b;    
            		return result;              		
            	}
            }
            else {
            	if (Gender == "Girl"){
					string to_split = Mather;
					int i=0;
					string a;
					string b;
					bool space = false;
					while (to_split[i] != '\0'){    
						if (space == false){    
							if (to_split[i] == ' ') {
								space = true;        
							}        
							else {            
								a+= to_split[i];        
							}    
						}   
						else{	        
							b+= to_split[i];    
						}    
					i++;
					}
            		result = b + " " + a;    
            		return result;  
            	}
            	else if (Gender == "Boy") {
            		string Child1F, Child1S, FatherF, FatherS;
					string to_split = Child1;
					int i=0;
					string a;
					string b;
					bool space = false;
					while (to_split[i] != '\0'){    
						if (space == false){    
							if (to_split[i] == ' ') {
								space = true;        
							}        
							else {            
								a+= to_split[i];        
							}    
						}   
						else{	        
							b+= to_split[i];    
						}    
					i++;
					}
					to_split = Father;
					i=0;
					string c;
					string d;
					space = false;
					while (to_split[i] != '\0'){    
						if (space == false){    
							if (to_split[i] == ' ') {
								space = true;        
							}        
							else {            
							c+= to_split[i];        
							}    
						}   
						else{	        
							d+= to_split[i];    
						}    
					i++;
					}            		
            		result = c + " " + b;    
            		return result;   
            	}
			}
	}
};
