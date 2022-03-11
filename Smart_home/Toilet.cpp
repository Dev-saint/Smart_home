#include "Toilet.h"

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

//�����������
toilet::toilet()
{
    param_toil.Set_parametrs(0, 0, 0, 0, 0, 0);
}

//������� ��������� ������ �� �����
float toilet::Get_air_temp_toil()
{
    return param_toil.Get_air_temp();
}

float toilet::Get_air_hum_toil()
{
    return param_toil.Get_air_hum();
}

float toilet::Get_conc_co2_toil()
{
    return param_toil.Get_conc_co2();
}

int toilet::Get_brightness_toil()
{
    return param_toil.Get_brightness();
}

int toilet::Get_light_toil()
{
    return param_toil.Get_light();
}

int toilet::Get_vent_speed_toil()
{
    return param_toil.Get_vent_speed();
}

//������� ������������� �����
void toilet::Set_air_temp_toil(float temp)
{
    param_toil.Set_air_temp(temp);
}

void toilet::Set_air_hum_toil(float hum)
{
    param_toil.Set_air_hum(hum);
}

void toilet::Set_conc_co2_toil(float co2)
{
    param_toil.Set_conc_co2(co2);
}

void toilet::Set_brightness_toil(int bright)
{
    param_toil.Set_brightness(bright);
}

void toilet::Set_light_toil(int l)
{
    param_toil.Set_light(l);
}

void toilet::Set_vent_speed_toil(int speed)
{
    param_toil.Set_vent_speed(speed);
}

//������������� ������ ������
void toilet::Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_toil.Set_air_temp(temp);
    param_toil.Set_air_hum(hum);
    param_toil.Set_conc_co2(co2);
    param_toil.Set_brightness(bright);
    param_toil.Set_light(l);
    param_toil.Set_vent_speed(speed);
}

//����������
toilet::~toilet()
{
}

//����� ���������� ������� �� �����
void toilet::OutToil()
{
    cout << endl << "���������� ������� � �������: " << Get_air_temp_toil() << " ��" << endl;
    cout << "��������� ������� � �������: " << Get_air_hum_toil() << " %" << endl;
    cout << "������������ CO2 � �������: " << Get_conc_co2_toil() << " %" << endl;
    cout << "������� ����� � �������: " << Get_brightness_toil() << " %" << endl;
    cout << "������ ����� � �������: " << Get_light_toil() << endl;
    cout << "�������� ���������� � �������: " << Get_vent_speed_toil() << " %" << endl;
}