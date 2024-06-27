#include <iostream>
#include <conio.h>

using namespace std;

class Matrix
{
    int r1, c1;
    int *mat;

public:
    Matrix()
    {
        r1 = 1;
        c1 = 1;
        mat = new int[r1 * c1];
    }
    Matrix(int r, int c)
    {
        r1 = r;
        c1 = c;
        mat = new int[r1 * c1];
    }
    void getData();
    void Display();
    void add(Matrix m);
    void multiply(Matrix m);
    void transpose();
};

void Matrix::getData()
{
    cout << "Enter the elements of  Matrix :";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat[i * c1 + j];
        }
    }
}

void Matrix::Display()
{
    printf("The matrix is :");
    for (int i = 0; i < r1; i++)
    {
        printf("\n");
        for (int j = 0; j < c1; j++)
            printf("%d  ", mat[i * c1 + j]);
    }
}

void Matrix::add(Matrix m)
{
    int res[r1][c1];

    printf("The sum of two matrices is :");
    for (int i = 0; i < r1; i++)
    {
        printf("\n");
        for (int j = 0; j < c1; j++)
        {
            res[i][j] = mat[i * c1 + j] + m.mat[i * c1 + j];
            printf("%d  ", res[i][j]);
        }
    }
}

void Matrix::multiply(Matrix m)
{

    if (c1 == m.r1)
    {
        int res[r1][m.c1];
        printf("The multiplication of two matrices is :");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < m.c1; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < m.r1; k++)
                {
                    res[i][j] = res[i][j] + (mat[i * c1 + k] * m.mat[k * m.r1 + j]);
                }
            }
        }

        for (int i = 0; i < r1; i++)
        {
            printf("\n");
            for (int j = 0; j < m.c1; j++)
                printf("%d\t", res[i][j]);
        }
    }
    else
    {
        printf("The multiplication cannot be performed.");
    }
}

void Matrix::transpose()
{
    if (r1 == c1)
    {
        int res[r1][c1];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                res[j][i] = mat[i * c1 + j];
            }
        }

        printf("\nThe transpose of the matrix is :");
        for (int i = 0; i < c1; i++)
        {
            printf("\n");
            for (int j = 0; j < r1; j++)
                printf("%d\t", res[i][j]);
        }
    }
    else
    {
        printf("The tranpose cannot be performed.");
    }
}

int main()
{
    Matrix m1(3,3), m2(3,3);
    char char1;
    int i, j;
    while (true)
    {
        cout << "\n\na) Input a matrix\n";
        cout << "b) Display matrix\n";
        cout << "c) Add two matrix\n";
        cout << "d) Multiply two matrixes\n";
        cout << "e) Transpose a matrix\n";
        cout << "Enter the choice :";
        cin >> char1;

        if (char1 == 'a')
            m1.getData();
        else if (char1 == 'b')
            m1.Display();
        else if (char1 == 'c')
        {
            m2.getData();
            m1.add(m2);
        }
        else if (char1 == 'd')
        {
            m2.getData();
            m1.multiply(m2);
        }
        else if (char1 == 'e')
            m1.transpose();
    }

    getch();
    return 0;
}