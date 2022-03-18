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
Kitchen::Kitchen()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
    coffee = 0;
}

// ����������� � ����� ����������
Kitchen::Kitchen(float temp) : Parametrs(temp)
{
    /*air_temp = temp;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;*/
    coffee = 0;
}

//����������� � �����������
Kitchen::Kitchen(float temp, float hum, float co2, int bright, int l, int speed, int cof) : Parametrs(temp, hum, co2, bright, l, speed)
{
    /*air_temp = temp;
    air_hum = hum;
    conc_co2 = co2;
    brightness = bright;
    light = l;
    vent_speed = speed;*/
    coffee = cof;
}

//������� ��������� ������ �� �����
/*float Kitchen::Get_air_temp_kitch()
{
    return Get_air_temp();
}

float Kitchen::Get_air_hum_kitch()
{
    return Get_air_hum();
}

float Kitchen::Get_conc_co2_kitch()
{
    return param_kitch->Get_conc_co2();
}

int Kitchen::Get_brightness_kitch()
{
    return param_kitch->Get_brightness();
}

int Kitchen::Get_light_kitch()
{
    return param_kitch->Get_light();
}

int Kitchen::Get_vent_speed_kitch()
{
    return param_kitch->Get_vent_speed();
}*/

int Kitchen::Get_coffee()
{
    return coffee;
}

//������� ������������� �����
/*void Kitchen::Set_air_temp_kitch(float temp)
{
    param_kitch->Set_air_temp(temp);
}

void Kitchen::Set_air_hum_kitch(float hum)
{
    param_kitch->Set_air_hum(hum);
}

void Kitchen::Set_conc_co2_kitch(float co2)
{
    param_kitch->Set_conc_co2(co2);
}

void Kitchen::Set_brightness_kitch(int bright)
{
    param_kitch->Set_brightness(bright);
}

void Kitchen::Set_light_kitch(int l)
{
    param_kitch->Set_light(l);
}

void Kitchen::Set_vent_speed_kitch(int speed)
{
    param_kitch->Set_vent_speed(speed);
}
*/
void Kitchen::Set_coffee(int cof)
{
    coffee = cof;
}

//����������
Kitchen::~Kitchen()
{
}

//������������� ������ �����
/*void Kitchen::Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_kitch->Set_air_temp(temp);
    param_kitch->Set_air_hum(hum);
    param_kitch->Set_conc_co2(co2);
    param_kitch->Set_brightness(bright);
    param_kitch->Set_light(l);
    param_kitch->Set_vent_speed(speed);
    coffee = cof;
}*/

//����� ���������� ����� �� �����
void Kitchen::DisplayKitch()
{
    cout << endl << "���������� ������� �� �����: " << air_temp << " ��" << endl;
    cout << "��������� ������� �� �����: " << air_hum << " %" << endl;
    cout << "������������ CO2 �� �����: " << conc_co2 << " %" << endl;
    cout << "������� ����� �� �����: " << brightness << " %" << endl;
    cout << "������ ����� �� �����: " << light << endl;
    cout << "�������� ���������� �� �����: " << vent_speed << " %" << endl;
    cout << "������ ���� �� �����: " << coffee << endl;
}

void Kitchen::coffee_machine() //������� ������������� ����
{
    if (coffee)
    {
        cout << "���� ���������..." << endl;
        Sleep(5000);
        cout << "���� �����!" << endl;
    }
}

/*// ����������� �����
Kitchen::Kitchen(Kitchen& Class)
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
Kitchen& Kitchen::operator=(Kitchen& Class)
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
}*/
