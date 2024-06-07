#include <iostream>

using namespace std;

int data[6] = {};

void sort()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        cin >> data[i];
    }

    cout << "\n";

    sort();

    for (int i = 0; i < 6; i++)
    {
        cout << data[i] << " ";
    }

    return 0;
}
