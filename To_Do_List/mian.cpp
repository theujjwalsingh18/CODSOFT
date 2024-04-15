#include<iostream>
#include<windows.h>
#include<ios>

using namespace std;

string tasks[100]={""};
int task_count = 0;

void displaytasks(string s[]){
    system("cls");
    cout<<"Tasks In TO DO :"<<endl;
    cout<<"----------------------------------------"<<endl;
    if(task_count==0){
        cout<<"No Task in List"<<endl;
    }else{
        for(int i=0; i<task_count; i++){
            cout<<"Task "<<i<<": "<<s[i]<<endl;
        }
    }
    cout<<"----------------------------------------"<<endl;
}

void del(string task[], int delNo){
    for(int i= delNo; i<task_count; i++){
        task[i]=task[i+1];
    }
    task_count=task_count - 1;
}

void addtask(){
    cout<<"Write Your New Task: "<<endl;
    cin.ignore();
    getline(cin,tasks[task_count]);
    task_count++;
}

void mainmenu(){
    int n=0;
    while(n!=1){
        cout<<"Press 1 to back to Main Menu"<<endl;
        cin>>n;
        if(cin.fail()){
            cout << "Only Integer Input Required. Please Run The Application Again \n"
                 << endl;
            
        }
        if(n==1){
            break;
        }else{
            system("cls");
            displaytasks(tasks);
            continue;
        }
    }
}

int main(){
    system("color a");
    int option = -1;
    while(option != 0){
        system("cls");
        cout<<endl<<"------ TO DO LIST ------"<<endl<<endl;
        cout<<"Press 1: To Add New Tasks"<<endl;
        cout<<"Press 2: To View Tasks"<<endl;
        cout<<"Press 3: To Delete The Task"<<endl;
        cout<<"Press 0: To Close The App"<<endl;
        cout<<endl;
        cin>>option;
        if(cin.fail()){
            cout << "Only Integer Input Required. Please Run The Application Again \n"
                 << endl;
        }
        
        switch (option)
        {
        case 1:{ // Adding Tasks in the list
            if(task_count>99){
                cout<<"To Many Tasks in List, Please delete some"<<endl;
                break;
            }else{
                system("cls");
                addtask();
                int n=-1;
                while(n!=0){
                    system("cls");
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Press 1 to Add More Task"<<endl;
                    cout<<"Press 0 to back to Main Menu"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cin>>n;
                    if(cin.fail()){
                    cout << "Only Integer Input Required. Please Run The Application Again \n"
                         << endl;
                         cout << "Thankyou for Using From _@theujjwalsingh18" << endl;
                    }
                    if(n==0){
                        break;
                    }else if(n==1){
                        system("cls");
                        addtask();
                        continue;
                    }
                }
            }
            break;
        }
        case 2:{
            // Showing all the tasks
            system("cls");
            displaytasks(tasks);
            mainmenu();
            break;
        }
        case 3:
        {
            system("cls");
            displaytasks(tasks);
            if(task_count<=0 || task_count>99){
                cout<<"No Task in TO DO LIST"<<endl;
                cout << "Returning to Main Menu" << endl;
                Sleep(900);
                break;
            }else{
                system("cls");
                displaytasks(tasks);
                int delNo=0;
                cout<<"Enter no. of task to be deleted"<<endl;
                cin>>delNo;
                if(cin.fail()){
                cout << "Only Integer Input Required. Please Run The Application Again \n"
                 << endl;
                cout << "Thankyou for Using From _@theujjwalsingh18" << endl;
                }
                del(tasks,delNo);
                int n=-1;
                while(n!=0){
                    system("cls");
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Press 1 to Delete More Task"<<endl;
                    cout<<"Press 0 to back to Main Menu"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cin>>n;
                    if(cin.fail()){
                    cout << "Only Integer Input Required. Please Run The Application Again \n"
                    << endl;
                    cout << "Thankyou for Using From _@theujjwalsingh18" << endl;
                    }
                    if(n==0){
                        break;
                    }else if(n==1){
                        system("cls");
                        displaytasks(tasks);
                        if(task_count != 0){
                        int delNo=0;
                        cout<<"Enter no. of task to be deleted"<<endl;
                        cin>>delNo;
                        if(cin.fail()){
                        cout << "Only Integer Input Required. Please Run The Application Again \n"
                        << endl;
                        cout << "Thankyou for Using From _@theujjwalsingh18" << endl;
                        }
                        del(tasks,delNo);
                        continue;
                        }else{
                            cout << "Returning to Main Menu" << endl;
                            Sleep(1000);
                            break;
                        }
                    }
                }
            }
            break;
        }
        case 0:{
            cout<<"Closing the Program ...."<<endl;
            cout <<"Thankyou for Using From _@theujjwalsingh18" << endl;
            Sleep(900);
            break;
        }
        default:{
            cout<<"Enter a valid Option "<<endl;
            break;
        }

        }
        
    }

}
