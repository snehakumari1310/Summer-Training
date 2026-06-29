#include <iostream>
using namespace std;
int main() {
   int rows, cols;
   // Input dimensions of the matrices
   cout << "Enter number of rows: ";
   cin >> rows;
   cout << "Enter number of columns: ";
   cin >> cols;
   int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
   // Input elements of the first matrix
   cout << "Enter elements of the first matrix:" << endl;
   for (int i = 0; i < rows; ++i) {
       for (int j = 0; j < cols; ++j) {
           cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
           cin >> matrix1[i][j];
       }
   }
   // Input elements of the second matrix
   cout << "Enter elements of the second matrix:" << endl;
   for (int i = 0; i < rows; ++i) {
       for (int j = 0; j < cols; ++j) {
           cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
           cin >> matrix2[i][j];
       }
   }
   // Add corresponding elements of both matrices
   for (int i = 0; i < rows; ++i) {
       for (int j = 0; j < cols; ++j) {
           sum[i][j] = matrix1[i][j] + matrix2[i][j];
       }
   }
   // Display the resultant sum matrix
   cout << "Sum of the two matrices is:" << endl;
   for (int i = 0; i < rows; ++i) {
       for (int j = 0; j < cols; ++j) {
           cout << sum[i][j] << " ";
       }
       cout << endl;
   }
   return 0;
}