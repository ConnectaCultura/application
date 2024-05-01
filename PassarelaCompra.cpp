#include "pch.h"
#include "PassarelaCompra.h"

PassarelaCompra::PassarelaCompra(System::String^ dc, PassarelaUsuari^ u/*, PassarelaEsdeveniment e*/) {
	dia_compra = dc;
	usuari = u;
	//esdeveniment = e;
}
void PassarelaCompra::esborra() {
	System::String^ sql = "DELETE FROM Compra WHERE usuari='" + usuari->obteCorreuElectronic() + "' && esdeveniment='"/* + esdeveniment.nom + */";";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}
