//
//  main.cpp
//  Generowanie permutacji
//  Copyright: Jakub Buczyñski


#include <iostream>

int n;
int silnia(int liczba);

int main()
{
    printf("Podaj ilosc elementow zbioru: ");
    scanf("%d", &n);

    
    int ilosc = silnia(n);
    int tab[n];
    int element ;
    int min;
    int licznik=0;
    int j=1;

    int  m;
    int zamiana;
    int tymczas;
   	int l; 
    
    // Tworzenie zbioru
    for(int i = 0; i < n; i++)
    {
        tab[i] = i + 1;
    }
    // Wypisawnie zbioru
    for(int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
        
    }
printf("\n");
    
    // Algorytm generowania permutacji

    
    while (licznik < ilosc-1 )
    {
        //sprawdzanie w którym miejscu zacz¹c i znajdowanie najmniejszego elementu wiekszego od (element -1)
        
        element = n - 1;
		
		while(1){
if(tab[element - 1] < tab[element] ){break;}
	   
    element = element - 1;    
    }
     
  min = n+1;
  
                        for(j=1; n - j   >= element   ; j=j+1){
                      	
 
                         if (tab[n-j] < min && tab[n-j] > tab[element-1])
						 {
                                        min = tab[n-j];                                   
                                         m = n - j;
										}
                                         		
                                      
                                        }
                              
     //zamiana (element - 1) z min
  
		
		
		
		tymczas = tab[element - 1] ;
        tab[element - 1] = min;
        tab[m] = tymczas;
        
	//zamiana kolejnosci   

				  
	
        for(int k = 0 ; k < (n-element)/2  ; k=k+1){	
				
	    tymczas = tab[element+k] ;
        tab[element + k ] = tab[n-1-k];
        tab[n-1-k] = tymczas;

       
		}
			  
				   
				   
		//wypisanie permutacji

    for(int g = 0; g < n ; g++)
    {
        printf("%d ", tab[g]);
       
		}
             printf("\n");  
      licznik=licznik+1;
}
printf("\n");
printf("UDA£O SIE!!!!");
 getchar();
          getchar();  
}



//funkcja silnia

 int silnia(int liczba)
{
    int silnia = 1;
    for(int i = 2; i <= liczba; i++)
        silnia *= i;
    return silnia;
} 
