#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Implenting Linear Search
// Return the index of the key to be found in a given array;
// return -1 if the key is not found in the array
int linearSearch(int arr[], int key, int size){
	int index = -1;
	for(int i=0; i<size; i++){
	
		if (arr[i] == key){
			index = i;
		}
	}
	
	return index;
}

int minMax(int arr[], int size){
	int min = arr[0];
	int max = arr[0];
	
	for(int i=0; i <size; i++){
		if(arr[i]> max){
			max = arr[i];
		}
		
		if(arr[i]< min){
			min = arr[i];
		}
	}
	
	cout << "Max " << max << "\nMin "<< min; 
}
int main(int argc, char** argv) {
	int array[] = {1,2,20,4,5};
	minMax(array, 5);
	
	cout << "\n";
	
	cout << "Linear Search\n";
	int key = 5;
	int searched = linearSearch(array, key, 5);
	
	if(searched == -1){
		cout << key << " not found in array";
	}else {
		cout << key << " found at index " << searched; 
	}
	return 0;
}
