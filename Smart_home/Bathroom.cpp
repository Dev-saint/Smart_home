#include "Bathroom.h"

void water_bath(bathroom bath1)   //������� ������ ���� � ������
{
    if (bath1.flag_water)
    {
        cout << "������� ����� ���� � ������." << endl;
        Sleep(5000);
        cout << "���� �������!" << endl;
    }
}

void air_temp_bath(bathroom bath1, float t) //������� �������� ����������� ������� � ������
{
    bath1.param_bath.air_temp = t;
    cout << "����������� ������� � ������ ����� �������� �� " << bath1.param_bath.air_temp << " ��" << endl;
}

void air_hum_bath(bathroom bath1, float hum) //������� �������� ��������� ������� � ������
{
    bath1.param_bath.air_hum = hum;
    cout << "��������� ������� � ������ ����� �������� �� " << bath1.param_bath.air_hum << "%" << endl;
}

void conc_co2_bath(bathroom bath1, float co2) //������� ��������� ������������ co2 � ������
{
    bath1.param_bath.conc_co2 = co2;
    cout << "������������ CO2 � ������ ����� �������� �� " << bath1.param_bath.conc_co2 << "%" << endl;
}

void brightness_bath(bathroom bath1, int bright) //������� ��������� ������� � ������
{
    bath1.param_bath.brightness = bright;
    cout << "������� ����� � ������ ����� �������� �� " << bath1.param_bath.brightness << "%" << endl;
}

void light_bath(bathroom bath1) //������� ���������/���������� ����� � ������
{
    if (bath1.param_bath.light)
        cout << "���� � ������ �������" << endl;
    else
        cout << "���� � ������ ��������" << endl;
}

void vent_speed_bath(bathroom bath1, int speed) //������� ��������� �������� ���������� � ������
{
    bath1.param_bath.vent_speed = speed;
    cout << "�������� ���������� � ������ ����� �������� �� " << bath1.param_bath.vent_speed << "%" << endl;
}

void menu_bath() // ������� ������ ���� ���������� ��� ������
{
    cout << "1. ����������� �������" << endl
        << "2. ��������� �������" << endl
        << "3. ������������ CO2" << endl
        << "4. ������� �����" << endl
        << "5. ���������/���������� �����" << endl
        << "6. �������� ����������" << endl
        << "7. ����� ���� � ������" << endl
        << "��������� �����: ";
}