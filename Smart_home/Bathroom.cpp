#include "Bathroom.h"

/*void water_bath(bathroom bath1)   //������� ������ ���� � ������
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
}*/

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

//�����������
bathroom::bathroom()
{
    param_bath.Set_parametrs(0, 0, 0, 0, 0, 0);
    flag_water = 0;
}

//������� ��������� ������ �� �����
float bathroom::Get_air_temp_bath()
{
    return param_bath.Get_air_temp();
}

float bathroom::Get_air_hum_bath()
{
    return param_bath.Get_air_hum();
}

float bathroom::Get_conc_co2_bath()
{
    return param_bath.Get_conc_co2();
}

int bathroom::Get_brightness_bath()
{
    return param_bath.Get_brightness();
}

int bathroom::Get_light_bath()
{
    return param_bath.Get_light();
}

int bathroom::Get_vent_speed_bath()
{
    return param_bath.Get_vent_speed();
}

int bathroom::Get_flag_water()
{
    return Get_flag_water();
}

//������� ������������� �����
void bathroom::Set_air_temp_bath(float temp)
{
    param_bath.Set_air_temp(temp);
}

void bathroom::Set_air_hum_bath(float hum)
{
    param_bath.Set_air_hum(hum);
}

void bathroom::Set_conc_co2_bath(float co2)
{
    param_bath.Set_conc_co2(co2);
}

void bathroom::Set_brightness_bath(int bright)
{
    param_bath.Set_brightness(bright);
}

void bathroom::Set_light_bath(int l)
{
    param_bath.Set_light(l);
}

void bathroom::Set_vent_speed_bath(int speed)
{
    param_bath.Set_vent_speed(speed);
}

void bathroom::Set_flag_water(int water)
{
    flag_water = water;
}

//����������
bathroom::~bathroom()
{
}

//������������� ������ ������
void bathroom::Set_parametrs_bath(float temp, float hum, float co2, int bright, int l, int speed, int water)
{
    param_bath.Set_air_temp(temp);
    param_bath.Set_air_hum(hum);
    param_bath.Set_conc_co2(co2);
    param_bath.Set_brightness(bright);
    param_bath.Set_light(l);
    param_bath.Set_vent_speed(speed);
    flag_water = water;
}

//����� ���������� ������ �� �����
void bathroom::OutBath()
{
    cout << endl << "���������� ������� � ������: " << Get_air_temp_bath() << " ��" << endl;
    cout << "��������� ������� � ������: " << Get_air_hum_bath() << " %" << endl;
    cout << "������������ CO2 � ������: " << Get_conc_co2_bath() << " %" << endl;
    cout << "������� ����� � ������: " << Get_brightness_bath() << " %" << endl;
    cout << "������ ����� � ������: " << Get_light_bath() << endl;
    cout << "�������� ���������� � ������: " << Get_vent_speed_bath() << " %" << endl;
    cout << "������ ������ ���� � ������: " << Get_flag_water() << endl;
}

void bathroom::water_bath()   //������� ������ ���� � ������
{
    if (flag_water)
    {
        cout << "������� ����� ���� � ������." << endl;
        Sleep(5000);
        cout << "���� �������!" << endl;
    }
}