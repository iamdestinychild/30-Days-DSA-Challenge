#include <bits/stdc++.h>
using namespace std;

vector<long long> concatArray(vector<long long> &arr)
{
    vector<long long> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
    }
    return temp;
}

int main()
{
    long long num;
    cin >> num;

    vector<long long> arr(num);

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    vector<long long> temp = concatArray(arr);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}