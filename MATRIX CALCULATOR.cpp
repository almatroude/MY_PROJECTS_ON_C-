#include <iostream>

using namespace std;

int main()
{
    int A[3][3], B[3][3], Add[3][3], Sub[3][3], x, y;

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of Matrix A(" << i + 1 << j + 1 << "): ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of Matrix B(" << i + 1 << j + 1 << "): ";
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "Matrix A = " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n Matrix B = " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n if you want to add the two Matrices, Press 1 else Press Zero to Subtrat Matrix B from Matrix A:  ";
    cin >> x;
    if (x == 1)
    {
        cout << "Adding Matrix A and  Matrix B: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << A[i][j] << "+" << B[i][j] << "\t";
                Add[i][j] = A[i][j] + B[i][j];
            }
            cout << endl;
        }
        cout << "\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << Add[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "for A - B , press 2, else press -1 for B - A :     ";
        cin >> y;
        if (y > 1)
        {
            cout << "Subtraction of Matrix B from  Matrix A: " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << A[i][j] << "-" << B[i][j] << "\t";
                    Sub[i][j] = A[i][j] - B[i][j];
                }
                cout << endl;
            }
            cout << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << Sub[i][j] << "\t";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Subtraction of Matrix A from  Matrix B: " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << A[i][j] << "-" << B[i][j] << "\t";
                    Sub[i][j] = B[i][j] - A[i][j];
                }
                cout << endl;
            }
            cout << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << Sub[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }

    return 0;
}