// Here You can type your custom JavaScript... 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
document.body.style.backgroundColor = "#f7f7f7";
document.addEventListener("load", body_color());
setInterval(updater, 1000);

var task_btns_length = document.getElementsByClassName("student_task_done").length;
function updater() {
  var task_not_done_btns = document.getElementsByClassName("student_task_done no");
  var task_done_btns = document.getElementsByClassName("student_task_done yes");
  var search_btn = document.getElementById("search-button");
  search_btn.style.fontSize = "2.25em";
  search_btn.style.display = "block";
  search_btn.style.padding = "0em";
  search_btn.style.margin = "0em";
  search_btn.style.width = "1.5em";
  search_btn.style.height = "1.5em";
  search_btn.style.fontFamily = "monospace";
  search_btn.style.textAlign = "center";
  search_btn.innerHTML = task_not_done_btns.length;
  var value = 150-((task_not_done_btns.length/task_btns_length)*150);
  search_btn.style.backgroundColor = "hsl(" + value + ", 69%, 55%)";
  search_btn.style.border = "none";
  
}

function body_color() {
  for(var i=0; i<task_btns_length; i++){
    var codes = document.getElementById("task-num-" + i).getElementsByTagName("code");
    var index = Array.prototype.indexOf.call(document.getElementById("task-num-" + i).getElementsByTagName("code"), document.getElementById("task-num-" + i).getElementsByClassName("review-github-commit_id")[0]);
    console.log(index);
    index = index - 2;
    console.log(codes[index].innreHTML);
    index = codes.length - 2;
    codes[index].outerHTML = "<a target='_blank' href='https://github.com/BinyamMamo/" + codes[index-2].innerText + "/blob/master/" + codes[index-1].innerText + "/" + codes[index].innerText + "'><code>" + codes[index].innerText + "</code></a>";
    codes[index].style.textDecoration = "none";
  }
  colorizer();
  var style = document.createElement('style');
  style.innerHTML = `
  input[type="radio"]:checked + label {
    font-weight: bolder;
    font-size: 16px;
    font-family: monospace;
    position: relative;
    padding-left: 15px;
    color: white;
    filter: invert(100%);
  }
  input[type="radio"]:checked + label:before {
    content: "";
    display: block;
    position: absolute;
    top: 5px;
    left: 1px;
    height: 2px;
    border: 7px solid transparent;
    border-left-color: white;
    color: blue;
    font-weight: bolder;
    font-family: monospace;
  }
  input[type="radio"]:checked{
    display: none;
  }
  .logo-container{
    border-bottom: 1px solid #ddd !important;
    border-right: 1px solid #bbb !important;
    width: 75px !important;
  }
  .sidebar{
    border-right: 1px solid #bbb !important;
    width: 75px;
    background-color: #f2f2f2 !important;
  }
  .sidebar ul li:nth-last-child(1){
    border-top: 1px solid #ccc;
    width: 75px !important;
    background-color: white !important;
    border-right: 1px solid #bbb !important;
  }
  .sidebar::-webkit-scrollbar {
    display: inline; 
    width: 10px;
  }
  /* Track */
  ::-webkit-scrollbar-track {
    background: #f2f2f2;
  }
  
  /* Handle */
  ::-webkit-scrollbar-thumb {
    background: rgba(200,200,200,0.7);
  }
  
  /* Handle on hover */
  ::-webkit-scrollbar-thumb:hover {
    background: #aaa;
  }
  
  `;
  document.head.appendChild(style);
  var alert_info = document.getElementsByClassName("project_progress_percentage");
  for (i = 0; i < alert_info.length; i++) {
    alert_info[i].style.padding = "0.8rem";
    alert_info[i].style.width = "8em";
    alert_info[i].style.fontFamily = "monospace";
    alert_info[i].style.textAlign = "center";
    alert_info[i].style.fontWeight = "bolder";
    alert_info[i].style.fontSize = "1.15em";
    alert_info[i].style.letterSpacing = "0.05rem";
    alert_info[i].style.cursor = "grab";
    alert_info[i].style.color = "#fffa";
  }
  for (var i = 0; i < document.getElementsByClassName("student_task_done").length; i++) {
    document.getElementsByClassName("student_task_done")[i].disabled = true;
  }
  updater();
}

document.addEventListener('keydown', (event) => {
  var locVal = 0, subloc;
  var loc = window.location.href;
  if (loc.indexOf("#") != -1)
    subloc = loc.substring(0, loc.indexOf("#"));
    
  if(event.keyCode==33 || event.keyCode==34){
    var str = loc.substring(loc.indexOf("#"), loc.length);
    str = str.substring(str.lastIndexOf("-")+1);
    locVal = parseInt(str);
    if(locVal > 0){
      if(event.keyCode==33)
        locVal=locVal-1;
      if(event.keyCode==34)
        locVal=locVal+1;
      window.location.assign(subloc + "#task-num-" + locVal);
    }
  } 
  
  if (((event.keyCode >= 96) && (event.keyCode <= 105)) || ((event.keyCode <= 57) && (event.keyCode >= 48))) {
    window.location.assign(subloc + "#task-num-" + event.key);
  }
});

function colorizer() {
  var anchors = document.getElementsByClassName("project_progress_percentage");
  for (var i = 0; i < anchors.length; i++) {
    // var value = anchors[i].innerText.toLowerCase(); value.indexOf("657") != -1
    var data = anchors[i].innerText;
    var value = parseInt(data);

    anchors[i].style.backgroundColor = "#eee";
    anchors[i].style.color = "#171717";
    anchors[i].style.opacity = "0.75";

    anchors[i].style.backgroundColor = "hsl(" + value + ", 75%, 50%)";
    // anchors[i].style.color= my_clr_bin;
  }

  var strongs = document.getElementsByTagName("strong");
  for (var i = 0; i < strongs.length; i++) {
    var data = strongs[i].innerText;
    var value = parseInt(data);

    strongs[i].style.color = "#444";
    if (value >= 0 && value <= 360)
      strongs[i].style.color = "hsl(" + value + ", 50%, 50%)";
  }

  var list_group_item = document.getElementsByClassName("list-group-item");
  for (i = 0; i < list_group_item.length; i++) {
    list_group_item[i].style.backgroundColor = "#fcf8e3FF";
    list_group_item[i].style.opacity = "0.9";
  }
}
