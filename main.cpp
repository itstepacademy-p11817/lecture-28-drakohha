#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {

	int flag_menu = 0;


	do {
		std::cout << "\n " << "Vvedite nomer zadani9 " << "\n";
		std::cin >> flag_menu;

		switch (flag_menu) {
		case 1: {
			std::cout << "\n" << "Pervoe zadanie: vvedite 4islo " << "\n";
			union my_type_t {
				int int_t;
				unsigned int uint_t;
			};

			union my_type_t num;

			std::cin >> num.uint_t;

			std::cout << "\n" << "Polu4ena9 peremenna9  : " << num.int_t;

			break;
		}
		case 2: {
			int flag_de = 0;
			
			union number_t {
				int number;
				char numbers[4];
			};
			union number_t num;
			std::cout << "\n" << "Zadaca nomer 2:" << "\n";
			do {
				std::cout << "\n" << "Vuberete nomer deistvi9 : " <<"\n" << "1- vvod 4isla" << "\n" << "2 -prosmort vseh baitov " << "\n" << "3- prosmotr vubranogo baita" << "\n" << "4- Vuvod baitov v dvoi4noi i 16-chnoi vide" <<"\n" ;
				std::cin >> flag_de;

				switch (flag_de) {
				case 1: {
					std::cout << "\n" << "Vvedite 4islo : ";
					std::cin >> num.number;
					//std::cout << "\n" << "Vvedinoe 4islo : " << num.number;
					break;

				}
				case 2: {
					std::cout << "\n" << "Baitu 4isla : ";
					for (int i = 0; i < sizeof(num.numbers); i++) {
						std::cout << (int)num.numbers[i];
					}
					break;

				}
				case 3: {
					std::cout << "\n" << "Vubetere kakoi bait prosmotretb 1-4" << "\n";
					int id;
					std::cin >> id;
					std::cout << "\n" << "Vubranui bait : ";
					std::cout << (int)num.numbers[id - 1];
					break;

				}
				case 4: {
					std::cout << "\n" << "Vuvod v  16-noi sisteme : ";
					std::cout << std::hex << num.number;
					std::cout << "\n" << "Vuvod v 2-noi sisteme : ";
					long int num_2[50];
					for (int i = 0; i < sizeof(num.number); i++) {
						num_2[i] = (num.number - i) % 2;
						std::cout << num_2[i];
					}
					break;
				}
				default: {
					break;
				}
				}
			
			
			} while (flag_de != 0);
			
			
			


		}
		case 3: {
			std::cout << "\n" << "Zadaca nomer 3" << "\n";
			union num_t {
				int num;
				bool num_m[4];
			};
			union num_t num;
			int flag_de = 0;
			int id = 0;
			do {
				std::cout << "\n" << "Vuberete nomer deistvi9 : " << "\n" << "1- vvod 4isla" << "\n" << "2 -pos4itatb skolko nulevuh " << "\n" << "3- vuvod info o baitah" << "\n";
				std::cin >> flag_de;

				if (flag_de == 1) {
					std::cout << "\n" << "Vvedite 4islo : ";
					std::cin >> num.num;
				}
				if (flag_de == 2) {
					for (int i = 0; i < sizeof(num.num_m); i++) {
						if ((int)num.num_m[i] == 0) {
							
							id++;
						}
					}
					std::cout << "\n" << "Koli4setvo nulei : " << id;

				}

				if (flag_de == 3) {
					std::cout << "\n" << "Vuvod info o baitah : ";
					for (int i = 0; i < sizeof(num.num_m); i++) {
						if ((int)num.num_m[i] == 0) {
							std::cout << " False ";

						}
						else{
							std::cout << " True ";
						}
					}
				}



			} while (flag_de != 0);


		}

		case 4: {
			enum color_t{red=1,blue,yelloy};
			enum model_t{ferari=1,bmv,audi};
			union nomber_t {
				int number;
				char n[8];
			};

			struct my_mh {
				color_t color;
				model_t model;
				union nomber_t number;
			};

			struct my_mh s[10];
			int flag_de = 0;
			int id = 0;
			int id_2 = 0;
			int id_3 = 0;
			std::cout << "\n" << "zadaca nomer 4 (a i b) :" << "\n";
			do {
				std::cout << "\n" << "Vvedite nomer deistvi9 1- vvod 2- vivod dannuih ,3-redact,4-poisk ";
				std::cin >> flag_de;

				if (flag_de == 1) {
					std::cout << "\n" << "Vvedite info o mahine : ";
					std::cout << "\n" << "Vvedite color (1-red,2-blue,3-yelloy) : ";
					std::cin >> id;
					s[id_2].color = (color_t)id;
					std::cout << "\n" << "Vvedite model (1-ferari,2-bmv,3-audi) : ";
					std::cin >> id;
					s[id_2].model = (model_t)id;
					std::cout << "\n" << "Vvedite nomer :";
					std::cin >> id;
					s[id_2].number.number = id;
					id_2++;
					if (id_2 > 9) {
						id_2 = 9;
					}

				}

				if (flag_de == 2) {

					std::cout << "\n" << "Vivod info : ";
					for (int i = 0; i <= id_2; i++) {
						std::cout << "\n" << s[i].color;
						std::cout << "\n" << s[i].model;
						std::cout << "\n" << s[i].number.number;
						std::cout << "\n";
					}
					


				}
				if (flag_de == 3) {
					std::cout << "\n" << "Vvedite 4islo redactiruemoi mahinu : ";
					std::cin >> id_3;
					std::cout << "\n" << "Vvedite color (1-red,2-blue,3-yelloy) : ";
					std::cin >> id;
					s[id_3].color = (color_t)id;
					std::cout << "\n" << "Vvedite model (1-ferari,2-bmv,3-audi) : ";
					std::cin >> id;
					s[id_3].model = (model_t)id;
					std::cout << "\n" << "Vvedite nomer :";
					std::cin >> id;
					s[id_3].number.number = id;


				}

				if (flag_de == 4) {
					std::cout << "\n" << "Poisk, vvedite nomer : ";
					std::cin >> id;
					for (int i = 0; i < id_2; i++) {
						if (s[i].number.number == id) {
							std::cout << "\n" << s[i].color;
							std::cout << "\n" << s[i].model;
							std::cout << "\n" << s[i].number.number;
							std::cout << "\n";
							break;
						}
					}

				}


			
			} while (flag_de != 0);
			
			


		}
		case 5: {
			enum color_t { red = 1, blue, yelloy };
			enum type_t{bird=1,skot,human};
			union my_har_t {
				float skorost;
				bool parnokop;
				int IQ;
			};

			struct my_life_ob {
				int speed;
				type_t type;
				color_t color;
				union my_har_t har;
			};

			struct my_life_ob s[10];
			std::cout << "\n" << "zadaca nomer 5 (a i b) :" << "\n";
			int flag_de = 0;
			int id_2 = 0;
			int id = 0;
			int id_3 = 0;
			do {
				std::cout << "\n" << "Vvedite nomer deistvi9 1- vvod 2- vivod dannuih ,3-redact,4-poisk ";
				std::cin >> flag_de;


				if (flag_de == 1) {
					std::cout << "\n" << "Vvedite info o object's : ";
					std::cout << "\n" << "Vvedite speed : ";
					std::cin >> s[id_2].speed;
					std::cout << "\n" << "Vvedite type (1-bird,2-skot,3-human) :";
					std::cin >> id;
					s[id_2].type = (type_t)id;
					std::cout << "\n" << "Vvedite color (1-red,2-blue,3-yelloy) : ";
					std::cin >> id;
					s[id_2].color = (color_t)id;
					
					std::cout << "\n" << "Vvedite harakteriskiky (1-skorost 2-parnokoput (da/net) 3-IQ) :";
					std::cin >> id;
					if (id == 1) {
						std::cout << "\n" << "Vvedite skorost :";
						std::cin >> id;
						s[id_2].har.skorost = id;

					}
					else if (id == 2) {
						std::cout << "\n" << "Parnokoputnostb 1-da 0-net";
						std::cin >> id;
						s[id_2].har.parnokop = id;
					}
					else if (id == 3) {
						std::cout << "\n" << "IQ = ";
						std::cin >> id;
						s[id_2].har.IQ = id;
					}
					
					id_2++;
					if (id_2 > 9) {
						id_2 = 9;
					}
				}
				if (flag_de == 2) {
					std::cout << "\n" << "Vivod info : ";
					for (int i = 0; i <= id_2; i++) {
						std::cout << "\n" << s[i].speed;
						std::cout << "\n" << s[i].type;
						std::cout << "\n" << s[i].color;
						std::cout << "\n" << s[i].har.IQ;
						std::cout << "\n";
					}

				}
				if (flag_de == 3) {
					std::cout << "\n" << "Redact vvedite nomer :";
					std::cin >> id_3;

					std::cout << "\n" << "Vvedite info o object's : ";
					std::cout << "\n" << "Vvedite speed : ";
					std::cin >> s[id_3].speed;
					std::cout << "\n" << "Vvedite type (1-bird,2-skot,3-human) :";
					std::cin >> id;
					s[id_3].type = (type_t)id;
					std::cout << "\n" << "Vvedite color (1-red,2-blue,3-yelloy) : ";
					std::cin >> id;
					s[id_3].color = (color_t)id;

					std::cout << "\n" << "Vvedite harakteriskiky (1-skorost 2-parnokoput (da/net) 3-IQ) :";
					std::cin >> id;
					if (id == 1) {
						std::cout << "\n" << "Vvedite skorost :";
						std::cin >> id;
						s[id_3].har.skorost = id;

					}
					else if (id == 2) {
						std::cout << "\n" << "Parnokoputnostb 1-da 0-net";
						std::cin >> id;
						s[id_3].har.parnokop = id;
					}
					else if (id == 3) {
						std::cout << "\n" << "IQ = ";
						std::cin >> id;
						s[id_3].har.IQ = id;
					}



				}
				if (flag_de == 4) {
					std::cout << "\n" << "Poisk vvedite harakteristiky";
					std::cin >> id;
					for (int i = 0; i <= id_2; i++) {
						if (s[i].har.IQ == id) {
							std::cout << "\n" << s[i].speed;
							std::cout << "\n" << s[i].type;
							std::cout << "\n" << s[i].color;
							std::cout << "\n" << s[i].har.IQ;
							std::cout << "\n";
							break;
						}
					}


				}



			} while (flag_de != 0);




		}


		default: {
			break;
		}





		}

		


	} while (flag_menu != 0);


}