#include <bits/stdc++.h>
using namespace std;

typedef long long          ll;
typedef vector<int>        vi;
typedef pair<int, int>     ii;
typedef vector<ii>         vii;
typedef map<string,int>    msi;

class Array {
private:
    int *items;
    int length;

public:
    Array(int length){
        *items = new int[length];
        this->length = 0;
    }

    ~Array(){

    }

    void print(){
        for(int i = 0; i < length; i++){
            cout << items[i] << endl;
        }
    }

    /* void insert() */

}

int main() {
    Array arr = new Array(3);
    arr.print();
}


