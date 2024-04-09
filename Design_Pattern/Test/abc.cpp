#include <iostream>
#include <vector>
class user_APP
{
public:
    virtual void notifier(std::string) = 0;
    virtual std::string getID() = 0;
    virtual std::string getName() = 0;
};
class user_1_email : public user_APP
{
private:
    std::string ID;
    std::string name;

public:
    user_1_email(std::string id, std::string n)
    {
        this->ID = id;
        this->name = n;
    }
    void notifier(std::string news)
    {
        std::cout << "Notifier to email " << this->name << " " << news << std::endl;
    }
    std::string getID()
    {
        return ID;
    }
    std::string getName()
    {
        return name;
    }
};
class user_2_phone : public user_APP
{
private:
    std::string ID;
    std::string name;

public:
    user_2_phone(std::string id, std::string n)
    {
        this->ID = id;
        this->name = n;
    }
    void notifier(std::string news)
    {
        std::cout << "Notifier to phone " << this->name << " " << news << std::endl;
    }
    std::string getID()
    {
        return ID;
    }
    std::string getName()
    {
        return name;
    }
};
class app
{
public:
    virtual void Send_Notifier(std::string news) = 0;
    virtual void subscribe_user(user_APP *user)=0;
    virtual void unsubscribe_user(std::string ID, std::string name)=0;
    virtual std::string Get_Name()=0;
};
class Facebook : public app
{
private:
    std:: string name;
    std::vector<user_APP *> list_manage;

public:
    Facebook(std::string n):name{n}{}
    void subscribe_user(user_APP *user)
    {
                list_manage.push_back(user);
                return;
        
    }
    void unsubscribe_user(std::string ID, std::string name)
    {
        std::cout << "Unsubscribe for User: " << ID << " " << name << std::endl;
        std::vector<user_APP *>::iterator it;
        for (it = list_manage.begin(); it != list_manage.end(); it++)
        {
            if ((*it)->getID() == ID && (*it)->getName() == name)
            {
                list_manage.erase(it);
                std::cout << "Unsubscribe Successfull !!!" << std::endl;
                return;
            }
            if ((it == list_manage.end() - 1) && ((*it)->getID() != ID || (*it)->getName() != name))
            {
                std::cout << "User not found! " << std::endl;
                return;
            }
        }
    }
    void Send_Notifier(std::string news)
    {
        for (std::vector<user_APP *>::iterator it = list_manage.begin(); it != list_manage.end(); it++)
        {
            (*it)->notifier(news);
        }
    }
    std::string Get_Name(){
        return this->name;
    }
};

class Youtube : public app
{
private:
    std:: string name;
    std::vector<user_APP *> list_manage;

public:
    Youtube(std::string n):name{n}{}
    void subscribe_user(user_APP *user)
    {
                list_manage.push_back(user);
                return;
    }
    void unsubscribe_user(std::string ID, std::string name)
    {
        std::cout << "Unsubscribe for User: " << ID << " " << name << std::endl;
        std::vector<user_APP *>::iterator it;
        for (it = list_manage.begin(); it != list_manage.end(); it++)
        {
            if ((*it)->getID() == ID && (*it)->getName() == name)
            {
                list_manage.erase(it);
                std::cout << "Unsubscribe Successfull !!!" << std::endl;
                return;
            }
            if (it == list_manage.end() - 1 && ((*it)->getID() != ID || (*it)->getName() != name))
            {
                std::cout << "User not found! " << std::endl;
                return;
            }
        }
    }
    void Send_Notifier(std::string news)
    {
        for (std::vector<user_APP *>::iterator it = list_manage.begin(); it != list_manage.end(); it++)
        {
            (*it)->notifier(news);
        }
    }
    std::string Get_Name(){
        return this->name;
    }
};

class Single_Management
{
private:
    std::vector<app *> list_management;
    Single_Management()
    {
        std::cout << "Hello constructor" << std::endl;
    }
    Single_Management(Single_Management &obj)
    {
        std::cout << "Hello copy constructor" << std::endl;
    }

public:
    static Single_Management& Create_OBJ_Manage_Publisher(); 
    void add_publisher(app *obj);
    void Delete_publisher(std::string name);
    void add_Observer(user_APP *obj);
    void Delete_Obsever(std::string ID, std::string name);
    void Send_notifier(std::string ID,std::string news);
};
Single_Management &Single_Management::Create_OBJ_Manage_Publisher(){
    static Single_Management obj;
    //std::cout << "You want my instance, i'm yours   "<< &obj << std::endl;
    return obj;
}
void Single_Management :: add_publisher(app *obj){
    std::cout << "subscribe for publisher: " << std::endl;
    this->list_management.push_back(obj);
} 
void Single_Management :: Delete_publisher (std::string name){
    for(std::vector<app*>::iterator it = list_management.begin();it!=list_management.end();it++){
        if((*it)->Get_Name()==name){
            list_management.erase(it);
            std::cout<<"Delete sucessfull publisher"<<(*it)->Get_Name()<<std::endl;
            return;
        }
        if((it==list_management.end()-1)&&((*it)->Get_Name()!=name)){
            std::cout<< "This publisher "<<(*it)->Get_Name()<<" does not exist "<<std::endl;
            return;
        }
    }
}
void Single_Management::Send_notifier(std::string ID,std::string news){
    for(std::vector<app*>::iterator it = list_management.begin();it!=list_management.end();it++){
        if((*it)->Get_Name()==ID){
            (*it)->Send_Notifier(news);
        }
        if(it == list_management.end()&&((*it)->Get_Name()!=ID)){
            return;
        }
    }
}
void Single_Management :: add_Observer(user_APP *obj){
    for(std::vector<app*>::iterator it = list_management.begin();it!=list_management.end();it++){
        if((*it)->Get_Name()==obj->getID()){
            (*it)->subscribe_user(obj);
            return;
        }
        if(it == list_management.end()&&((*it)->Get_Name()!=obj->getID())){
            std:: cout << "Add obsever FAIL!!"<<std::endl;
            return;
        }
    }
} 
void Single_Management ::Delete_Obsever(std::string ID, std::string name){
    for(std::vector<app*>::iterator it = list_management.begin();it!=list_management.end();it++){
        if((*it)->Get_Name()==ID){
            (*it)->unsubscribe_user(ID,name);
            return;
        }
        if(it == list_management.end()&&((*it)->Get_Name()!=ID)){
            std:: cout << "Unsubscribe obsever FAIL!!"<<std::endl;
            return;
        }
    }
}
int main()
{
    //Create 2 publisher
    app *FB_lite = new Facebook("FB");
    app *YTB_light = new Youtube("YTB");
    //Add 2 publisher to vector manage by Single_ton
    Single_Management::Create_OBJ_Manage_Publisher().add_publisher(FB_lite);
    Single_Management::Create_OBJ_Manage_Publisher().add_publisher(YTB_light);
    //Create 3 Obsever
    user_APP *PT_FB = new user_1_email("FB", "PhanThanh");
    user_APP *ST_YTB = new user_2_phone("YTB", "MTP");
    user_APP *J97_FB = new user_2_phone("FB", "Gie Jack");
    //Add Obsever to Publisher
    Single_Management::Create_OBJ_Manage_Publisher().add_Observer(PT_FB);
    Single_Management::Create_OBJ_Manage_Publisher().add_Observer(ST_YTB);
    Single_Management::Create_OBJ_Manage_Publisher().add_Observer(J97_FB);
    //Send Notifier
    Single_Management::Create_OBJ_Manage_Publisher().Send_notifier("YTB","Update Tinh Nang FB!!");
    return 0;
}