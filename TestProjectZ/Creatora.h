#pragma once
#include<iostream>
#include<string>
#include"Transport.h"
using namespace std;

// Класс для возращения класса Tranport
class Creator {
public:
    virtual ~Creator() { delete tranport; };
    virtual Tranport* GetInfoTransport() const = 0;
    virtual void DefaulTransport() = 0;
    virtual void GetInfoTransp() = 0;

    void GetSomeOperatir() { // Метод для вывода информации обьекта на экран
        tranport->GetObjectMachine();
    }

    void SetSomeOperatir() { // метод который создаёт и заполняет дефолтными значениями
        tranport = this->GetInfoTransport(); // Создание объекта и зануление переменных
        tranport->SetObgectTranport(); // Объявление дефолтными переменными объекта
    }

private:
    Tranport* tranport;
};



// как я понял эти классы должны реализовывать скрытый функцианал других классов
//(данный класс реализовать класс Motorcycle)
//И вся работа с классами ведётся тута). Но я с патернами знаком на уровне знания слова и для чего они нужны, так что ¯\_(ツ)_/¯
class MotorcycleC : public Creator {
public:
    void DefaulTransport() override {
        SetSomeOperatir(); // обращение к методу который создаёт и заполняет дефолтными значениями
    }

    void GetInfoTransp() override {
        GetSomeOperatir(); // обращение к методу для вывода информации обьекта на экран
    }

    Tranport* GetInfoTransport() const override {
        return new Motorcycle(); //Создание обьекта для дальнейшего его присвоения и работе в классе Create
    }
private:

};

class Kick_ScooterC : public Creator {
public:
    void DefaulTransport() {
        SetSomeOperatir();// обращение к методу который создаёт и заполняет дефолтными значениями
    }

    void GetInfoTransp() override {
        GetSomeOperatir();// обращение к методу для вывода информации обьекта на экран
    }

    Tranport* GetInfoTransport() const override {
        return new Kick_Scooter();//Создание обьекта для дальнейшего его присвоения и работе в классе Create
    }
private:

};

class CarC : public Creator {
public:
    void DefaulTransport() {
        SetSomeOperatir();// обращение к методу который создаёт и заполняет дефолтными значениями
    }

    void GetInfoTransp() override {
        GetSomeOperatir();// обращение к методу для вывода информации обьекта на экран
    }

    Tranport* GetInfoTransport() const override {
        return new Car();//Создание обьекта для дальнейшего его присвоения и работе в классе Create
    }
private:

};

class BusC : public Creator {
public:
    void DefaulTransport() {
        SetSomeOperatir();// обращение к методу который создаёт и заполняет дефолтными значениями
    }

    void GetInfoTransp() override {
        GetSomeOperatir();// обращение к методу для вывода информации обьекта на экран
    }

    Tranport* GetInfoTransport() const override {
        return new Bus();//Создание обьекта для дальнейшего его присвоения и работе в классе Create
    }
private:

};

