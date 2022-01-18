#include <iostream>

using namespace std;

/*  Dada duas entradas apresentar o quociente e resto da divisão */
int main(int argc, char const *argv[])
{
    int a, b, q, r, b2, f;

    cin >> a >> b;

    if (a < 0){
        b2 = b;
        if (b < 0) b2 = b * -1; // b2 = -b também funcionaria

        for (r = 0; r < b2; r++){
            f = a - r;
            if(f % b == 0) break;
        }
        q = f/b;
    }
    else{
        q = a/b;
        r = a%b;

    }

    cout << q << " " << r << endl;
    return 0;
}