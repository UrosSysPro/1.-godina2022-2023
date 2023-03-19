function setup() {
  createCanvas(400, 400);
  var sirina=400;
  var visina=400;
  var velicina=20;

  for(var j=0;j<visina;j+=velicina){
    for(var i=0;i<sirina;i+=velicina){
      if(random()>0.25)
        line(i,j,i+velicina,j+velicina);
      else
        line(i+velicina,j,i,j+velicina);
    }
  }


}

function draw() {

}
