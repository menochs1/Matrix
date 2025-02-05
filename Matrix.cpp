#include <iostream>
#include "Matrix.h"

// constructor
Matrix::Matrix(int rows, int cols)
{
    this->rows = rows;
    this->cols = cols;

    matrix = new double*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new double[cols];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }
}

// copy constructor
Matrix::Matrix(const Matrix &other)
{
    if(dimensionCheck(other)) {
        for(int i = 0; i < rows, i++) {
            for(int j = 0; j < cols; j++) {
                matrix[i][j] = other.matrix[i][j];
            }
        }
    }
}

// destructor
Matrix::~Matrix()
{
    for(int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// row accessor
int Matrix::getRows() const
{
    return this->rows;
}

// column accessor
int Matrix::getCols() const
{
    return this->cols;
}

bool Matrix::dimensionCheck(const Matrix &other) const
{
    if(rows != other.getRows() || cols != other.getCols())
    {
        std::cout << "dimenson error. make sure the matrices have the same"
        << " dimensions i.e. same rows and same columns." << std::endl;
        return false;
    }
    return true;
}

// assignment, copies data from right to left
void Matrix::operator =(const Matrix &rhs)
{
    if(dimensionCheck(rhs)) {
        for(int i = 0; i < rows, i++) {
            for(int j = 0; j < cols; j++) {
                matrix[i][j] = rhs.matrix[i][j];
            }
        }
    }
}

// gets element at index
double Matrix::operator [](const int index) const
{
    return *matrix[index];
}

// allows for modification of element at index
double Matrix::operator [](const int index)
{
    return *matrix[index];
}

// addition
Matrix Matrix::operator +(const Matrix &rhs)
{
    if(dimensionCheck(rhs)) {
        Matrix result(rows, cols);
        for(int i = 0; i < rows, i++) {
            for(int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + rhs.matrix[i][j];
            }
        }
    }
}

// subtraction (This - Other)
Matrix Matrix::operator -(const Matrix &rhs)
{
    if(dimensionCheck(rhs)) {
        Matrix result(rows, cols);
        for(int i = 0; i < rows, i++) {
            for(int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] - rhs.matrix[i][j];
            }
        }
        return result;
    }
}

// subtraction (Other - This)
Matrix Matrix::operator -(const Matrix &lhs)
{
    if(dimensionCheck(lhs)) {
        Matrix result(rows, cols);
        for(int i = 0; i < rows, i++) {
            for(int j = 0; j < cols; j++) {
                result.matrix[i][j] = lhs.matrix[i][j] - matrix[i][j];
            }
        }
        return result;
    }
}

// multiplication
Matrix Matrix::operator *(const Matrix &rhs)
{
    Matrix result(rows, rhs.getCols());
    // this is how many times we must repeat the multiplication operation based on the
    // number of enteries in the new resultant matrix
    int numOperations = rows * rhs.getCols();

    // does the matrix multiplication
    for(int i = 0; i < numOperations; i++) {
        for(int j = 0; j < rows; j++) {
            result.matrix[i][j] = 0;
            for(int k = 0; k < cols; k++) {
                result.matrix[i][j] += matrix[i][k] * rhs.matrix[k][j];
            }
        }
    }
    return result;
}

// Determinant 
double Matrix::operator %(const Matrix &rhs)
{

}