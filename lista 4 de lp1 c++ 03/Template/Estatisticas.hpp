
#pragma once

#include <vector>
	
template <class T>
class Estatisticas  
{
	public:
		int indexOfMaior(std::vector<T> vec){
			int maior;
			int index = -1;

			if(vec.size() > 0){
				maior = vec[0].getTotal();
				index = 0;
			}

			for (int i = 0; i < vec.size(); i++){
				if(vec[i].getTotal() > maior){
					maior = vec[i].getTotal();
					index = i;
				}
			}

			return index;
		}
		int indexOfMenor(std::vector<T> vec){
			int menor;
			int index = -1;

			if(vec.size() > 0){
				menor = vec[0].getTotal();
				index = 0;
			}

			for (int i = 0; i < vec.size(); i++){
				if(vec[i].getTotal() < menor){
					menor = vec[i].getTotal();
					index = i;
				}
			}

			return index;
		}
		float media(std::vector<T> vec){
			float total = 0;

			for (int i = 0; i < vec.size(); i++){
				total += vec[i].getTotal();
			}

			return total / vec.size();
		}

		Estatisticas() {

		}
		~Estatisticas() {

		}

};
