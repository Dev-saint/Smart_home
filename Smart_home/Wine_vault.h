#pragma once
#include "Bathroom.h"

class Wine_vault : public Parametrs
{
private:
	//Parametrs param_wine;
public:
	//�����������
	Wine_vault();

	// ����������� � ����� ����������
	Wine_vault(float temp);

	//����������� � �����������
	Wine_vault(float temp, float hum, float co2, int bright, int l, int speed);

	/*//������� ��������� ������ �� �����
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
	void Set_vent_speed_wine(int speed);*/

	//����������
	~Wine_vault();

	/*//������������� ������ ������ ������
	void Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed);*/

	//����� ���������� ������� ������� �� �����
	void DisplayWine();
};

void menu_wine(); // ������� ������ ���� ���������� ��� ������� �������