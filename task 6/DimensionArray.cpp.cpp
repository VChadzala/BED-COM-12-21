#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    do {
        cout << "Enter the number of rows (not exceeding 3): ";
        cin >> rows;
        if (rows <= 0 || rows > 3) {
            cout << "Invalid number of rows. Please enter a value between 1 and 3." << endl;
        }
    } while (rows <= 0 || rows > 3);

    do {
        cout << "Enter the number of columns (not exceeding 3): ";
        cin >> cols;
        if (cols <= 0 || cols > 3) {
            cout << "Invalid number of columns. Please enter a value between 1 and 3." << endl;
        }
    } while (cols <= 0 || cols > 3);

    double **arr = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array you entered is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
