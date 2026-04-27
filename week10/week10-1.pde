 //week10-1好玩的程式設計-打地鼠
 void setup(){
   size(300, 300);
}
void draw(){
  background(#67EA5C);//綠背景
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      int x = j*100+50,y = i*100+50;//鼠洞
      ellipse(x,y,80,80);
    }
  }
}
