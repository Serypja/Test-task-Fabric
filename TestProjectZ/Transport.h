#pragma once
#include<iostream>
#include<string>
using namespace std;

class Tranport {
public:
    virtual ~Tranport() {} // ����������� ���������� ��� "����������� ������������"
    virtual void SetObgectTranport() = 0; // ����������� ����� ������� ��������� ���������� ���������� ���������
    virtual void GetObjectMachine() = 0; // ����������� ����� ������� ��������� ���������� � ����������� �������
private:
};

class PropertiesMachises {
public:
    // ����������� ������ ��� ��������� ��������
    PropertiesMachises() {
        this->nameTransport = "0";
        this->maxSpeed = 0; this->recomendedSpeed = 0;
        this->numberOfWeels = 0;
    }
    // ����������� ������ ��� ���������� ���������� ((����� �� ��, ��� ����� ����� ���������� �������� ����� ���������� ��������� �������������)
    PropertiesMachises(string nameTransport, int maxSpeed, int recomendedSpeed, int numberOfWeels) {
        this->nameTransport = nameTransport;
        this->maxSpeed = maxSpeed; this->recomendedSpeed = recomendedSpeed;
        this->numberOfWeels = numberOfWeels;
    }

    ~PropertiesMachises() {

    }
    // ����� ������� ��������� �������� �� ���������� � �������
    string PrintInfo() {
        /*cout << "������������ ����������:" << nameTransport << endl;
        cout << "������������ ��������:" << maxSpeed << endl;
        cout << "��������������� ��������:" << recomendedSpeed << endl;
        cout << "���������� ����:" << numberOfWeels << endl;*/
        return "������������ ����������:" + nameTransport + "\n������������ ��������:" + to_string(maxSpeed) + "\n��������������� ��������:" + to_string(recomendedSpeed) + "\n���������� ����:" + to_string(numberOfWeels) + "\n\n";
    }

private:
    string nameTransport; //������������ ���������� 
    int maxSpeed, recomendedSpeed; // ������������ � ��������������� �������
    int numberOfWeels; //���������� ���� ���)
};


class Motorcycle : public Tranport {
public:

    // �������� ������� �������� (��� �������� = 0;)
    //(����� �� ��, ��� ����� ����� ���������� �������� ����� ���������� ��������� �������������)
    Motorcycle() {
        defaulbike = new PropertiesMachises();
    }
    // ���������� ��������� ��������� ��������
    void SetObgectTranport()  override {
        defaulbike = new PropertiesMachises("��������", 100, 60, 2);
    }
    // ����� ������ ���������� �� ������� �� �����
    void GetObjectMachine() override{
        cout << defaulbike->PrintInfo() << endl;
    }
    // ������������ ������������ ������
    ~Motorcycle() {
        delete defaulbike;
    }

private:
    PropertiesMachises* defaulbike;

};

class Kick_Scooter : public Tranport {
public:

    // �������� ������� ������� (��� �������� = 0;) 
    //(����� �� ��, ��� ����� ����� ���������� �������� ����� ���������� ��������� �������������)
    Kick_Scooter() {
        defaul_kick_scooter = new PropertiesMachises();
    }
    // ���������� �������� ��������� ��������
    void SetObgectTranport() override {
        defaul_kick_scooter = new PropertiesMachises("�������", 40, 20, 2);
    }
    // ����� ������ ���������� �� ������� �� �����
    void GetObjectMachine() override{
        cout << defaul_kick_scooter->PrintInfo() << endl;
    }
    // ������������ ������������ ������
    ~Kick_Scooter() {
        delete defaul_kick_scooter;
    }

private:
    PropertiesMachises* defaul_kick_scooter;


};

class Car :public Tranport {
public:

    // �������� ������� ������ (��� �������� = 0;)
    //(����� �� ��, ��� ����� ����� ���������� �������� ����� ���������� ��������� �������������)
    Car() {
        defaulcar = new PropertiesMachises();
    }
    // ���������� ������ ��������� ��������
    void SetObgectTranport() override {
        defaulcar = new PropertiesMachises("������", 220, 60, 4);
    }
    // ����� ������ ���������� �� ������� �� �����
    void GetObjectMachine() override {
        cout << defaulcar->PrintInfo() << endl;
    }
    // ������������ ������������ ������
    ~Car() {
        delete defaulcar;
    }

private:
    PropertiesMachises* defaulcar;
};

class Bus : public Tranport {
public:
    // �������� ������� ������� (��� �������� = 0;)
    //(����� �� ��, ��� ����� ����� ���������� �������� ����� ���������� ��������� �������������)
    Bus() {
        defaulbus = new PropertiesMachises();
    }
    // ���������� �������� ��������� ��������
    void SetObgectTranport() override {
        defaulbus = new PropertiesMachises("�������", 120, 50, 4);
    }
    // ����� ������ ���������� �� ������� �� �����
    void GetObjectMachine() override {
        cout << defaulbus->PrintInfo() << endl;
    }
    // ������������ ������������ ������
    ~Bus() {
        delete defaulbus;
    }

private:
    PropertiesMachises* defaulbus;
};

