#include<iostream>

using namespace std;

int main()
{

    int KYLA;
    int K;
    int Y;
    int L;
    int A;
    int Z;
    int H;
    int R;
    int temp1;
    int temp2;
    int temp3;

    system("cls");

    cout    <<  "Halo! Aku adalah program yang menggunakan bermacam operator bitwise ^v^"  <<    endl;
    cout    <<  "Ayo dicoba! Silahkan input nilai ~" <<  endl;
    cout    <<  endl;
    cout    <<  "Masukan nilai K = "; 
    cin     >>  K;
    cout    <<  "Masukan nilai Y = "; 
    cin     >>  Y;
    cout    <<  "Masukan nilai L = "; 
    cin     >>  L;
    cout    <<  "Masukan nilai A = "; 
    cin     >>  A;
    cout    <<  endl;

    cout    <<  "Operator AND (&)";
    KYLA    =   K & Y & L & A;
    cout    <<  "\nHasil dari " <<  K   <<  " & "   <<  Y   <<  " & "   <<  L   <<  " & "   <<  A   <<  " = "   <<  KYLA  <<  endl;
    cout    <<  endl;

    cout    <<  "Operator OR (|)";
    KYLA    =   K | Y | L | A;
    cout    <<  "\nHasil dari " <<  K   <<  " | "   <<  Y   <<  " | "   <<  L   <<  " | "   <<  A   <<  " = "   <<  KYLA  <<  endl;
    cout    <<  endl;

    cout    <<  "Operator XOR (^)";
    KYLA    =   K ^ Y ^ L ^ A;
    cout    <<  "\nHasil dari " <<  K   <<  " ^ "   <<  Y   <<  " ^ "   <<  L   <<  " ^ "   <<  A   <<  " = "   <<  KYLA  <<  endl;
    cout    <<  endl;

    cout    <<  "Silahkan input nilai kamu yang lainnya!";
    cout    <<  endl    <<  endl;

    cout    <<  "Masukkan nilai Z = ";
    cin     >>  Z;
    cout    <<  "Masukkan nilai H = ";
    cin     >>  H;
    cout    <<  "Masukkan nilai R = ";
    cin     >>  R;
    cout    <<  endl;

    cout    <<  "Operator NOT (~)";
    temp1   =   ~Z;
    temp2   =   ~H;
    temp3   =   ~R;
    cout    <<  "\nHasil dari ~" <<  Z   <<  " = "   <<  temp1  <<  endl;
    cout    <<  "Hasil dari ~" <<  H   <<  " = "   <<  temp2  <<  endl;
    cout    <<  "Hasil dari ~" <<  R   <<  " = "   <<  temp3  <<  endl;
    cout    <<  endl;

    cout    <<  "Selesai, dadahh ^o^/ ~";
    cout    <<  endl    <<  endl;
    return 0; 

}