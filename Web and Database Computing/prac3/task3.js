var mouseover = 0;
var numofposts = 0;

function mcount() {
    mouseover++;
    document.getElementById("mcount").innerHTML = mouseover;
}

function post() {
    for (var i = 0; i < document.getElementsByClassName("number")[0].value; i++) {
        var post = document.createElement("div");
        document.getElementById("posts").appendChild(post);
        var time = document.createElement("span");
        time.classList.add("post-time", "date");
        time.innerHTML = new Date();
        post.appendChild(time);
        var content = document.createElement("p");
        content.innerHTML = document.getElementsByTagName("textarea")[0].value;
        content.classList.add("post-content");
        if (document.getElementsByClassName("blueRadio")[0].checked) {
            content.style.color = 'blue';
        }
        else if (document.getElementsByClassName("redRadio")[0].checked) {
            content.style.color = 'red';
        }
        if (document.getElementsByClassName("bold")[0].checked) {
            content.style.fontWeight = "bold";
        }
        if (document.getElementsByClassName("italic")[0].checked) {
            content.style.fontStyle = "italic";
        }

        post.appendChild(content);
        numofposts++;
        postVisibility();
    }
}

function menu() {
    if (document.getElementById("main").style.display === "none") {
        document.getElementById("main").style.display = "block";
        document.getElementById("menu").style.display = "none";
    }
    else {
        document.getElementById("menu").style.display = "block";
        document.getElementById("main").style.display = "none";
    }
}

function backgroundColor() {
    document.body.style.backgroundColor = document.getElementsByClassName("backgroundColor")[0].value;
}

function postVisibility() {
    var range = document.getElementsByClassName("postVisibility")[0].value;
    var postcontent = document.getElementsByClassName("post-content");
    var posttime = document.getElementsByClassName("post-time");
    for (i = 0; i < numofposts; i++) {
        if (i < range) {
            postcontent[i].style.display = "block";
            posttime[i].style.display = "block";
        }
        else {
            postcontent[i].style.display = "none";
            posttime[i].style.display = "none";
        }
    }
}
