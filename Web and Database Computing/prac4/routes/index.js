var express = require('express');
var router = express.Router();
var timestamps = "";

function list() {
    timestamps = timestamps + "<li>" + new Date() + "</li>";
    return timestamps;
}

/* GET home page. */
router.get('/', function(req, res, next) {
    res.render('index', { title: 'Express' });
});

var timestamp;
router.get('/last.txt', function(req, res, next) {
    res.send('<plaintext>' + timestamp);
    timestamp = new Date();
});

var colorCount = 0;
var pageColorarray = ["red", "yellow", "green", "blue"];
router.get('/color.html', function(req, res, next) {
    res.send('<!DOCTYPE html>\
<html lang="en">\
<head><title>Color</title></head>\
<body><h1 style="color:' + pageColorarray[colorCount] + ';">' + pageColorarray[colorCount] + '</h1></body>\
</html>');
    if (colorCount == 3) {
        colorCount = 0;
    }
    else {
        colorCount++;
    }
});

router.get('/log.html', function(req, res, next) {
    var html = '<!DOCTYPE html>\
<html lang="en">\
<head><title>Log</title></head>\
<body>\
<ul>' + list() + '</ul>\
</body>\
</html>';
    res.send(html);
});

var loadPagecount = 0;
router.get('/first.html', function(req, res, next) {
    if (loadPagecount == 0) {
        res.send('<!DOCTYPE html>\
<html lang="en">\
<head><title>First</title></head>\
<body>\
<h1>Welcome</h1>\
<a href="/main.html">To Main Page</a>\
</body>\
</html>');
        loadPagecount++;
    }
    else {
        res.redirect('/main.html');
    }
});

router.get('/main.html', function(req, res, next) {
    if (loadPagecount == 0) {
        res.redirect('/first.html');
    }
    else {
        res.send('<!DOCTYPE html>\
<html lang="en">\
<head><title>Main</title></head>\
<body>\
<h1>My Main Site</h1>\
<p>This is my dope little paragraph, how nice :D</p>\
</body>\
</html>');
    }
});

var headerColorcount = 0;
var headerColorarray = ["red", "yellow", "green", "blue"];
router.get('/color.txt', function(req, res, next) {
    res.send(headerColorarray[headerColorcount]);
    if (headerColorcount == 3) {
        headerColorcount = 0;
    }
    else {
        headerColorcount++;
    }
});

var timestampArray = [];
var timestampArraycount = 0;
router.get('/log.json', function(req, res, next) {
    timestampArray[timestampArraycount] = new Date().toLocaleString();
    timestampArraycount++;
    res.json(timestampArray);
});

router.get('/log-ro.json', function(req, res, next) {
    res.json(timestampArray);
});

router.get('/contact.ajax', function(req, res, next) {
    res.send('<a href="a1774281@adelaide.edu.au">My Mail</a>');
});

router.get('/search.ajax', function(req, res, next) {
    res.send('<input type="text"><button type="button">search</button>');
});

var accept = 0;

router.get('/accept', function(req, res, next) {
    res.status(200).send();
    accept++;
});

router.get('/content.ajax', function(req, res, next) {
    if (accept == 0) {
        res.status(403).send();
    }
    else if (accept == 1) {
        res.send("<p>1st Paragraph</p><p>2nd Paragraph</p>");
    }
});

module.exports = router;
