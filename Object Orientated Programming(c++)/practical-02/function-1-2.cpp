#include <iostream>
//function to...
int identity(int array[10][10]){ 
    int total = 0;
    for (int i = 0; i < 10; i++) {
    	for (int j = 0; j < 10; j++){
    		if (array[i][j] == 0 && array[i][j] != array[i][i]){
    			total++;
    		} 
    		else if (array[i][j] == 1 && array[i][j] == array[i][i]){
    			total++;
    		} 
    	}
    }
    if (total == 100){
    	return 1;
    }
    else{
    	return 0;
    }

}