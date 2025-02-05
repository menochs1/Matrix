#include <iomanip>
#include "Matrix.h"

// constructor
Matrix::Matrix(rows, cols)
{
    this->rows = rows;
    this->cols = cols;

    data** = new double*[rows];
    for(int i = 0; i < rows; i++)
    {
        data[i] = new double[cols];
    }
}

// copy constructor
Matrix(const Matrix &other)
{
    
}

// destructor
~Matrix()
{
    for(int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data[];


}

// row accessor
int getRows() const
{
    return this->rows;
}

// column accessor
int getCols() const
{
    return this->cols;
}

// assignment, copies data from right to left
Matrix operator =(const Matrix &rhs);

// gets element at index
Matrix operator [](const int index);

// addition
Matrix operator +(const Matrix &rhs)
{

}

// subtraction (This - Other)
Matrix operator -(const Matrix &rhs)
{

}

// subtraction (Other - This)
Matrix operator -(const Matrix &lhs)
{

}

// multiplication
Matrix operator *(const Matrix &rhs)
{

}

// Determinant 
Matrix operator %(const Matrix &rhs)
{

}