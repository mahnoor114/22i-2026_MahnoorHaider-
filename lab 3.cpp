#include <iostream>
using namespace std;

// input function 
void input(int** matrix, int m, int n)
{
    int i, j;

    cout << "Enter elements of the matrix:" << endl;
    for ( i = 0; i < m; ++i) 
    {
        for ( j = 0; j < n; ++j) 
        {
            cout << "Enter element at position i , j:" <<i<<","<<j;
            cin >> matrix[i][j];
        }
    }
}

// displaying function 
void display(int** matrix, int m, int n) 
{
    int i, j;
    cout << "Matrix elements:" << endl;
    for ( i = 0; i < m; ++i)
    {
        for ( j = 0; j < n; ++j) 
        {
           cout << matrix[i][j] << " ";
        }
       cout << endl;
    }
}

// calculating sum
int sum(int** matrix, int m, int n) 
{
    int i, j;

    int sum = 0;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            sum =sum+ matrix[i][j];
        }
    }
    return sum;
}

// calculting sum of a row 
void sum_row(int** matrix, int m, int n) 
{
    int i, j;
    int sum = 0;

   cout << "\n sum of row is:" << endl;
    for (int i = 0; i < m; ++i) 
    {
       
        for (int j = 0; j < n; ++j)
        {
            sum =sum+ matrix[i][j];
        }
        cout << "sum of row : " << sum << endl;
    }
}

// calculating sum of a col
void sum_col(int** matrix, int m, int n) 
{
    int i, j;
    int sum = 0;

   cout << "sum of column:" << endl;

    for (int j = 0; j < n; ++j) 
    {
        
        for (int i = 0; i < m; ++i) 
        {
            sum = sum+matrix[i][j];
        }
      cout << "sum of column:: " << sum <<endl;
    }
}

// transpose


int** transpose(int** matrix, int m, int n)
{
int i, j;

    int** transpose_mat = new int* [n];
    for ( i = 0; i < n; ++i) 
    {
        transpose_mat[i] = new int[m];

        for (int j = 0; j < m; ++j) 
        {
            transpose_mat[i][j] = matrix[j][i];
        }
    }
    return transpose_mat;
}

// Function to deallocate memory for a matrix
void deleting_mat(int** matrix, int rows) 
{
    for (int i = 0; i < rows; ++i) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() 
{
    int m, n;
    int i, j;

    
   cout << "\n Enter the number of rows : ";
    cin >> m;
   cout << "\n Enter the number of columns: ";
   cin >> n;

  
    int** matrix = new int* [m];

    for (int i = 0; i < m; i++ )
    {
        matrix[i] = new int[n];
    }

    int ch;
    while(1==1)
    {
        // Display menu
        cout << "\n operations to perform :" << endl;
        cout << "\n 1. Input elements into matrix" <<endl;
       cout << "\n 2. Display elements of matrix" <<endl;
        cout << "\n 3. Sum of all elements of matrix" <<endl;
        cout << "\n 4. Display row-wise sum of matrix" <<endl;
        cout << "\n 5. Display column-wise sum of matrix" << endl;
        cout << "\n 6. Create transpose of matrix" << endl;
        cout << "\n 7. Exit" << endl;
        cout << "\n Enter your choice: ";
       cin >> ch;
       if (ch == 1)
       {

           input(matrix, m, n);
       }

       else if (ch == 2)
       {

           display(matrix, m, n);
       }

       else if (ch == 3)
       {

           cout << "Sum of all elements in array : " << sum(matrix, m, n) << endl;
       }
       else if (ch == 4)
       {

           sum_row(matrix, m, n);
       }
       else if (ch == 5)
       {

           sum_col(matrix, m, n);
       }
       else if (ch==6)
       

        {
            int** transpose_mat = transpose(matrix, m, n);
            cout << "\n transposed Matrixis :" << endl;
            display(transpose_mat, n, m);
            deleting_mat(transpose_mat, n);
          
        }
       else if (ch == 7)
       {


           cout << "Exiting program." << endl;
       }

       else if (ch == 8)
       {

       
            cout << "sorry! invalid choice." << endl;
        }

    } 

    // Deallocate memory for the matrix
   deleting_mat(matrix, m);

    return 0;
}
