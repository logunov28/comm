#include <iostream>

using namespace std;
int main() {
	
	setlocale(LC_ALL, "");
	
	float electricity_tax, cold_water_tax, hot_water_tax, canalization_tax;
	int electricity_before, electricity_now, cold_water_before, cold_water_now, hot_water_before, hot_water_now;
	
	// ������
	electricity_tax = 5.82; 
	cold_water_tax = 30.20; 
	hot_water_tax = 257.74;
	canalization_tax = 39.17;
	
	
	// ��������
	cout << "��������� �������� �������������� � ������� ������: ";
	cin >> electricity_before;
	cout << "��������� �������� �������������� ������: ";
	cin >> electricity_now;
	
	cout << "��������� �������� �������� ���� � ������� ������: ";
	cin >> cold_water_before;
	cout << "��������� �������� �������� ���� ������: ";
	cin >> cold_water_now;
	
	cout << "��������� �������� ������� ���� � ������� ������: ";
	cin >> hot_water_before;
	cout << "��������� �������� ������� ���� ������: ";
	cin >> hot_water_now;
	
	// �����
	cout << "\n\n";
	cout << "�� ��������������: ";
	float for_electricity = electricity_tax * (electricity_now - electricity_before);
	cout << for_electricity;
	
	cout << "\n";
	cout << "�� �������� ����: ";
	float for_cold_water = cold_water_tax * (cold_water_now - cold_water_before);
	cout << for_cold_water;
	
	cout << "\n";
	cout << "�� ������� ����: ";
	float for_hot_water = hot_water_tax * (hot_water_now - hot_water_before);
	cout << for_hot_water;
	
	cout << "\n";
	cout << "�� �������������: ";
	float for_canalization = canalization_tax * ((hot_water_now - hot_water_before) + (cold_water_now - cold_water_before));
	cout << for_canalization;
	
	cout << "\n";
	cout << "�����: ";
	float total = for_electricity + for_cold_water + for_hot_water + for_canalization;
	cout << total;
	
	
}
