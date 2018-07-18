#include <iostream>

using namespace std;

struct SumParameters
{
    int valueA;
    int valueB;
    int result;
};

void returnSum(SumParameters& params)
{
    params.result = params.valueA + params.valueB;
}

int main()
{
    SumParameters sum;
    sum.valueA = 3;
    sum.valueB = 6;
    sum.result = 0;
    returnSum(sum);
    cout << sum.result << endl;

    return 0;
}
