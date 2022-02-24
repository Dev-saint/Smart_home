#pragma once
#include "Parametrs.h"
#include "Bedroom.h"

struct bathroom
{
    float water_temp; //����������� ����
    int flag_water; //���� ������ ����
    parametrs param_bath;
};

void water_bath(bathroom bath1); //������� ������ ���� � ������
void air_temp_bath(bathroom bath1,float t); //������� �������� ����������� ������� � ������
void air_hum_bath(bathroom bath1,float hum); //������� ��������� ��������� ������� � ������
void conc_co2_bath(bathroom bath1,float co2); //������� ��������� ������������ CO2 � ������
void brightness_bath(bathroom bath1,int bright); //������� ��������� ������� � ������
void light_bath(bathroom bath1); //������� ���������/���������� ����� � ������
void vent_speed_bath(bathroom bath1,int speed); //������� ��������� �������� ���������� � ������
void menu_bath(); // ������� ������ ���� ���������� ��� ������