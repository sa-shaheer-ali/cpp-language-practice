#include <iostream>
#include <vector>
#include <algorithm>
class Task{
    private:
    std::string description;
    bool completed;
    public:
    Task(std::string des):description(des),completed(false)
    {};
    void markTaskCompleted(){
        completed=true;

    }  
    std::string getDescription()const{
        return description;

    }  
    bool isCompleted()const {
        return completed;

    }
};
class TaskManager{
    private:
    std::vector <Task> tasks;
    public:
    void addTask( const std::string &desc){
        tasks.push_back(Task(desc));
        std::cout<<"task added succesfully."<<std::endl;


    }
    void markTaskCompleted(int index){
        if (index>=0 && index<tasks.size())
        {tasks[index].markTaskCompleted();
        std::cout<<"tasks marked as completed"<<std::endl;
            /* code */
        }
        else {
            std::cout<<"it is invalid"<<std::endl;

        }
        
    }
    void displayTasks()const{
        std::cout<<"tasks:"<<std::endl;
        for (size_t i = 0; i < tasks.size(); ++i)
        {std::cout<<i+1<<".";
            if (tasks[i].isCompleted())
        {std::cout<<"[zz]";
            /* code */
        }
        else{
            std::cout<<"[ ]"<<std::endl;

        }
        std::cout<<tasks[i].getDescription()<<std::endl;
            /* code */
        }
        
    }
};
int main (){
    TaskManager taskmanager;
    int choice;
    do
    {
       std::cout<<"MENU:\n";
       std::cout<<"1. Add a Task.\n";
       std::cout<<"2. Mark Task as Completed.\n";
       std::cout<<"3. View Task.\n";
       std::cout<<"4. Exit\n";
       std::cout<<"enter your Choice:"<<std::endl;
       std::cin>>choice;


       switch (choice)
       {
       case 1:{
        std::string description;
        std::cout<<"enter your description:";
        std::cin.ignore();
        std::getline(std::cin,description);
        taskmanager.addTask(description);
       }
        break;
        case 2:{
            int index;
            std::cout<<"enter index:";
             std::cin >> index;
            taskmanager.markTaskCompleted(index-1);
            break;
        }
        case 3:
        {taskmanager.displayTasks();
        break;}
        case 4:
        std::cout << "Exiting program.\n";
       
       default:
       std::cout << "Invalid choice. Please try again.\n";
        break;
       }
       
    } while (choice !=4);
    return 0;
    
}