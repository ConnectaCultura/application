#include "pch.h"
#include "PassarelaValoracio.h"
PassarelaValoracio::PassarelaValoracio(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, int puntuacio, System::String^ opinio) {
	_correuCiutada = correuCiutada;
	_nomEsdev = nomEsdev;
	_dataInici = dataInici;
	_dataFi = dataFi;
	_puntuacio = puntuacio;
	_opinio = opinio;
}

void PassarelaValoracio::insereix() {
	System::String^ sql;
	System::DateTime iniciDateTime = System::DateTime::Parse(_dataInici);
	System::DateTime fiDateTime = System::DateTime::Parse(_dataFi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	_opinio = _opinio->Replace("'", "\\'");
	if (_opinio != System::String::Empty) {
		sql = "INSERT INTO Valoracio VALUES ('" + _correuCiutada + "' , '" +
			_nomEsdev + "','" + data_inici_sql + "','" + data_fi_sql + "','" + _puntuacio + "', '" + _opinio + "')";
	}
	else {
		sql = "INSERT INTO Valoracio VALUES ('" + _correuCiutada + "' , '" +
			_nomEsdev + "','" + data_inici_sql + "','" + data_fi_sql + "','" + _puntuacio + "', NULL)";
	}
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}
void PassarelaValoracio::esborra() {
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

System::String^ PassarelaValoracio::obteNomEsdev() {
	return _nomEsdev;
}
System::String^ PassarelaValoracio::obteCorreuCiutada() {
	return _correuCiutada;
}
System::String^ PassarelaValoracio::obteDataInici() {
	return _dataInici;
}
System::String^ PassarelaValoracio::obteDataFi() {
	return _dataFi;
}
int PassarelaValoracio::obtePuntuacio() {
	return _puntuacio;
}
System::String^ PassarelaValoracio::obteOpinio() {
	return _opinio;
}
