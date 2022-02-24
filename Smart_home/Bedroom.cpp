#include "Bedroom.h"

void air_temp_bed(bedroom bed1, float t) //������� �������� ����������� ������� � �������
{
    bed1.param_bed.air_temp = t;
    cout << "����������� ������� � ������� ����� �������� �� " << bed1.param_bed.air_temp << " ��" << endl;
}

void air_hum_bed(bedroom bed1, float hum) //������� �������� ��������� ������� � �������
{
    bed1.param_bed.air_hum = hum;
    cout << "��������� ������� � ������� ����� �������� �� " << bed1.param_bed.air_hum << "%" << endl;
}

void conc_co2_bed(bedroom bed1, float co2) //������� ��������� ������������ co2 � �������
{
    bed1.param_bed.conc_co2 = co2;
    cout << "������������ CO2 � ������ ����� �������� �� " << bed1.param_bed.conc_co2 << "%" << endl;
}

void brightness_bed(bedroom bed1, int bright) //������� ��������� ������� � �������
{
    bed1.param_bed.brightness = bright;
    cout << "������� ����� � ������� ����� �������� �� " << bed1.param_bed.brightness << "%" << endl;
}

void light_bed(bedroom bed1) //������� ���������/���������� ����� � �������
{
    if (bed1.param_bed.light)
        cout << "���� � ������� �������" << endl;
    else
        cout << "���� � ������� ��������" << endl;
}

void vent_speed_bed(bedroom bed1, int speed) //������� ��������� �������� ���������� � �������
{
    bed1.param_bed.vent_speed = speed;
    cout << "�������� ���������� � ������� ����� �������� �� " << bed1.param_bed.vent_speed << "%" << endl;
}

void menu_bed() // ������� ������ ���� ���������� ��� �������
{
    cout << "1. ����������� �������" << endl
        << "2. ��������� �������" << endl
        << "3. ������������ CO2" << endl
        << "4. ������� �����" << endl
        << "5. ���������/���������� �����" << endl
        << "6. �������� ����������" << endl
        << "��������� �����: ";
}