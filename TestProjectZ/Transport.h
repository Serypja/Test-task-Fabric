#pragma once
#include<iostream>
#include<string>
using namespace std;

class Tranport {
public:
    virtual ~Tranport() {} // Виртуальный деструктор для "Ромбовидное наследование"
    virtual void SetObgectTranport() = 0; // Виртуальный метод который заполняет дефолтными значениями транспорт
    virtual void GetObjectMachine() = 0; // Виртуальный метод который возращает информацию о определённом обьекте
private:
};

class PropertiesMachises {
public:
    // Конструктор класса для зануления значений
    PropertiesMachises() {
        this->nameTransport = "0";
        this->maxSpeed = 0; this->recomendedSpeed = 0;
        this->numberOfWeels = 0;
    }
    // Конструктор класса для заполнения значениями ((задел на то, что далее будет реализован алгоритм ввода параметров мотоцикла пользователем)
    PropertiesMachises(string nameTransport, int maxSpeed, int recomendedSpeed, int numberOfWeels) {
        this->nameTransport = nameTransport;
        this->maxSpeed = maxSpeed; this->recomendedSpeed = recomendedSpeed;
        this->numberOfWeels = numberOfWeels;
    }

    ~PropertiesMachises() {

    }
    // Метод который возращает значение об информации о объекте
    string PrintInfo() {
        /*cout << "Наименование транспорта:" << nameTransport << endl;
        cout << "Максимальная скорость:" << maxSpeed << endl;
        cout << "Рекомендованная скорость:" << recomendedSpeed << endl;
        cout << "Количество колёс:" << numberOfWeels << endl;*/
        return "Наименование транспорта:" + nameTransport + "\nМаксимальная скорость:" + to_string(maxSpeed) + "\nРекомендованная скорость:" + to_string(recomendedSpeed) + "\nКоличество колёс:" + to_string(numberOfWeels) + "\n\n";
    }

private:
    string nameTransport; //Наименование транспорта 
    int maxSpeed, recomendedSpeed; // Максимальная и рекомендованная корость
    int numberOfWeels; //Количество колёс ЛОЛ)
};


class Motorcycle : public Tranport {
public:

    // Обьявляю базовый мотоцикл (все значения = 0;)
    //(задел на то, что далее будет реализован алгоритм ввода параметров мотоцикла пользователем)
    Motorcycle() {
        defaulbike = new PropertiesMachises();
    }
    // Присваиваю мотоциклу дефолтные значения
    void SetObgectTranport()  override {
        defaulbike = new PropertiesMachises("Мотоцикл", 100, 60, 2);
    }
    // Метод вывода информации об объекте на экран
    void GetObjectMachine() override{
        cout << defaulbike->PrintInfo() << endl;
    }
    // Освобождение динамической памяти
    ~Motorcycle() {
        delete defaulbike;
    }

private:
    PropertiesMachises* defaulbike;

};

class Kick_Scooter : public Tranport {
public:

    // Обьявляю базовый самокат (все значения = 0;) 
    //(задел на то, что далее будет реализован алгоритм ввода параметров мотоцикла пользователем)
    Kick_Scooter() {
        defaul_kick_scooter = new PropertiesMachises();
    }
    // Присваиваю самокату дефолтные значения
    void SetObgectTranport() override {
        defaul_kick_scooter = new PropertiesMachises("Самокат", 40, 20, 2);
    }
    // Метод вывода информации об объекте на экран
    void GetObjectMachine() override{
        cout << defaul_kick_scooter->PrintInfo() << endl;
    }
    // Освобождение динамической памяти
    ~Kick_Scooter() {
        delete defaul_kick_scooter;
    }

private:
    PropertiesMachises* defaul_kick_scooter;


};

class Car :public Tranport {
public:

    // Обьявляю базовую машину (все значения = 0;)
    //(задел на то, что далее будет реализован алгоритм ввода параметров мотоцикла пользователем)
    Car() {
        defaulcar = new PropertiesMachises();
    }
    // Присваиваю машине дефолтные значения
    void SetObgectTranport() override {
        defaulcar = new PropertiesMachises("Машина", 220, 60, 4);
    }
    // Метод вывода информации об объекте на экран
    void GetObjectMachine() override {
        cout << defaulcar->PrintInfo() << endl;
    }
    // Освобождение динамической памяти
    ~Car() {
        delete defaulcar;
    }

private:
    PropertiesMachises* defaulcar;
};

class Bus : public Tranport {
public:
    // Обьявляю базовый автобус (все значения = 0;)
    //(задел на то, что далее будет реализован алгоритм ввода параметров мотоцикла пользователем)
    Bus() {
        defaulbus = new PropertiesMachises();
    }
    // Присваиваю автобусу дефолтные значения
    void SetObgectTranport() override {
        defaulbus = new PropertiesMachises("Автобус", 120, 50, 4);
    }
    // Метод вывода информации об объекте на экран
    void GetObjectMachine() override {
        cout << defaulbus->PrintInfo() << endl;
    }
    // Освобождение динамической памяти
    ~Bus() {
        delete defaulbus;
    }

private:
    PropertiesMachises* defaulbus;
};

