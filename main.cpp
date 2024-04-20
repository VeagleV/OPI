#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    int n = 0, x = 0;
    int factorial = 0;
    double numbFact = 1;
    double answer = 0;

    cout << "Enter x (in radians) for calculating its sin:";
    cin >> x;
    cout << endl;
    cout << "Enter a number of first members for calculating sin x:";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++){
        factorial = 2*i - 1;  
        for (int j = 1; j <= factorial; j++){
            numbFact *= j;
        }
        answer += (pow(-1, i-1) * pow(x, 2*i - 1)) / numbFact;
        numbFact = 1;
    }
    cout << "Sin x = " << answer << endl;
}