 #include<iostream>
#include<string.h>
using namespace std;
class node {
      public:
      string data;
      node *next;
      node *back;
    
      node (string x){
        data=x;
        next=nullptr;
        back=nullptr;
      }
         node (string x,node *next1,node *back1){
        data=x;
        next=next1;
        back=back1;
      }
};

class song{
    public:
  
   node *current;
   node *current1;
   node *head;
   node *head1;
     node *playlisthead;
    song (){
         head=current;
          head1=current1;
          current=nullptr;
          current1=nullptr;
         
     }
    void create(string X){
    node *newnode=new node(X);
    if(current==nullptr){
        current=newnode;
    }
    else
    {current->next=newnode;
    newnode->back=current;
    current=current->next;}
}
void front(int steps,node *head){
    if(steps!=1){
        current=head;
    }
     if(current==nullptr){
        cout<<"There is no song";
    }
    while(steps){
        if(current->next){
            current=current->next;
        }
        else
        {
            break;
        }
        steps--;
    }
    // return current;
}
void back(int steps,node *head){
     if(steps!=1){
        current=head;
    }
    if(current==nullptr){
        cout<<"There is no privous song";
    }
    while(steps){
        if(current->back){
            current=current->back;
        }
        else
        {
            break;
        }
        steps--;
    }
    
}
void show(){
    cout<<current->data<<endl;
    
}
int newsong(){
    string song;
    cout<<"Enter song:";
    cin.ignore();
    getline(cin,song);
     create(song);
     return 0;
}
void playlistadd(){
    node *newnode=new node(current->data);
    if(head1==nullptr){
       head1=current1=newnode;
    }
    else
    {
    current1->next=newnode;
    newnode->back=current1;
    current1=current1->next;
    }
 cout<<current1->data<<"song add to playlist\n";
}

void playlist(){
    node *temp=head1;
     if(temp==nullptr){
       cout<<"Playlist is empty\n";
       return;
    }
    cout<<"----playlist----\n";
    int index=1;
    while(temp!=nullptr){

        cout<<index++<<"."<<temp->data<<"\n";
        temp=temp->next;
        
    }
   
}
void playlistsong(){
    if(head1==nullptr){
        cout<<"Playlist is empty\n";
        return;
    }
    playlist();
 node *temp=head1;
 int idx=1;
 while ((temp!=nullptr))
 {
    int choice;
    if(temp!=head1){
        cout<<"If you want to play next song\n";
    }
    cout<<"Enter the number of the song to  play(choice>1)\n";
    cin>>choice;
    if(idx<=choice){
         front(choice,temp);
    }
    if(idx>choice){
         back(choice,temp);
    }
 }
 
    cout<<"current song"<<temp->data;
}
}b;

int main(){
    int choice;
    node *head;
 b.newsong();
     while(true){
        cout<<"<----current song---->\n";
        b.show();
        cout<<"\n\n\n\n\n---control menu-----";
        cout<<"1.New song\n";
        cout<<"2.previous song\n";
        cout<<"3.Next song\n";
        cout<<"4. To add this song to playlist\n";
        cout<<"5.View playlist\n";
        cout<<"6.To play song in the playlist\n";


        cout<<"Enter your choice";
        cin>>choice;
        switch ((choice))
        {
        case 1:
            b.newsong();
            break;
        case 2:
            b.back(1,head);
            break;
        case 3:
            b.front(1,head);
            break;     
        case 4:
             b.playlistadd();
            break;     
        case 5:
            b.playlist();
            break;        
        case 6:
            b.playlistsong();
            break;        
        default:
        cout<<"Invalid choice\n";
            return 0;
        }

     }
   

}
