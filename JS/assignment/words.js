import { numberToWords } from "./to-word";
var btn = document.getElementById("btn");
btn.addEventListener("click",test);

   function test() {
    //const new_date = Date(document.getElementById('Date').value);
    const name = document.getElementById('name').value;
    //const  year = new_date.getFullYear()
    //const  date = new_date.getdate() 
    //const  month = new_date.getMonth()
    //const string = date + month + year;
    //var inwords = numberToWords.toWords(string);
    document.getElementById("full_sent").textContent = "Hello" + name;
 }