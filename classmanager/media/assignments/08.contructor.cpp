
#include<bits/stdc++.h>
using namespace std;



class base{
    int private_variable;
    protected:
        int protected_variable;
    public:
        int public_variable;
        int *arr;
        base(){   }
        base(int x, int y, int z) { private_variable = x; protected_variable=y; public_variable=z;
            arr = new int[5];
        }
        base(const base &ob){
            private_variable = ob.private_variable;
            protected_variable = ob.protected_variable;
            public_variable = ob.public_variable;
            arr = ob.arr;
        }
};


int main(){
    base ob(2, 5, 7);
    base ob2 = ob;
    base ob3 (ob);



    cout << ob.public_variable << " " << ob2.public_variable << " " << ob3.public_variable << endl;
    ob.public_variable = 100;
    ob2.public_variable = 101;
    ob3.public_variable = 102;
    cout << ob.public_variable << " " << ob2.public_variable << " " << ob3.public_variable << endl;

    ob3.arr[0] = 101;
    cout << ob.arr[0] << " " << ob2.arr[0] << " " << ob3.arr[0] << endl;


    ob.arr[0] = 1010;
    cout << ob.arr[0] << " " << ob2.arr[0] << " " << ob3.arr[0] << endl;





    return 0;
}
