#pragma once
#include "Parametrs.h"

class toilet
{
private:
	parametrs param_toil; //��������� �������
public:
	//�����������
	toilet();

	//������� ��������� ������ �� �����
	float Get_air_temp_toil();
	float Get_air_hum_toil();
	float Get_conc_co2_toil();
	int Get_brightness_toil();
	int Get_light_toil();
	int Get_vent_speed_toil();

	//������� ������������� �����
	void Set_air_temp_toil(float temp);
	void Set_air_hum_toil(float hum);
	void Set_conc_co2_toil(float co2);
	void Set_brightness_toil(int bright);
	void Set_light_toil(int l);
	void Set_vent_speed_toil(int speed);

	//����������
	~toilet();

	//������������� ������ ������
	void Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed);
	
	//����� ���������� ������� �� �����
	void OutToil();
};

/*void air_temp_toil(toilet toil1, float t); //������� �������� ����������� ������� � �������
void air_hum_toil(toilet toil1,float hum); //������� ��������� ��������� ������� � �������
void conc_co2_toil(toilet toil1,float co2); //������� ��������� ������������ CO2 � �������
void brightness_toil(toilet toil1,int bright); //������� ��������� ������� � �������
void light_toil(toilet toil1); //������� ���������/���������� ����� � �������
void vent_speed_toil(toilet toil1,int speed); //������� ��������� �������� ���������� � �������*/
void menu_toil(); // ������� ������ ���� ���������� ��� �������