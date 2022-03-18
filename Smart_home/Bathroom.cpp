#include "Bathroom.h"

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
Bathroom::Bathroom()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
    flag_water = 0;
}

// ����������� � ����� ����������
Bathroom::Bathroom(float temp) : Parametrs(temp)
{
    //param_bath.Set_parametrs(temp, 0, 0, 0, 0, 0);
    flag_water = 0;
}

//����������� � �����������
Bathroom::Bathroom(float temp, float hum, float co2, int bright, int l, int speed, int water) : Parametrs(temp, hum, co2, bright, l, speed)
{
    //param_bath.Set_parametrs(temp, hum, co2, bright, l, speed);
    flag_water = water;
}

//������� ��������� ������ �� �����
/*float Bathroom::Get_air_temp_bath()
{
    return param_bath.Get_air_temp();
}

float Bathroom::Get_air_hum_bath()
{
    return param_bath.Get_air_hum();
}

float Bathroom::Get_conc_co2_bath()
{
    return param_bath.Get_conc_co2();
}

int Bathroom::Get_brightness_bath()
{
    return param_bath.Get_brightness();
}

int Bathroom::Get_light_bath()
{
    return param_bath.Get_light();
}

int Bathroom::Get_vent_speed_bath()
{
    return param_bath.Get_vent_speed();
}*/

int Bathroom::Get_flag_water()
{
    return this->flag_water;
}

//������� ������������� �����
/*void Bathroom::Set_air_temp_bath(float temp)
{
    param_bath.Set_air_temp(temp);
}

void Bathroom::Set_air_hum_bath(float hum)
{
    param_bath.Set_air_hum(hum);
}

void Bathroom::Set_conc_co2_bath(float co2)
{
    param_bath.Set_conc_co2(co2);
}

void Bathroom::Set_brightness_bath(int bright)
{
    param_bath.Set_brightness(bright);
}

void Bathroom::Set_light_bath(int l)
{
    param_bath.Set_light(l);
}

void Bathroom::Set_vent_speed_bath(int speed)
{
    param_bath.Set_vent_speed(speed);
}*/

void Bathroom::Set_flag_water(int water)
{
    flag_water = water;
}

//����������
Bathroom::~Bathroom()
{
}

/*//������������� ������ ������
void Bathroom::Set_parametrs_bath(float temp, float hum, float co2, int bright, int l, int speed, int water)
{
    param_bath.Set_air_temp(temp);
    param_bath.Set_air_hum(hum);
    param_bath.Set_conc_co2(co2);
    param_bath.Set_brightness(bright);
    param_bath.Set_light(l);
    param_bath.Set_vent_speed(speed);
    flag_water = water;
}*/

//����� ���������� ������ �� �����
void Bathroom::DisplayBath()
{
    cout << endl << "���������� ������� � ������: " << air_temp << " ��" << endl;
    cout << "��������� ������� � ������: " << air_hum << " %" << endl;
    cout << "������������ CO2 � ������: " << conc_co2 << " %" << endl;
    cout << "������� ����� � ������: " << brightness << " %" << endl;
    cout << "������ ����� � ������: " << light << endl;
    cout << "�������� ���������� � ������: " << vent_speed << " %" << endl;
    cout << "������ ������ ���� � ������: " << flag_water << endl;
}

void Bathroom::water_bath()   //������� ������ ���� � ������
{
    if (flag_water)
    {
        cout << "������� ����� ���� � ������." << endl;
        Sleep(5000);
        cout << "���� �������!" << endl;
    }
}

/*//������������� ������� ������� ���������� ������� Toilet, Kitchen, Bedroom, Bathroom
void temp_set_all(Toilet& toil, Kitchen& kitch, Bedroom& bed, Bathroom& bath, float temp)
{
    toil.param_toil->Set_air_temp(temp);
    kitch.param_kitch->Set_air_temp(temp);
    bed.param_bed.Set_air_temp(temp);
    bath.param_bath.Set_air_temp(temp);
}*/