#pragma once

void air_temp_bed(int t); //������� �������� ����������� ������� � �������
void air_hum_bed(); //������� ��������� ��������� ������� � �������
void conc_co2_bed(); //������� ��������� ������������ CO2 � �������
void brightness_bed(); //������� ��������� ������� � �������
void light_bed(); //������� ���������/���������� ����� � �������
void vent_speed_bed(); //������� ��������� �������� ���������� � �������

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