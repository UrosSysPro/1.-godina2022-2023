var p1x,p1y,p2x,p2y;
var sirinaIgraca;
var visinaIgraca;
var lx,ly,lr;
var sirinaEkrana,visinaEkrana;

function setup() {
  sirinaEkrana=300;
  visinaEkrana=200;
  createCanvas(sirinaEkrana, visinaEkrana);
  sirinaIgraca=20;
  visinaIgraca=50;
  p1x=10;
  p1y=visinaEkrana/2-visinaIgraca/2;

  p2x=sirinaEkrana-sirinaIgraca-10;
  p2y=visinaEkrana/2-visinaIgraca/2;

  lx=sirinaEkrana/2;
  ly=visinaEkrana/2;
  lr=10;
}

function draw() {
  background(0,0,0);

  if(keyIsDown(UP_ARROW)){
    p2y-=2;
    if(p2y<0)p2y=0;
  }
  if(keyIsDown(DOWN_ARROW)){
    p2y+=2;
    if(p2y>visinaEkrana-visinaIgraca)
       p2y=visinaEkrana-visinaIgraca;
  }
  if(keyIsDown()){
    p1y-=2;
    if(p1y<0)p1y=0;
  }
  if(keyIsDown(DOWN_ARROW)){
    p1y+=2;
    if(p1y>visinaEkrana-visinaIgraca)
       p1y=visinaEkrana-visinaIgraca;
  }

  fill(255);
  noStroke();
  rect(p1x,p1y,sirinaIgraca,visinaIgraca);
  rect(p2x,p2y,sirinaIgraca,visinaIgraca);
  circle(lx,ly,lr);
}

