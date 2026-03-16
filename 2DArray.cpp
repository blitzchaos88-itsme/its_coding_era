#include<iostream>
using namespace std;

int main()
{
    int **arr1 = new int*[3];
    int **arr2 = new int*[3];
    int **arr3 = new int*[3];

    for(int i = 0; i < 3; i++){
        arr1[i] = new int [3];
        arr2[i] = new int [3];
        arr3[i] = new int [3];
    }
    cout << "Entering the values for Matrix 1 : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter the element of row " << i <<" and coloumn " << j << " : ";
            cin >> *(*(arr1+i)+j);
        }
    }
    cout << endl;
    cout << "Entering the values for Matrix 2 : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter the element of row " << i <<" and coloumn " << j << " : ";
            cin >> *(*(arr2+i)+j);
        }
    }
    cout << endl;
    cout << "Comparing 2 Matrices " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(*(*(arr1+i)+j)>*(*(arr2+i)+j))
            {
                *(*(arr3+i)+j) = *(*(arr1+i)+j);
            }
            else *(*(arr3+i)+j) = *(*(arr2+i)+j);
        }
    }
    cout << "Displaying the 3rd Matric : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << *(*(arr3+i)+j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        delete[] arr1[i];
        delete[] arr2[i];
        delete[] arr3[i];
    }
    delete[] arr1;
    arr1 = NULL;
    delete[] arr2;
    arr2 = NULL;
    delete[] arr3;
    arr3 = NULL;
    cout << "Memory deallocated safely and successfully " << endl; 
    return 0;
}