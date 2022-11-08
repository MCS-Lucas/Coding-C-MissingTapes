
struct site	
	{
		char nome[100],email[20],telefone[10],nomeprod[100],emailprod[20],telefoneprod[10];
		int tam;
		
	};
	
	void cadastrousuarios(struct site pt[]);
	void cadastroprodutor(struct site pt[]);
	void editarperfil(struct site pt[]);
	void editarperfilprod(struct site pt[]);
	void pesquisarusuarios(struct site pt[]);
	void pesquisarprodutor(struct site pt[]);
