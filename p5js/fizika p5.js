var x=[];
var y=[];
var r=[];
var vx=[];
var vy=[];
var g=0.1;

function setup() {
  createCanvas(300, 250);
  for(var i=0;i<100;i++){
    x[i]=random()*300;
    y[i]=random()*250;
    r[i]=random()*10+10;
    vx[i]=random();
    vy[i]=random();
  }
}

function draw() {
  background(0,0,0);
  fill(255,255,255);
  // noStroke();
  updatePosition();
  drawParticles();
}

function updatePosition(){
  for(var i=0;i<100;i++){
    vy[i]+=g;
    x[i]+=vx[i];
    y[i]+=vy[i];
    if(y[i]>250)vy[i]=-vy[i];
    if(y[i]<0)vy[i]=-vy[i];
    if(x[i]>300)vx[i]=-vx[i];
    if(x[i]<0)vx[i]=-vx[i];
  }
}
function drawParticles(){
  for(var i=0;i<100;i++){
    circle(x[i],y[i],r[i]);
  }
}

function collision(){
  for(let i=0;i<100;i++){
    for(let j=0;j<100;j++){
      if(i==j)continue;
      var x2=(x[i]-x[j])*(x[i]-x[j]);
      var y2=(y[i]-y[j])*(y[i]-y[j]);
      var d=sqrt(x2+y2);
      if(d<r[i]+r[j]){
        var pom=r[i]+r[j]-d;
        pom/2;
      }
    }
  }
}
