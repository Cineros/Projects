#include <iostream>
#include <vector>


using namespace std;

int main(){
    int curNum;
    int temp;
    vector<int> order1;// 147
    vector<int> order10;// 98
    vector<int> order2;// 49
    vector<int> order3;// 42
    vector<int> order4;// 21
    vector<int> order5;// 14
    vector<int> order6;// 7
    vector<int> order7;// 6
    vector<int> order8;// 3
    vector<int> order9;// 2
    vector<int> orderAll; //294
    int counter = 0;
    int group[294];
    for(int i = 1; i < 686; i++){
        if(!(i % 2 == 0 || i % 7 == 0)){
            group[counter] = i;
            counter++;
        }
    }
    for(int n = 0; n < 294; n++){
        cout << group[n] << ", ";
    }
    cout << endl << "test for generator: 3" << endl;
    curNum = 3;
    temp = 3;
    for(int y = 0; y < 294; y++){
        temp = temp * curNum;
        temp = temp % 686;
        cout << temp << ", ";
    }
    /*for(int x = 0; x < 294; x++){
        int temp = group[x];
        for(int o = 0; o < 294; o++){
            for(int z = 0; z < o; z++){
                temp = temp * group[x];
            }
            if((temp * group[x]) % 686 == 1){
                switch(o){
                    case 294:
                    orderAll.push_back(group[x]);
                    case 147:
                    order1.push_back(group[x]);
                    case 98:
                    order10.push_back(group[x]);
                    case 49:
                    order2.push_back(group[x]);
                    case 42:
                    order3.push_back(group[x]);
                    case 21:
                    order4.push_back(group[x]);
                    case 14:
                    order5.push_back(group[x]);
                    case 7:
                    order6.push_back(group[x]);
                    case 6:
                    order7.push_back(group[x]);
                    case 3:
                    order8.push_back(group[x]);
                    case 2:
                    order9.push_back(group[x]);
                }
            }
        }
    }*/
    /*for(int y = 0; y < 10; y++){
        switch (y)
        {
        case 0:
            cout << endl << "elements of order 294" << endl;
            while(true){
                curNum = orderAll.back();
                orderAll.pop_back();
                cout << curNum << ", ";
                if(orderAll.empty()){
                    break;
                }
            }
        }
    }*/
    return 0;
}