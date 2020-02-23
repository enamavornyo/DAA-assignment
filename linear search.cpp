//Algorithm for linear search
#include <iostream>
using namespace std;

int linearSearch(int newArray[], int newSearchItem, int sizeOfArray){
	for(int i=0; i<sizeof( newArray); i++){
		if(newSearchItem==newArray[i]){
			cout<<"The number is at position " <<i<<endl;
			return i;
			
			}
    }
				cout<<"The Number was not found."<<endl;
				return -1;	
	};
	
void DelItem(int array[], int newSearchItem){
	
		};
int main(void){
	

	
	for(int i=0;i<10;i++){
		int numbers[i];
	}
		int numbers[10]={6,24,23,15,80,135,7,314,1212,8452};
	//{6, 24, 23, 15, 80, 135, 7 ,314, 1212, 8452}
	

	
	int results = linearSearch(numbers, 80, 10);
    results = linearSearch(numbers, 100, 10);
	results = linearSearch(numbers, 1000, 10);
	results = linearSearch(numbers, 24, 10);
	
};