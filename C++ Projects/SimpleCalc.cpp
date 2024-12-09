#include <cmath>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int multiply(int a, int b){
    int ans;
    return (ans = a * b);
}

int divide(int a, int b){
    int ans;
    return (ans = a / b);
}

int subtract(int a, int b){
    int ans;
    return (ans = a - b);
}

int add(int a, int b){
    int ans;
    return (ans = a + b);
}

int main(){
    int x, y, z;
    x = 0; 
    y = 0;
    z = 0;
    string op = "";

    cout << "What is the first term? " << endl;
    cin >> x;
    cout << "What is the second term? " << endl;
    cin >> y;
    cout << "What is the third term? " << endl;
    cin >> z;

    
    while(true){
        cout << "What would you like to do with your terms?" << endl;
        cin >> op;
        if(tolower(op[0]) == 'a' || tolower(op[0]) == 's' || tolower(op[0]) == 'm' || tolower(op[0]) == 'd'){
            break;
        }else{
            cout << "That is not a valid operation... Please try again. " << endl;
        }
    }

    if(tolower(op[0]) == 'a'){
        cout << add(add(x, y), z) << " This is your answer." << endl;
    }else if(tolower(op[0]) == 's'){
        cout << subtract(subtract(x, y), z) << " This is your answer." << endl;
    }else if(tolower(op[0]) == 'm'){
        cout << multiply(multiply(x, y), z) << " This is your answer." << endl;
    }else{
        cout << divide(divide(x, y), z) << " This is your answer." << endl;
    }


}