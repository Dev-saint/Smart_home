#include "Kitchen.h"

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

//�����������
kitchen::kitchen()
{
    param_kitch->Set_parametrs(0, 0, 0, 0, 0, 0);
    coffee = 0;
}

// ����������� � ����� ����������
kitchen::kitchen(float temp)
{
    param_kitch->Set_parametrs(temp, 0, 0, 0, 0, 0);
    coffee = 0;
}

//����������� � �����������
kitchen::kitchen(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_kitch->Set_parametrs(temp, hum, co2, bright, l, speed);
    coffee = cof;
}

//������� ��������� ������ �� �����
float kitchen::Get_air_temp_kitch()
{
    return param_kitch->Get_air_temp();
}

float kitchen::Get_air_hum_kitch()
{
    return param_kitch->Get_air_hum();
}

float kitchen::Get_conc_co2_kitch()
{
    return param_kitch->Get_conc_co2();
}

int kitchen::Get_brightness_kitch()
{
    return param_kitch->Get_brightness();
}

int kitchen::Get_light_kitch()
{
    return param_kitch->Get_light();
}

int kitchen::Get_vent_speed_kitch()
{
    return param_kitch->Get_vent_speed();
}

int kitchen::Get_coffee()
{
    return coffee;
}

//������� ������������� �����
void kitchen::Set_air_temp_kitch(float temp)
{
    param_kitch->Set_air_temp(temp);
}

void kitchen::Set_air_hum_kitch(float hum)
{
    param_kitch->Set_air_hum(hum);
}

void kitchen::Set_conc_co2_kitch(float co2)
{
    param_kitch->Set_conc_co2(co2);
}

void kitchen::Set_brightness_kitch(int bright)
{
    param_kitch->Set_brightness(bright);
}

void kitchen::Set_light_kitch(int l)
{
    param_kitch->Set_light(l);
}

void kitchen::Set_vent_speed_kitch(int speed)
{
    param_kitch->Set_vent_speed(speed);
}

void kitchen::Set_coffee(int cof)
{
    coffee = cof;
}

//����������
kitchen::~kitchen()
{
}

//������������� ������ �����
void kitchen::Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_kitch->Set_air_temp(temp);
    param_kitch->Set_air_hum(hum);
    param_kitch->Set_conc_co2(co2);
    param_kitch->Set_brightness(bright);
    param_kitch->Set_light(l);
    param_kitch->Set_vent_speed(speed);
    coffee = cof;
}

//����� ���������� ����� �� �����
void kitchen::DisplayKitch()
{
    cout << endl << "���������� ������� �� �����: " << Get_air_temp_kitch() << " ��" << endl;
    cout << "��������� ������� �� �����: " << Get_air_hum_kitch() << " %" << endl;
    cout << "������������ CO2 �� �����: " << Get_conc_co2_kitch() << " %" << endl;
    cout << "������� ����� �� �����: " << Get_brightness_kitch() << " %" << endl;
    cout << "������ ����� �� �����: " << Get_light_kitch() << endl;
    cout << "�������� ���������� �� �����: " << Get_vent_speed_kitch() << " %" << endl;
    cout << "������ ���� �� �����: " << Get_coffee() << endl;
}

void kitchen::coffee_machine() //������� ������������� ����
{
    if (coffee)
    {
        cout << "���� ���������..." << endl;
        Sleep(5000);
        cout << "���� �����!" << endl;
    }
}

// ����������� �����
kitchen::kitchen(kitchen& Class)
{
    // ������������� �����������, �.�. ��� �� ���������
    param_kitch->Set_air_temp(Class.Get_air_temp_kitch());

    // ������������� �����������, �.�. ��� �� ���������
    param_kitch->Set_air_hum(Class.Get_air_hum_kitch());

    // ������������� �����������, �.�. ��� �� ���������
    param_kitch->Set_conc_co2(Class.Get_conc_co2_kitch());

    // ������������� �����������, �.�. ��� �� ���������
    param_kitch->Set_brightness(Class.Get_brightness_kitch());

    // ������������� �����������, �.�. ��� �� ���������
    param_kitch->Set_light(Class.Get_light_kitch());

    // ������������� �����������, �.�. ��� �� ���������
    param_kitch->Set_vent_speed(Class.Get_vent_speed_kitch());

    // ������������� �����������, �.�. ��� �� ���������
    coffee = Class.coffee;
}

// ���������� ������� ������������
kitchen& kitchen::operator=(kitchen& Class)
{
    // �������� �� ����������������
    if (this == &Class)
        return *this;

    param_kitch->Set_air_temp(Class.Get_air_temp_kitch());

    param_kitch->Set_air_hum(Class.Get_air_hum_kitch());

    param_kitch->Set_conc_co2(Class.Get_conc_co2_kitch());

    param_kitch->Set_brightness(Class.Get_brightness_kitch());

    param_kitch->Set_light(Class.Get_light_kitch());

    param_kitch->Set_vent_speed(Class.Get_vent_speed_kitch());

    coffee = Class.coffee;

    return *this;
}
