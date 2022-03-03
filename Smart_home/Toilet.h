#pragma once
#include "Parametrs.h"

struct toilet
{
	parametrs param_toil; //��������� �������
};

void air_temp_toil(toilet toil1,float t); //������� �������� ����������� ������� � �������
void air_hum_toil(toilet toil1,float hum); //������� ��������� ��������� ������� � �������
void conc_co2_toil(toilet toil1,float co2); //������� ��������� ������������ CO2 � �������
void brightness_toil(toilet toil1,int bright); //������� ��������� ������� � �������
void light_toil(toilet toil1); //������� ���������/���������� ����� � �������
void vent_speed_toil(toilet toil1,int speed); //������� ��������� �������� ���������� � �������
void menu_toil(); // ������� ������ ���� ���������� ��� �������