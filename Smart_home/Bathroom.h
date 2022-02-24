#pragma once
#include "Parametrs.h"

void water_bath(); //������� ������ ���� � ������
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
    int flag_water; //���� ������ ����
    parametrs param_bath;
}bath;

