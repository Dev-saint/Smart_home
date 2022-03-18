#include "Bedroom.h"

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

//�����������
Bedroom::Bedroom()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
}

// ����������� � ����� ����������
Bedroom::Bedroom(float temp) : Parametrs(temp)
{
    //param_bed.Set_parametrs(temp, 0, 0, 0, 0, 0);
}

//����������� � �����������
Bedroom::Bedroom(float temp, float hum, float co2, int bright, int l, int speed) : Parametrs(temp, hum, co2, bright, l, speed)
{
    //param_bed.Set_parametrs(temp, hum, co2, bright, l, speed);
}

/*//������� ��������� ������ �� �����
float Bedroom::Get_air_temp_bed()
{
    return param_bed.Get_air_temp();
}

float Bedroom::Get_air_hum_bed()
{
    return param_bed.Get_air_hum();
}

float Bedroom::Get_conc_co2_bed()
{
    return param_bed.Get_conc_co2();
}

int Bedroom::Get_brightness_bed()
{
    return param_bed.Get_brightness();
}

int Bedroom::Get_light_bed()
{
    return param_bed.Get_light();
}

int Bedroom::Get_vent_speed_bed()
{
    return param_bed.Get_vent_speed();
}

//������� ������������� �����
void Bedroom::Set_air_temp_bed(float temp)
{
    param_bed.Set_air_temp(temp);
}

void Bedroom::Set_air_hum_bed(float hum)
{
    param_bed.Set_air_hum(hum);
}

void Bedroom::Set_conc_co2_bed(float co2)
{
    param_bed.Set_conc_co2(co2);
}

void Bedroom::Set_brightness_bed(int bright)
{
    param_bed.Set_brightness(bright);
}

void Bedroom::Set_light_bed(int l)
{
    param_bed.Set_light(l);
}

void Bedroom::Set_vent_speed_bed(int speed)
{
    param_bed.Set_vent_speed(speed);
}*/

//����������
Bedroom::~Bedroom()
{
}

/*//������������� ������ �������
void Bedroom::Set_parametrs_bed(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_bed.Set_air_temp(temp);
    param_bed.Set_air_hum(hum);
    param_bed.Set_conc_co2(co2);
    param_bed.Set_brightness(bright);
    param_bed.Set_light(l);
    param_bed.Set_vent_speed(speed);
}*/

//����� ���������� ������� �� �����
void Bedroom::DisplayBed()
{
    cout << endl << "���������� ������� � �������: " << air_temp << " ��" << endl;
    cout << "��������� ������� � �������: " << air_hum << " %" << endl;
    cout << "������������ CO2 � �������: " << conc_co2 << " %" << endl;
    cout << "������� ����� � �������: " << brightness << " %" << endl;
    cout << "������ ����� � �������: " << light << endl;
    cout << "�������� ���������� � �������: " << vent_speed << " %" << endl;
}