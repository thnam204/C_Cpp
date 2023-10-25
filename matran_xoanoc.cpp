#include <bits/stdc++.h>

using namespace std;

char a[200][200];

void printfspiral(char a[200][200], int hang, int cot){
    int dinh = 0, trai = 0;
    int day = hang - 1, phai = cot - 1;
    
    while(dinh <= day && trai <= phai){
        for(int i = trai; i <= phai; ++i){
            cout << a[dinh][i] << " ";
        }
        dinh++;

        for(int i = dinh; i <= day; ++i){
            cout << a[i][phai] << " ";
        }
        phai--;

        if(dinh <= day){
            for(int i = phai; i >= trai; --i){
                cout << a[day][i] << " ";
            }
            day--;
        }

        if(trai <= phai){
            for(int i = day; i >= dinh; --i){
                cout << a[i][trai] << " ";
            }
            trai--;
        }
    }
}

int main(){
    int hang, cot;
    cout << "Nhap so hang: ";
    cin >> hang;
    cout << "Nhap so cot: ";
    cin >> cot;
    cout << "\nNhap ma tran: " << endl;
    for(int i = 0; i < hang; i++)
        for(int j = 0; j <cot; j++){
            cin >> a[i][j];
        }
    printfspiral(a, hang, cot);
}