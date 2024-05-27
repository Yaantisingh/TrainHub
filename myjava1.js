const slides= document.QuerySelectorAll(".slide")
var c=0;
slides.forEach{
(slide,index) => {
    slide.style.left=`${index*100}%`
}
}