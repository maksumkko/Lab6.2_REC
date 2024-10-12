#include <iostream>
#include <iomanip>

using namespace std;

void count(int* a, int n, int& count, int i = 0);
void Input(int*& a, int& n, int i = 0);

int main()
{
    int* a = nullptr;
    int n = 0;
    int countOdd = 0;

    Input(a, n);

    count(a, n, countOdd);

    cout << "\nTotal odd numbers: " << countOdd << endl;

    delete[] a;
    return 0;
}

void count(int* a, int n, int& countOdd, int i)
{
    if (i < n)
    {
        if (a[i] % 2 != 0)
        {
            countOdd++;
        }
        count(a, n, countOdd, i + 1);
    }
}

void Input(int*& a, int& n, int i)
{
    if (i == 0)
    {
        cout << "Enter number of elements: ";
        cin >> n;
        a = new int[n];
    }

    if (i < n)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
        Input(a, n, i + 1);
    }
}