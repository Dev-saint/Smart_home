#pragma once
#include "Kitchen.h"

class Bedroom : public Parametrs
{
private:
	//Parametrs param_bed;
public:
	//�����������
	Bedroom();

	// ����������� � ����� ����������
	Bedroom(float temp);

	//����������� � �����������
	Bedroom(float temp, float hum, float co2, int bright, int l, int speed);

	/*//������� ��������� ������ �� �����
	float Get_air_temp_bed();
	float Get_air_hum_bed();
	float Get_conc_co2_bed();
	int Get_brightness_bed();
	int Get_light_bed();
	int Get_vent_speed_bed();

	//������� ������������� �����
	void Set_air_temp_bed(float temp);
	void Set_air_hum_bed(float hum);
	void Set_conc_co2_bed(float co2);
	void Set_brightness_bed(int bright);
	void Set_light_bed(int l);
	void Set_vent_speed_bed(int speed);*/

	//����������
	~Bedroom();

	/*//������������� ������ �������
	void Set_parametrs_bed(float temp, float hum, float co2, int bright, int l, int speed, int cof);*/

	//����� ���������� ������� �� �����
	void DisplayBed();

	/*//������������� ������� ������� ���������� ������� Toilet, Kitchen, Bedroom, Bathroom
	friend void temp_set_all(Toilet& toil, Kitchen& kitch, Bedroom& bed, Bathroom& bath, float temp);*/
};

void menu_bed(); // ������� ������ ���� ���������� ��� �������