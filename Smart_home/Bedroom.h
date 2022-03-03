#pragma once
#include "Parametrs.h"
#include "Kitchen.h"

struct bedroom
{
	parametrs param_bed;
};

void air_temp_bed(bedroom bed1,float t); //������� �������� ����������� ������� � �������
void air_hum_bed(bedroom bed1,float hum); //������� ��������� ��������� ������� � �������
void conc_co2_bed(bedroom bed1,float co2); //������� ��������� ������������ CO2 � �������
void brightness_bed(bedroom bed1,int bright); //������� ��������� ������� � �������
void light_bed(bedroom bed1); //������� ���������/���������� ����� � �������
void vent_speed_bed(bedroom bed1,int speed); //������� ��������� �������� ���������� � �������
void menu_bed(); // ������� ������ ���� ���������� ��� �������