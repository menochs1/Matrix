

#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int rows, cols;
    double **data;
public:
    // constructor
    Matrix(rows, cols);

    // copy constructor
    Matrix(const Matrix &other);

    // destructor
    ~Matrix();

    // row accessor
    int getRows() const;

    // column accessor
    int getCols() const;

    // assignment, copies data from right to left
    Matrix operator =(const Matrix &rhs);

    // gets element at index
    Matrix operator [](const int index);

    // addition
    Matrix operator +(const Matrix &rhs);

    // subtraction (This - Other)
    Matrix operator -(const Matrix &rhs);

    // subtraction (Other - This)
    Matrix operator -(const Matrix &lhs);

    // multiplication
    Matrix operator *(const Matrix &rhs);

    // Determinant 
    Matrix operator %(const Matrix &rhs);
};

#endif