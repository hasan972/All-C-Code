                                           //  Rakibul Hasan
                                // Find the Average number using vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Get the vector
    vector<int> a = { 1, 2, 3, 4 ,5 };
    // Print the vector
    cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    int Sum;
    Sum = accumulate(a.begin(), a.end(), 0);

    // Find the sum of the vector
    cout << "\nSum = "
         <<Sum ;
    cout<<"\nAverage = "
         << Sum/a.size();

    return 0;
}
