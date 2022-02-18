#pragma once

void air_temp_bed(float t); //������� �������� ����������� ������� � �������
void air_hum_bed(float hum); //������� ��������� ��������� ������� � �������
void conc_co2_bed(float co2); //������� ��������� ������������ CO2 � �������
void brightness_bed(int bright); //������� ��������� ������� � �������
void light_bed(); //������� ���������/���������� ����� � �������
void vent_speed_bed(int speed); //������� ��������� �������� ���������� � �������
void menu_bed(); // ������� ������ ���� ���������� ��� �������

struct bedroom
{
	float air_temp; //����������� �������
	float air_hum; //��������� �������
	float conc_co2; //������������ CO2
	int brightness; //������� �����
	int vent_speed; //�������� ����������
	int light; //���������/���������� �����
	int flag_sleep; //���� ��� (����������, ��������� �� ����� ��� ���)
}bed;