#include "Wine_vault.h"

/*void air_temp_wine(wine_vault wine1, float t) //������� �������� ����������� ������� � ������ �������
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
}*/

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

//�����������
wine_vault::wine_vault()
{
    param_wine.Set_parametrs(0, 0, 0, 0, 0, 0);
}

//������� ��������� ������ �� �����
float wine_vault::Get_air_temp_wine()
{
    return param_wine.Get_air_temp();
}

float wine_vault::Get_air_hum_wine()
{
    return param_wine.Get_air_hum();
}

float wine_vault::Get_conc_co2_wine()
{
    return param_wine.Get_conc_co2();
}

int wine_vault::Get_brightness_wine()
{
    return param_wine.Get_brightness();
}

int wine_vault::Get_light_wine()
{
    return param_wine.Get_light();
}

int wine_vault::Get_vent_speed_wine()
{
    return param_wine.Get_vent_speed();
}

//������� ������������� �����
void wine_vault::Set_air_temp_wine(float temp)
{
    param_wine.Set_air_temp(temp);
}

void wine_vault::Set_air_hum_wine(float hum)
{
    param_wine.Set_air_hum(hum);
}

void wine_vault::Set_conc_co2_wine(float co2)
{
    param_wine.Set_conc_co2(co2);
}

void wine_vault::Set_brightness_wine(int bright)
{
    param_wine.Set_brightness(bright);
}

void wine_vault::Set_light_wine(int l)
{
    param_wine.Set_light(l);
}

void wine_vault::Set_vent_speed_wine(int speed)
{
    param_wine.Set_vent_speed(speed);
}

//����������
wine_vault::~wine_vault()
{
}

//������������� ������ ������ ������
void wine_vault::Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_wine.Set_air_temp(temp);
    param_wine.Set_air_hum(hum);
    param_wine.Set_conc_co2(co2);
    param_wine.Set_brightness(bright);
    param_wine.Set_light(l);
    param_wine.Set_vent_speed(speed);
}

//����� ���������� ������� ������� �� �����
void wine_vault::OutWine()
{
    cout << endl << "���������� ������� � ������ �������: " << Get_air_temp_wine() << " ��" << endl;
    cout << "��������� ������� � ������ �������: " << Get_air_hum_wine() << " %" << endl;
    cout << "������������ CO2 � ������ �������: " << Get_conc_co2_wine() << " %" << endl;
    cout << "������� ����� � ������ �������: " << Get_brightness_wine() << " %" << endl;
    cout << "������ ����� � ������ �������: " << Get_light_wine() << endl;
    cout << "�������� ���������� � ������ �������: " << Get_vent_speed_wine() << " %" << endl;
}