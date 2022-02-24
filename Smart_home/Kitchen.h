#pragma once
#include "Parametrs.h"
#include "Toilet.h"

struct kitchen
{
    int coffee; //������������� ���� ����� ���
    parametrs param_kitch;
};

void air_temp_kitch(kitchen kitch1,float t); //������� �������� ����������� ������� �� �����
void air_hum_kitch(kitchen kitch1,float hum); //������� ��������� ��������� ������� �� �����
void conc_co2_kitch(kitchen kitch1,float co2); //������� ��������� ������������ CO2 �� �����
void brightness_kitch(kitchen kitch1,int bright); //������� ��������� ������� �� �����
void light_kitch(kitchen kitch1); //������� ���������/���������� ����� �� �����
void vent_speed_kitch(kitchen kitch1,int speed); //������� ��������� �������� ���������� �� �����
void coffee_machine(kitchen kitch1); //������� ������������� ����
void menu_kitch(); // ������� ������ ���� ���������� ��� �����

