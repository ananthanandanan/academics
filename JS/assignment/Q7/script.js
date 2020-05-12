function cursor(){
var namebox = document.getElementById("fname");
namebox.focus;
namebox.setActive;
namebox.select();
}

function citypincode()
{
    var city = document.forms["Form"]["city"].value;

    if(city == "Trivandrum" || city == "Thiruvananthapuram"){
        document.getElementById("pcode").value = '695001';
    }
    if(city == "Kochi"){
        document.forms["Form"]["pcode"] = '682001';
    }
    if(city == "Chennai"){
        document.getElementById("pcode").value = '600001';
    }
    
}

function validateform() {
    var name = document.forms["Form"]["fname"].value;
    var number = document.forms["Form"]["mnum"].value;
    var pincode = document.forms["Form"]["pcode"].value;
    var al = document.forms["Form"]["al"].value;
    var city = document.forms["Form"]["city"].value;
    var state = document.forms["Form"]["state"].value; 
    var alpha = /^[A-Za-z]+$/
    var isvalid = alpha.test(name);

    if (name == "" || number.length == 0 || pincode.length ==0 || al == "" || city == ""|| state == "") {
      alert("Fill in all the details");
      return false;
    }
    else if(!isvalid){
        alert("Name field should only contain Alphabets");
      return false;  
    }
   else if(number.length != 10){
        alert("Entered Mobile Number is Incorrect");
    return false;
    }
   else if( pincode.length != 6 ){
        alert("Invalid Pincode");
    return false;
    }
    
    
  }