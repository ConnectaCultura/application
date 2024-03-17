#include "pch.h"
#include "TxConsultaEntitats.h"

TxConsultaEntitats::TxConsultaEntitats() 
{
	Sessio& se = Sessio::getInstance();
	PassarellaUsuari u = Sessio.ObteUsuari();
	_ajuntamentPrincipal = u.AjuntamentPrincipal;
}

void TxConsultaEntitats::executar()
{
	//codi del ChatGPT, no fer cas
	System::String^ connectionString = ConfigurationManager.ConnectionStrings["MySQLConnectionString"].ConnectionString;
	using (MySqlConnection connection = new MySqlConnection(connectionString))
	{
		string query = "SELECT nom, descripcio, tipus FROM Entitat";

		using (MySqlCommand command = new MySqlCommand(query, connection))
		{
			connection.Open();
			using (MySqlDataReader reader = command.ExecuteReader())
			{
				while (reader.Read())
				{
					Entitat entitat = new Entitat
					{
						Nom = reader["nom"].ToString(),
						Descripcio = reader["descripcio"].ToString(),
						Tipus = reader["tipus"].ToString()
					};
					llistaEntitats.Add(entitat);
				}
			}
		}
	}
}

array TxConsultaEntitats::ObteResultat()
{
	return _llistaEntitats;
}