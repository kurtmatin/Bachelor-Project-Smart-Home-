const char indexjs[] PROGMEM = R"=====(

function submitForm1()
{
   var regexp;
   var Editbox1 = document.getElementById('Editbox1');
   if (!(Editbox1.disabled || Editbox1.style.display === 'none' || Editbox1.style.visibility === 'hidden'))
   {
      regexp = /^[-+]?\d*\.?\d*$/;
      if (Editbox1.value.length != 0 && !regexp.test(Editbox1.value))
      {
         alert("Please enter only digit characters in the \"Red\" field.");
         Editbox1.focus();
         return false;
      }
      if (Editbox1.value != "" && !(Editbox1.value >= 0 && Editbox1.value <= 255))
      {
         alert("Please enter a value greater than or equal to \"0\" and less than or equal to \"255\" in the \"Red\" field.");
         Editbox1.focus();
         return false;
      }
   }
   var Editbox2 = document.getElementById('Editbox2');
   if (!(Editbox2.disabled || Editbox2.style.display === 'none' || Editbox2.style.visibility === 'hidden'))
   {
      regexp = /^[-+]?\d*\.?\d*$/;
      if (Editbox2.value.length != 0 && !regexp.test(Editbox2.value))
      {
         alert("Please enter only digit characters in the \"Green\" field.");
         Editbox2.focus();
         return false;
      }
      if (Editbox2.value != "" && !(Editbox2.value >= 0 && Editbox2.value <= 255))
      {
         alert("Please enter a value greater than or equal to \"0\" and less than or equal to \"255\" in the \"Green\" field.");
         Editbox2.focus();
         return false;
      }
   }
   var Editbox3 = document.getElementById('Editbox3');
   if (!(Editbox3.disabled || Editbox3.style.display === 'none' || Editbox3.style.visibility === 'hidden'))
   {
      regexp = /^[-+]?\d*\.?\d*$/;
      if (Editbox3.value.length != 0 && !regexp.test(Editbox3.value))
      {
         alert("Please enter only digit characters in the \"Blue\" field.");
         Editbox3.focus();
         return false;
      }
      if (Editbox3.value != "" && !(Editbox3.value >= 0 && Editbox3.value <= 255))
      {
         alert("Please enter a value greater than or equal to \"0\" and less than or equal to \"255\" in the \"Blue\" field.");
         Editbox3.focus();
         return false;
      }
   }
   var Editbox4 = document.getElementById('Editbox4');
   if (!(Editbox4.disabled || Editbox4.style.display === 'none' || Editbox4.style.visibility === 'hidden'))
   {
      regexp = /^[-+]?\d*\.?\d*$/;
      if (Editbox4.value.length != 0 && !regexp.test(Editbox4.value))
      {
         alert("Please enter only digit characters in the \"Pixel_Number\" field.");
         Editbox4.focus();
         return false;
      }
      if (Editbox4.value != "" && !(Editbox4.value >= 0 && Editbox4.value <= 7))
      {
         alert("Please enter a value greater than or equal to \"0\" and less than or equal to \"7\" in the \"Pixel_Number\" field.");
         Editbox4.focus();
         return false;
      }
   }
   var Editbox5 = document.getElementById('Editbox5');
   if (!(Editbox5.disabled || Editbox5.style.display === 'none' || Editbox5.style.visibility === 'hidden'))
   {
      regexp = /^[-+]?\d*\.?\d*$/;
      if (Editbox5.value.length != 0 && !regexp.test(Editbox5.value))
      {
         alert("Please enter only digit characters in the \"BRIGHTNESS\" field.");
         Editbox5.focus();
         return false;
      }
      if (Editbox5.value != "" && !(Editbox5.value >= 0 && Editbox5.value <= 255))
      {
         alert("Please enter a value greater than or equal to \"0\" and less than or equal to \"255\" in the \"BRIGHTNESS\" field.");
         Editbox5.focus();
         return false;
      }
   }
   var Editbox6 = document.getElementById('Editbox6');
   if (!(Editbox6.disabled || Editbox6.style.display === 'none' || Editbox6.style.visibility === 'hidden'))
   {
      regexp = /^[-+]?\d*\.?\d*$/;
      if (Editbox6.value.length != 0 && !regexp.test(Editbox6.value))
      {
         alert("Please enter only digit characters in the \"Speed\" field.");
         Editbox6.focus();
         return false;
      }
      if (Editbox6.value != "" && !(Editbox6.value >= 0 && Editbox6.value <= 255))
      {
         alert("Please enter a value greater than or equal to \"0\" and less than or equal to \"255\" in the \"Speed\" field.");
         Editbox6.focus();
         return false;
      }
   }
   return true;
}


)=====";
