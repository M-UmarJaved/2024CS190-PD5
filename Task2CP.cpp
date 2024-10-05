#include<iostream>
using namespace std;
int pyramidVolume(float length, float width,float height, float volume, string unit);

main(){
    float length, width, height, volume;
    string unit;
    cout<<" Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout<<" Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout<<" Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout<<" Enter the desired ouput unit (millimeters, centimeters, meters, kilometers): ";
    cin>> unit;

    volume = pyramidVolume(length,width,height,volume,unit);
    cout<<"The volume of the pyramid is "<<volume<<" cubic " <<unit;
}
int pyramidVolume(float length, float width,float height, float volume, string unit){
    if(unit == "meters"){
        volume = (length*height*width)/3;
        return volume;
    }
    if(unit == "centimeters"){
        length = length*100;
        width = width*100;
        height = height*100;
        volume = (length*height*width)/3;
        return volume;
    }
    if(unit == "millimeters"){
        length = length*1000;
        width = width*1000;
        height = height*1000;
        volume = (length*height*width)/3;
        return volume;
    }
    if(unit == "kilometers"){
        length = length/1000;
        width = width/1000;
        height = height/1000;
        volume = (length*height*width)/3;
        return volume;
    }
}