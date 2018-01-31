//samuel hinds assignment 0
#include<iostream>
#include<vector>
#include "toast.h" //class file
using namespace std;

int main()
{
    vector<toast> breakfast; //vector using toast class
    int temp_int; //temp variable to hold input

    cout << "how do you want your 4 slices of toast, enter 4 ";
    cout << "numbers: 0=untoasted to 100=burnt" << endl;

    for(int i = 0 ; i < 4 ; i++) //loop to get 4 inputs
    {
        cin >> temp_int;
        breakfast.push_back (temp_int);
    }

    for(int i = 1 ; i < 5 ; i++) //loop to print 4 vector elements
    {
        cout << "Toast #" << i << " is toasted at level ";
        cout << breakfast[i-1].getToastLevel() << "/100" << endl;
    }

    return 0;
}
