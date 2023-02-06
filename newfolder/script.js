function setup() {
	const writer = createWriter('README.md');

	for (var i = 0; i < document.getElementsByClassName("hidden-xs").length; i++)
		document.getElementsByClassName("hidden-xs")[i].innerHTML = "";
	for (var i = 0; i < document.getElementsByClassName("copyright").length; i++)
		document.getElementsByClassName("copyright")[i].innerHTML = "";
	for (var i = 0; i < document.getElementsByTagName("nav").length; i++)
		document.getElementsByTagName("nav")[i].innerHTML = "";
	// document.getElementById("markdownGuideModal").innerHTML = "";
	for (var i = 0; i < document.getElementsByClassName("modal").length; i++)
		document.getElementsByClassName("modal")[i].innerHTML = "";
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

	var hashtags = ["# ", "## ", "### ", "#### ", "##### ", "###### "];
	for (let j = 0; j < 6; j++) {
		var h = document.getElementsByTagName("h" + (j + 1));
		for (let i = 0; i < h.length; i++) {
			h[i].innerHTML = hashtags[j] + h[i].innerHTML;
		}
	}

	var panel_footer = document.getElementsByClassName("panel-footer");
	for (let i = 0; i < panel_footer.length; i++) {
		panel_footer[i].innerHTML = " ";
	}

	var label_info = document.getElementsByClassName("label-info");
	for (let i = 0; i < label_info.length; i++) {
		label_info[i].innerHTML = "```" + label_info[i].innerHTML + "```";
	}

	var cont = "";
	var pre = document.getElementsByTagName("pre");

	for (let i = 0; i < pre.length; i++) {
		cont = pre[i].innerHTML;
		if (cont == null)
			continue;
		// cont = cont.replace(/&lt;/g, "ltltltlt");
		// cont = cont.replace(/&gt;/g, "gtgtgtgt");

		if (cont.indexOf("juliennnn") != -1) {
			cont = cont.replace("<code>", "prepreprepre style=\"opacity: 0.85;  letter-spacing: 0.05em; font-family: Consolas, \'Liberation Mono\', Menlo, Courier, monospace; line-height: 1.4;\"gtgtgtgt\n");
			cont = cont.replace("#include", "erperperperp\n```\n\n``` c\n\t\t#include");
			cont = cont.replace("}julien", "}\n```\n\n``` batch\n");
			cont = cont.replace(/\t\t\t\t/g, "\t\t");

			console.clear();
			console.log(i);
			console.log(cont);
			// cont = cont.split("```\n\n")[0].replace(/\t/g, "") + cont.split("```\n\n")[1].split("{")[0].replace(/\t/g, "") + "{" + cont.split("```\n\n")[1].split("{")[1].split("}")[0] + cont.split("```\n\n")[1].split("{")[1].split("}")[1].replace(/\t/g, "") + "}\n" + cont.split("```\n\n")[2].replace(/\t/g, "");
			cont = cont.replace("``` batch", "```\nprepreprepre style=\"opacity: 0.85;  letter-spacing: 0.05em; font-family: Consolas, \'Liberation Mono\', Menlo, Courier, monospace; line-height: 1.4;\"gtgtgtgt\n");
			cont = cont.replace("</code>", "\nerperperperp");
			cont = cont.replace(/julien@ubuntu:~\//g, "boldboldboldbold style=\"\color: #0DBC6A\"gtgtgtgtjuliendlobdlobdlobdlobboldboldboldbold style=\"\color: #9859C9\"gtgtgtgt@ubuntudlobdlobdlobdlobboldboldboldbold style=\"\color: #0094CA\"gtgtgtgt:~\/");
			cont = cont.replace(/\$ /g, "$ dlobdlobdlobdlob");
		}
		else {
			cont = cont.replace("<code>", "``` c\n");
			cont = cont.replace("</code>", "\n```");
		}
		pre[i].innerHTML = cont;
	}

	var code = document.getElementsByTagName("code");
	for (let i = 0; i < code.length; i++) {
		cont = code[i].innerHTML;
		code[i].innerHTML = "`" + cont + "`";
	}

	var l = document.getElementsByTagName("li");
	for (let i = 0; i < l.length; i++) {
		l[i].innerHTML = "* " + l[i].innerText;
	}

	var docbod = document.body.innerText;
	docbod = docbod.replace(/ltltltltlt/g, "<");
	docbod = docbod.replace(/gtgtgtgtgt/g, ">");
	var output = docbod;
	document.body.innerHTML = "<pre>" + docbod + "</pre>"; //  + "<button style='position: fixed; bottom: 0; right: 0; margin: 5px; cursor: pointer;' id='copy_btn_mine' onclick='navigator.clipboard.writeText(" + output + ")'>copy</button>"
	// navigator.clipboard.writeText(output);
	output = output.replace(/prepreprepre/g, "<pre");
	output = output.replace("Great! You've completed the quiz successfully! Keep going!", "------------------");
	output = output.replace("## Tasks", "# Tasks\n-------");
	output = output.replace(/erperperperp/g, "</pre>");
	output = output.replace(/boldboldboldbold/g, "<b");
	output = output.replace(/dlobdlobdlobdlob/g, "</b>");
	writer.print(output);
	writer.close();
	writer.clear();
}
