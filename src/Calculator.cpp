// Constructeur
Calculator::Calculator(char* file_path)
{
    getPoints(file_path);

}

//----------------------------
// Remplie la liste de points
// venant du fichier
//----------------------------
void Calculator::getPoints(char* file_path)
{
    ifstream f;
    char  buffer[128];
    int i;
    XYPoint p(0,0);

    f.open(file_path);
    if (!f.is_open()) {
        cerr << "Impossible d'ouvrir le fichier "+file_path << endl;
        return;
    }
    
    // On saute la première ligne
    f.getline(buffer,128);

    for (i=0;f.good(); i++)
    {
        f.getline(buffer,128);
        
        p.setX(i-1);
        p.setY(atof(buffer));
        this.cPoints.push_back(p);
    }
    f.close();
}

//-----------------------------------------------------------
// Résoud le système d'équations. 
//
// La valeur de retour est un pointeur vers les éléments
// de la solutions ou NULL si aucune solution.
//-----------------------------------------------------------
vector<float>* Calculator::resolveCubicSplineSLE()
{
    vector<float>* soln = new vector<float>();
    vector<float>::iterator iterator;
    int i,j,k,n = this.cPoints.size();
    float h,u,b,v;
    float** A = (float **) malloc((n-2)*sizeof(float*));
    
    // Remplissage du tableau de float*
	for (i=0;i<sizeof(A)/sizeof(float*);i++) 
        A[i] = (float*) malloc((n-1)*sizeof(float));

    // Remplissage de la matrice Gauss-Jordan
    for (i = 2; i < n-2; i++) {
        h = 1;
        u = 
        /* Ajout des éléments dans les 3
         * emplacements non-nuls
         */
        for (j = 0; j < 3; j++) {
            
        }
    }

    // Résolution de l'équation

    // stockage des résultats
    
	// On libère la mémoire occupée par la matrice de gauss-jordan
	for (i=0;i<6;i++)
		free(A[i]);
	free(A);

    return soln;
}

