#include <vector>
#include <iostream>
#include <numeric>


using namespace std;

int main()
{
    vector<float> v;
    float input;

    cout << " Please enter numbers you want to find the mean of:" <<endl;
    while (cin >> input)
        v.push_back(input);

    float average = accumulate( v.begin(), v.end(), 0.0)/v.size();
    cout << "The average is" << average << endl;

    return 0;

}
