#include <iostream>
using std::cin, std::cout;
int numS[10];
int numSLength = 0;
void add(long int b)
{
    bool isInclude = false;
    for (int i = 0; i < 10; i++)
    {
        if (numS[i] == b)
            isInclude = true;
    }
    if (!isInclude && numSLength < 10)
    {
        numS[numSLength] = b;
        numSLength++;
    }
}

int main(int, char **)
{
    long int num;
    cout << "Type a number:";
    cin >> num;
    for (long int i = 2; i > 1 && i <= num; i++)
    {
        if (num % i == 0)
        {
            num /= i;
            add(i);
            i--;
        }
    }
    for (int i = 0; i < numSLength; i++)
    {
        cout << numS[i] << "\n";
    }
}
