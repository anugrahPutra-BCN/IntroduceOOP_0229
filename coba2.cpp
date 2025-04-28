#include <iostream>
using namespace std;
class persegipanjang
{
     public:
        float panjang;
        float lebar;
        float luas;

        void inputData()
        {
            cout << " input panjang : ";
            cin >> panjang;
            cout << "input lebar : ";
            cin >> lebar;
             
        }
        void menghitungLuas()
        {
        luas = panjang*lebar;
        }
        void outputData(){
        cout << "luas persegi pannjang = "<< luas << endl;
        }
};
        
int main()
{
    persegipanjang per;
    per.inputData();
    per.menghitungLuas();
    per.outputData();
    return 0; 
}