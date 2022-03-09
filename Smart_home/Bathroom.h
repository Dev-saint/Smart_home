#pragma once
//#include "Parametrs.h"
#include "Bedroom.h"

class bathroom
{
private:
    int flag_water; //���� ������ ����
    parametrs param_bath;
public:
	//�����������
	bathroom();

	//������� ��������� ������ �� �����
	float Get_air_temp_bath();
	float Get_air_hum_bath();
	float Get_conc_co2_bath();
	int Get_brightness_bath();
	int Get_light_bath();
	int Get_vent_speed_bath();
	int Get_flag_water();

	//������� ������������� �����
	void Set_air_temp_bath(float temp);
	void Set_air_hum_bath(float hum);
	void Set_conc_co2_bath(float co2);
	void Set_brightness_bath(int bright);
	void Set_light_bath(int l);
	void Set_vent_speed_bath(int speed);
	void Set_flag_water(int water);

	//����������
	~bathroom();

	//������������� ������ ������
	void Set_parametrs_bath(float temp, float hum, float co2, int bright, int l, int speed, int water);

	//����� ���������� ������ �� �����
	void OutBath();

	void water_bath(); //������� ������ ���� � ������
};

/*void air_temp_bath(bathroom bath1, float t); //������� �������� ����������� ������� � ������
void air_hum_bath(bathroom bath1,float hum); //������� ��������� ��������� ������� � ������
void conc_co2_bath(bathroom bath1,float co2); //������� ��������� ������������ CO2 � ������
void brightness_bath(bathroom bath1,int bright); //������� ��������� ������� � ������
void light_bath(bathroom bath1); //������� ���������/���������� ����� � ������
void vent_speed_bath(bathroom bath1,int speed); //������� ��������� �������� ���������� � ������*/
void menu_bath(); // ������� ������ ���� ���������� ��� ������