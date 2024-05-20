#include "pch.h"
#include "PassarelaCompra.h"

PassarelaCompra::PassarelaCompra(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, System::String^ preuEntrada, System::String^ quantitat) {
	_correuCiutada = correuCiutada;
	_nomEsdev = nomEsdev;
	_dataInici = dataInici;
	_dataFi = dataFi;
	_preuEntrada = preuEntrada;
	_quantitat = quantitat;
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
System::String^ PassarelaCompra::obtePreu() {
	return _preuEntrada;
}
System::String^ PassarelaCompra::obteQuantitat() {
	return _quantitat;
}

void PassarelaCompra::insereix() {
	System::String^ sql;
	System::DateTime iniciDateTime = System::DateTime::Parse(_dataInici);
	System::DateTime fiDateTime = System::DateTime::Parse(_dataFi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	sql = "INSERT INTO Compra VALUES ('" + _correuCiutada + "' , '" +
			_nomEsdev + "','" + data_inici_sql + "','" + data_fi_sql + "','" + _preuEntrada + "', '" + _quantitat + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaCompra::esborra() {
	System::String^ sql;
	System::DateTime iniciDateTime = System::DateTime::Parse(_dataInici);
	System::DateTime fiDateTime = System::DateTime::Parse(_dataFi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	sql = "DELETE FROM Compra WHERE correuciutada='" + _correuCiutada + "' && nomesdev='" + _nomEsdev + "'&& datainici = '" + data_inici_sql + "'&& datafi ='" + data_fi_sql + "';";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}