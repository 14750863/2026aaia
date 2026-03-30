// week05-2 好玩的程式設計 兩層for(迴圈) 配合 if.. else if..else
//Ctrl+N 開新視窗
  public void settings() { size(800, 500); }
public void setup(){
  
  /* size commented out by preprocessor */;
}
int[][] a=new int[10][16];
void mousePressed() { 
  
  int i =mouseY/50, j =mouseX/50;
  a[i][j]=1;
}
public void draw() {
  for(int i=0; i<10; i++){
    for(int j=0; j<16; j++) {
      if( a[i][j]==1) fill(#5DFF1F);
      else fill(255);
      rect(j*50, i*50, 50, 50);
    }
  }
}
