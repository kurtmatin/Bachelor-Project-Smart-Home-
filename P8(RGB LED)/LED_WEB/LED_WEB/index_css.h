const char indexcss[] PROGMEM = R"=====(
html, body
{
   height: 100%;
}
div#space
{
   width: 1px;
   height: 50%;
   margin-bottom: -500px;
   float:left
}
div#container
{
   width: 970px;
   height: 1000px;
   margin: 0 auto;
   position: relative;
   clear: left;
}
body
{
   background-color: #303030;
   color: #000000;
   font-family: Arial;
   font-weight: normal;
   font-size: 13px;
   line-height: 1.1875;
   margin: 0;
   padding: 0;
}
#wb_Form1
{
   background-color: #4F4F4F;
   background-image: none;
   border: 0px solid #CCCCCC;
   border-radius: 0px;
}
#Editbox1
{
   line-height: 26px;
   margin: 0;
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #212529;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   text-align: center;
   padding: 4px 4px 4px 4px;
}
#Editbox1:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Editbox2
{
   line-height: 26px;
   margin: 0;
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #212529;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   text-align: center;
   padding: 4px 4px 4px 4px;
}
#Editbox2:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Editbox3
{
   line-height: 26px;
   margin: 0;
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #212529;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   text-align: center;
   padding: 4px 4px 4px 4px;
}
#Editbox3:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Editbox4
{
   line-height: 26px;
   margin: 0;
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #212529;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   text-align: center;
   padding: 4px 4px 4px 4px;
}
#Editbox4:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Button1
{
   border: 1px solid #FFD700;
   border-radius: 4px;
   background-color: #FFD700;
   background-image: none;
   color: #000000;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   padding: 1px 6px 1px 6px;
   text-align: center;
   -webkit-appearance: none;
   margin: 0;
}
#Button1:focus
{
   outline: 0;
}
#wb_Checkbox1
{
   margin: 0;
}
#wb_Checkbox1, #wb_Checkbox1 *, #wb_Checkbox1 *::before, #wb_Checkbox1 *::after
{
   box-sizing: border-box;
}
#wb_Checkbox1 input[type='checkbox']
{
   position: absolute;
   padding: 0;
   margin: 0;
   opacity: 0;
   z-index: 1;
   width: 29px;
   height: 29px;
   left: 0;
   top: 0;
}
#wb_Checkbox1 label
{
   display: inline-block;
   vertical-align: middle;
   position: absolute;
   left: 0;
   top: 0;
   width: 0;
   height: 0;
   padding: 0;
}
#wb_Checkbox1 label::before
{
   content: "";
   display: inline-block;
   position: absolute;
   width: 29px;
   height: 29px;
   left: 0;
   top: 0;
   background-color: #FFFFFF;
   border: 1px solid #0D6EFD;
   border-radius: 4px;
}
#wb_Checkbox1 label::after
{
   display: inline-block;
   position: absolute;
   width: 29px;
   height: 29px;
   left: 0;
   top: 0;
   visibility: visible;
   padding: 0;
   text-align: center;
   line-height: 29px;
}
#wb_Checkbox1 input[type='checkbox']:checked + label::after
{
   content: " ";
   background: url('data:image/svg+xml,%3csvg%20style%3d%22fill:%23FFFFFF%22%20viewBox%3d%220%200%20116%20116%22%20version%3d%221.1%22%20xmlns%3d%22http://www.w3.org/2000/svg%22%3e%0d%0a%20%20%20%3cpath%20d%3d%22M107%2024%20C108%2025%2c%20109%2027%2c%20109%2029%20L109%2029%20C109%2031%2c%20108%2033%2c%20107%2034%20L49%2092%20C47%2094%2c%2046%2094%2c%2044%2094%20C42%2094%2c%2040%2094%2c%2038%2092%20L9%2063%20C8%2062%2c%207%2060%2c%207%2058%20C7%2056%2c%208%2054%2c%209%2053%20C11%2051%2c%2013%2051%2c%2015%2051%20C17%2051%2c%2018%2051%2c%2020%2053%20L44%2077%20L96%2024%20C98%2022%2c%20100%2022%2c%20102%2022%20C104%2022%2c%20105%2022%2c%20107%2024%22/%3e%0d%0a%3c/svg%3e%0d%0a') no-repeat center center;
   background-size: 80% 80%;
}
#wb_Checkbox1 input[type='checkbox']:checked + label::before
{
   background-color: #0D6EFD;
   background-image: none;
   border-color: #0D6EFD;
}
#wb_Checkbox1 input[type='checkbox']:focus + label::before
{
   outline: thin dotted;
}
#Label1
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #FF0000;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 24px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label1:focus
{
   outline: 0;
}
#Label2
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #0000FF;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 24px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label2:focus
{
   outline: 0;
}
#Label3
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #008000;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 24px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label3:focus
{
   outline: 0;
}
#Label4
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #FFFFFF;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 21px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label4:focus
{
   outline: 0;
}
#Label5
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #FFFFFF;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 21px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label5:focus
{
   outline: 0;
}
#wb_Heading1
{
   background-color: transparent;
   background-image: none;
   border: 0px solid #FFD700;
   border-radius: 0px;
   margin: 0;
   padding: 0;
   text-align: left;
}
#Heading1
{
   color: #FFD700;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 29px;
   margin: 0;
   text-align: left;
   text-transform: none;
}
#wb_Image1
{
   vertical-align: top;
}
#Image1
{
   border: 0px solid #000000;
   border-radius: 0px;
   padding: 0;
   animation: heartbeat-2 3000ms linear 0ms infinite normal both;
   margin: 0;
   left: 0;
   top: 0;
   width: 100%;
   height: 100%;
}
#Editbox5
{
   line-height: 26px;
   margin: 0;
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #212529;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   text-align: center;
   padding: 4px 4px 4px 4px;
}
#Editbox5:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Editbox6
{
   line-height: 26px;
   margin: 0;
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #212529;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   text-align: center;
   padding: 4px 4px 4px 4px;
}
#Editbox6:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Select1
{
   border: 1px solid #DEE2E6;
   border-radius: 4px;
   background-color: #FFFFFF;
   background-image: none;
   color: #000000;
   font-family: Arial;
   font-weight: normal;
   font-style: normal;
   font-size: 13px;
   margin: 0;
   text-align: center;
   padding: 4px 4px 4px 4px;
   box-sizing: border-box;
}
#Select1:focus
{
   border-color: #66AFE9;
   box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(102,175,233,0.60);
   outline: 0;
}
#Label6
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #FFFFFF;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 21px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label6:focus
{
   outline: 0;
}
#Label7
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #FFFFFF;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 21px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label7:focus
{
   outline: 0;
}
#wb_Checkbox2
{
   margin: 0;
}
#wb_Checkbox2, #wb_Checkbox2 *, #wb_Checkbox2 *::before, #wb_Checkbox2 *::after
{
   box-sizing: border-box;
}
#wb_Checkbox2 input[type='checkbox']
{
   position: absolute;
   padding: 0;
   margin: 0;
   opacity: 0;
   z-index: 1;
   width: 29px;
   height: 29px;
   left: 0;
   top: 0;
}
#wb_Checkbox2 label
{
   display: inline-block;
   vertical-align: middle;
   position: absolute;
   left: 0;
   top: 0;
   width: 0;
   height: 0;
   padding: 0;
}
#wb_Checkbox2 label::before
{
   content: "";
   display: inline-block;
   position: absolute;
   width: 29px;
   height: 29px;
   left: 0;
   top: 0;
   background-color: #FFFFFF;
   border: 1px solid #0D6EFD;
   border-radius: 4px;
}
#wb_Checkbox2 label::after
{
   display: inline-block;
   position: absolute;
   width: 29px;
   height: 29px;
   left: 0;
   top: 0;
   visibility: visible;
   padding: 0;
   text-align: center;
   line-height: 29px;
}
#wb_Checkbox2 input[type='checkbox']:checked + label::after
{
   content: " ";
   background: url('data:image/svg+xml,%3csvg%20style%3d%22fill:%23FFFFFF%22%20viewBox%3d%220%200%20116%20116%22%20version%3d%221.1%22%20xmlns%3d%22http://www.w3.org/2000/svg%22%3e%0d%0a%20%20%20%3cpath%20d%3d%22M107%2024%20C108%2025%2c%20109%2027%2c%20109%2029%20L109%2029%20C109%2031%2c%20108%2033%2c%20107%2034%20L49%2092%20C47%2094%2c%2046%2094%2c%2044%2094%20C42%2094%2c%2040%2094%2c%2038%2092%20L9%2063%20C8%2062%2c%207%2060%2c%207%2058%20C7%2056%2c%208%2054%2c%209%2053%20C11%2051%2c%2013%2051%2c%2015%2051%20C17%2051%2c%2018%2051%2c%2020%2053%20L44%2077%20L96%2024%20C98%2022%2c%20100%2022%2c%20102%2022%20C104%2022%2c%20105%2022%2c%20107%2024%22/%3e%0d%0a%3c/svg%3e%0d%0a') no-repeat center center;
   background-size: 80% 80%;
}
#wb_Checkbox2 input[type='checkbox']:checked + label::before
{
   background-color: #0D6EFD;
   background-image: none;
   border-color: #0D6EFD;
}
#wb_Checkbox2 input[type='checkbox']:focus + label::before
{
   outline: thin dotted;
}
#Label8
{
   margin: 0;
   border: 0px solid #CCCCCC;
   border-radius: 4px;
   background-color: transparent;
   background-image: none;
   color: #FFFFFF;
   font-family: Arial;
   font-weight: bold;
   font-style: normal;
   font-size: 21px;
   text-align: center;
   vertical-align: top;
   padding: 4px 4px 4px 4px;
}
#Label8:focus
{
   outline: 0;
}
#Editbox5
{
   position: absolute;
   left: 201px;
   top: 228px;
   width: 86px;
   height: 26px;
   z-index: 6;
}
#Editbox6
{
   position: absolute;
   left: 448px;
   top: 228px;
   width: 86px;
   height: 26px;
   z-index: 7;
}
#wb_Image1
{
   position: absolute;
   left: 199px;
   top: 7px;
   width: 201px;
   height: 92px;
   z-index: 17;
}
#Button1
{
   position: absolute;
   left: 245px;
   top: 376px;
   width: 111px;
   height: 49px;
   z-index: 4;
}
#Checkbox2
{
   position: absolute;
   left: 0;
   top: 0;
}
#Editbox1
{
   position: absolute;
   left: 62px;
   top: 80px;
   width: 86px;
   height: 26px;
   z-index: 0;
}
#Editbox2
{
   position: absolute;
   left: 252px;
   top: 80px;
   width: 86px;
   height: 26px;
   z-index: 1;
}
#Editbox3
{
   position: absolute;
   left: 448px;
   top: 80px;
   width: 86px;
   height: 26px;
   z-index: 2;
}
#Checkbox1
{
   position: absolute;
   left: 0;
   top: 0;
}
#Label8
{
   position: absolute;
   left: 205px;
   top: 355px;
   width: 201px;
   height: 92px;
   line-height: 92px;
   z-index: 20;
}
#Label7
{
   position: absolute;
   left: 195px;
   top: 275px;
   width: 201px;
   height: 92px;
   line-height: 92px;
   z-index: 19;
}
#Label6
{
   position: absolute;
   left: 481px;
   top: 275px;
   width: 201px;
   height: 92px;
   line-height: 92px;
   z-index: 18;
}
#Label5
{
   position: absolute;
   left: 496px;
   top: 207px;
   width: 201px;
   height: 92px;
   line-height: 92px;
   z-index: 15;
}
#wb_Heading1
{
   position: absolute;
   left: 451px;
   top: 49px;
   width: 520px;
   height: 100px;
   z-index: 16;
}
#Select1
{
   position: absolute;
   left: 245px;
   top: 313px;
   width: 299px;
   height: 27px;
   z-index: 13;
}
#Label4
{
   position: absolute;
   left: 6px;
   top: 128px;
   width: 201px;
   height: 92px;
   line-height: 92px;
   z-index: 8;
}
#Label3
{
   position: absolute;
   left: 250px;
   top: 0px;
   width: 92px;
   height: 92px;
   line-height: 92px;
   z-index: 11;
}
#wb_Checkbox2
{
   position: absolute;
   left: 201px;
   top: 311px;
   width: 29px;
   height: 30px;
   z-index: 9;
}
#wb_Checkbox1
{
   position: absolute;
   left: 482px;
   top: 163px;
   width: 29px;
   height: 30px;
   z-index: 5;
}
#Label2
{
   position: absolute;
   left: 449px;
   top: 0px;
   width: 92px;
   height: 92px;
   line-height: 92px;
   z-index: 10;
}
#Label1
{
   position: absolute;
   left: 58px;
   top: 0px;
   width: 92px;
   height: 92px;
   line-height: 92px;
   z-index: 12;
}
#Editbox4
{
   position: absolute;
   left: 201px;
   top: 160px;
   width: 86px;
   height: 26px;
   z-index: 3;
}
#wb_Form1
{
   position: absolute;
   left: 199px;
   top: 79px;
   width: 600px;
   height: 464px;
   z-index: 14;
}
@media only screen and (max-width: 320px)
{
div#container
{
   width: 320px;
   height: 1016px;
}
body
{
   background-color: #303030;
   background-image: none;
}
#wb_Form1
{
   left: 4px;
   top: 103px;
   width: 316px;
   height: 664px;
   visibility: visible;
   display: inline;
   font-size: 13px;
   font-family: Arial;
   font-style: normal;
   text-decoration: none;
}
#Editbox1
{
   left: 172px;
   top: 57px;
   width: 86px;
   height: 26px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Editbox1
{
   line-height: 26px;
}
#Editbox2
{
   left: 172px;
   top: 112px;
   width: 86px;
   height: 26px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Editbox2
{
   line-height: 26px;
}
#Editbox3
{
   left: 172px;
   top: 171px;
   width: 86px;
   height: 26px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Editbox3
{
   line-height: 26px;
}
#Editbox4
{
   left: 172px;
   top: 227px;
   width: 86px;
   height: 26px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Editbox4
{
   line-height: 26px;
}
#Button1
{
   left: 103px;
   top: 567px;
   width: 111px;
   height: 49px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 1px 6px 1px 6px;
}
#wb_Checkbox1
{
   left: 206px;
   top: 281px;
   width: 29px;
   height: 30px;
   visibility: visible;
   display: inline;
   margin: 0;
}
#wb_Checkbox1 input[type='checkbox']
{
   width: 29px;
   height: 29px;
}
#wb_Checkbox1 label::before
{
   width: 29px;
   height: 29px;
   border-color: #0D6EFD;
}
#wb_Checkbox1 label::after
{
   width: 29px;
   height: 29px;
   line-height: 29px;
}
#wb_Checkbox1 input[type='checkbox']:checked + label::after
{
   color: #FFFFFF;
}
#wb_Checkbox1 input[type='checkbox']:checked + label::before
{
   background-color: #0D6EFD;
   background-image: none;
   border-color: #0D6EFD;
}
#Label1
{
   left: 54px;
   top: 57px;
   width: 92px;
   height: 29px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label1
{
   line-height: 29px;
}
#Label2
{
   left: 54px;
   top: 139px;
   width: 92px;
   height: 92px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label2
{
   line-height: 92px;
}
#Label3
{
   left: 54px;
   top: 80px;
   width: 92px;
   height: 92px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label3
{
   line-height: 92px;
}
#Label4
{
   left: 9px;
   top: 219px;
   width: 163px;
   height: 36px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label4
{
   line-height: 36px;
}
#Label5
{
   left: 1px;
   top: 375px;
   width: 201px;
   height: 31px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label5
{
   line-height: 31px;
}
#wb_Heading1
{
   left: 66px;
   top: 45px;
   width: 254px;
   height: 34px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 0;
}
#wb_Image1
{
   left: 4px;
   top: 7px;
   width: 59px;
   height: 96px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 0;
}
#Editbox5
{
   left: 172px;
   top: 327px;
   width: 86px;
   height: 26px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Editbox5
{
   line-height: 26px;
}
#Editbox6
{
   left: 172px;
   top: 383px;
   width: 86px;
   height: 26px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Editbox6
{
   line-height: 26px;
}
#Select1
{
   left: 9px;
   top: 509px;
   width: 299px;
   height: 27px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
}
#Label6
{
   left: 1px;
   top: 486px;
   width: 201px;
   height: 29px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label6
{
   line-height: 29px;
}
#Label7
{
   left: 1px;
   top: 421px;
   width: 201px;
   height: 37px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label7
{
   line-height: 37px;
}
#wb_Checkbox2
{
   left: 206px;
   top: 448px;
   width: 29px;
   height: 30px;
   visibility: visible;
   display: inline;
   margin: 0;
}
#wb_Checkbox2 input[type='checkbox']
{
   width: 29px;
   height: 29px;
}
#wb_Checkbox2 label::before
{
   width: 29px;
   height: 29px;
   border-color: #0D6EFD;
}
#wb_Checkbox2 label::after
{
   width: 29px;
   height: 29px;
   line-height: 29px;
}
#wb_Checkbox2 input[type='checkbox']:checked + label::after
{
   color: #FFFFFF;
}
#wb_Checkbox2 input[type='checkbox']:checked + label::before
{
   background-color: #0D6EFD;
   background-image: none;
   border-color: #0D6EFD;
}
#Label8
{
   left: 1px;
   top: 512px;
   width: 201px;
   height: 92px;
   visibility: visible;
   display: inline;
   margin: 0;
   padding: 4px 4px 4px 4px;
   text-align: center;
}
#Label8
{
   line-height: 92px;
}
}


)=====";
