<?php
$z[0]=Array("field","",257,276);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",277,303);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",344,373);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",413,471);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",819,854);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("global","",1502,1557);
$z[5][4]=array();
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n          <dl class=\"li_box\">\r\n            <div>\r\n              <h2><a href=\"[field:arcurl/]\" class=\"L\">[field:title/]</a><a href=\"/swt\" target=\"_blank\" class=\"R\">我要咨询</a></h2>\r\n            </div>\r\n            <div class=\"null\"></div>\r\n            <div class=\"p1\">[field:description function='cn_substr(@me,320)'/]...<a href=\"[field:arcurl/]\">[详情]</a></div>\r\n            <div class=\"p2\">点击：[field:click/]次  发表[field:pubdate function=\"GetDateTimeMK(@me)\"/]</div>\r\n          </dl>\r\n          ",1656,2209);
$z[6][4]=array();
$z[6][4]['pagesize']="11";
$z[7]=Array("pagelist","",2294,2372);
$z[7][4]=array();
$z[7][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[7][4]['listsize']="5";
$z[8]=Array("include","",2475,2511);
$z[8][4]=array();
$z[8][4]['filename']="Right.htm";
$z[9]=Array("include","",3285,3322);
$z[9][4]=array();
$z[9][4]['filename']="footer.htm";

?>