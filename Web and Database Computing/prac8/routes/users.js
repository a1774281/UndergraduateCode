var express = require('express');
var router = express.Router();

/* GET users listing. */
router.get('/', function(req, res, next) {
    res.send('respond with a resource');
});

router.post('/*', function(req, res, next) {
    console.log("POST from a user");
    if (!req.is('application/json')) {
        res.status(412).send();
    }
    next();
});

var posts = [];
router.post('/addpost', function(req, res, next) {
    var title = req.body.title;
    var content = req.body.content;
    var newPost = { "title": title, "content": content };
    posts.unshift(newPost); //push adds to end of array, unshift adds to start
    res.json();
});

router.get('/getposts', function(req, res, next) {
    res.json(posts);
});

module.exports = router;
