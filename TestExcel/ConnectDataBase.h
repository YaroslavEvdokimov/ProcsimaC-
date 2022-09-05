#pragma once

#include <iostream>
#include <conio.h>
#include <stdlib.h>

//using namespace System;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;
//using namespace MySql::Data::MySqlClient;
//
//class ConnectDBMySql {
//public:
//	ConnectDBMySql() {
//
//		MySqlConnection^ conDataBase = gcnew MySqlConnection("datasource = 127.0.0.1; port = 3306; username = root; password = 12345; database=databaseanalytics");
//		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM insurance_company.insurance_life", conDataBase);
//		MySqlDataReader^ myReader;
//
//		try {
//			conDataBase->Open();
//			//myReader = cmdDataBase->ExecuteReader();
//
//			/*while (myReader->Read()) {
//				dataGridView1->Rows->Add(myReader["id"], myReader["Name"], myReader["SecondName"],
//					myReader["SurName"], myReader["Gender"], myReader["DataBrith"], myReader["PlaceResidece"],
//					myReader["PhoneNumber"], myReader["DateInsurance"], myReader["insuranceEndDate"]);
//			}*/
//		}
//		catch (Exception^ ex) {
//			MessageBox::Show(ex->Message);
//		}
//	}
//
//
//
//private:
//
//};


//class ConnectDBMySql {
//public:
//	ConnectDBMySql() {
//		connect = mysql_init(connect); //Инициализация
//		if (connect == NULL) {
//			//Massage box
//			exit(1);
//		}
//
//		if (!mysql_real_connect(connect, "3306", "root", "12345", "databaseanalystics", 0 , NULL,0)) {
//			//Massage box
//			exit(1);
//		}
//	}
//
//	MYSQL* GetDataBase() {
//		return connect;
//	}
//
//	~ConnectDBMySql() {
//		mysql_close(connect); // Закрываем соединение
//	}
//
//private:
//	MYSQL* connect;
//};