#include "Wine_vault.h"

void air_temp_wine(wine_vault wine1, float t) //������� �������� ����������� ������� � ������ �������
{
    wine1.param_wine.air_temp = t;
    cout << "����������� ������� � ������ ������� ����� �������� �� " << wine1.param_wine.air_temp << " ��" << endl;
}

void air_hum_wine(wine_vault wine1, float hum) //������� �������� ��������� ������� � ������ �������
{
    wine1.param_wine.air_hum = hum;
    cout << "��������� ������� � ������ ������� ����� �������� �� " << wine1.param_wine.air_hum << "%" << endl;
}

void conc_co2_wine(wine_vault wine1, float co2) //������� ��������� ������������ co2 � ������ �������
{
    wine1.param_wine.conc_co2 = co2;
    cout << "������������ CO2 � ������ ������� ����� �������� �� " << wine1.param_wine.conc_co2 << "%" << endl;
}

void brightness_wine(wine_vault wine1, int bright) //������� ��������� ������� � ������ �������
{
    wine1.param_wine.brightness = bright;
    cout << "������� ����� � ������ ������� ����� �������� �� " << wine1.param_wine.brightness << "%" << endl;
}

void light_wine(wine_vault wine1) //������� ���������/���������� ����� � ������ �������
{
    if (wine1.param_wine.light)
        cout << "���� � ������ ������� �������" << endl;
    else
        cout << "���� � ������ ������� ��������" << endl;
}

void vent_speed_wine(wine_vault wine1, int speed) //������� ��������� �������� ���������� � ������ �������
{
    wine1.param_wine.vent_speed = speed;
    cout << "�������� ���������� � ������ ������� ����� �������� �� " << wine1.param_wine.vent_speed << "%" << endl;
}

void menu_wine() // ������� ������ ���� ���������� ��� ������� �������
{
    cout << "1. ����������� �������" << endl
        << "2. ��������� �������" << endl
        << "3. ������������ CO2" << endl
        << "4. ������� �����" << endl
        << "5. ���������/���������� �����" << endl
        << "6. �������� ����������" << endl
        << "��������� �����: ";
}