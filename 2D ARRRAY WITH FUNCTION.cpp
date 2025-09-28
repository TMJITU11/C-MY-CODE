
#include <iostream>
using namespace std;

void input(int arr[][3], int r, int c)
 {
    cout <<"enter the eliments of array :"<<endl;
      for (int i=0; i<r; ++i) {
          for (int j=0; j<c; ++j) {
            cout << "enter element at position [" <<i<< "][" <<j<< "]: ";

            cin >> arr[i][j];
        }
    }
}

void displayarray(int arr[][3], int r, int c)
{
    cout <<"the 2D array is:" <<endl;
    for (int i=0; i<r; ++i) {
        for (int j = 0; j<c; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    const int r = 3;
    const int c = 3;
    int arr[r][c];

    input(arr, r,c);
    displayarray(arr,r,c);
    return 0;
}
