#include "Kitchen.h"

void coffee_machine(kitchen kitch1) //������� ������������� ����
{
    if (kitch1.coffee)
    {
        cout << "���� ���������..." << endl;
        Sleep(5000);
        cout << "���� �����!" << endl;
    }
}

void air_temp_kitch(kitchen kitch1, float t) //������� �������� ����������� ������� �� �����
{
    kitch1.param_kitch.air_temp = t;
    cout << "����������� ������� �� ����� ����� �������� �� " << kitch1.param_kitch.air_temp << " ��" << endl;
}

void air_hum_kitch(kitchen kitch1, float hum) //������� �������� ��������� ������� �� �����
{
    kitch1.param_kitch.air_hum = hum;
    cout << "��������� ������� �� ����� ����� �������� �� " << kitch1.param_kitch.air_hum << "%" << endl;
}

void conc_co2_kitch(kitchen kitch1, float co2) //������� ��������� ������������ co2 �� �����
{
    kitch1.param_kitch.conc_co2 = co2;
    cout << "������������ CO2 �� ����� ����� �������� �� " << kitch1.param_kitch.conc_co2 << "%" << endl;
}

void brightness_kitch(kitchen kitch1, int bright) //������� ��������� ������� �� �����
{
    kitch1.param_kitch.brightness = bright;
    cout << "������� ����� �� ����� ����� �������� �� " << kitch1.param_kitch.brightness << "%" << endl;
}

void light_kitch(kitchen kitch1) //������� ���������/���������� ����� �� �����
{
    if (kitch1.param_kitch.light)
        cout << "���� �� ����� �������" << endl;
    else
        cout << "���� �� ����� ��������" << endl;
}

void vent_speed_kitch(kitchen kitch1, int speed) //������� ��������� �������� ���������� �� �����
{
    kitch1.param_kitch.vent_speed = speed;
    cout << "�������� ���������� �� ����� ����� �������� �� " << kitch1.param_kitch.vent_speed << "%" << endl;
}

void menu_kitch() // ������� ������ ���� ���������� ��� �������
{
    cout << "1. ����������� �������" << endl
        << "2. ��������� �������" << endl
        << "3. ������������ CO2" << endl
        << "4. ������� �����" << endl
        << "5. ���������/���������� �����" << endl
        << "6. �������� ����������" << endl
        << "7. ������������� ����" << endl
        << "��������� �����: ";
}