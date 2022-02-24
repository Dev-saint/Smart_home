#pragma once
#include "Parametrs.h"

void air_temp_toil(float t); //������� �������� ����������� ������� � �������
void air_hum_toil(float hum); //������� ��������� ��������� ������� � �������
void conc_co2_toil(float co2); //������� ��������� ������������ CO2 � �������
void brightness_toil(int bright); //������� ��������� ������� � �������
void light_toil(); //������� ���������/���������� ����� � �������
void vent_speed_toil(int speed); //������� ��������� �������� ���������� � �������
void menu_toil(); // ������� ������ ���� ���������� ��� �������

struct toilet
{
	parametrs param_toil;
	int flag_flushdwn; //���� ��������������� �����
}toil;