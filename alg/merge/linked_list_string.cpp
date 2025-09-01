/* R. Fabbri, 2024 */
#include "linked_list_string.h"
#include <cstdlib>
#include <cstring>
#include <iostream>


#define MAX_NUMERO_DE_CARACTERES 50
struct No{
	//char *name;
	
	 char name[MAX_NUMERO_DE_CARACTERES];
	 //opcional: convencao de '/0' no final
	No *next;
};

typedef No *Lista;

void playground_lista()
{
Lista l;
	//cria um novo no
	
	l = (No * ) malloc(sizeof(No));
	// No caso de implementacao estatica
	l->name[0] = '\0';

	// ou no caso do char *:
	//l->name = "";
	//l->name = 0;

	
	std::cout << std::string(l->name) << std::endl;
	std::cout << "test \n" << std::endl;
	// ou
	printf("%s",l->name);
	strncpy(l->name, "joao \n", MAX_NUMERO_DE_CARACTERES);
	printf("%s",l->name);
	
}
struct No2{
	char *name;
	
	//char name[MAX_NUMERO_DE_CARACTERES];
	//opcional: convencao de '/0' no final
	No2 *next;
};

typedef No2 *Lista2;

void playground_lista2()
{
	Lista2 l;
	//cria um novo no
	
	l = (No2 * ) malloc(sizeof(No2));
	// No caso de implementacao estatica
	l->name = "";
	printf("%s",l->name);
	l->name = "Guto_o_gelado \n";
	printf("%s",l->name);
	// ou no caso do char *:
	//l->name = "";
	//l->name = 0;	
}
