#include <iostream>
#include <string>
using namespace std;

class staff{
    private:
    int code;
    string name;
    public:
    staff(){
        cout<<"staff created"<<endl;
    }
    void get_data(){
        cin<<code<<name;
    }
    void display(){
        cout<<code<<name;
    }

};
class teacher: public staff{
    private:
    string subject;
    string publication;
    public:
    teacher(){
        cout<<"teacher created"<<endl;
    }
};
class officer: public teacher{
    private:
    char grade;
    public:
    officer(){
        cout<<"Officer created"<<endl;
    }
};
class typist: public staff{
    private:
    int speed;
    public:
    typist(){
        cout<<"typist created"<<endl;
    }
};
class regular: public typist{
    public:
    regular(){
        cout<<"regualr created"<<endl;
    }
};
class casual: public typist{
    private:
    int dailyWages;
    public:
    casual(){cout<<"casual created"<<endl;}
    
};

int main(){
    casual w;
    cout<<endl;
    regular r;
}
class education{
    public:

}