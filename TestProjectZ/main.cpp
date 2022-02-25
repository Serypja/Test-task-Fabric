#include<iostream>
#include<string>
#include"Transport.h"
#include"Creatora.h"
using namespace std;

void StartProg(Creator& cl) {
    cl.DefaulTransport();//������ � ��������� ����������
    cl.GetInfoTransp(); //����� ������ ���������� �� �����
}


int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    MotorcycleC MotC;
    Kick_ScooterC KSC;
    CarC CC;
    BusC BC;

    string* a = new string[argc];
    if (argc > 1) {
        for (int i = 0; i < argc; i++)
        {
            //cout << "argv[:" << i << "] = " << endl;  ======= �������� ������ � �������
            cout << argv[i] << endl; //======= �������� ������ � �������

            switch (stoi(argv[i]))
            {
            case 0:
                StartProg(MotC);
                break;
            case 1:
                StartProg(KSC);
                break;
            case 2:
                StartProg(CC);
                break;
            case 3:
                StartProg(BC);
                break;
            default:
                cout << "����������� ��� ����������." << endl;
                break;
            }
        }
    }
    
    delete[] a;
    system("pause");

    return 0;
}