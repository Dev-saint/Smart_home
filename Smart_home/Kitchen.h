#pragma once
#include "Toilet.h"

class kitchen
{
private:
    int coffee; //������������� ���� ����� ���
    parametrs* param_kitch = new parametrs();

public:
	//�����������
	kitchen();

	// ����������� � ����� ����������
	kitchen(float temp);

	//����������� � �����������
	kitchen(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	// ����������� �����
	kitchen(kitchen& Class);

	// ���������� ������� ������������
	kitchen& operator=(kitchen& Class);

	//������� ��������� ������ �� �����
	float Get_air_temp_kitch();
	float Get_air_hum_kitch();
	float Get_conc_co2_kitch();
	int Get_brightness_kitch();
	int Get_light_kitch();
	int Get_vent_speed_kitch();
	int Get_coffee();

	//������� ������������� �����
	void Set_air_temp_kitch(float temp);
	void Set_air_hum_kitch(float hum);
	void Set_conc_co2_kitch(float co2);
	void Set_brightness_kitch(int bright);
	void Set_light_kitch(int l);
	void Set_vent_speed_kitch(int speed);
	void Set_coffee(int cof);
	void Set_array(parametrs* param_arr);

	//����������
	~kitchen();

	//������������� ������ �����
	void Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	//����� ���������� ����� �� �����
	void DisplayKitch();

	void coffee_machine(); //������� ������������� ����

	//������������� ������� ������� ���������� ������� toilet, kitchen, bedroom, bathroom
	friend void temp_set_all(toilet& toil, kitchen& kitch, bedroom& bed, bathroom& bath, float temp);
};

void menu_kitch(); // ������� ������ ���� ���������� ��� �����