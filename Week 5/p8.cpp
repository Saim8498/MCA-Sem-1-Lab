#include <iostream>
using namespace std;

int main(){
	int len1, len2, len3; //lengths for arrays
	//for array 1
	cout << "Enter length for array 1: ";
	cin >> len1;
	int arr1[len1];
	for (int i=0; i < len1; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> arr1[i];
	}
	//for array 2
	cout << "Enter length for array 2: ";
	cin >> len2;
	int arr2[len2];
	for (int i=0; i<len2; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> arr2[i];
	}
	len3 = len1 + len2; //length of sorted array
	
	//for array 3
	int arr3[len3];
	int i=0, j=0, k=0;
	while (i<len1 && j<len2){
		if (arr1[i] < arr2[j]){
			arr3[k] = arr1[i];
			i++;
		}
		else {
			arr3[k] = arr2[j];
			j++;
		}
		k++;
	}
	
	//remaining elements of array 1
	while (i < len1){
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	
	//remaining elements of array 2
	while (j < len2){
		arr3[k] = arr2[j];
		j++;
		k++;
	}
	
	//Display merged
	for(int i=0; i < len3; i++){
		cout << arr3[i] << " ";
	}
	cout << endl;
	return 0;
}
