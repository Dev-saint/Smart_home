#pragma once

void air_temp_wine(float t); //������� �������� ����������� ������� � ������ �������
void air_temp_wine_control(float t); //������� �������� ����������� � ������ �������
void air_hum_wine(float hum); //������� ��������� ��������� ������� � ������ �������
void conc_co2_wine(float co2); //������� ��������� ������������ CO2 � ������ �������
void brightness_wine(int bright); //������� ��������� ������� � ������ �������
void light_wine(); //������� ���������/���������� ����� � ������ �������
void vent_speed_wine(int speed); //������� ��������� �������� ���������� � ������ �������
void menu_wine(); // ������� ������ ���� ���������� ��� ������� �������

struct wine_vault
{
	float air_temp; //����������� �������
	float air_hum; //��������� �������
	float conc_co2; //������������ CO2
	int brightness; //������� �����
	int light; //���������/���������� �����
	int vent_speed; //�������� ����������
}wine;