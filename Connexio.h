#pragma once
using namespace MySql::Data::MySqlClient;
ref class Connexio
{
public:
	static Connexio^ getInstance() {
		if (instance == nullptr) {
			instance = gcnew Connexio();
		}
		return instance;
	}

	MySqlDataReader^ executar(System::String^ sql);
	void tancarConnexio();


private:
	Connexio() {}
	static Connexio^ instance = nullptr;
	MySqlConnection^ conn;
};