// week06-2好玩的程設,變淡版
//Ctrl+N
//修改自 week06-1
public void settings() { size(800, 500); }
public void setup(){
  /* size commented out by preprocessor */;
}
int[][] a=new int[10][16];//Java的陣列寫法,跟C/C++不同
public void mouseDragged() { //mouse按下去,執行這段
  int i =mouseY/50, j =mouseX/50;
  a[i][j]=120;//數字變大了,數字等於顯示秒數
}
public void draw() {
 background(255);
  for(int i=0; i<10; i++){//上週for y 現在for i 左手i
    for(int j=0; j<16; j++) {//上週for x 現在for j 右手j
      if( a[i][j]>0 ) {
      fill(0xFF5DFF1F, a[i][j]*2);//陣列友值,設綠色
      a[i][j]--;
      } else fill(255);//沒有值,設白色
      rect(j*50, i*50, 50, 50);//畫四邊形
    }
  }
}
