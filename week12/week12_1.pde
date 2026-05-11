// week12-1好玩的程設 三角函數(卡轉,地鼠,無用)
void setup(){
  size(500,500);
}
float a=0;//角度
void draw(){//畫圖
//part1
//float x=250+cos(a)*200, y=250+sin(a)*200;//
 // ellipse(x,y,10,10);//
 //part2
 background(#FFFFF2);
 for(int i=0;i<6;i++){
   //float x=250+cos(a+i*PI/3)*200, y=250+sin(a+i*PI/3)*200;
   //part3
   float x=250+cos(a+i*PI/3)*200, y=250+sin(a+i*PI/3)*100;
   //ellipse(x,y,10,10);
   rect(x-40,y-50,80,100);
 }
  a+=0.03;//角度增加
}
