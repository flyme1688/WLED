/*
 * More web UI HTML source arrays.
 * This file is auto generated, please don't make any changes manually.
 * Instead, see https://github.com/Aircoookie/WLED/wiki/Add-own-functionality#web-ui
 * to find out how to easily modify the web UI source!
 */ 

// Autogenerated from wled00/data/usermod.htm, do not edit!!
const char PAGE_usermod[] PROGMEM = R"=====(<!DOCTYPE html><html><body>No usermod custom web page set.</body></html>)=====";


// Autogenerated from wled00/data/msg.htm, do not edit!!
const char PAGE_msg[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>WLED Message</title><script>
function B(){window.history.back()}function RS(){window.location="/settings"}function RP(){top.location.href="/"}
</script><style>
.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%%;margin:0}
</style></head><body><h2>%MSG%</body></html>)=====";


#ifdef WLED_ENABLE_DMX

// Autogenerated from wled00/data/dmxmap.htm, do not edit!!
const char PAGE_dmxmap[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>DMX Map</title><script>
function B(){window.history.back()}function RS(){window.location="/settings"}function RP(){top.location.href="/"}function FM() {%DMXVARS%
var t=["SET 0","RED","GREEN","BLUE","WHITE","SHUTTER","SET 255","DISABLED"],n=[];for(i=0;i<512;i++)n.push(7);for(i=0;i<LC;i++)for(FS=CS+CG*i,j=0;j<CN;j++)DA=FS+j,n[DA-1]=CH[j];for(DMXMap="",i=0;i<512;i++)isstart="",(i+1)%10==0&&(isstart="S"),DMXMap+='<div class="anytype '+isstart+" type"+n[i]+'">'+String(i+1)+"<br />"+t[n[i]]+"</div>";document.getElementById("map").innerHTML=DMXMap}
</script><style>
.anytype{border:1px solid #fff;margin:1px;float:left;width:100px;height:100px}.S{margin:0;border:2px solid #fff}.type7{color:#888;border:1px dotted grey}.type6{color:#fff}.type4{color:#fff;font-weight:700}.type3{color:#00f;font-weight:700}.type2{color:#0f0;font-weight:700}.type1{color:red;font-weight:700}.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%%;margin:0}
</style></head><body onload="FM()"><div id="map">...</div></body></html>)=====";


#else
const char PAGE_dmxmap[] PROGMEM = R"=====()=====";
#endif

// Autogenerated from wled00/data/update.htm, do not edit!!
const char PAGE_update[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>WLED Update</title><script>
function B(){window.history.back()}function U(){document.getElementById("uf").style.display="none",document.getElementById("msg").style.display="block"}
</script><style>
.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}input[type=file]{font-size:16px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%}#msg{display:none}
</style></head><body><h2>WLED Software Update</h2><form method="POST" 
action="/update" id="uf" enctype="multipart/form-data" onsubmit="U()">
Installed version: 0.12.2-bl1<br>Download the latest binary: <a 
href="https://github.com/Aircoookie/WLED/releases" target="_blank"><img 
src="https://img.shields.io/github/release/Aircoookie/WLED.svg?style=flat-square">
</a><br><input type="file" class="bt" name="update" accept=".bin" required><br>
<input type="submit" class="bt" value="Update!"><br><button type="button" 
class="bt" onclick="B()">Back</button></form><div id="msg"><b>Updating...</b>
<br>Please do not close or refresh the page :)</div></body></html>)=====";


