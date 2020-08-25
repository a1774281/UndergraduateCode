var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
    res.render('index', { title: 'Express' });
});

router.get('/brew', function(req, res, next) {
    var drink = req.query.drink;
    if (drink == "tea") {
        res.send('A delicious cup of tea!');
    }
    else if (drink == "coffee") {
        res.status(418).send();
    }
    else {
        res.status(400).send();
    }
});

var message = "first";
router.post('/pass-it-on', function(req, res) {
    if (req.body.message == "") {
        res.status(400).send();
    }
    else {
        res.send(message);
        message = req.body.message;
    }
});


router.post('/combine', function(req, res) {
    var suffix = req.body.suffix;
    var line = req.body.lines;
    var combinedText = "";
    for (var i = 0; i < line.length; i++) {
        combinedText += line[i] + suffix + "\n";
    }
    res.send(combinedText);
});

module.exports = router;
