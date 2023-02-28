#include <iostream>
#include <iomanip>
using namespace std;

struct Sinhvien{
    string sothutu;
    double toan;
    double anh;
    double li;
    double tb(){
        return (toan+li+anh)/3;
    }
};

void printdiem(Sinhvien sv1){
    cout << setprecision(2) << fixed << sv1.sothutu << "   " << sv1.toan << "  " << sv1.li << "   " << sv1.anh << endl;
}

int main()
{
    int n;
    cin >> n;
    Sinhvien a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].sothutu >> a[i].toan >> a[i].li >> a[i].anh;
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].toan < a[j].toan) swap(a[i], a[j]);
        }
    }
    for(int i = 0; i < n; i++){
        printdiem(a[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].anh < a[j].anh) swap(a[i], a[j]);
        }
    }
    for(int i = 0; i < n; i++){
        printdiem(a[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].tb() < a[j].tb()) swap(a[i], a[j]);
        }
    }
    for(int i = 0; i < n; i++){
        printdiem(a[i]);
    }


    return 0;
}
