#include <iostream>
#include <vector>
class user_FB
{
public:
    virtual void notifier(std::string) = 0;
    virtual int getID() = 0;
    virtual std::string getName() = 0;
};
class user_1_email : public user_FB
{
private:
    int ID;
    std::string name;

public:
    user_1_email(int id, std::string n)
    {
        this->ID = id;
        this->name = n;
    }
    void notifier(std::string news)
    {
        std::cout << "Notifier to email " << this->name << " " << news << std::endl;
    }
    int getID()
    {
        return ID;
    }
    std::string getName()
    {
        return name;
    }
};
class user_2_phone : public user_FB
{
private:
    int ID;
    std::string name;

public:
    user_2_phone(int id, std::string n)
    {
        this->ID = id;
        this->name = n;
    }
    void notifier(std::string news)
    {
        std::cout << "Notifier to phone " << this->name << " " << news << std::endl;
    }
    int getID()
    {
        return ID;
    }
    std::string getName()
    {
        return name;
    }
};
class Facebook
{
private:
    std::vector<user_FB *> list_manage;

public:
    void subscribe_user(user_FB *user)
    {
        std:: cout<< "subscribe for User: "<<user->getID()<<" "<<user->getName()<<std::endl;
        list_manage.push_back(user);
    }
    void unsubscribe_user(int ID, std::string name)
    {
        std:: cout<< "Unsubscribe for User: "<<ID<<" "<<name<<std::endl;
        std::vector<user_FB *>::iterator it;
        for (it = list_manage.begin(); it != list_manage.end(); it++)
        {
            if ((*it)->getID() == ID && (*it)->getName() == name)
            {
                list_manage.erase(it);
                std::cout<<"Unsubscribe Successfull !!!"<<std::endl;
                return;
            }
            if(it==list_manage.end()-1&&((*it)->getID() != ID || (*it)->getName() != name)){
                std::cout<<"User not found! "<<std::endl;
                return;
            }
        }
    }
    void Send_Notifier(std::string news)
    {
        for (std::vector<user_FB *>::iterator it = list_manage.begin(); it != list_manage.end(); it++)
        {
            (*it)->notifier(news);
        }
    }
};
int main()
{
    Facebook FB_lite;
    user_FB *PT = new user_1_email(1999, "PhanThanh");
    user_FB *ST = new user_2_phone(1996, "MTP");
    user_FB *J97 = new user_2_phone(1997, "Gie Jack");
    FB_lite.subscribe_user(PT);
    FB_lite.subscribe_user(ST);
    std::cout<< "____________"<<std::endl;
    FB_lite.Send_Notifier("FB_Lite cap nhat them tinh nang moi Datting!");
    std::cout<< "____________"<<std::endl;
    FB_lite.unsubscribe_user(1996, "MTP");
    std::cout<< "____________"<<std::endl;
    FB_lite.subscribe_user(J97);
    std::cout<< "____________"<<std::endl;
    FB_lite.Send_Notifier("FB_Lite cap nhat them tinh nang moi Book Hotel!");
    return 0;
}