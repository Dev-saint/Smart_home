#pragma once

void air_temp_toil(float t); //������� �������� ����������� ������� � �������
void air_hum_toil(float hum); //������� ��������� ��������� ������� � �������
void conc_co2_toil(float co2); //������� ��������� ������������ CO2 � �������
void brightness_toil(int bright); //������� ��������� ������� � �������
void light_toil(); //������� ���������/���������� ����� � �������
void vent_speed_toil(int speed); //������� ��������� �������� ���������� � �������
void menu_toil(); // ������� ������ ���� ���������� ��� �������

struct toilet
{
	float air_temp; //����������� �������
	float air_hum; //��������� �������
	float conc_co2; //������������ CO2
	int brightness; //������� �����
	int light; //���������/���������� �����
	int vent_speed; //�������� ����������
	int flag_flushdwn; //���� ��������������� �����
}toil;