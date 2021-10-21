#pragma once

void air_temp_toil(int t); //������� �������� ����������� ������� � �������
void air_hum_toil(); //������� ��������� ��������� ������� � �������
void conc_co2_toil(); //������� ��������� ������������ CO2 � �������
void brightness_toil(); //������� ��������� ������� � �������
void light_toil(); //������� ���������/���������� ����� � �������
void vent_speed_toil(); //������� ��������� �������� ���������� � �������

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