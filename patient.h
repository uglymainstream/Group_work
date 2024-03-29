#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>

using namespace std;

class Patient // Пациент
{
private:
    string first_name; // Имя
    string last_name; // Фамилия
    string diagnosis; // Диагноз или травма
    int status; // статус, если -1 - умер, 0 - лечится, 1 излечился
    int department; // отделение, которому принадлежит, -1 - значит не принаджлежит ни одному отделению
    int time_treat; // время на лечение
    int time_left; // остаток времени, который ему дал бог

public:
    Patient();
    //прототипы, реализация в cpp файле

    //getters (функции получения переменных класса)
    string GetFirstName();
    string GetLastName();
    string GetDiagnosis();
    int GetStatus();
    int GetDepartment();
    int GetTimeTreat();
    int GetTimeLeft();

    //setters (функции изменения переменных класса)
    void SetFirstName(string a);
    void SetLastName(string a);
    void SetDiagnosis(string a);
    void SetStatus(int a);
    void SetDepartment(int a);
    void SetTimeTreat(int a);
    void SetTimeLeft(int a);

    friend ostream& operator << (ostream &out, const Patient &exc);
    friend istream& operator >> (istream &in, Patient &exc);

};

#endif // PATIENT_H
