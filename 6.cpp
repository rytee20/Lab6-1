#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <Windows.h>
#include<iomanip>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char buff[80];
    int m=0, n;
    struct prepod {
        char* lastname;
        char* firstname;
        char* cathedra;
        char* subject;
    };
    cout << "������� ���������� ��������������: "; 
    cin >> n;
    struct prepod* p = new struct prepod[n];
    cout << "������� ������������� 1"  << endl;
    cout << "�������: ";
    gets_s(buff);
    gets_s(buff);
    p[0].lastname = new char[strlen(buff) + 1];
    strcpy(p[0].lastname, buff);
    cout << "���: ";
    gets_s(buff);
    p[0].firstname = new char[strlen(buff) + 1];
    strcpy(p[0].firstname, buff);
    cout << "�������: ";
    gets_s(buff);
    p[0].cathedra = new char[strlen(buff) + 1];
    strcpy(p[0].cathedra, buff);
    cout << "�������: ";
    gets_s(buff);
    p[0].subject = new char[strlen(buff) + 1];
    strcpy(p[0].subject, buff);
    for (int i = 1; i < n; i++) {
        cout << "������� ������������� " << i + 1 << endl;
        cout << "�������: ";
        gets_s(buff);
        p[i].lastname = new char[strlen(buff) + 1];
        strcpy(p[i].lastname, buff);
        cout << "���: ";
        gets_s(buff);
        p[i].firstname = new char[strlen(buff) + 1];
        strcpy(p[i].firstname, buff);
        cout << "�������: ";
        gets_s(buff);
        p[i].cathedra = new char[strlen(buff) + 1];
        strcpy(p[i].cathedra, buff);
        cout << "�������: ";
        gets_s(buff);
        p[i].subject = new char[strlen(buff) + 1];
        strcpy(p[i].subject, buff);
    }
    /*for (int i = 0; i < n; i++) {
        cout << endl << endl << p[i].lastname << endl << p[i].firstname << endl << p[i].cathedra << endl << p[i].subject << endl;
    }*/
    cout << endl << "�������� ������ �������������                            1" << endl;
    cout << "����������� ���������� � ������������� � ��������� ����  2" << endl;
    cout << "����� ��� ��������, ������� ����� ������ �������������   3" << endl;
    cout << "����� ���� �������������� �������� �������               4" << endl;
    cout << "��������� ���������� ���������                           5" << endl;
    cin >> m;
    if (m!=1&&m!=2&&m!=3&&m!=4&&m!=5) cout << "������. ��������� ����: ";
    while (m != 1 && m != 2 && m != 3 && m != 4 && m != 5) cin >> m;
    cout << endl;
    while (m != 5) {
        if (m == 1) {
            n = n + 1;
            cout << "������� ������������� " << n << endl;
            cout << "�������: ";
            gets_s(buff);
            gets_s(buff);
            p[n-1].lastname = new char[strlen(buff) + 1];
            strcpy(p[n - 1].lastname, buff);
            cout << "���: ";
            gets_s(buff);
            p[n - 1].firstname = new char[strlen(buff) + 1];
            strcpy(p[n - 1].firstname, buff);
            cout << "�������: ";
            gets_s(buff);
            p[n - 1].cathedra = new char[strlen(buff) + 1];
            strcpy(p[n - 1].cathedra, buff);
            cout << "�������: ";
            gets_s(buff);
            p[n - 1].subject = new char[strlen(buff) + 1];
            strcpy(p[n - 1].subject, buff);
            /*for (int i = 0; i < n; i++) {
                cout << endl << endl << p[i].lastname << endl << p[i].firstname << endl << p[i].cathedra << endl << p[i].subject << endl;
            }
            cout << endl;*/
        } else
        if (m == 2) {
            int k = 0, k1=0;
            char* ln, * fn;
            cout << "������� ������� �������������: ";
            gets_s(buff);
            gets_s(buff);
            ln = new char[strlen(buff) + 1];
            strcpy(ln, buff);
            cout << "������� ��� �������������: ";
            gets_s(buff);
            fn = new char[strlen(buff) + 1];
            strcpy(fn, buff);
            cout << "����������: " << endl;
            for (int i = 0; i < n; i++) 
                if (strcmp(ln, p[i].lastname) == 0 && strcmp(fn, p[i].firstname)==0) k++;
            if (k == 0) cout << "��� ������ �������������" << endl;
            else {
                cout << setw(10) << "�������" << setw(10) << "���" << setw(10) << "�������" << setw(10) << "�������" << endl;
                for (int i = 0; i < n; i++) {
                    if (strcmp(ln, p[i].lastname) == 0 && strcmp(fn, p[i].firstname) == 0) {
                        k1++;
                        if (k1 == 1) cout << setw(10) << p[i].lastname << setw(10) << p[i].firstname << setw(10) << p[n - 1].cathedra << setw(10) << p[i].subject << endl;
                        else cout << setw(40) << p[i].subject;
                    }
                }
            }
            cout << endl;
        } else
        if (m == 3) {
            int count = 0;
            char* ln, * fn;
            cout << "������� ������� �������������: ";
            gets_s(buff);
            gets_s(buff);
            ln = new char[strlen(buff) + 1];
            strcpy(ln, buff);
            cout << "������� ��� �������������: ";
            gets_s(buff);
            fn = new char[strlen(buff) + 1];
            strcpy(fn, buff);
            cout << "��������:" << endl;
            for (int i = 0; i < n; i++)
                if (strcmp(ln, p[i].lastname) == 0 && strcmp(fn, p[i].firstname) == 0) {
                    cout << p[i].subject << endl;
                    count++;
                }
            if (count == 0) cout << "��� ������ �������������";
        } else
        if (m == 4) {
            string *Names;
            Names = new string[n];
            int count = 0;
            char *c;
            cout << "������� �������: ";
            gets_s(buff);
            gets_s(buff);
            c = new char[strlen(buff) + 1];
            strcpy(c, buff);
            for (int i = 0; i < n; i++)
                if (strcmp(c, p[i].cathedra) == 0) {
                    Names[count] = string() + p[i].lastname + ' ' + p[i].firstname;
                    count++;
                }
            if (count == 0) cout << "��� �������������� ���� �������";
            else {
                for (int i = 0; i < count - 1; i++) {
                    for (int j = i + 1; j < count; j++)
                        if (Names[i] > Names[j]) {
                            swap(Names[i], Names[j]);
                        }
                }
                for (int i = 0; i < count-1; i++) {
                    if (Names[i] == Names[i + 1]) {
                        swap(Names[i + 1], Names[count - 1]);
                        count--;
                    }
                }
                cout << "������������� �������� �������: " << endl;
                for (int i = 0; i < count; i++) cout << Names[i] << endl;
            }
        }
        cout << endl << "�������� ������ �������������                            1" << endl;
        cout << "����������� ���������� � ������������� � ��������� ����  2" << endl;
        cout << "����� ��� ��������, ������� ����� ������ �������������   3" << endl;
        cout << "����� ���� �������������� �������� �������               4" << endl;
        cout << "��������� ���������� ���������                           5" << endl;
        cin >> m;
        if (m!=1&&m!=2&&m!=3&&m!=4&&m!=5) cout << "������. ��������� ����: ";
    while (m != 1 && m != 2 && m != 3 && m != 4 && m != 5) cin >> m;
    }
}