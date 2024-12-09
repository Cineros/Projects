#include <cmath>
#include <iostream>
#include <vector>

using namespace std;


vector<int> divisors;
int curPrime = 2;

int gcd(int x, int y){
    int gcd = min(x, y);
    while(gcd > 0){
        if(x % gcd == 0 && y % gcd == 0){
            break;
        }
        gcd--;
    }
    return gcd;
}

bool isPrime(int n){ 
    if (n <= 1){ 
        return false;
    }

    for (int i = 2; i < n; i++){ 
        if (n % i == 0){ 
            return false;
        }
    } 
  
    return true; 
}

int findNextPrime(int candidate){
    while(!(isPrime(candidate))){
        candidate++;
    }
    return candidate;
}

int findOrder(int num){
    if(num != 1){
        if(num % 2 == 0){
            divisors.push_back(2);
            num = num/2;
            findOrder(num);
        }else if(num != 1){
            try{
                if(num < 1){
                    throw 69;
                }
            }
            catch (69) {
                cout << "An error occured when finding divisors." << endl;
            }
            if(num % curPrime != 0){
                curPrime++;
                curPrime = findNextPrime(curPrime);
                findOrder(num);
            }else{
                divisors.push_back(curPrime);
                num = num/curPrime;
            }
        }
    }
    return(DonkeyKong(num));
}

int DonkeyKong(){
    int curNum = 0;
    int temp = 0;
    int counter = 0;
    vector<int> order;
    order.push_back(divisors.pop_back())
    while(!divisors.empty()){
        if(divisors.back() == order.back()){
            counter++;
            temp = order.pop_back();
            curNum = temp;
            temp = temp*curNum;
            order.push_back(temp);
            divisors.pop_back();
        }else if(divisors.back() == curNum){
            counter++;
            temp = order.pop_back();
            temp = temp*curNum;
            order.push_back(temp);
            divisors.pop_back();
        }else if(counter != 0 && curNum != divisors.back()){
            temp = curNum;
            for(int i = 0; i < counter-1; i++){
                temp = temp*curNum;
            }
            curNum = temp;
            temp = order.pop_back();
            temp = temp - curNum;
            order.push_back(temp);
            counter = 0;
            temp = 0;
            curNum = 0;
        }else{
            order.push_back(divisors.pop_back())
            if(divisors.empty()){
                temp = order.pop_back();
                temp = temp - 1;
                order.push_back(temp);
                temp = 0;
            }
        }
    }
    while(!order.empty()){
        temp = order.pop_back() - order.pop_back();
        if(order.empty()){
            order.push_back(temp);
            break;
        }   
    }
    return(order.pop_back());
}
    

int main(null){
    int num;
    int[]
    char op;

    cout << "What is your group number?" << endl;
    cin >> num;
    cout << "What is the operation?" << endl;
    cin >> op;
    if(op == '+'){

    }else{

    }
    return 0;
}