#pragma once
//#include "Parametrs.h"
#include "Bathroom.h"

class wine_vault
{
private:
	parametrs param_wine;
public:
	//�����������
	wine_vault();

	//������� ��������� ������ �� �����
	float Get_air_temp_wine();
	float Get_air_hum_wine();
	float Get_conc_co2_wine();
	int Get_brightness_wine();
	int Get_light_wine();
	int Get_vent_speed_wine();

	//������� ������������� �����
	void Set_air_temp_wine(float temp);
	void Set_air_hum_wine(float hum);
	void Set_conc_co2_wine(float co2);
	void Set_brightness_wine(int bright);
	void Set_light_wine(int l);
	void Set_vent_speed_wine(int speed);

	//����������
	~wine_vault();

	//������������� ������ ������ ������
	void Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed);

	//����� ���������� ������� ������� �� �����
	void OutWine();
};

/*void air_temp_wine(wine_vault wine1, float t); //������� �������� ����������� ������� � ������ �������
void air_hum_wine(wine_vault wine1,float hum); //������� ��������� ��������� ������� � ������ �������
void conc_co2_wine(wine_vault wine1,float co2); //������� ��������� ������������ CO2 � ������ �������
void brightness_wine(wine_vault wine1,int bright); //������� ��������� ������� � ������ �������
void light_wine(wine_vault wine1); //������� ���������/���������� ����� � ������ �������
void vent_speed_wine(wine_vault wine1,int speed); //������� ��������� �������� ���������� � ������ �������*/
void menu_wine(); // ������� ������ ���� ���������� ��� ������� �������