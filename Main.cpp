#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

char arreglo[9] = {'1','2','3','4','5','6','7','8','9'};
void board();
bool checkWin();


int main(){   
    int position, i;
    int player = 0;
    char mark;


    do{
        board();
        checkWin();
        if(player % 2 == 0){
            cout <<"Ingresa la posicion X en el tablero, Jugador 1: " << endl;
            cin >> position;
            mark = 'X';
        }  
        else{
            cout <<"Ingresa la posicion O en el tablero, Jugador 2: " << endl;
            cin >> position; 
            mark = 'O';
        }
        
    if(position == 1 && arreglo[0] == '1'){
        arreglo[0] = mark;
    }
    else if(position == 2 && arreglo[1] == '2'){
        arreglo[1] = mark;
    }
    else if(position == 3 && arreglo[2] == '3'){
        arreglo[2] = mark;
    }
    else if(position == 4 && arreglo[3] == '4'){
        arreglo[3] = mark;
    }
    else if(position == 5 && arreglo[4] == '5'){
        arreglo[4] = mark;
    }
    else if(position == 6 && arreglo[5] == '6'){
        arreglo[5] = mark;
    }
    else if(position == 7 && arreglo[6] == '7'){
        arreglo[6] = mark;
    }
    else if(position == 8 && arreglo[7] == '8'){
        arreglo[7] = mark;
    }
    else if(position == 9 && arreglo[8] == '9'){
        arreglo[8] = mark;
    }
    else if(arreglo[0] != '1' && arreglo[1] != '2' && arreglo[2] != '3' && arreglo[3] != '4'
            && arreglo[4] != '5' && arreglo[5] != '6' && arreglo[6] != '7' && arreglo[7] != '8'
            && arreglo[8] != '9'){
                cout << "EMPATE" << endl;
                i = -1;
    }
    else{
       cout << "Valor invalido" << endl;
       continue;
    }
    player++;
    if(checkWin() == true){
        if(mark == 'X'){
            cout << "Ganaste jugador 1." << endl;
            break;
        }
        else if(mark == 'O'){
            cout << "Ganaste jugador 2." << endl;
            break;
        }
        else{
            break;
        }
    }
    }while(i != -1);
    board();
 
    
    return 0;
}

void board(){
    cout << arreglo[0] << "|" << arreglo[1] << "|" << arreglo[2] << endl;
    cout << "-" << "|" << "-" << "|" << "-" << endl;
    cout << arreglo[3] << "|" << arreglo[4] << "|" << arreglo[5] << endl;
    cout << "-" << "|" << "-" << "|" << "-" << endl;
    cout << arreglo[6] << "|" << arreglo[7] << "|" << arreglo[8] << endl;
}
bool checkWin(){
    if(arreglo[0] == arreglo[1] && arreglo[1] == arreglo[2]){
        return true;
    }
    else if(arreglo[3] == arreglo[4] && arreglo[4] == arreglo[5]){
         return true;
    }
    else if(arreglo[6] == arreglo[7] && arreglo[7] == arreglo[8]){
        return true;
    }
    else if(arreglo[0] == arreglo[3] && arreglo[3] == arreglo[6]){
        return true;
    }
    else if(arreglo[1] == arreglo[4] && arreglo[4] == arreglo[7]){
        return true;
    }
    else if(arreglo[2] == arreglo[5] && arreglo[5] == arreglo[8]){
       return true;
    }
    else if(arreglo[0] == arreglo[4] && arreglo[4] == arreglo[8]){
        return true;
    }
    else if(arreglo[6] == arreglo[4] && arreglo[4] == arreglo[2]){
        return true;
    }
    else{
        return false;
    }
    
}
