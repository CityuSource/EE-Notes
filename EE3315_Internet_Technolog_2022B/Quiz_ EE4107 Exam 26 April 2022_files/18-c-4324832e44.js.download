(window["canvasWebpackJsonp"]=window["canvasWebpackJsonp"]||[]).push([[18],{"/HcR":function(n,r,a){"use strict"
var t=a("O92E")
var e=a("2bDf")
var i=a("IYu7")
var l=a("V3mB")
var o=a("Hp5Y")
function c(n,r){Object.keys(r).forEach((function(a){n[a]=r[a]}))
return n}function s(){var n=c({},o)
var r="en"
var a={}
var u=function(n){return n}
var d=null
var f="warning"
var v={}
function h(n,a,i){var l="string"===typeof n?n:n.default
var o="object"===typeof n&&n.id||u(l)
var c=x(l,o,i||r)
var s=c.format||(c.format=e(t(c.message),i||r,v))
return s(a)}h.rich=function(n,a,i){var l="string"===typeof n?n:n.default
var o="object"===typeof n&&n.id||u(l)
var c=x(l,o,i||r)
var s=c.toParts||(c.toParts=e.toParts(t(c.message,{tagsType:m}),i||r,v))
return s(a)}
var m="<>"
function p(n,r){var a=n[2]
return function(n,r){var t="object"===typeof a?g(a,r):a
return"function"===typeof n?n(t):n}}v[m]=p
function g(n,r){return Object.keys(n).reduce((function(a,t){a[t]=n[t](r)
return a}),{})}function x(n,r,t){var e=l(t,a)||"en"
var i=a[e]||(a[e]={})
var o=i[r]
"string"===typeof o&&(o=i[r]={message:o})
if(!o){var c='Translation for "'+r+'" in "'+e+'" is missing'
if("warning"===f)"undefined"!==typeof console&&console.warn(c)
else if("ignore"!==f)throw new Error(c)
var s="function"===typeof d?d(n,r,e)||n:d||n
o=i[r]={message:s}}return o}h.setup=function(t){t=t||{}
t.locale&&(r=t.locale)
"translations"in t&&(a=t.translations||{})
t.generateId&&(u=t.generateId)
"missingReplacement"in t&&(d=t.missingReplacement)
t.missingTranslation&&(f=t.missingTranslation)
if(t.formats){t.formats.number&&c(n.number,t.formats.number)
t.formats.date&&c(n.date,t.formats.date)
t.formats.time&&c(n.time,t.formats.time)}if(t.types){v=t.types
v[m]=p}return{locale:r,translations:a,generateId:u,missingReplacement:d,missingTranslation:f,formats:n,types:v}}
h.number=function(a,t,e){var i=t&&n.number[t]||n.parseNumberPattern(t)||n.number.default
return new Intl.NumberFormat(e||r,i).format(a)}
h.date=function(a,t,e){var i=t&&n.date[t]||n.parseDatePattern(t)||n.date.default
return new Intl.DateTimeFormat(e||r,i).format(a)}
h.time=function(a,t,e){var i=t&&n.time[t]||n.parseDatePattern(t)||n.time.default
return new Intl.DateTimeFormat(e||r,i).format(a)}
h.select=function(n,r){return r[n]||r.other}
h.custom=function(n,r,a,t){if(!(n[1]in v))return a
return v[n[1]](n,r)(a,t)}
h.plural=b.bind(null,"cardinal")
h.selectordinal=b.bind(null,"ordinal")
function b(n,a,t,e,o){if("object"===typeof t&&"object"!==typeof e){o=e
e=t
t=0}var c=l(o||r,i)
var s=c&&i[c][n]||k
return e["="+ +a]||e[s(a-t)]||e.other}function k(){return"other"}h.namespace=s
return h}n.exports=s()},"2bDf":function(n,r,a){"use strict"
var t=a("Hp5Y")
var e=a("V3mB")
var i=a("IYu7")
r=n.exports=function(n,r,a){return l(n,null,r||"en",a||{},true)}
r.toParts=function(n,r,a){return l(n,null,r||"en",a||{},false)}
function l(n,r,a,t,e){var i=n.map((function(n){return o(n,r,a,t,e)}))
if(!e)return function(n){return i.reduce((function(r,a){return r.concat(a(n))}),[])}
if(1===i.length)return i[0]
return function(n){var r=""
for(var a=0;a<i.length;++a)r+=i[a](n)
return r}}function o(n,r,a,t,e){if("string"===typeof n){var i=n
return function(){return i}}var o=n[0]
var s=n[1]
if(r&&"#"===n[0]){o=r[0]
var u=r[2]
var d=(t.number||m.number)([o,"number"],a)
return function(n){return d(c(o,n)-u,n)}}var f
if("plural"===s||"selectordinal"===s){f={}
Object.keys(n[3]).forEach((function(r){f[r]=l(n[3][r],n,a,t,e)}))
n=[n[0],n[1],n[2],f]}else if(n[2]&&"object"===typeof n[2]){f={}
Object.keys(n[2]).forEach((function(r){f[r]=l(n[2][r],n,a,t,e)}))
n=[n[0],n[1],f]}var v=s&&(t[s]||m[s])
if(v){var h=v(n,a)
return function(n){return h(c(o,n),n)}}return e?function(n){return String(c(o,n))}:function(n){return c(o,n)}}function c(n,r){if(r&&n in r)return r[n]
var a=n.split(".")
var t=r
for(var e=0,i=a.length;t&&e<i;++e)t=t[a[e]]
return t}function s(n,r){var a=n[2]
var e=t.number[a]||t.parseNumberPattern(a)||t.number.default
return new Intl.NumberFormat(r,e).format}function u(n,r){var a=n[2]
var e=t.duration[a]||t.duration.default
var i=new Intl.NumberFormat(r,e.seconds).format
var l=new Intl.NumberFormat(r,e.minutes).format
var o=new Intl.NumberFormat(r,e.hours).format
var c=/^fi$|^fi-|^da/.test(String(r))?".":":"
return function(n,r){n=+n
if(!isFinite(n))return i(n)
var a=~~(n/60/60)
var t=~~(n/60%60)
var e=(a?o(Math.abs(a))+c:"")+l(Math.abs(t))+c+i(Math.abs(n%60))
return n<0?o(-1).replace(o(1),e):e}}function d(n,r){var a=n[1]
var e=n[2]
var i=t[a][e]||t.parseDatePattern(e)||t[a].default
return new Intl.DateTimeFormat(r,i).format}function f(n,r){var a=n[1]
var t="selectordinal"===a?"ordinal":"cardinal"
var l=n[2]
var o=n[3]
var c
if(Intl.PluralRules&&Intl.PluralRules.supportedLocalesOf(r).length>0)c=new Intl.PluralRules(r,{type:t})
else{var s=e(r,i)
var u=s&&i[s][t]||v
c={select:u}}return function(n,r){var a=o["="+ +n]||o[c.select(n-l)]||o.other
return a(r)}}function v(){return"other"}function h(n,r){var a=n[2]
return function(n,r){var t=a[n]||a.other
return t(r)}}var m={number:s,ordinal:s,spellout:s,duration:u,date:d,time:d,plural:f,selectordinal:f,select:h}
r.types=m},Hp5Y:function(n,r){var a="long"
var t="short"
var e="narrow"
var i="numeric"
var l="2-digit"
n.exports={number:{decimal:{style:"decimal"},integer:{style:"decimal",maximumFractionDigits:0},currency:{style:"currency",currency:"USD"},percent:{style:"percent"},default:{style:"decimal"}},date:{short:{month:i,day:i,year:l},medium:{month:t,day:i,year:i},long:{month:a,day:i,year:i},full:{month:a,day:i,year:i,weekday:a},default:{month:t,day:i,year:i}},time:{short:{hour:i,minute:i},medium:{hour:i,minute:i,second:i},long:{hour:i,minute:i,second:i,timeZoneName:t},full:{hour:i,minute:i,second:i,timeZoneName:t},default:{hour:i,minute:i,second:i}},duration:{default:{hours:{minimumIntegerDigits:1,maximumFractionDigits:0},minutes:{minimumIntegerDigits:2,maximumFractionDigits:0},seconds:{minimumIntegerDigits:2,maximumFractionDigits:3}}},parseNumberPattern:function(n){if(!n)return
var r={}
var a=n.match(/\b[A-Z]{3}\b/i)
var t=n.replace(/[^¤]/g,"").length
!t&&a&&(t=1)
if(t){r.style="currency"
r.currencyDisplay=1===t?"symbol":2===t?"code":"name"
r.currency=a?a[0].toUpperCase():"USD"}else n.indexOf("%")>=0&&(r.style="percent")
if(!/[@#0]/.test(n))return r.style?r:void 0
r.useGrouping=n.indexOf(",")>=0
if(/E\+?[@#0]+/i.test(n)||n.indexOf("@")>=0){var e=n.replace(/E\+?[@#0]+|[^@#0]/gi,"")
r.minimumSignificantDigits=Math.min(Math.max(e.replace(/[^@0]/g,"").length,1),21)
r.maximumSignificantDigits=Math.min(Math.max(e.length,1),21)}else{var i=n.replace(/[^#0.]/g,"").split(".")
var l=i[0]
var o=l.length-1
while("0"===l[o])--o
r.minimumIntegerDigits=Math.min(Math.max(l.length-1-o,1),21)
var c=i[1]||""
o=0
while("0"===c[o])++o
r.minimumFractionDigits=Math.min(Math.max(o,0),20)
while("#"===c[o])++o
r.maximumFractionDigits=Math.min(Math.max(o,0),20)}return r},parseDatePattern:function(n){if(!n)return
var r={}
for(var o=0;o<n.length;){var c=n[o]
var s=1
while(n[++o]===c)++s
switch(c){case"G":r.era=5===s?e:4===s?a:t
break
case"y":case"Y":r.year=2===s?l:i
break
case"M":case"L":s=Math.min(Math.max(s-1,0),4)
r.month=[i,l,t,a,e][s]
break
case"E":case"e":case"c":r.weekday=5===s?e:4===s?a:t
break
case"d":case"D":r.day=2===s?l:i
break
case"h":case"K":r.hour12=true
r.hour=2===s?l:i
break
case"H":case"k":r.hour12=false
r.hour=2===s?l:i
break
case"m":r.minute=2===s?l:i
break
case"s":case"S":r.second=2===s?l:i
break
case"z":case"Z":case"v":case"V":r.timeZoneName=1===s?t:a}}return Object.keys(r).length?r:void 0}}},IYu7:function(n,r,a){"use strict"
var t="zero",e="one",i="two",l="few",o="many",c="other"
var s=[function(n){var r=+n
return 1===r?e:c},function(n){var r=+n
return 0<=r&&r<=1?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=+n
return 0===r||1===a?e:c},function(n){var r=+n
return 0===r?t:1===r?e:2===r?i:3<=r%100&&r%100<=10?l:11<=r%100&&r%100<=99?o:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
return 1===r&&0===a?e:c},function(n){var r=+n
return r%10===1&&r%100!==11?e:2<=r%10&&r%10<=4&&(r%100<12||14<r%100)?l:r%10===0||5<=r%10&&r%10<=9||11<=r%100&&r%100<=14?o:c},function(n){var r=+n
return r%10===1&&r%100!==11&&r%100!==71&&r%100!==91?e:r%10===2&&r%100!==12&&r%100!==72&&r%100!==92?i:(3<=r%10&&r%10<=4||r%10===9)&&(r%100<10||19<r%100)&&(r%100<70||79<r%100)&&(r%100<90||99<r%100)?l:0!==r&&r%1e6===0?o:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
var t=+(n+".").split(".")[1]
return 0===a&&r%10===1&&r%100!==11||t%10===1&&t%100!==11?e:0===a&&2<=r%10&&r%10<=4&&(r%100<12||14<r%100)||2<=t%10&&t%10<=4&&(t%100<12||14<t%100)?l:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
return 1===r&&0===a?e:2<=r&&r<=4&&0===a?l:0!==a?o:c},function(n){var r=+n
return 0===r?t:1===r?e:2===r?i:3===r?l:6===r?o:c},function(n){var r=Math.floor(Math.abs(+n))
var a=+(""+n).replace(/^[^.]*.?|0+$/g,"")
var t=+n
return 1===t||0!==a&&(0===r||1===r)?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
var t=+(n+".").split(".")[1]
return 0===a&&r%100===1||t%100===1?e:0===a&&r%100===2||t%100===2?i:0===a&&3<=r%100&&r%100<=4||3<=t%100&&t%100<=4?l:c},function(n){var r=Math.floor(Math.abs(+n))
return 0===r||1===r?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
var t=+(n+".").split(".")[1]
return 0===a&&(1===r||2===r||3===r)||0===a&&r%10!==4&&r%10!==6&&r%10!==9||0!==a&&t%10!==4&&t%10!==6&&t%10!==9?e:c},function(n){var r=+n
return 1===r?e:2===r?i:3<=r&&r<=6?l:7<=r&&r<=10?o:c},function(n){var r=+n
return 1===r||11===r?e:2===r||12===r?i:3<=r&&r<=10||13<=r&&r<=19?l:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
return 0===a&&r%10===1?e:0===a&&r%10===2?i:0!==a||r%100!==0&&r%100!==20&&r%100!==40&&r%100!==60&&r%100!==80?0!==a?o:c:l},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
var t=+n
return 1===r&&0===a?e:2===r&&0===a?i:0===a&&(t<0||10<t)&&t%10===0?o:c},function(n){var r=Math.floor(Math.abs(+n))
var a=+(""+n).replace(/^[^.]*.?|0+$/g,"")
return 0===a&&r%10===1&&r%100!==11||0!==a?e:c},function(n){var r=+n
return 1===r?e:2===r?i:c},function(n){var r=+n
return 0===r?t:1===r?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=+n
return 0===a?t:0!==r&&1!==r||0===a?c:e},function(n){var r=+(n+".").split(".")[1]
var a=+n
return a%10===1&&(a%100<11||19<a%100)?e:2<=a%10&&a%10<=9&&(a%100<11||19<a%100)?l:0!==r?o:c},function(n){var r=(n+".").split(".")[1].length
var a=+(n+".").split(".")[1]
var i=+n
return i%10===0||11<=i%100&&i%100<=19||2===r&&11<=a%100&&a%100<=19?t:i%10===1&&i%100!==11||2===r&&a%10===1&&a%100!==11||2!==r&&a%10===1?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
var t=+(n+".").split(".")[1]
return 0===a&&r%10===1&&r%100!==11||t%10===1&&t%100!==11?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
var t=+n
return 1===r&&0===a?e:0!==a||0===t||1!==t&&1<=t%100&&t%100<=19?l:c},function(n){var r=+n
return 1===r?e:0===r||2<=r%100&&r%100<=10?l:11<=r%100&&r%100<=19?o:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
return 1===r&&0===a?e:0===a&&2<=r%10&&r%10<=4&&(r%100<12||14<r%100)?l:0===a&&1!==r&&0<=r%10&&r%10<=1||0===a&&5<=r%10&&r%10<=9||0===a&&12<=r%100&&r%100<=14?o:c},function(n){var r=Math.floor(Math.abs(+n))
return 0<=r&&r<=1?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
return 0===a&&r%10===1&&r%100!==11?e:0===a&&2<=r%10&&r%10<=4&&(r%100<12||14<r%100)?l:0===a&&r%10===0||0===a&&5<=r%10&&r%10<=9||0===a&&11<=r%100&&r%100<=14?o:c},function(n){var r=Math.floor(Math.abs(+n))
var a=+n
return 0===r||1===a?e:2<=a&&a<=10?l:c},function(n){var r=Math.floor(Math.abs(+n))
var a=+(n+".").split(".")[1]
var t=+n
return 0===t||1===t||0===r&&1===a?e:c},function(n){var r=Math.floor(Math.abs(+n))
var a=(n+".").split(".")[1].length
return 0===a&&r%100===1?e:0===a&&r%100===2?i:0===a&&3<=r%100&&r%100<=4||0!==a?l:c},function(n){var r=+n
return 0<=r&&r<=1||11<=r&&r<=99?e:c},function(n){var r=+n
return 1===r||5===r||7===r||8===r||9===r||10===r?e:2===r||3===r?i:4===r?l:6===r?o:c},function(n){var r=Math.floor(Math.abs(+n))
return r%10===1||r%10===2||r%10===5||r%10===7||r%10===8||r%100===20||r%100===50||r%100===70||r%100===80?e:r%10===3||r%10===4||r%1e3===100||r%1e3===200||r%1e3===300||r%1e3===400||r%1e3===500||r%1e3===600||r%1e3===700||r%1e3===800||r%1e3===900?l:0===r||r%10===6||r%100===40||r%100===60||r%100===90?o:c},function(n){var r=+n
return r%10!==2&&r%10!==3||r%100===12||r%100===13?c:l},function(n){var r=+n
return 1===r||3===r?e:2===r?i:4===r?l:c},function(n){var r=+n
return 0===r||7===r||8===r||9===r?t:1===r?e:2===r?i:3===r||4===r?l:5===r||6===r?o:c},function(n){var r=+n
return r%10===1&&r%100!==11?e:r%10===2&&r%100!==12?i:r%10===3&&r%100!==13?l:c},function(n){var r=+n
return 1===r||11===r?e:2===r||12===r?i:3===r||13===r?l:c},function(n){var r=+n
return 1===r?e:2===r||3===r?i:4===r?l:6===r?o:c},function(n){var r=+n
return 1===r||5===r?e:c},function(n){var r=+n
return 11===r||8===r||80===r||800===r?o:c},function(n){var r=Math.floor(Math.abs(+n))
return 1===r?e:0===r||2<=r%100&&r%100<=20||r%100===40||r%100===60||r%100===80?o:c},function(n){var r=+n
return r%10===6||r%10===9||r%10===0&&0!==r?o:c},function(n){var r=Math.floor(Math.abs(+n))
return r%10===1&&r%100!==11?e:r%10===2&&r%100!==12?i:r%10!==7&&r%10!==8||r%100===17||r%100===18?c:o},function(n){var r=+n
return 1===r?e:2===r||3===r?i:4===r?l:c},function(n){var r=+n
return 1<=r&&r<=4?e:c},function(n){var r=+n
return 1===r||5===r||7<=r&&r<=9?e:2===r||3===r?i:4===r?l:6===r?o:c},function(n){var r=+n
return 1===r?e:r%10===4&&r%100!==14?o:c},function(n){var r=+n
return r%10!==1&&r%10!==2||r%100===11||r%100===12?c:e},function(n){var r=+n
return r%10===6||r%10===9||10===r?l:c},function(n){var r=+n
return r%10===3&&r%100!==13?l:c}]
n.exports={af:{cardinal:s[0]},ak:{cardinal:s[1]},am:{cardinal:s[2]},ar:{cardinal:s[3]},ars:{cardinal:s[3]},as:{cardinal:s[2],ordinal:s[34]},asa:{cardinal:s[0]},ast:{cardinal:s[4]},az:{cardinal:s[0],ordinal:s[35]},be:{cardinal:s[5],ordinal:s[36]},bem:{cardinal:s[0]},bez:{cardinal:s[0]},bg:{cardinal:s[0]},bh:{cardinal:s[1]},bn:{cardinal:s[2],ordinal:s[34]},br:{cardinal:s[6]},brx:{cardinal:s[0]},bs:{cardinal:s[7]},ca:{cardinal:s[4],ordinal:s[37]},ce:{cardinal:s[0]},cgg:{cardinal:s[0]},chr:{cardinal:s[0]},ckb:{cardinal:s[0]},cs:{cardinal:s[8]},cy:{cardinal:s[9],ordinal:s[38]},da:{cardinal:s[10]},de:{cardinal:s[4]},dsb:{cardinal:s[11]},dv:{cardinal:s[0]},ee:{cardinal:s[0]},el:{cardinal:s[0]},en:{cardinal:s[4],ordinal:s[39]},eo:{cardinal:s[0]},es:{cardinal:s[0]},et:{cardinal:s[4]},eu:{cardinal:s[0]},fa:{cardinal:s[2]},ff:{cardinal:s[12]},fi:{cardinal:s[4]},fil:{cardinal:s[13],ordinal:s[0]},fo:{cardinal:s[0]},fr:{cardinal:s[12],ordinal:s[0]},fur:{cardinal:s[0]},fy:{cardinal:s[4]},ga:{cardinal:s[14],ordinal:s[0]},gd:{cardinal:s[15],ordinal:s[40]},gl:{cardinal:s[4]},gsw:{cardinal:s[0]},gu:{cardinal:s[2],ordinal:s[41]},guw:{cardinal:s[1]},gv:{cardinal:s[16]},ha:{cardinal:s[0]},haw:{cardinal:s[0]},he:{cardinal:s[17]},hi:{cardinal:s[2],ordinal:s[41]},hr:{cardinal:s[7]},hsb:{cardinal:s[11]},hu:{cardinal:s[0],ordinal:s[42]},hy:{cardinal:s[12],ordinal:s[0]},ia:{cardinal:s[4]},io:{cardinal:s[4]},is:{cardinal:s[18]},it:{cardinal:s[4],ordinal:s[43]},iu:{cardinal:s[19]},iw:{cardinal:s[17]},jgo:{cardinal:s[0]},ji:{cardinal:s[4]},jmc:{cardinal:s[0]},ka:{cardinal:s[0],ordinal:s[44]},kab:{cardinal:s[12]},kaj:{cardinal:s[0]},kcg:{cardinal:s[0]},kk:{cardinal:s[0],ordinal:s[45]},kkj:{cardinal:s[0]},kl:{cardinal:s[0]},kn:{cardinal:s[2]},ks:{cardinal:s[0]},ksb:{cardinal:s[0]},ksh:{cardinal:s[20]},ku:{cardinal:s[0]},kw:{cardinal:s[19]},ky:{cardinal:s[0]},lag:{cardinal:s[21]},lb:{cardinal:s[0]},lg:{cardinal:s[0]},ln:{cardinal:s[1]},lt:{cardinal:s[22]},lv:{cardinal:s[23]},mas:{cardinal:s[0]},mg:{cardinal:s[1]},mgo:{cardinal:s[0]},mk:{cardinal:s[24],ordinal:s[46]},ml:{cardinal:s[0]},mn:{cardinal:s[0]},mo:{cardinal:s[25],ordinal:s[0]},mr:{cardinal:s[2],ordinal:s[47]},mt:{cardinal:s[26]},nah:{cardinal:s[0]},naq:{cardinal:s[19]},nb:{cardinal:s[0]},nd:{cardinal:s[0]},ne:{cardinal:s[0],ordinal:s[48]},nl:{cardinal:s[4]},nn:{cardinal:s[0]},nnh:{cardinal:s[0]},no:{cardinal:s[0]},nr:{cardinal:s[0]},nso:{cardinal:s[1]},ny:{cardinal:s[0]},nyn:{cardinal:s[0]},om:{cardinal:s[0]},or:{cardinal:s[0],ordinal:s[49]},os:{cardinal:s[0]},pa:{cardinal:s[1]},pap:{cardinal:s[0]},pl:{cardinal:s[27]},prg:{cardinal:s[23]},ps:{cardinal:s[0]},pt:{cardinal:s[28]},"pt-PT":{cardinal:s[4]},rm:{cardinal:s[0]},ro:{cardinal:s[25],ordinal:s[0]},rof:{cardinal:s[0]},ru:{cardinal:s[29]},rwk:{cardinal:s[0]},saq:{cardinal:s[0]},sc:{cardinal:s[4],ordinal:s[43]},scn:{cardinal:s[4],ordinal:s[43]},sd:{cardinal:s[0]},sdh:{cardinal:s[0]},se:{cardinal:s[19]},seh:{cardinal:s[0]},sh:{cardinal:s[7]},shi:{cardinal:s[30]},si:{cardinal:s[31]},sk:{cardinal:s[8]},sl:{cardinal:s[32]},sma:{cardinal:s[19]},smi:{cardinal:s[19]},smj:{cardinal:s[19]},smn:{cardinal:s[19]},sms:{cardinal:s[19]},sn:{cardinal:s[0]},so:{cardinal:s[0]},sq:{cardinal:s[0],ordinal:s[50]},sr:{cardinal:s[7]},ss:{cardinal:s[0]},ssy:{cardinal:s[0]},st:{cardinal:s[0]},sv:{cardinal:s[4],ordinal:s[51]},sw:{cardinal:s[4]},syr:{cardinal:s[0]},ta:{cardinal:s[0]},te:{cardinal:s[0]},teo:{cardinal:s[0]},ti:{cardinal:s[1]},tig:{cardinal:s[0]},tk:{cardinal:s[0],ordinal:s[52]},tl:{cardinal:s[13],ordinal:s[0]},tn:{cardinal:s[0]},tr:{cardinal:s[0]},ts:{cardinal:s[0]},tzm:{cardinal:s[33]},ug:{cardinal:s[0]},uk:{cardinal:s[29],ordinal:s[53]},ur:{cardinal:s[4]},uz:{cardinal:s[0]},ve:{cardinal:s[0]},vo:{cardinal:s[0]},vun:{cardinal:s[0]},wa:{cardinal:s[1]},wae:{cardinal:s[0]},xh:{cardinal:s[0]},xog:{cardinal:s[0]},yi:{cardinal:s[4]},zu:{cardinal:s[2]},lo:{ordinal:s[0]},ms:{ordinal:s[0]},vi:{ordinal:s[0]}}},O92E:function(n,r,a){"use strict"
var t="{"
var e="}"
var i=","
var l="#"
var o="<"
var c=">"
var s="</"
var u="/>"
var d="'"
var f="offset:"
var v=["number","date","time","ordinal","duration","spellout"]
var h=["plural","select","selectordinal"]
r=n.exports=function(n,r){return m({pattern:String(n),index:0,tagsType:r&&r.tagsType||null,tokens:r&&r.tokens||null},"")}
function m(n,r){var a=n.pattern
var t=a.length
var i=[]
var l=n.index
var o=p(n,r)
o&&i.push(o)
o&&n.tokens&&n.tokens.push(["text",a.slice(l,n.index)])
while(n.index<t){if(a[n.index]===e){if(!r)throw F(n)
break}if(r&&n.tagsType&&a.slice(n.index,n.index+s.length)===s)break
i.push(b(n))
l=n.index
o=p(n,r)
o&&i.push(o)
o&&n.tokens&&n.tokens.push(["text",a.slice(l,n.index)])}return i}function p(n,r){var a=n.pattern
var i=a.length
var c="plural"===r||"selectordinal"===r
var s=!!n.tagsType
var u="{style}"===r
var f=""
while(n.index<i){var v=a[n.index]
if(v===t||v===e||c&&v===l||s&&v===o||u&&g(v.charCodeAt(0)))break
if(v===d){v=a[++n.index]
if(v===d){f+=v;++n.index}else if(v===t||v===e||c&&v===l||s&&v===o||u){f+=v
while(++n.index<i){v=a[n.index]
if(v===d&&a[n.index+1]===d){f+=d;++n.index}else{if(v===d){++n.index
break}f+=v}}}else f+=d}else{f+=v;++n.index}}return f}function g(n){return n>=9&&n<=13||32===n||133===n||160===n||6158===n||n>=8192&&n<=8205||8232===n||8233===n||8239===n||8287===n||8288===n||12288===n||65279===n}function x(n){var r=n.pattern
var a=r.length
var t=n.index
while(n.index<a&&g(r.charCodeAt(n.index)))++n.index
t<n.index&&n.tokens&&n.tokens.push(["space",n.pattern.slice(t,n.index)])}function b(n){var r=n.pattern
if(r[n.index]===l){n.tokens&&n.tokens.push(["syntax",l]);++n.index
return[l]}var a=k(n)
if(a)return a
if(r[n.index]!==t)throw F(n,t)
n.tokens&&n.tokens.push(["syntax",t]);++n.index
x(n)
var o=y(n)
if(!o)throw F(n,"placeholder id")
n.tokens&&n.tokens.push(["id",o])
x(n)
var c=r[n.index]
if(c===e){n.tokens&&n.tokens.push(["syntax",e]);++n.index
return[o]}if(c!==i)throw F(n,i+" or "+e)
n.tokens&&n.tokens.push(["syntax",i]);++n.index
x(n)
var s=y(n)
if(!s)throw F(n,"placeholder type")
n.tokens&&n.tokens.push(["type",s])
x(n)
c=r[n.index]
if(c===e){n.tokens&&n.tokens.push(["syntax",e])
if("plural"===s||"selectordinal"===s||"select"===s)throw F(n,s+" sub-messages");++n.index
return[o,s]}if(c!==i)throw F(n,i+" or "+e)
n.tokens&&n.tokens.push(["syntax",i]);++n.index
x(n)
var u
if("plural"===s||"selectordinal"===s){var d=M(n)
x(n)
u=[o,s,d,I(n,s)]}else if("select"===s)u=[o,s,I(n,s)]
else if(v.indexOf(s)>=0)u=[o,s,w(n)]
else{var f=n.index
var h=w(n)
x(n)
if(r[n.index]===t){n.index=f
h=I(n,s)}u=[o,s,h]}x(n)
if(r[n.index]!==e)throw F(n,e)
n.tokens&&n.tokens.push(["syntax",e]);++n.index
return u}function k(n){var r=n.tagsType
if(!r||n.pattern[n.index]!==o)return
if(n.pattern.slice(n.index,n.index+s.length)===s)throw F(n,null,"closing tag without matching opening tag")
n.tokens&&n.tokens.push(["syntax",o]);++n.index
var a=y(n,true)
if(!a)throw F(n,"placeholder id")
n.tokens&&n.tokens.push(["id",a])
x(n)
if(n.pattern.slice(n.index,n.index+u.length)===u){n.tokens&&n.tokens.push(["syntax",u])
n.index+=u.length
return[a,r]}if(n.pattern[n.index]!==c)throw F(n,c)
n.tokens&&n.tokens.push(["syntax",c]);++n.index
var t=m(n,r)
var e=n.index
if(n.pattern.slice(n.index,n.index+s.length)!==s)throw F(n,s+a+c)
n.tokens&&n.tokens.push(["syntax",s])
n.index+=s.length
var i=y(n,true)
i&&n.tokens&&n.tokens.push(["id",i])
if(a!==i){n.index=e
throw F(n,s+a+c,s+i+c)}x(n)
if(n.pattern[n.index]!==c)throw F(n,c)
n.tokens&&n.tokens.push(["syntax",c]);++n.index
return[a,r,{children:t}]}function y(n,r){var a=n.pattern
var s=a.length
var u=""
while(n.index<s){var f=a[n.index]
if(f===t||f===e||f===i||f===l||f===d||g(f.charCodeAt(0))||r&&(f===o||f===c||"/"===f))break
u+=f;++n.index}return u}function w(n){var r=n.index
var a=p(n,"{style}")
if(!a)throw F(n,"placeholder style name")
n.tokens&&n.tokens.push(["style",n.pattern.slice(r,n.index)])
return a}function M(n){var r=n.pattern
var a=r.length
var t=0
if(r.slice(n.index,n.index+f.length)===f){n.tokens&&n.tokens.push(["offset","offset"],["syntax",":"])
n.index+=f.length
x(n)
var e=n.index
while(n.index<a&&D(r.charCodeAt(n.index)))++n.index
if(e===n.index)throw F(n,"offset number")
n.tokens&&n.tokens.push(["number",r.slice(e,n.index)])
t=+r.slice(e,n.index)}return t}function D(n){return n>=48&&n<=57}function I(n,r){var a=n.pattern
var t=a.length
var i={}
while(n.index<t&&a[n.index]!==e){var l=y(n)
if(!l)throw F(n,"sub-message selector")
n.tokens&&n.tokens.push(["selector",l])
x(n)
i[l]=j(n,r)
x(n)}if(!i.other&&h.indexOf(r)>=0)throw F(n,null,null,'"other" sub-message must be specified in '+r)
return i}function j(n,r){if(n.pattern[n.index]!==t)throw F(n,t+" to start sub-message")
n.tokens&&n.tokens.push(["syntax",t]);++n.index
var a=m(n,r)
if(n.pattern[n.index]!==e)throw F(n,e+" to end sub-message")
n.tokens&&n.tokens.push(["syntax",e]);++n.index
return a}function F(n,r,a,t){var e=n.pattern
var i=e.slice(0,n.index).split(/\r?\n/)
var l=n.index
var o=i.length
var c=i.slice(-1)[0].length
a=a||(n.index>=e.length?"end of message pattern":y(n)||e[n.index])
t||(t=P(r,a))
t+=" in "+e.replace(/\r?\n/g,"\n")
return new E(t,r,a,l,o,c)}function P(n,r){if(!n)return"Unexpected "+r+" found"
return"Expected "+n+" but found "+r}function E(n,r,a,t,e,i){Error.call(this,n)
this.name="SyntaxError"
this.message=n
this.expected=r
this.found=a
this.offset=t
this.line=e
this.column=i}E.prototype=Object.create(Error.prototype)
r.SyntaxError=E},V3mB:function(n,r){n.exports=function(n,r){if("string"===typeof n&&r[n])return n
var a=[].concat(n||[])
for(var t=0,e=a.length;t<e;++t){var i=a[t].split("-")
while(i.length){var l=i.join("-")
if(r[l])return l
i.pop()}}}}}])

//# sourceMappingURL=18-c-4324832e44.js.map