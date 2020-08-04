
function convert() {
    var temperature = document.getElementById("degree").value;
    temperature = temperature* 9 / 5 + 32;
    document.getElementById("answer").value = temperature;
    
}