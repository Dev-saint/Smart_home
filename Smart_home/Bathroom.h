#pragma once
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

	//������������� ������� ������� ���������� ������� toilet, kitchen, bedroom, bathroom
	friend void temp_set_all(toilet& toil, kitchen& kitch, bedroom& bed, bathroom& bath, float temp);
};

void menu_bath(); // ������� ������ ���� ���������� ��� ������