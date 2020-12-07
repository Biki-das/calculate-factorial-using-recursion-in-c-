include <iostream>

int factorial(int n);

using namespace std;

int main(){


    int n;
    cout<<"enter your number "<<endl;
    cin >> n;

    cout<<"the factorial for this value is"<<factorial(n)<<endl;
    return 0;
}
int factorial(int n){
    if (n > 1){
        return n * factorial(n - 1);
    } else{
        return 1;
    }
}
