#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}   // If we remove virtual keyword from this line. Then this display function will run 
                                   // and we won't get any output.
};

class CWHVideo: public CWH{
    int videoLength;
    public:
    CWHVideo(string s, float r, float vL): CWH(s,r){
        videoLength = vL;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Rating of this video is "<<rating<<" out of 5 stars."<<endl;
        cout<<"Length of this video is: "<<videoLength<<" Minutes."<<endl;
    }
};

class CWHText: public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc): CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is an amazing Text Tutorial with title "<<title<<endl;
        cout<<"Rating of this Text Tutorial is "<<rating<<" out of 5 stars."<<endl;
        cout<<"Length of this Text tutorial is: "<<words<<" words."<<endl;
    }
};


int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code with Harry Video
    title = "Cpp Tutorial";
    vlen = 4.26;
    rating = 4.87;
    CWHVideo cppVideo(title, rating, vlen);
    // cppVideo.display();          //executing directly

    // for Code with Harry Text Tuts
    title = "Cpp Tutorial";
    words = 426;
    rating = 4.43;
    CWHText cppText(title, rating, words);
    // cppText.display();          //executing directly

    CWH* tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cppText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;

}


// Rules for Virtual Functions:
// 1. They cannot be static.
// 2. They are accessed by object pointers.
// 3. Virtual functions can be friends of another class.
// 4. A virtual function in  base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.