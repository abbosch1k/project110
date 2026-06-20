#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    int mx = arr[0];

    for(int i = 1; i < 5; i++)
        if(arr[i] > mx)
            mx = arr[i];

    cout << mx;

    return 0;
}
