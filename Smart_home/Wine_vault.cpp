#include "Wine_vault.h"

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
Wine_vault::Wine_vault()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
}

// ����������� � ����� ����������
Wine_vault::Wine_vault(float temp) : Parametrs(temp)
{
    //param_wine.Set_parametrs(temp, 0, 0, 0, 0, 0);
}

//����������� � �����������
Wine_vault::Wine_vault(float temp, float hum, float co2, int bright, int l, int speed) : Parametrs(temp, hum, co2, bright, l, speed)
{
    //param_wine.Set_parametrs(temp, hum, co2, bright, l, speed);
}

/*//������� ��������� ������ �� �����
float Wine_vault::Get_air_temp_wine()
{
    return param_wine.Get_air_temp();
}

float Wine_vault::Get_air_hum_wine()
{
    return param_wine.Get_air_hum();
}

float Wine_vault::Get_conc_co2_wine()
{
    return param_wine.Get_conc_co2();
}

int Wine_vault::Get_brightness_wine()
{
    return param_wine.Get_brightness();
}

int Wine_vault::Get_light_wine()
{
    return param_wine.Get_light();
}

int Wine_vault::Get_vent_speed_wine()
{
    return param_wine.Get_vent_speed();
}

//������� ������������� �����
void Wine_vault::Set_air_temp_wine(float temp)
{
    param_wine.Set_air_temp(temp);
}

void Wine_vault::Set_air_hum_wine(float hum)
{
    param_wine.Set_air_hum(hum);
}

void Wine_vault::Set_conc_co2_wine(float co2)
{
    param_wine.Set_conc_co2(co2);
}

void Wine_vault::Set_brightness_wine(int bright)
{
    param_wine.Set_brightness(bright);
}

void Wine_vault::Set_light_wine(int l)
{
    param_wine.Set_light(l);
}

void Wine_vault::Set_vent_speed_wine(int speed)
{
    param_wine.Set_vent_speed(speed);
}*/

//����������
Wine_vault::~Wine_vault()
{
}

/*//������������� ������ ������ ������
void Wine_vault::Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_wine.Set_air_temp(temp);
    param_wine.Set_air_hum(hum);
    param_wine.Set_conc_co2(co2);
    param_wine.Set_brightness(bright);
    param_wine.Set_light(l);
    param_wine.Set_vent_speed(speed);
}*/

//����� ���������� ������� ������� �� �����
void Wine_vault::DisplayWine()
{
    cout << endl << "���������� ������� � ������ �������: " << air_temp << " ��" << endl;
    cout << "��������� ������� � ������ �������: " << air_hum << " %" << endl;
    cout << "������������ CO2 � ������ �������: " << conc_co2 << " %" << endl;
    cout << "������� ����� � ������ �������: " << brightness << " %" << endl;
    cout << "������ ����� � ������ �������: " << light << endl;
    cout << "�������� ���������� � ������ �������: " << vent_speed << " %" << endl;
}