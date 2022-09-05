#pragma once
#include <iostream>
#include <string>
#include <vector>

class TransferInDataBase {
public:

	TransferInDataBase() {}

	void Transfer(std::vector<std::string> str) {

		std::string row;
		std::string temp;
		bool flag = false;

		for (int i = 1; i < str.size(); i++) {
			temp = str[i];
			for (int j = 0; j < temp.size(); j++) {

				if (temp[j] != ';') {
					row = row + temp[j];
				}
				else {
					if (j != 0) {
						table.push_back(row);
						row.clear();
					}
					else {
						flag = true;
						break;
					}
				}
			} 
			if (flag != true){
			    table.push_back(row);

				std::string request = "INSERT Info( Month, Year, NameTT, AddressTT, Lvl4, NameTP, Provider, Firma, TurnoverJoke, TurnoverRUB, TurnoverCostPrice, IncomingPrice, PriceOnTheShelf, MarkUp, ShopProfit) VALUES ('"
					+ table[0] + "', '" + table[1] + "', '" + table[2] + "', '" + table[3] + "', '" + table[4] + "', '" + table[5] + "', '"
					+ table[6] + "', '" + table[7] + "', '" + table[8] + "', '" + table[9] + "', '" + table[10] + "', '" + table[11] + "', '" + table[12] + "', '" + table[13] + "', '"
					+ table[14] + "')";
				request_.push_back(request);
				table.clear();
			}
			row.clear();
		}
	}

	std::vector<std::string> GetRequest() {
		return request_;
	}

private:

	std::vector<std::string> table;
	std::vector<std::string> request_;
};
