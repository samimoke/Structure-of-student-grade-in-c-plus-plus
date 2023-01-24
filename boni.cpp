#include<iostream> 
 #include<conio.h> 
#include<dos.h> 
 using namespace std;
 
  int main ( ) 
  { 
  cout<<"welcome to our campus\n";
  cout<<"press s to start choose\n";
   
  char ch;
 cin>>ch;
 while(ch !=0){
 
 
    cout<<"1. To continue "<<endl;
    cout<<"2. Exit"<<endl;
    char ch;
    cin>>ch;
    switch(ch)
     
    {
        
		 
 
 	case '1':
 {
 
                struct student 
            { 
                int id,semester;
				 
                
               int cgpa,curcgpa;
				 string name,department;  
             }; 
                  struct student st[50] ; 
                  int i,n,semester;
				 
                  float avgcgpa,sum; 

                  cout<<"\n Enter the Number of Students in the Class : "; 
                  cin>> n ; 
                  cout<<"\nEnter the Number of Semester : " ; 
                  cin>> semester ; 
                  for (i=0;i<n;i++) 
                   { 
                          sum = 0 ; 
                          cout<<"\nEnter the name "<<i+1<<" Student : "; 
                          cin>> st[i].name; 
                          cout<<"\nEnter id : ";
						  cin>>st[i].id ;
						  cout<<"enter departmment:";
						  cin>>st[i].department;


                                      
                      cout<<"\nEnter the cgpa of  previous semester : ";
                                     
                       cin>> st[i ].cgpa;
                       cout<<"enter current semester cgpa: ";
                       cin>>st[i].curcgpa;
 
                      sum=st[i].curcgpa+st[i].cgpa;

                                     avgcgpa = (float) sum / semester ; 
                                     cout<<"AVERAGE cgpa of student "<<i+1<<" = "<< avgcgpa<<endl; 
                                    
                                   if(avgcgpa>=2.5 && avgcgpa<=4)
                                     cout<<"medalist student";
                                     else if(avgcgpa>=2&&avgcgpa<=2.5)
                                     cout<<"warning";
                                     else if (avgcgpa<2&& avgcgpa<=4)
                                     
                                     cout<<"dismisal";
                                     else
                                     cout<<"invalid";
                                     cout<<endl;
                                            
                                     
                        }
                    }
                     
                   
						 break; 
                          
                 case '2':
             exit(0);
             break;
               default:
             cout<<"Wrong Choice\n";
              
              break;
              
       
    }
                                     
                                 
                                 
                             }
                                 
                                 getch();
								  
 } 
 