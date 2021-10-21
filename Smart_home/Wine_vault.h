#pragma once

void air_temp_wine(int t); //������� �������� ����������� ������� � ������ �������
void air_hum_wine(); //������� ��������� ��������� ������� � ������ �������
void conc_co2_wine(); //������� ��������� ������������ CO2 � ������ �������
void brightness_wine(); //������� ��������� ������� � ������ �������
void light_wine(); //������� ���������/���������� ����� � ������ �������
void vent_speed_wine(); //������� ��������� �������� ���������� � ������ �������

struct wine_vault
{
	float air_temp; //����������� �������
	float air_hum; //��������� �������
	float conc_co2; //������������ CO2
	int brightness; //������� �����
	int light; //���������/���������� �����
	int vent_speed; //�������� ����������
}wine;