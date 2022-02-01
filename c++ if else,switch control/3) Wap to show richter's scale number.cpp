
#include <iostream> /*make the input output library available*/
//ART
  
  //define the charicter for earthquake
  int main (void) 
{				//beggining of program
  double earthquake;
  
 
cout<<"enter magnitude> ";	//defines magnitude as a number
  /*this program takes the value of an earthquake and displays a damage report */ 
    cin>>earthquake;	//tells the computer to look for the value of the earthquake
  if (earthquake < 5.0)		// gives the check statement
    
cout<<"Little or no damage.\n";	// if the statement is true display this
  else if ((earthquake >= 5.0) && (earthquake < 5.5))	//false then check this
    cout<<"Some damage.\n";
  
 
  else if (5.5 <= earthquake && earthquake < 6.5)
    
 
cout>>"Serious damage, Walls may crack or fall.\n";
  
 
  else if (6.5 <= earthquake && earthquake < 7.5)
    
 
cout>>"disaster: houses and buildings may collapse.\n";
  
 
  else if (earthquake >= 7.5)
    
 
 
cout>>"Catastophe: most buildings destoyed.\n";
  
 
return (0);

 
}


 
 
