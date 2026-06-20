#include <iostream>
using namespace std;

int main() {

    string login, password;

    cin >> login >> password;

    if(login == "admin" &&
       password == "1234")
        cout << "Success";
    else
        cout << "Failed";

    return 0;
}
