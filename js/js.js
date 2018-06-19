
$(document).ready(function(){

//导航下拉
$(".navs li").hover(function(){
		$(this).find(".ohnav").css("display","block");
	},function(){
		$(this).find(".ohnav").css("display","none");
	});
	

//导航开关
$(document).ready(function(){
  $(".nav-xm").mouseover(function(){
    $(".nav-xms").css("display","block");
  });
$(".nav-xm").mouseout(function(){
    $(".nav-xms").css("display","none");
  });
});


//左侧导航
function menuFix() {
var sfEls = document.getElementById("nav-xm").getElementsByTagName("li");
for (var i=0; i<sfEls.length; i++) {
sfEls[i].onmouseover=function() {
this.className+=(this.className.length>0? " ": "") + "navhover";
}
sfEls[i].onMouseDown=function() {
this.className+=(this.className.length>0? " ": "") + "navhover";
}
sfEls[i].onMouseUp=function() {
this.className+=(this.className.length>0? " ": "") + "navhover";
}
sfEls[i].onmouseout=function() {
this.className=this.className.replace(new RegExp("( ?|^)navhover\\b"), 
"");}}}
window.onload=menuFix;

//滑动门

	var SDmodel = new scrollDoor();
	if (document.getElementById("hd1") && document.getElementById("hdn1")) {
		SDmodel.sd(["hd1", "hd2","hd3"], ["hdn1", "hdn2","hdn3"], "on", "");
	}
	if (document.getElementById("jb1") && document.getElementById("jbn1")) {
		SDmodel.sd(["jb1", "jb2","jb3","jb4","jb5"], ["jbn1", "jbn2","jbn3","jbn4","jbn5"], "on", "");
	}
	if (document.getElementById("jbb11") && document.getElementById("jbbn11")) {
		SDmodel.sd(["jbb11", "jbb12","jbb13","jbb14"], ["jbbn11", "jbbn12","jbbn13","jbbn14"], "on", "");
	}
	if (document.getElementById("jbb21") && document.getElementById("jbbn21")) {
		SDmodel.sd(["jbb21", "jbb22","jbb23","jbb24"], ["jbbn21", "jbbn22","jbbn23","jbbn24"], "on", "");
	}
	if (document.getElementById("jbb31") && document.getElementById("jbbn31")) {
		SDmodel.sd(["jbb31", "jbb32","jbb33","jbb34","jbb35","jbb36"], ["jbbn31", "jbbn32","jbbn33","jbbn34","jbbn35","jbbn36"], "on", "");
	}
	if (document.getElementById("jbb41") && document.getElementById("jbbn41")) {
		SDmodel.sd(["jbb41", "jbb42","jbb43","jbb44"], ["jbbn41", "jbbn42","jbbn43","jbbn44"], "on", "");
	}
	if (document.getElementById("jbb51") && document.getElementById("jbbn51")) {
		SDmodel.sd(["jbb51", "jbb52","jbb53"], ["jbbn51", "jbbn52","jbbn53"], "on", "");
	}
});

function scrollDoor() {}
scrollDoor.prototype = {
	sd : function (menus, divs, openClass, closeClass) {
		var _this = this;
		if (menus.length != divs.length) {
			alert("菜单层数量和内容层数量不一样!");
			return false;
		}
		for (var i = 0; i < menus.length; i++) {
			_this.$(menus[i]).value = i;
			_this.$(menus[i]).onmouseover = function () {

				for (var j = 0; j < menus.length; j++) {
					_this.$(menus[j]).className = closeClass;
					_this.$(divs[j]).style.display = "none";
				}
				_this.$(menus[this.value]).className = openClass;
				_this.$(divs[this.value]).style.display = "block";
			}
		}
	},
	$ : function (oid) {
		if (typeof(oid) == "string")
			return document.getElementById(oid);
		return oid;
	}
}	












