var p1x,p1y,p2x,p2y;
var score1,score2;
var sirinaIgraca;
var visinaIgraca;
var brzinaIgraca;
var lx,ly,lr,brzinaX,brzinaY;
var sirinaEkrana,visinaEkrana;

function setup() {
  score1=0;
  score2=0;
  sirinaEkrana=300;
  visinaEkrana=200;
  createCanvas(sirinaEkrana, visinaEkrana);
  sirinaIgraca=20;
  visinaIgraca=50;
  brzinaIgraca=3;
  p1x=10;
  p1y=visinaEkrana/2-visinaIgraca/2;

  p2x=sirinaEkrana-sirinaIgraca-10;
  p2y=visinaEkrana/2-visinaIgraca/2;

  lx=sirinaEkrana/2;
  ly=visinaEkrana/2;
  lr=10;
  brzinaX=2;
  brzinaY=1;
}

function draw() {
  background(0,0,0);

  kretanjeIgraca();
  loptaUpdate();
  sudar();
  nacrtaj();
}
function sudar(){
  if(1==preklapajuSe(
      p1x,p1y,sirinaIgraca,visinaIgraca,
      lx-lr/2,ly-lr/2,lr,lr)){
    brzinaX=-brzinaX;
  }
  if(1==preklapajuSe(
      p2x,p2y,sirinaIgraca,visinaIgraca,
      lx-lr/2,ly-lr/2,lr,lr)){
    brzinaX=-brzinaX;
  }
}

function preklapajuSe(x1,y1,w1,h1,x2,y2,w2,h2){
  if(x2>x1+w1)return 0;
  if(y2>y1+h1)return 0;
  if(x1>x2+w2)return 0;
  if(y1>y2+h2)return 0;
  return 1;
}

function kretanjeIgraca(){
  if(keyIsDown(UP_ARROW)){
    p2y-=brzinaIgraca;
    if(p2y<0)p2y=0;
  }
  if(keyIsDown(DOWN_ARROW)){
    p2y+=brzinaIgraca;
    if(p2y>visinaEkrana-visinaIgraca)
       p2y=visinaEkrana-visinaIgraca;
  }
  if(keyIsDown(87)){
    p1y-=brzinaIgraca;
    if(p1y<0)p1y=0;
  }
  if(keyIsDown(83)){
    p1y+=brzinaIgraca;
    if(p1y>visinaEkrana-visinaIgraca)
       p1y=visinaEkrana-visinaIgraca;
  }
}

function loptaUpdate(){
  lx+=brzinaX;
  ly+=brzinaY;
  if(ly>visinaEkrana-lr/2){
    brzinaY=-brzinaY;
  }
  if(lx>sirinaEkrana-lr/2){
    lx=sirinaEkrana/2;
    ly=visinaEkrana/2;
    score1++;
  }
  if(ly<lr/2){
    brzinaY=-brzinaY;
  }
  if(lx<lr/2){
    lx=sirinaEkrana/2;
    ly=visinaEkrana/2;
    score2++;
  }
}

function nacrtaj(){
  fill(255,255,255);
  noStroke();
  rect(p1x,p1y,sirinaIgraca,visinaIgraca);
  rect(p2x,p2y,sirinaIgraca,visinaIgraca);
  circle(lx,ly,lr);
  text(score1,sirinaEkrana/2-30,20);
  text(score2,sirinaEkrana/2+30,20);
}
