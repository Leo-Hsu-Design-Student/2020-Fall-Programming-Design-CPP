#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Object{
public:
    string name;
    int ID;
};

class Scene{
public:
    void Add(Object);
    void Remove(int);
    void DisplayByID(int);
    void Display();
private:
    vector<Object> objects;
    map<int,Object> objects_map;
    void DisplaySingleObject(Object obj);
};

int main(){//User

    Scene scene;
    int cmd;
    while(cin>>cmd){
        if(cmd==-1){
            break;
        }
        else if(cmd==0){
            Object obj;
            cin>>obj.name;
            scene.Add(obj);
        }else if(cmd==1){
            
        }else if(cmd==2){

        }else if(cmd==3){

        }
    }

    return 0;
}

void Scene::Add(Object obj){
    objects.push_back(obj);
}
void Scene::Remove(int ID){
    int index=0;
    // for (int i=0;i<objects.size();i++){
    //     if (objects[i].ID==ID){
    //         index=i;
    //         break;
    //     }
    // }
    // objects.erase(objects.begin()+index);
    
    objects_map.erase(ID);
}
void Scene::DisplayByID(int ID){
    /*for (int i=0;i<objects.size();i++){
        if (objects[i].ID==ID){
            cout<<"ID"<<objects[i].ID<<":"<<objects[i].name<<endl;
            break;
        }
    }*/
    cout<<"ID"<<ID<<":"<<objects_map[ID].name<<endl;
}

void Scene::DisplaySingleObject(Object obj){
    cout<<"ID"<<obj.ID<<":"<<obj.name<<endl;
}

void Scene::Display(){
    for (map<int,Object>::iterator iter=objects_map.begin(); iter!=objects_map.end(); iter++){
        cout<< "ID" << (iter->first) <<":"<< (iter->second).name <<endl;
        this->DisplaySingleObject(iter->second);
    }
}
