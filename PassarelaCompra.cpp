#include "pch.h"
#include "PassarelaCompra.h"

PassarelaCompra::PassarelaCompra(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, System::String^ preuEntrada) {
	_correuCiutada = correuCiutada;
	_nomEsdev = nomEsdev;
	_dataInici = dataInici;
	_dataFi = dataFi;
	_preuEntrada = preuEntrada;
}


System::String^ PassarelaCompra::obtePreu() {
	return _preuEntrada;
}
System::String^ PassarelaCompra::obteNomEsdev() {
	return _nomEsdev;
}
System::String^ PassarelaCompra::obteCorreuCiutada() {
	return _correuCiutada;
}
System::String^ PassarelaCompra::obteDataInici() {
	return _dataInici;
}
System::String^ PassarelaCompra::obteDataFi() {
	return _dataFi;
} 
//

void PassarelaCompra::insereix() {
	System::String^ sql;
	System::DateTime iniciDateTime = System::DateTime::Parse(_dataInici);
	System::DateTime fiDateTime = System::DateTime::Parse(_dataFi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	if (_preuEntrada == "0") {
		sql = "INSERT INTO Compra VALUES ('" + _correuCiutada + "' , '" +
			_nomEsdev + "','" + data_inici_sql + "','" + data_fi_sql + "',NULL)";
	}
	else {
		sql = "INSERT INTO Compra VALUES ('" + _correuCiutada + "' , '" +
			_nomEsdev + "','" + data_inici_sql + "','" + data_fi_sql + "','" + _preuEntrada + "')";
	}
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaCompra::esborra() {
	System::String^ dia = _dataInici->Substring(0, 2);
	System::String^ mes = _dataInici->Substring(3, 2);
	System::String^ año = _dataInici->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ iniciMySQL = año + "-" + mes + "-" + dia + " 00:00:00";

	System::String^ _dia = _dataFi->Substring(0, 2);
	System::String^ _mes = _dataFi->Substring(3, 2);
	System::String^ _año = _dataFi->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ fiMySQL = _año + "-" + _mes + "-" + _dia + " 00:00:00";

	System::String^ sql = "DELETE FROM Compra WHERE correuciutada='" + _correuCiutada + "' && nomesdev='" + _nomEsdev + "'&& datainici = '" + iniciMySQL + "'&& datafi ='" + fiMySQL + "';";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}
