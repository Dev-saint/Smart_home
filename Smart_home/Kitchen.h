#pragma once
#include "Toilet.h"

class Kitchen : public Parametrs
{
private:
    int coffee; //������������� ���� ����� ���
    //Parametrs* param_kitch = new Parametrs();

public:
	//�����������
	Kitchen();

	// ����������� � ����� ����������
	Kitchen(float temp);

	//����������� � �����������
	Kitchen(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	// ����������� �����
	//Kitchen(Kitchen& Class);

	// ���������� ������� ������������
	//Kitchen& operator=(Kitchen& Class);

	//������� ��������� ������ �� �����
	/*float Get_air_temp_kitch();
	float Get_air_hum_kitch();
	float Get_conc_co2_kitch();
	int Get_brightness_kitch();
	int Get_light_kitch();
	int Get_vent_speed_kitch();*/
	int Get_coffee();

	//������� ������������� �����
	/*void Set_air_temp_kitch(float temp);
	void Set_air_hum_kitch(float hum);
	void Set_conc_co2_kitch(float co2);
	void Set_brightness_kitch(int bright);
	void Set_light_kitch(int l);
	void Set_vent_speed_kitch(int speed);*/
	void Set_coffee(int cof);
	//void Set_array(Parametrs* param_arr);

	//����������
	~Kitchen();

	/*//������������� ������ �����
	void Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof);*/

	//����� ���������� ����� �� �����
	void DisplayKitch();

	void coffee_machine(); //������� ������������� ����

	/*//������������� ������� ������� ���������� ������� Toilet, Kitchen, Bedroom, Bathroom
	friend void temp_set_all(Toilet& toil, Kitchen& kitch, Bedroom& bed, Bathroom& bath, float temp);*/
};

void menu_kitch(); // ������� ������ ���� ���������� ��� �����