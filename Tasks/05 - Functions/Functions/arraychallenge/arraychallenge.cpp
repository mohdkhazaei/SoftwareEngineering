#include <iostream>
using namespace std;

int arraySum(int* a, int N);

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    std::cout << "Total is: " << arraySum(array, 5) << std::endl;
}

int arraySum(int* a, int N)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += *(a + i);
    }
    return sum;
}
