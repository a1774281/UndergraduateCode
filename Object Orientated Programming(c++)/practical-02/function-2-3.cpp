#include <iostream>
bool is_a_palindrome(int integers[], int length){
    int palincount = 0;
    if (length <= 0){
        return -1;
    }
    else if (length == 1){
    	return true;
    }
    else if (length % 2 == 0){
        for (int i = 0; i < (length/2); i++){
            if (integers[i] == integers[length-1-i]){
                palincount++;
            }
        }
        if (palincount == length/2){
            return true;
        }
    }
    else if (length % 2 != 0){
        for (int i = 0; i < ((length-1)/2); i++){
            if (integers[i] == integers[length-1-i]){
                palincount++;
            }
        }
       if (palincount == ((length-1)/2)){
            return true;
        }
    }
    return false;
}




int sum_elements(int integers[], int length){
    int total = 0;
    if (length <= 0){
        return -1;
    }
    for (int i = 0; i < length; i++){
        total += integers[i];
    }
    return total;
}



int sum_if_a_palindrome(int integers[], int length){ 
    if (length <= 0){
        return -1;
    }
    else if (is_a_palindrome(integers, length) == true){
        return sum_elements(integers, length);
    }
    else if (is_a_palindrome(integers, length) == false) {
        return -2;
    }
}
   