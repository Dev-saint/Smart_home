#pragma once

void water_bath(); //������� ������ ���� ������������ ����������� � ������
void air_temp_bath(float t); //������� �������� ����������� ������� � ������
void air_hum_bath(float hum); //������� ��������� ��������� ������� � ������
void conc_co2_bath(float co2); //������� ��������� ������������ CO2 � ������
void brightness_bath(int bright); //������� ��������� ������� � ������
void light_bath(); //������� ���������/���������� ����� � ������
void vent_speed_bath(int speed); //������� ��������� �������� ���������� � ������
void menu_bath(); // ������� ������ ���� ���������� ��� ������

struct bathroom
{
    float water_temp; //����������� ����
    float air_temp; //����������� �������
    float air_hum; //��������� �������
    int flag_water; //���� ������ ����
    float conc_co2; //������������ CO2
    int brightness; //������� �����
    int light; //���������/���������� �����
    int vent_speed; //�������� ����������
}bath;

