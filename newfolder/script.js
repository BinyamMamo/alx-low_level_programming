function setup() {
	const writer = createWriter('README.md');
	var cont;

	document.getElementsByClassName("hidden-xs")[0].innerHTML = "";
	document.getElementsByClassName("copyright")[document.getElementsByClassName("copyright").length - 1].innerHTML = "";
	document.getElementsByTagName("nav")[0].innerHTML = "";
	document.getElementById("markdownGuideModal").innerHTML = "";
	var a = document.getElementsByTagName("a");
	for (let i = 0; i < a.length; i++) {
		a[i].href = a[i].href.replace("file:///D:", "http://www");
		a[i].innerHTML = "[" + a[i].title + "](" + a[i].href + ")";
	}

	var em = document.getElementsByTagName("em");
	for (let i = 0; i < em.length; i++) {
		em[i].innerHTML = "*" + em[i].innerHTML + "*";
	}

	var br = document.getElementsByTagName("br");
	for (let i = 0; i < br.length; i++) {
		br[i].outerHTML = "\n";
	}

	var b = document.getElementsByTagName("b");
	for (let i = 0; i < b.length; i++) {
		b[i].innerHTML = "**" + b[i].innerHTML + "**";
	}

	var l = document.getElementsByTagName("li");
	for (let i = 0; i < l.length; i++) {
		l[i].innerHTML = "* " + l[i].innerHTML;
	}

	var h = document.getElementsByTagName("h1");
	for (let i = 0; i < h.length; i++) {
		h[i].innerHTML = "# " + h[i].innerHTML;
	}

	h = document.getElementsByTagName("h2");
	for (let i = 0; i < h.length; i++) {
		h[i].innerHTML = "## " + h[i].innerHTML;
	}

	h = document.getElementsByTagName("h3");
	for (let i = 0; i < h.length; i++) {
		h[i].innerHTML = "### " + h[i].innerHTML;
	}

	h = document.getElementsByTagName("h4");
	for (let i = 0; i < h.length; i++) {
		h[i].innerHTML = "#### " + h[i].innerHTML;
	}

	h = document.getElementsByTagName("h5");
	for (let i = 0; i < h.length; i++) {
		h[i].innerHTML = "##### " + h[i].innerHTML;
	}

	h = document.getElementsByTagName("h6");
	for (let i = 0; i < h.length; i++) {
		h[i].innerHTML = "###### " + h[i].innerHTML;
	}

	var panel_footer = document.getElementsByClassName("panel-footer");
	for (let i = 0; i < panel_footer.length; i++) {
		panel_footer[i].innerHTML = " ";
	}

	var label_info = document.getElementsByClassName("label-info");
	for (let i = 0; i < label_info.length; i++) {
		label_info[i].innerHTML = "```" + label_info[i].innerHTML + "```";
	}

	var pre = document.getElementsByTagName("pre");
	for (let i = 0; i < pre.length; i++) {
		cont = pre[i].innerHTML;
		cont = cont.replace(/&lt;/g, "ltltltltlt");
		cont = cont.replace(/&gt;/g, "gtgtgtgtgt");
		cont = cont.replace("<code>", "``` c\n");
		pre[i].innerHTML = cont.replace("</code>", "```");

	}
	var code = document.getElementsByTagName("code");
	for (let i = 0; i < code.length; i++) {
		cont = code[i].innerHTML;
		cont = cont.replace("<code>", "```");
		code[i].innerHTML = cont.replace("</code>", "```");
	}

	var docbod = document.body.innerText;
	docbod = docbod.replace(/ltltltltlt/g, "&lt;");
	docbod = docbod.replace(/gtgtgtgtgt/g, "&gt;");
	var output = docbod;
	document.body.innerHTML = "<pre>" + docbod + "</pre>"; //  + "<button style='position: fixed; bottom: 0; right: 0; margin: 5px; cursor: pointer;' id='copy_btn_mine' onclick='navigator.clipboard.writeText(" + output + ")'>copy</button>"
	// navigator.clipboard.writeText(output);
	writer.print(output);
	writer.close();
	writer.clear();
}
