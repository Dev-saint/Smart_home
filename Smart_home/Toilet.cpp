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
Toilet::Toilet()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
}

// ����������� � ����� ����������
Toilet::Toilet(float temp) : Parametrs(temp)
{
    /*air_temp = temp;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;*/
}

//����������� � �����������
Toilet::Toilet(float temp, float hum, float co2, int bright, int l, int speed) : Parametrs(temp, hum, co2, bright, l, speed)
{
    /*air_temp = temp;
    air_hum = hum;
    conc_co2 = co2;
    brightness = bright;
    light = l;
    vent_speed = speed;*/
}

//������� ��������� ������ �� �����
/*float Toilet::Get_air_temp_toil()
{
    return param_toil->Get_air_temp();
}

float Toilet::Get_air_hum_toil()
{
    return param_toil->Get_air_hum();
}

float Toilet::Get_conc_co2_toil()
{
    return param_toil->Get_conc_co2();
}

int Toilet::Get_brightness_toil()
{
    return param_toil->Get_brightness();
}

int Toilet::Get_light_toil()
{
    return param_toil->Get_light();
}

int Toilet::Get_vent_speed_toil()
{
    return param_toil->Get_vent_speed();
}*/

// ������� ��������� ������ �� ����� ����� ���������
/*void Toilet::Get_air_temp_toil_point(float* temp)
{
    *temp = param_toil->Get_air_temp();
}

void Toilet::Get_air_hum_toil_point(float* hum)
{
    *hum = param_toil->Get_air_hum();
}

void Toilet::Get_conc_co2_toil_point(float* co2)
{
    *co2 = param_toil->Get_conc_co2();
}

void Toilet::Get_brightness_toil_point(int* bright)
{
    *bright = param_toil->Get_brightness();
}

void Toilet::Get_light_toil_point(int* l)
{
    *l = param_toil->Get_light();
}

void Toilet::Get_vent_speed_toil_point(int* speed)
{
    *speed = param_toil->Get_vent_speed();
}*/

//������� ������������� �����
/*void Toilet::Set_air_temp_toil(float temp)
{
    param_toil->Set_air_temp(temp);
}

void Toilet::Set_air_hum_toil(float hum)
{
    param_toil->Set_air_hum(hum);
}

void Toilet::Set_conc_co2_toil(float co2)
{
    param_toil->Set_conc_co2(co2);
}

void Toilet::Set_brightness_toil(int bright)
{
    param_toil->Set_brightness(bright);
}

void Toilet::Set_light_toil(int l)
{
    param_toil->Set_light(l);
}

void Toilet::Set_vent_speed_toil(int speed)
{
    param_toil->Set_vent_speed(speed);
}*/

//������������� ������ ������
/*void Toilet::Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_toil->Set_air_temp(temp);
    param_toil->Set_air_hum(hum);
    param_toil->Set_conc_co2(co2);
    param_toil->Set_brightness(bright);
    param_toil->Set_light(l);
    param_toil->Set_vent_speed(speed);
}*/

// ���� ���������� �������
void Toilet::Inp()
{
    cout << "���� ���������� �������:" << endl;
    Parametrs::Inp();

}

//����������
Toilet::~Toilet()
{
}

//����� ���������� ������� �� �����
void Toilet::DisplayToil()
{
    cout << endl << "���������� ������� � �������: " << air_temp << " ��" << endl;
    cout << "��������� ������� � �������: " << air_hum << " %" << endl;
    cout << "������������ CO2 � �������: " << conc_co2 << " %" << endl;
    cout << "������� ����� � �������: " << brightness << " %" << endl;
    cout << "������ ����� � �������: " << light << endl;
    cout << "�������� ���������� � �������: " << vent_speed << " %" << endl;
}

// ��������� ����������� �� 5 ��������
float Toilet::Temp_up()
{
    air_temp -= 5;
    cout << "���������� �� 5 ��������" << endl;
    return air_temp;
}

// ���������� ��������� '=' (Toilet = Parametrs)
Toilet& Toilet::operator=(Parametrs& parametrs)
{
    this->air_temp = parametrs.Get_air_temp();
    this->air_hum = parametrs.Get_air_hum();
    this->conc_co2 = parametrs.Get_conc_co2();
    this->brightness = parametrs.Get_brightness();
    this->light = parametrs.Get_light();
    this->vent_speed = parametrs.Get_vent_speed();

    return *this;
}

// ���������� �������� ��������� <<
std::ostream& operator<< (std::ostream& out, const Toilet& toilet)
{
    // ��������� operator<< �������� ������ ������ Toilet, �� �� ����� ������ ������ � ������ Toilet
    out << endl << "���������� ������� � �������: " << toilet.air_temp << " ��" << endl;
    out << "��������� ������� � �������: " << toilet.air_hum << " %" << endl;
    out << "������������ CO2 � �������: " << toilet.conc_co2 << " %" << endl;
    out << "������� ����� � �������: " << toilet.brightness << " %" << endl;
    out << "������ ����� � �������: " << toilet.light << endl;
    out << "�������� ���������� � �������: " << toilet.vent_speed << " %" << endl;

    return out;
}