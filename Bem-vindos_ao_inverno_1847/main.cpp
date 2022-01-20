#include <iostream>

using namespace std;
/*
ctrl + d = seleciona o texto onde o cursor estiver
ctrl + shift + L = todas as ocorrências da palavra são selecionadas e recebem um cursor 
*/
int main(int argc, char const *argv[])
{
    int a, b, c;

    cin >> a >> b >> c;

    // Subiu
    if(a<b){
        // Caiu ou constante
        if(b>=c) 
            cout << ":(" << endl;
        // Subiu
        else{
            if((b-a) > (c-b)) // Subiu pouco
                cout << ":(" << endl;
            else              // Subiu muito    (b-a) < (c-b)
                cout << ":)" << endl;
        }
    }
    // Caiu
    else if(a>b){
        // Subiu ou constante
        if(b<=c)
            cout << ":)" << endl;
        // Caiu
        else{
            if((a-b) > (b-c))   // Caiu pouco
                cout << ":)" << endl;
            else                // Caiu muito   (a-b) < (b-c)
                cout << ":(" << endl;
        }
    }
    // Constante    
    else{
        // Subiu
        if(b<c)
            cout << ":)" << endl;
        // Caiu ou constante
        else
            cout << ":(" << endl;
    }

    return 0;
}

/*

    // Desceu do 1º para 2º dia
    if(a>b){
        // Subiu ou constante do 2º para 3º dia
        if(b<=c) cout << ":)";
        // Desceu do 2º para 3º dia
        else{
            primeira_medida = a - b;
            segunda_medida  = b - c;

            if(primeira_medida <= segunda_medida) // Queda alta
                cout << ":(";
            else                               // Queda baixa
                cout << ":)";
        }
    }
    // Constante do 1º para 2º dia
    else if(a==b){
        // Subiu do 2º para 3º dia
        if(b<c) cout << ":)";           // e caso seja constante + constante?
        // Desceu do 2º para 3º dia
        else    cout << ":(";
    }
    // Subiu do 1º para 2º dia ---> a < b
    else{
        cout << "!!!!";
        // Desceu ou constante do 2º para 3º dia
        if(b>=c) cout << "###:(";

        // Subiu do 2º para 3º dia
        else{
            primeira_medida = a - b;
            if(b<c)
                segunda_medida  = b - c;
            else
                segunda_medida  = c - b;


            if(primeira_medida > segunda_medida) // Aumento alto
                cout << ":(";
            else                               // Aumento baixo
                cout << ":)";
        }
    }
*/