// Autogenerated from wled00/data/welcome.htm, do not edit!!
const char PAGE_welcome[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta 
content="width=device-width" name="viewport"><meta name="theme-color" 
content="#222222"><title>Welcome!</title><style>
body{font-family:Verdana,Helvetica,sans-serif;text-align:center;background-color:#222;margin:0;color:#fff}button{outline:0;cursor:pointer;padding:8px;margin:10px;width:230px;text-transform:uppercase;font-family:helvetica;font-size:19px;background-color:#333;color:#fff;border:0 solid #fff;border-radius:25px;filter:drop-shadow(0 0 1px #000)}img{width:999px;max-width:85%;image-rendering:pixelated;image-rendering:crisp-edges;margin:25px 0 -10px 0;animation:fi 1s}@keyframes fi{from{opacity:0}to{opacity:1}}.main{animation:fi 1.5s .7s both}
</style></head><body><img alt="" 
src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAHEAAAAjCAYAAACjOOUsAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsAAAA7AAWrWiQkAAATfSURBVGhD7ZlPaBVHHMdnS2Ox5iKYGIyYJwQlUTHG6kUwtSAIBsEiBopgKR5i68mbIPgEwZun0uYgouIlobQIKQheIsSLaBSaRFoEc3gtMa9HLaiH7X4n81tn583u/HkTaZ/7gR+zMzvv93bfZ3/777GSkpL/AJFo3Tg/H7OuPtGxY7CTsZnjkd/3lRTi/qMKgfGXt8TAO6KfT2TG1f7u6ROlyBXgI9HaQRW4+JR3ox92Z1p1XO3PLCUVORHHvFMSDDeJBuJvH4mlZdS+C3c7B+Ln3fvivw59w0MMOzP/FYvj75K4PMhDDDszdbM7rk1V4hcPD/MQw858MbEnPvJgf3x29hQPMdwUbqc2qRIhCBVGrQk+Lzm9mq6NkIe2t20N7xOf7NjK2w13rlltM+Sh7VvLu+/YOMib6NyMVR7IQ9u7qY33ibb2bbxd/9mvVnkgD217ZTXvE72fbuHtle1X3VxIuH1QOZ2mmG5yaH4yr0giBKryVCDTJBICG+SpJDJNIiFQlacCmSaREKjKU4FMX5F+p1NIk8OExTwbgeD1b7+zotOrlUBQm2FFp1cbgeDtyzlWdHq1EQie/fMH8z29Br0myiwdr7PkWpSGC2se/8IqtWnRa+y7Ur+Q3FF97/X7ZFjV/4B1Dz1Pw5WrlZ/Y7T330gjFikkE9Xo9jSJ0Vah+Ru7nVWNRFWq3Iacai6qQ9kfOl1eNuirUfZ7wrcbgEqkCOyc6MmEDVdyrXUd5ENR3rUiqwI6LnTx8oQp8M783E66cWjiWCarMZlnRSix5PwSTSBXY0WFXdf9HfK+FKlSBoX6rjEQ8XMutD3nn+1Yg5L755Mrzk0qkh2xMwLOYr0iXa6CJZu9KQ+N7LSSoAuma6EKRn1TiwaUn0bO3r/gy7v42/3nf+cEzxFGq5jD1TYTYJhAqj4pt3iI/mdMpTbQRqD4HhqhA9S40r28L3ZWmz4kUjlAFNvucSNBzomtF5vlJJVarVb53mMgHLMBRRBEaNWez3xFqW5vN0+znyQ/5Ahlho6OjcVdXl+jxiVmhHn8Gq+jendq+cpPRvUO1fuUmo3mHavvKTUb3DtX2lZtM3jtUWRqQ3TRMBrLMjMgVkAiB2waX/1nwgURygTv885BICOzrH+BjPpBICBzo38nHfJBFksDFxUU2NjaWjhMNAwSJ1Ems/n2RDQ0NsQNzn4sVjF1vvyGWGOvp6cmsk+frJLpWISFXo1cVElI1+lQhIVejTxUSajVCYp5AoB0k6AhIRQqJo7OnGRe87gIfxl9N1Y8nlpcTKpUK+/rlSdFLDghpft5fUTho0GJD5WW0RetUWi1PgwMNmbtTFdhXaRBowdj2H3kuVGQeyIkg5GVQtE6mFfPoPMgUSqSjgo4Gdqk/whfxpGeSaqJIxjFGsbCwkF2fBHJh3ZH5RpE2RxtBedJtkmi1PLSMdXwgh0KJAIkBEiLQV5MODw9ndiBvp/I2VIwZd5T4EPJQLvRNGCVSYgr0xSotIyMjYkkPfV7eUFNOHa2cx+X3BkaJAIkoxJAWCBwfHxc9PdhBbFzSRgixzHfahVbNA2x/b8JKoi0QaKpE7KC8cVjGmOha06p5fAgq0aYSS8ITROLk5GRUq9UyAt/XUVgSGNyl0kNrMyBHchCUeSwJejotKSkp+VBh7F9fIy7OdlOyMwAAAABJRU5ErkJggg==">
<div class="main"><h1>Welcome to WLED!</h1><h3>
Thank you for installing my application!</h3><b>Next steps:</b><br><br>
Connect the module to your local WiFi here!<br><button 
onclick='window.location.href="/settings/wifi"'>WiFi settings</button><br><i>
Just trying this out in AP mode?</i><br><button 
onclick='window.location.href="/sliders"'>To the controls!</button><br></div>
</body></html>)=====";


// Autogenerated from wled00/data/liveview.htm, do not edit!!
const char PAGE_liveview[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" 
content="width=device-width,initial-scale=1,minimum-scale=1"><meta 
charset="utf-8"><meta name="theme-color" content="#222222"><title>
WLED Live Preview</title><style>
body{margin:0}#canv{background:#000;filter:brightness(175%);width:100%;height:100%;position:absolute}
</style></head><body><div id="canv"><script>
update();var tmout=null;function update(){if(document.hidden)return clearTimeout(tmout),void(tmout=setTimeout(update,250));fetch("/json/live").then(t=>(t.ok||(clearTimeout(tmout),tmout=setTimeout(update,2500)),t.json())).then(t=>{var e="linear-gradient(90deg,",u=t.leds.length;for(i=0;i<u;i++){var o=t.leds[i];o.length>6&&(o=o.substring(2)),e+="#"+o,i<u-1&&(e+=",")}e+=")",document.getElementById("canv").style.background=e,clearTimeout(tmout),tmout=setTimeout(update,40)}).catch((function(t){clearTimeout(tmout),tmout=setTimeout(update,2500)}))}
</script></body></html>)=====";


// Autogenerated from wled00/data/liveviewws.htm, do not edit!!
const char PAGE_liveviewws[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" 
content="width=device-width,initial-scale=1,minimum-scale=1"><meta 
charset="utf-8"><meta name="theme-color" content="#222222"><title>
WLED Live Preview</title><style>
body{margin:0}#canv{background:#000;filter:brightness(175%);width:100%;height:100%;position:absolute}
</style></head><body><div id="canv"><script>
console.info("Live-Preview websocket opening");var socket=new WebSocket("ws://"+document.location.host+"/ws");function updatePreview(e){var o="linear-gradient(90deg,",n=e.length;for(i=0;i<n;i++){var r=e[i];r.length>6&&(r=r.substring(2)),o+="#"+r,i<n-1&&(o+=",")}o+=")",document.getElementById("canv").style.background=o}socket.onopen=function(){console.info("Live-Preview websocket is opened"),socket.send("{'lv':true,'rev':2}")},socket.onclose=function(){console.info("Live-Preview websocket is closing")},socket.onerror=function(e){console.error("Live-Preview websocket error:",e)},socket.onmessage=function(e){try{var o=JSON.parse(e.data);o&&o.leds&&requestAnimationFrame((function(){updatePreview(o.leds)}))}catch(e){console.error("Live-Preview websocket error:",e)}}
</script></body></html>)=====";


// Autogenerated from wled00/data/404.htm, do not edit!!
const char PAGE_404[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta 
content="width=device-width" name="viewport"><meta name="theme-color" 
content="#222222"><title>Not found</title><style>
body{font-family:Verdana,Helvetica,sans-serif;text-align:center;background-color:#222;margin:0;color:#fff}img{width:400px;max-width:50%;image-rendering:pixelated;image-rendering:crisp-edges;margin:25px 0 -10px 0}button{outline:0;cursor:pointer;padding:8px;margin:10px;width:230px;text-transform:uppercase;font-family:helvetica;font-size:19px;background-color:#333;color:#fff;border:0 solid #fff;border-radius:25px}
</style></head><body><img alt="" 
src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsEAAA7BAbiRa+0AAAFMSURBVFhH7ZTfbYNADMaPKDNUrJA85CEjdIjOgNQV+sASlZgmI/AIK6AuQfngnDrmjtpHItQ/P+l0juHsz2cH9+fJ/G7nreldfnDnp+ln/ZIlxbIfQmIwJOekCrEJ8FUvASEWEXoBiuSERcTO75uhuwFWff86bi57n3ZC+rW3YLqB5rn11ldCEPNr2LwFJgHHy8G1bTsu3oKYX4N5BrQ8ZAYewSoBGDjr0ElWCUC/rT2X7MqynL7tG4Dc45BwEYM9H5w7DqHMdfNCURR9nue3Iobk55MtOYeLoOQ8vmoG6o+0FaLrOm9FwC3wayLgx5I2WHpGIGYorulfgPYQ3AZLz4hQ9TMBVVVleJGrRUWz2YgQOg8bPjzzrit7vwcRQb5NTiARRPPzMYItoCpoWZITMkao+mRkddpqQ6z6FN+DfwFJrOm55GfewC/CuU/E4tQYg7BPYQAAAABJRU5ErkJggg==">
<h1>404 Not Found</h1><b>Akemi does not know where you are headed...</b><br><br>
<button onclick='window.location.href="/sliders"'>Back to controls</button>
</body></html>)=====";


// Autogenerated from wled00/data/favicon.ico, do not edit!!
const uint16_t favicon_length = 954;
const uint8_t favicon[] PROGMEM = {
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x86, 0x00,
  0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00,
  0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x06,
  0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00, 0x4d, 0x49, 0x44, 0x41, 0x54, 0x38,
  0x8d, 0x63, 0xfc, 0xff, 0xff, 0x3f, 0x03, 0xb1, 0x80, 0xd1, 0x9e, 0x01, 0x43, 0x31, 0x13, 0xd1,
  0xba, 0x71, 0x00, 0x8a, 0x0d, 0x60, 0x21, 0xa4, 0x00, 0xd9, 0xd9, 0xff, 0x0f, 0x32, 0x30, 0x52,
  0xdd, 0x05, 0xb4, 0xf1, 0x02, 0xb6, 0xd0, 0xa6, 0x99, 0x0b, 0x68, 0x1f, 0x0b, 0xd8, 0x42, 0x9e,
  0xaa, 0x2e, 0xa0, 0xd8, 0x00, 0x46, 0x06, 0x3b, 0xcc, 0xcc, 0x40, 0xc8, 0xd9, 0x54, 0x75, 0x01,
  0xe5, 0x5e, 0x20, 0x25, 0x3b, 0x63, 0x03, 0x00, 0x3e, 0xb7, 0x11, 0x5a, 0x8d, 0x1c, 0x07, 0xb4,
  0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

