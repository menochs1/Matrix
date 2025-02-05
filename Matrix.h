#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int rows, cols;
    double **matrix;
public:
    // constructor
    Matrix(int rows, int cols);

    // copy constructor
    Matrix(const Matrix &other);

    // destructor
    ~Matrix();

    // row accessor
    int getRows() const;

    // column accessor
    int getCols() const;

    // compares the dimensions of the two matrices and makes sure they are the same
    bool dimensionCheck(const Matrix &other) const;

    // assignment, copies data from right to left
    void operator =(const Matrix &rhs);

    // gets element at index
    double operator [](const int index) const;

    // allows for modification of element at index
    double operator [](const int index);

    // addition
    Matrix operator +(const Matrix &rhs);

    // subtraction (This - Other)
    Matrix operator -(const Matrix &rhs);

    // subtraction (Other - This)
    Matrix operator -(const Matrix &lhs);

    // multiplication
    Matrix operator *(const Matrix &rhs);

    // Determinant 
    double operator %(const Matrix &rhs);
};

#endif