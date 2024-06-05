const char index_page[] PROGMEM = R"=====(
<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Nodemcu_web_server</title>
<meta name="generator" content="WYSIWYG Web Builder 19 - https://www.wysiwygwebbuilder.com">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<link href="TestLED.css" rel="stylesheet">
<link href="index.css" rel="stylesheet">
<script src="index.js"></script>
</head>
<body>
<div id="space"><br></div>
<div id="container">
<div id="wb_Form1">
<form name="Form1" method="get" action="/RGB" enctype="text/plain" id="Form1" onsubmit="return submitForm1()">
<input type="number" id="Editbox1" name="Red" value="0" maxlength="3" spellcheck="false">
<input type="number" id="Editbox2" name="Green" value="0" maxlength="3" spellcheck="false">
<input type="number" id="Editbox3" name="Blue" value="0" maxlength="3" spellcheck="false">
<input type="number" id="Editbox4" name="Pixel_Number" value="0" maxlength="1" spellcheck="false">
<input type="submit" id="Button1" name="" value="Show Color">
<div id="wb_Checkbox1">
<input type="checkbox" id="Checkbox1" name="All" value="on"><label for="Checkbox1"></label></div>
<input type="number" id="Editbox5" name="BRIGHTNESS" value="255" maxlength="3" spellcheck="false">
<input type="number" id="Editbox6" name="Speed" value="200" spellcheck="false">
<label for="" id="Label4">Pixel Number</label>
<div id="wb_Checkbox2">
<input type="checkbox" id="Checkbox2" name="FX" value="on"><label for="Checkbox2"></label></div>
<label for="" id="Label2">BLUE</label>
<label for="" id="Label3">GREEN</label>
<label for="" id="Label1">RED</label>
<select name="FXbox" size="1" id="Select1" autocomplete="off">
<option value="0">FX_MODE_STATIC</option>
<option value="1">FX_MODE_BLINK</option>
<option value="2">FX_MODE_BREATH</option>
<option value="3">FX_MODE_COLOR_WIPE</option>
<option value="4">FX_MODE_COLOR_WIPE_RANDOM</option>
<option value="5">FX_MODE_RANDOM_COLOR</option>
<option value="6">FX_MODE_SINGLE_DYNAMIC</option>
<option value="7">FX_MODE_MULTI_DYNAMIC</option>
<option value="8">FX_MODE_RAINBOW</option>
<option value="9">FX_MODE_RAINBOW_CYCLE</option>
<option value="10">FX_MODE_SCAN</option>
<option value="11">FX_MODE_DUAL_SCAN</option>
<option value="12">FX_MODE_FADE</option>
<option value="13">FX_MODE_THEATER_CHASE</option>
<option value="14">FX_MODE_THEATER_CHASE_RAINBOW</option>
<option value="15">FX_MODE_RUNNING_LIGHTS</option>
<option value="16">FX_MODE_TWINKLE</option>
<option value="17">FX_MODE_TWINKLE_RANDOM</option>
<option value="18">FX_MODE_TWINKLE_FADE</option>
<option value="19">FX_MODE_TWINKLE_FADE_RANDOM</option>
<option value="20">FX_MODE_SPARKLE</option>
<option value="21">FX_MODE_FLASH_SPARKLE</option>
<option value="22">FX_MODE_HYPER_SPARKLE</option>
<option value="23">FX_MODE_STROBE</option>
<option value="24">FX_MODE_STROBE_RAINBOW</option>
<option value="25">FX_MODE_MULTI_STROBE</option>
<option value="26">FX_MODE_BLINK_RAINBOW</option>
<option value="27">FX_MODE_CHASE_WHITE</option>
<option value="28">FX_MODE_CHASE_COLOR</option>
<option value="29">FX_MODE_CHASE_RANDOM</option>
<option value="30">FX_MODE_CHASE_RAINBOW</option>
<option value="31">FX_MODE_CHASE_FLASH</option>
<option value="32">FX_MODE_CHASE_FLASH_RANDOM</option>
<option value="33">FX_MODE_CHASE_RAINBOW_WHITE</option>
<option value="34">FX_MODE_CHASE_BLACKOUT</option>
<option value="35">FX_MODE_CHASE_BLACKOUT_RAINBOW</option>
<option value="36">FX_MODE_COLOR_SWEEP_RANDOM</option>
<option value="37">FX_MODE_RUNNING_COLOR</option>
<option value="38">FX_MODE_RUNNING_RED_BLUE</option>
<option value="39">FX_MODE_RUNNING_RANDOM</option>
<option value="40">FX_MODE_LARSON_SCANNER</option>
<option value="41">FX_MODE_COMET</option>
<option value="42">FX_MODE_FIREWORKS</option>
<option value="43">FX_MODE_FIREWORKS_RANDOM</option>
<option value="44">FX_MODE_MERRY_CHRISTMAS</option>
<option value="45">FX_MODE_FIRE_FLICKER</option>
<option value="46">FX_MODE_FIRE_FLICKER_SOFT</option>
</select>
</form>
</div>
<label for="" id="Label5">All Pixels</label>
<div id="wb_Heading1">
<h1 id="Heading1">KURT MATIN LED</h1></div>
<div id="wb_Image1">
<img src="https://s8.uupload.ir/files/142206_uact.jpg" id="Image1" alt="" width="201" height="113"></div>
<label for="" id="Label6">Speed</label>
<label for="" id="Label7">Brightness</label>
<label for="" id="Label8">Predefined FX</label>
</div>
</body>
</html>
)=====";
