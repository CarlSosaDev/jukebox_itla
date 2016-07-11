#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

//TODO: Implement this code from the scratch
/*
 * At this point your expected to be able to create your code from the scratch without any guidance.
 *
 */
//Play List atributes
 struct Play{
	char Title[20];
	char Artist[20];
	char Duration[20];
	struct Play *Next;
    struct Play *Back;
	
};
 struct Play *First, *Last;
	
	//Full list
 void Index(){
 	
 struct Play *Show;
 
 int i; i=0;
 
 Show = First;
 
 cout<< "List of Songs"	<<endl;
 
 //Iterator
 while(Show !=NULL){
 	
 	printf("Title: %s, Artist: %s, Duration: %s \n",
	 Show->Title, Show->Artist, Show->Duration);
	 Show= Show->Next;
	 i++;
	 if(i==0){
	 	cout<<"There aren't songs in the play List" <<endl;
	 }
 }
	 

	}


 void IndexCurrent(){
 	struct Play *Show;
 
 int i; i=0;
 
 Show = First, Last;
 
 cout<< "Current Song"	<<endl;
 
 //Iterator
	 
	 	while(Show !=NULL){
	 		
			  while(i<1){
			 
	 		printf("Title: %s, Artist: %s, Duration: %s \n",
	 Show->Title, Show->Artist, Show->Duration);
	 Show= Show->Next;
	
	 i++;
}
}
		 
	 
	 if(i==0){
	 	cout<<"There aren't songs in the play List" <<endl;
	 }
 }
	 

 	
	 
	  
 	


//add a song to play list
 void  Add(){
 	
  	struct Play *NewItem;
  	NewItem = (struct Play *)malloc(sizeof(struct Play));
	if(NewItem == NULL) cout <<"Item is Null" <<endl;
  	
  
  	//NewItem= malloc(sizeof(PlayList));
	cout << "Insert Title" <<endl; 
	 cin.getline(NewItem->Title,20);
	cout << "Insert Singer Name" <<endl; 
	cin.getline(NewItem->Artist,20);
	cout << "Insert duration" <<endl; 
	cin.getline(NewItem->Duration,20);
		NewItem->Next=NULL;
		
		if(First==NULL){
			First= NewItem;
			Last = NewItem;
		}else{
			Last->Next= NewItem;
			Last= NewItem;
		}
		

}

 void Delete(char a, char b, char c){
	struct Play *Del;
	Del= First, Last;
	
	if(Del !=NULL){
		cout<< "press enter to delete songs" <<endl;
		cin.getline(Del->Title,20);
		cout<<"press enter to confirm" <<endl;
		cin.getline(Del->Artist,20);
		cout<< "Press Enter to finish" <<endl;
		cin.getline(Del->Duration,20);
		
		delete Del->Title, Del->Artist,  Del->Duration;
	}
	
	Del->Next= NULL;
	
	//evaluate if the list is empty
	if(First=NULL){
		First= Del;
		Last= Del;
	}else{
		Last->Next= Del;
		Last = Del;
	}

}

void NextItem(){
	
 	struct Play *Show;
 
 int i; i=0;
 
 Show =  Last, First;
 
 cout<< " Next song in the play list" <<endl;
 //Iterator
	 
	 	while(Show !=NULL){
	 		
			  while(i<1){
			 
	 		printf("Title: %s, Artist: %s, Duration: %s \n",
	 Show->Title, Show->Artist, Show->Duration);
	 Show= Show->Next;
	i++;
}
}
		 
	 
	 if(i==0){
	 	cout<<"There aren't songs in the play List" <<endl;
	 }
 }
	


//previous 
 void BackItem(){
	struct Play *Show;
 
 int i; i=0;
 
 Show =   First;
 
 cout<< " Previos song in the play list "<<endl;
 //Iterator
	 
	 	while(Show !=NULL){
	 		
	 		//print only one
			  while(i<1){
			  
			  
			 
	 		printf("Title: %s, Artist: %s, Duration: %s \n",
	 Show->Title, Show->Artist, Show->Duration);
	 Show= Show->Back;
	i++;
}
}
 
		 
	 
	 if(i==0){
	 	cout<<"There aren't songs in the play List" <<endl;
	 }
}

 void RepeatList(){
	cout <<"Current wonrking.......not still available" <<endl;

}

//close
 void Exit(){
	cout << "Close any message windows if there are" <<endl;
	abort();
	
}

 void Menu(){
	cout << "Menu" << endl;
	cout << "1-List all " << endl;
	cout << "2- current playing" << endl;
	cout << "3- Add" << endl;
	cout << "4- Delete" << endl;
	cout << "5-Next" << endl;
	cout << "6- Back" << endl;
	cout << "7-Repeat" << endl;
	cout << "8-Exit" <<endl;
	cout << "Select an option =>" <<endl;

}

int main() {
	
	cout << "Welcome" << endl;
	Menu();
	char option;
	char a, b, c;
	do{
	option = getchar();
	a,b,c = getchar();
	switch(option){
		case '1': Index();
		Menu();
		break;
		
		case '2': IndexCurrent();
		Menu();
		break;
		
		case '3': Add();
		Menu();
		break;
		
		case '4': Delete(a,b,c);
		Menu();
		break;
		
		case '5': NextItem();
		Menu();
		break;
		
		case '6': BackItem();
		Menu();
		break;
		
		case '7': RepeatList();
		
		Menu();
		break;
		
		case '8': Exit();
	
		break;
	}
}while(option != 8);
	return 0;
}

