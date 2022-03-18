#pragma once
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>

using namespace std;

class Parametrs
{
protected:
	float air_temp; //����������� �������
	float air_hum; //��������� �������
	float conc_co2; //������������ CO2
	int brightness; //������� �����
	int light; //���������/���������� �����
	int vent_speed; //�������� ����������

	/*static Parametrs* lastPar;  // ����� ���������� �������� ������
	Parametrs* prev;             // �� ���������� ������� ������
	Parametrs* next;             // �� ��������� ������� ������*/
public:
	//�����������
	Parametrs();

	//����������� � ����� ����������
	Parametrs(float temp);

	//����������� � �����������
	Parametrs(float temp, float hum, float co2, int bright, int l, int speed);

	/*// �������� ����� �� ���������� ��� �����������
	bool IsRightTemp(float temp);

	// �������� ����� �� ���������� ��� ���������
	bool IsRightHum(float hum);

	// �������� ����� �� ���������� ��� ������������ CO2
	bool IsRightCO2(float co2);

	// �������� ����� �� ���������� ��� ������� �����
	bool IsRightBright(int bright);

	// �������� ����� �� ���������� ��� ������ �����
	bool IsRightLight(int l);

	// �������� ����� �� ���������� ��� �������� ����������
	bool IsRightSpeed(int speed);*/

	//������� ��������� ������ �� �����
	float Get_air_temp();
	float Get_air_hum();
	float Get_conc_co2();
	int Get_brightness();
	int Get_light();
	int Get_vent_speed();

	//������� ��������� ������ �� ����� ����� ������
	void Get_air_temp_link(float& temp);
	void Get_air_hum_link(float& hum);
	void Get_conc_co2_link(float& co2);
	void Get_brightness_link(int& bright);
	void Get_light_link(int& l);
	void Get_vent_speed_link(int& speed);

	//����������
	~Parametrs();

	//������� ������������� �����
	void Set_air_temp(float temp);
	void Set_air_hum(float hum);
	void Set_conc_co2(float co2);
	void Set_brightness(int bright);
	void Set_light(int l);
	void Set_vent_speed(int speed);

	// ���� ����������
	virtual void Inp() = 0;

	// ���������� ��������� '+' (Parametrs + float)
	friend Parametrs operator+(const Parametrs& param, float temp);

	// ���������� ����������� ��������� '++'
	Parametrs& operator++();

	// ���������� ������������ ��������� '++'
	Parametrs operator++ (int);

	//������������� ������ ���������
	void Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed);

	/*// ���������� �������� � ����� ������
	void Add(void);

	// ����� �� ������� ����������� ������
	static void reprint(void);
	
	// �������� ������ ������
	void NewList();*/

	//����� ���������� �� �����
	void Display();

	// ��������� ����������� �� 5 ��������
	float Temp_up();

	// �������� ���������� �����������, �������������� � �������������
	void Temp_check();
};
