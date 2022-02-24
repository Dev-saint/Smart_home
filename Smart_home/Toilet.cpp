#include "Toilet.h"

void air_temp_toil(toilet toil1, float t) //������� �������� ����������� ������� � �������
{
    toil1.param_toil.air_temp = t;
    cout << "����������� ������� � ������� ����� �������� �� " << toil1.param_toil.air_temp << " ��" << endl;
}

void air_hum_toil(toilet toil1, float hum) //������� ��������� ��������� ������� � �������
{
    toil1.param_toil.air_hum = hum;
    cout << "��������� ������� � ������� ����� �������� �� " << toil1.param_toil.air_hum << "%" << endl;
}

void conc_co2_toil(toilet toil1, float co2) //������� ��������� ������������ co2 � �������
{
    toil1.param_toil.conc_co2 = co2;
    cout << "������������ CO2 � ������� ����� �������� �� " << toil1.param_toil.conc_co2 << "%" << endl;
}

void brightness_toil(toilet toil1, int bright) //������� ��������� ������� � �������
{
    toil1.param_toil.brightness = bright;
    cout << "������� ����� � ������� ����� �������� �� " << toil1.param_toil.brightness << "%" << endl;
}

void light_toil(toilet toil1) //������� ���������/���������� ����� � �������
{
    if (toil1.param_toil.light)
        cout << "���� � ������� �������" << endl;
    else
        cout << "���� � ������� ��������" << endl;
}

void vent_speed_toil(toilet toil1, int speed) //������� ��������� �������� ���������� � �������
{
    toil1.param_toil.vent_speed = speed;
    cout << "�������� ���������� � ������� ����� �������� �� " << toil1.param_toil.vent_speed << "%" << endl;
}

void menu_toil() // ������� ������ ���� ���������� ��� �������
{
    cout << "1. ����������� �������" << endl
        << "2. ��������� �������" << endl
        << "3. ������������ CO2" << endl
        << "4. ������� �����" << endl
        << "5. ���������/���������� �����" << endl
        << "6. �������� ����������" << endl
        << "��������� �����: ";
}