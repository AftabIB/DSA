#include<iostream>
using namespace std;

bool isPresent(int arr[][2], int key, int row, int col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (arr[r][c] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Array elements are : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter the element to search: " << endl;
    cin >> key;
    bool isFound = isPresent(arr, key, 2, 2);

    if (isFound)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}

