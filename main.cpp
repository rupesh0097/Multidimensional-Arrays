#include <iostream>
using namespace std;

int main(){
	/*//C++ Program to display all the elements of two diamensional arrays.
	int _myarray[3][2] = {{1,2,},
												{3,4,},
												{5,6}};
	
	cout << "The arrays are: " << endl;
	for(int i=0; i<3; i++){
		for(int j =0; j<2; j++){
			cout << "_myarray[" << i << "]["<< j << "] = " << _myarray[i][j] << endl;
		}
	}    

	//Taking inputs for 2 diamensional arrays and printing them
	cout << endl;
	int enter_myarray[2][3];
	cout << "Enter any six numbers: "<< endl;

	for(int i=0; i<2; i++){
		for(int j =0; j<3; j++){
			cin >> enter_myarray[i][j];
		}
	}
	cout << "The elements of the arrays are:" << endl;
	for(int i =0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<< "My arrays are: [" << i << "]["<<j << "] =" << enter_myarray[i][j] << endl;
		}
	}
	    	
 
	int numbers[2][3];

    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    } 		*/

	//Creating a three diamensional array and displaying it.
	int array3d[2][3][2] = {
														{
															{1,2},
															{3,4},
															{5,6},
														},
														{
															{7,8},
															{9,0},
															{1,2},
														}
													};

	cout << "The three diamensional array are: " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<2; k++){
				cout << "The array are: ["  << i << "][" << j<< "]["<< k << "] =" << array3d[i][j][k] << endl;
			}
		}
	}

	
	
	

  

	
	
	
	return 0;
}