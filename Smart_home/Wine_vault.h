#pragma once
#include "Parametrs.h"

struct wine_vault
{
	parametrs param_wine;
};

void air_temp_wine(wine_vault wine1,float t); //������� �������� ����������� ������� � ������ �������
void air_hum_wine(wine_vault wine1,float hum); //������� ��������� ��������� ������� � ������ �������
void conc_co2_wine(wine_vault wine1,float co2); //������� ��������� ������������ CO2 � ������ �������
void brightness_wine(wine_vault wine1,int bright); //������� ��������� ������� � ������ �������
void light_wine(wine_vault wine1); //������� ���������/���������� ����� � ������ �������
void vent_speed_wine(wine_vault wine1,int speed); //������� ��������� �������� ���������� � ������ �������
void menu_wine(); // ������� ������ ���� ���������� ��� ������� �������