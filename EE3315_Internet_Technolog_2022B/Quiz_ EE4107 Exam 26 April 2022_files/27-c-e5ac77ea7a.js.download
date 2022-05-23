(window["canvasWebpackJsonp"]=window["canvasWebpackJsonp"]||[]).push([[27],{"9Uei":function(e,t,r){(function(t,r){(function(){"use strict"
var n=function(e){if(null===e)return"null"
if(void 0===e)return"undefined"
var t=typeof e
if("object"===t&&(Array.prototype.isPrototypeOf(e)||e.constructor&&"Array"===e.constructor.name))return"array"
if("object"===t&&(String.prototype.isPrototypeOf(e)||e.constructor&&"String"===e.constructor.name))return"string"
return t}
var a=function(e){return-1!==["undefined","boolean","number","string","function","xml","null"].indexOf(e)}
var o=function(e,t){var r=Array.prototype.slice.call(e)
return r.sort(t)}
var i=function(e,t){return u((function(r,n){return e.eq(t(r),t(n))}))}
var u=function(e){return{eq:e}}
var f=u((function(e,t){return e===t}))
var c=f
var s=function(e){return u((function(t,r){if(t.length!==r.length)return false
var n=t.length
for(var a=0;a<n;a++)if(!e.eq(t[a],r[a]))return false
return true}))}
var l=function(e,t){return i(s(e),(function(e){return o(e,t)}))}
var d=function(e){return u((function(t,r){var n=Object.keys(t)
var a=Object.keys(r)
if(!l(c).eq(n,a))return false
var o=n.length
for(var i=0;i<o;i++){var u=n[i]
if(!e.eq(t[u],r[u]))return false}return true}))}
var v=u((function(e,t){if(e===t)return true
var r=n(e)
var o=n(t)
if(r!==o)return false
if(a(r))return e===t
if("array"===r)return s(v).eq(e,t)
if("object"===r)return d(v).eq(e,t)
return false}))
var m=function(e){var t=typeof e
return null===e?"null":"object"===t&&(Array.prototype.isPrototypeOf(e)||e.constructor&&"Array"===e.constructor.name)?"array":"object"===t&&(String.prototype.isPrototypeOf(e)||e.constructor&&"String"===e.constructor.name)?"string":t}
var p=function(e){return function(t){return m(t)===e}}
var g=function(e){return function(t){return typeof t===e}}
var h=function(e){return function(t){return e===t}}
var y=p("string")
var b=p("object")
var C=p("array")
var w=h(null)
var x=g("boolean")
var S=h(void 0)
var k=function(e){return null===e||void 0===e}
var N=function(e){return!k(e)}
var E=g("function")
var _=g("number")
var T=function(){}
var A=function(e,t){return function(){var r=[]
for(var n=0;n<arguments.length;n++)r[n]=arguments[n]
return e(t.apply(null,r))}}
var R=function(e,t){return function(r){return e(t(r))}}
var D=function(e){return function(){return e}}
var O=function(e){return e}
function B(e){var t=[]
for(var r=1;r<arguments.length;r++)t[r-1]=arguments[r]
return function(){var r=[]
for(var n=0;n<arguments.length;n++)r[n]=arguments[n]
var a=t.concat(r)
return e.apply(null,a)}}var P=function(e){return function(t){return!e(t)}}
var L=function(e){return function(){throw new Error(e)}}
var I=function(e){return e()}
var M=function(e){e()}
var F=D(false)
var U=D(true)
var z=function(){return j}
var j=function(){var e=function(e){return e.isNone()}
var t=function(e){return e()}
var r=function(e){return e}
var n={fold:function(e,t){return e()},is:F,isSome:F,isNone:U,getOr:r,getOrThunk:t,getOrDie:function(e){throw new Error(e||"error: getOrDie called on none.")},getOrNull:D(null),getOrUndefined:D(void 0),or:r,orThunk:t,map:z,each:T,bind:z,exists:F,forall:U,filter:z,equals:e,equals_:e,toArray:function(){return[]},toString:D("none()")}
return n}()
var H=function(e){var t=D(e)
var r=function(){return a}
var n=function(t){return t(e)}
var a={fold:function(t,r){return r(e)},is:function(t){return e===t},isSome:U,isNone:F,getOr:t,getOrThunk:t,getOrDie:t,getOrNull:t,getOrUndefined:t,or:r,orThunk:r,map:function(t){return H(t(e))},each:function(t){t(e)},bind:n,exists:n,forall:n,filter:function(t){return t(e)?a:j},toArray:function(){return[e]},toString:function(){return"some("+e+")"},equals:function(t){return t.is(e)},equals_:function(t,r){return t.fold(F,(function(t){return r(e,t)}))}}
return a}
var V=function(e){return null===e||void 0===e?j:H(e)}
var q={some:H,none:z,from:V}
var $=Array.prototype.slice
var W=Array.prototype.indexOf
var K=Array.prototype.push
var X=function(e,t){return W.call(e,t)}
var Y=function(e,t){var r=X(e,t)
return-1===r?q.none():q.some(r)}
var G=function(e,t){return X(e,t)>-1}
var J=function(e,t){for(var r=0,n=e.length;r<n;r++){var a=e[r]
if(t(a,r))return true}return false}
var Q=function(e,t){var r=e.length
var n=new Array(r)
for(var a=0;a<r;a++){var o=e[a]
n[a]=t(o,a)}return n}
var Z=function(e,t){for(var r=0,n=e.length;r<n;r++){var a=e[r]
t(a,r)}}
var ee=function(e,t){for(var r=e.length-1;r>=0;r--){var n=e[r]
t(n,r)}}
var te=function(e,t){var r=[]
var n=[]
for(var a=0,o=e.length;a<o;a++){var i=e[a]
var u=t(i,a)?r:n
u.push(i)}return{pass:r,fail:n}}
var re=function(e,t){var r=[]
for(var n=0,a=e.length;n<a;n++){var o=e[n]
t(o,n)&&r.push(o)}return r}
var ne=function(e,t,r){ee(e,(function(e){r=t(r,e)}))
return r}
var ae=function(e,t,r){Z(e,(function(e){r=t(r,e)}))
return r}
var oe=function(e,t,r){for(var n=0,a=e.length;n<a;n++){var o=e[n]
if(t(o,n))return q.some(o)
if(r(o,n))break}return q.none()}
var ie=function(e,t){return oe(e,t,F)}
var ue=function(e,t){for(var r=0,n=e.length;r<n;r++){var a=e[r]
if(t(a,r))return q.some(r)}return q.none()}
var fe=function(e){var t=[]
for(var r=0,n=e.length;r<n;++r){if(!C(e[r]))throw new Error("Arr.flatten item "+r+" was not an array, input: "+e)
K.apply(t,e[r])}return t}
var ce=function(e,t){return fe(Q(e,t))}
var se=function(e,t){for(var r=0,n=e.length;r<n;++r){var a=e[r]
if(true!==t(a,r))return false}return true}
var le=function(e){var t=$.call(e,0)
t.reverse()
return t}
var de=function(e,t){return re(e,(function(e){return!G(t,e)}))}
var ve=function(e,t){var r={}
for(var n=0,a=e.length;n<a;n++){var o=e[n]
r[String(o)]=t(o,n)}return r}
var me=function(e,t){var r=$.call(e,0)
r.sort(t)
return r}
var pe=function(e,t){return t>=0&&t<e.length?q.some(e[t]):q.none()}
var ge=function(e){return pe(e,0)}
var he=function(e){return pe(e,e.length-1)}
var ye=E(Array.from)?Array.from:function(e){return $.call(e)}
var be=function(e,t){for(var r=0;r<e.length;r++){var n=t(e[r],r)
if(n.isSome())return n}return q.none()}
var Ce=Object.keys
var we=Object.hasOwnProperty
var xe=function(e,t){var r=Ce(e)
for(var n=0,a=r.length;n<a;n++){var o=r[n]
var i=e[o]
t(i,o)}}
var Se=function(e,t){return ke(e,(function(e,r){return{k:r,v:t(e,r)}}))}
var ke=function(e,t){var r={}
xe(e,(function(e,n){var a=t(e,n)
r[a.k]=a.v}))
return r}
var Ne=function(e){return function(t,r){e[r]=t}}
var Ee=function(e,t,r,n){var a={}
xe(e,(function(e,a){(t(e,a)?r:n)(e,a)}))
return a}
var _e=function(e,t){var r={}
var n={}
Ee(e,t,Ne(r),Ne(n))
return{t:r,f:n}}
var Te=function(e,t){var r={}
Ee(e,t,Ne(r),T)
return r}
var Ae=function(e,t){var r=[]
xe(e,(function(e,n){r.push(t(e,n))}))
return r}
var Re=function(e){return Ae(e,(function(e){return e}))}
var De=function(e,t){return Oe(e,t)?q.from(e[t]):q.none()}
var Oe=function(e,t){return we.call(e,t)}
var Be=function(e,t){return Oe(e,t)&&void 0!==e[t]&&null!==e[t]}
var Pe=function(e,t,r){void 0===r&&(r=v)
return d(r).eq(e,t)}
var Le=Array.isArray
var Ie=function(e){if(Le(e))return e
var t=[]
for(var r=0,n=e.length;r<n;r++)t[r]=e[r]
return t}
var Me=function(e,t,r){var n,a
if(!e)return false
r=r||e
if(void 0!==e.length){for(n=0,a=e.length;n<a;n++)if(false===t.call(r,e[n],n,e))return false}else for(n in e)if(e.hasOwnProperty(n)&&false===t.call(r,e[n],n,e))return false
return true}
var Fe=function(e,t){var r=[]
Me(e,(function(n,a){r.push(t(n,a,e))}))
return r}
var Ue=function(e,t){var r=[]
Me(e,(function(n,a){t&&!t(n,a,e)||r.push(n)}))
return r}
var ze=function(e,t){if(e)for(var r=0,n=e.length;r<n;r++)if(e[r]===t)return r
return-1}
var je=function(e,t,r,n){var a=S(r)?e[0]:r
for(var o=0;o<e.length;o++)a=t.call(n,a,e[o],o)
return a}
var He=function(e,t,r){var n,a
for(n=0,a=e.length;n<a;n++)if(t.call(r,e[n],n,e))return n
return-1}
var Ve=function(e){return e[e.length-1]}
var qe=function(){qe=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++){t=arguments[r]
for(var a in t)Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a])}return e}
return qe.apply(this,arguments)}
function $e(e,t){var r={}
for(var n in e)Object.prototype.hasOwnProperty.call(e,n)&&t.indexOf(n)<0&&(r[n]=e[n])
if(null!=e&&"function"===typeof Object.getOwnPropertySymbols){var a=0
for(n=Object.getOwnPropertySymbols(e);a<n.length;a++)t.indexOf(n[a])<0&&Object.prototype.propertyIsEnumerable.call(e,n[a])&&(r[n[a]]=e[n[a]])}return r}function We(){for(var e=0,t=0,r=arguments.length;t<r;t++)e+=arguments[t].length
var n=Array(e),a=0
for(t=0;t<r;t++)for(var o=arguments[t],i=0,u=o.length;i<u;i++,a++)n[a]=o[i]
return n}var Ke=function(e){var t=false
var r
return function(){var n=[]
for(var a=0;a<arguments.length;a++)n[a]=arguments[a]
if(!t){t=true
r=e.apply(null,n)}return r}}
var Xe=function(e,t,r,n){var a=e.isiOS()&&true===/ipad/i.test(r)
var o=e.isiOS()&&!a
var i=e.isiOS()||e.isAndroid()
var u=i||n("(pointer:coarse)")
var f=a||!o&&i&&n("(min-device-width:768px)")
var c=o||i&&!f
var s=t.isSafari()&&e.isiOS()&&false===/safari/i.test(r)
var l=!c&&!f&&!s
return{isiPad:D(a),isiPhone:D(o),isTablet:D(f),isPhone:D(c),isTouch:D(u),isAndroid:e.isAndroid,isiOS:e.isiOS,isWebView:D(s),isDesktop:D(l)}}
var Ye=function(e,t){for(var r=0;r<e.length;r++){var n=e[r]
if(n.test(t))return n}return}
var Ge=function(e,t){var r=Ye(e,t)
if(!r)return{major:0,minor:0}
var n=function(e){return Number(t.replace(r,"$"+e))}
return Ze(n(1),n(2))}
var Je=function(e,t){var r=String(t).toLowerCase()
if(0===e.length)return Qe()
return Ge(e,r)}
var Qe=function(){return Ze(0,0)}
var Ze=function(e,t){return{major:e,minor:t}}
var et={nu:Ze,detect:Je,unknown:Qe}
var tt=function(e,t){var r=String(t).toLowerCase()
return ie(e,(function(e){return e.search(r)}))}
var rt=function(e,t){return tt(e,t).map((function(e){var r=et.detect(e.versionRegexes,t)
return{current:e.name,version:r}}))}
var nt=function(e,t){return tt(e,t).map((function(e){var r=et.detect(e.versionRegexes,t)
return{current:e.name,version:r}}))}
var at={detectBrowser:rt,detectOs:nt}
var ot=function(e,t){return e.substring(t)}
var it=function(e,t,r){return""===t||e.length>=t.length&&e.substr(r,r+t.length)===t}
var ut=function(e,t){return ct(e,t)?ot(e,t.length):e}
var ft=function(e,t){return-1!==e.indexOf(t)}
var ct=function(e,t){return it(e,t,0)}
var st=function(e){return function(t){return t.replace(e,"")}}
var lt=st(/^\s+|\s+$/g)
var dt=st(/^\s+/g)
var vt=st(/\s+$/g)
var mt=function(e){return e.length>0}
var pt=/.*?version\/\ ?([0-9]+)\.([0-9]+).*/
var gt=function(e){return function(t){return ft(t,e)}}
var ht=[{name:"Edge",versionRegexes:[/.*?edge\/ ?([0-9]+)\.([0-9]+)$/],search:function(e){return ft(e,"edge/")&&ft(e,"chrome")&&ft(e,"safari")&&ft(e,"applewebkit")}},{name:"Chrome",versionRegexes:[/.*?chrome\/([0-9]+)\.([0-9]+).*/,pt],search:function(e){return ft(e,"chrome")&&!ft(e,"chromeframe")}},{name:"IE",versionRegexes:[/.*?msie\ ?([0-9]+)\.([0-9]+).*/,/.*?rv:([0-9]+)\.([0-9]+).*/],search:function(e){return ft(e,"msie")||ft(e,"trident")}},{name:"Opera",versionRegexes:[pt,/.*?opera\/([0-9]+)\.([0-9]+).*/],search:gt("opera")},{name:"Firefox",versionRegexes:[/.*?firefox\/\ ?([0-9]+)\.([0-9]+).*/],search:gt("firefox")},{name:"Safari",versionRegexes:[pt,/.*?cpu os ([0-9]+)_([0-9]+).*/],search:function(e){return(ft(e,"safari")||ft(e,"mobile/"))&&ft(e,"applewebkit")}}]
var yt=[{name:"Windows",search:gt("win"),versionRegexes:[/.*?windows\ nt\ ?([0-9]+)\.([0-9]+).*/]},{name:"iOS",search:function(e){return ft(e,"iphone")||ft(e,"ipad")},versionRegexes:[/.*?version\/\ ?([0-9]+)\.([0-9]+).*/,/.*cpu os ([0-9]+)_([0-9]+).*/,/.*cpu iphone os ([0-9]+)_([0-9]+).*/]},{name:"Android",search:gt("android"),versionRegexes:[/.*?android\ ?([0-9]+)\.([0-9]+).*/]},{name:"OSX",search:gt("mac os x"),versionRegexes:[/.*?mac\ os\ x\ ?([0-9]+)_([0-9]+).*/]},{name:"Linux",search:gt("linux"),versionRegexes:[]},{name:"Solaris",search:gt("sunos"),versionRegexes:[]},{name:"FreeBSD",search:gt("freebsd"),versionRegexes:[]},{name:"ChromeOS",search:gt("cros"),versionRegexes:[/.*?chrome\/([0-9]+)\.([0-9]+).*/]}]
var bt={browsers:D(ht),oses:D(yt)}
var Ct="Edge"
var wt="Chrome"
var xt="IE"
var St="Opera"
var kt="Firefox"
var Nt="Safari"
var Et=function(){return _t({current:void 0,version:et.unknown()})}
var _t=function(e){var t=e.current
var r=e.version
var n=function(e){return function(){return t===e}}
return{current:t,version:r,isEdge:n(Ct),isChrome:n(wt),isIE:n(xt),isOpera:n(St),isFirefox:n(kt),isSafari:n(Nt)}}
var Tt={unknown:Et,nu:_t,edge:D(Ct),chrome:D(wt),ie:D(xt),opera:D(St),firefox:D(kt),safari:D(Nt)}
var At="Windows"
var Rt="iOS"
var Dt="Android"
var Ot="Linux"
var Bt="OSX"
var Pt="Solaris"
var Lt="FreeBSD"
var It="ChromeOS"
var Mt=function(){return Ft({current:void 0,version:et.unknown()})}
var Ft=function(e){var t=e.current
var r=e.version
var n=function(e){return function(){return t===e}}
return{current:t,version:r,isWindows:n(At),isiOS:n(Rt),isAndroid:n(Dt),isOSX:n(Bt),isLinux:n(Ot),isSolaris:n(Pt),isFreeBSD:n(Lt),isChromeOS:n(It)}}
var Ut={unknown:Mt,nu:Ft,windows:D(At),ios:D(Rt),android:D(Dt),linux:D(Ot),osx:D(Bt),solaris:D(Pt),freebsd:D(Lt),chromeos:D(It)}
var zt=function(e,t){var r=bt.browsers()
var n=bt.oses()
var a=at.detectBrowser(r,e).fold(Tt.unknown,Tt.nu)
var o=at.detectOs(n,e).fold(Ut.unknown,Ut.nu)
var i=Xe(o,a,e,t)
return{browser:a,os:o,deviceType:i}}
var jt={detect:zt}
var Ht=function(e){return window.matchMedia(e).matches}
var Vt=Ke((function(){return jt.detect(navigator.userAgent,Ht)}))
var qt=function(){return Vt()}
var $t=navigator.userAgent
var Wt=qt()
var Kt=Wt.browser
var Xt=Wt.os
var Yt=Wt.deviceType
var Gt=/WebKit/.test($t)&&!Kt.isEdge()
var Jt="FormData"in window&&"FileReader"in window&&"URL"in window&&!!URL.createObjectURL
var Qt=-1!==$t.indexOf("Windows Phone")
var Zt={opera:Kt.isOpera(),webkit:Gt,ie:!(!Kt.isIE()&&!Kt.isEdge())&&Kt.version.major,gecko:Kt.isFirefox(),mac:Xt.isOSX()||Xt.isiOS(),iOS:Yt.isiPad()||Yt.isiPhone(),android:Xt.isAndroid(),contentEditable:true,transparentSrc:"data:image/gif;base64,R0lGODlhAQABAIAAAAAAAP///yH5BAEAAAAALAAAAAABAAEAAAIBRAA7",caretAfter:true,range:window.getSelection&&"Range"in window,documentMode:Kt.isIE()?document.documentMode||7:10,fileApi:Jt,ceFalse:true,cacheSuffix:null,container:null,experimentalShadowDom:false,canHaveCSP:!Kt.isIE(),desktop:Yt.isDesktop(),windowsPhone:Qt,browser:{current:Kt.current,version:Kt.version,isChrome:Kt.isChrome,isEdge:Kt.isEdge,isFirefox:Kt.isFirefox,isIE:Kt.isIE,isOpera:Kt.isOpera,isSafari:Kt.isSafari},os:{current:Xt.current,version:Xt.version,isAndroid:Xt.isAndroid,isChromeOS:Xt.isChromeOS,isFreeBSD:Xt.isFreeBSD,isiOS:Xt.isiOS,isLinux:Xt.isLinux,isOSX:Xt.isOSX,isSolaris:Xt.isSolaris,isWindows:Xt.isWindows},deviceType:{isDesktop:Yt.isDesktop,isiPad:Yt.isiPad,isiPhone:Yt.isiPhone,isPhone:Yt.isPhone,isTablet:Yt.isTablet,isTouch:Yt.isTouch,isWebView:Yt.isWebView}}
var er=/^\s*|\s*$/g
var tr=function(e){return null===e||void 0===e?"":(""+e).replace(er,"")}
var rr=function(e,t){if(!t)return void 0!==e
if("array"===t&&Le(e))return true
return typeof e===t}
var nr=function(e,t,r){var n
e=e||[]
t=t||","
"string"===typeof e&&(e=e.split(t))
r=r||{}
n=e.length
while(n--)r[e[n]]={}
return r}
var ar=function(e,t){return Object.prototype.hasOwnProperty.call(e,t)}
var or=function(e,t,r){var n=this
var a,o,i,u=0
e=/^((static) )?([\w.]+)(:([\w.]+))?/.exec(e)
var f=e[3].match(/(^|\.)(\w+)$/i)[2]
var c=n.createNS(e[3].replace(/\.\w+$/,""),r)
if(c[f])return
if("static"===e[2]){c[f]=t
this.onCreate&&this.onCreate(e[2],e[3],c[f])
return}if(!t[f]){t[f]=function(){}
u=1}c[f]=t[f]
n.extend(c[f].prototype,t)
if(e[5]){a=n.resolve(e[5]).prototype
o=e[5].match(/\.(\w+)$/i)[1]
i=c[f]
c[f]=u?function(){return a[o].apply(this,arguments)}:function(){this.parent=a[o]
return i.apply(this,arguments)}
c[f].prototype[f]=c[f]
n.each(a,(function(e,t){c[f].prototype[t]=a[t]}))
n.each(t,(function(e,t){a[t]?c[f].prototype[t]=function(){this.parent=a[t]
return e.apply(this,arguments)}:t!==f&&(c[f].prototype[t]=e)}))}n.each(t.static,(function(e,t){c[f][t]=e}))}
var ir=function(e){var t=[]
for(var r=1;r<arguments.length;r++)t[r-1]=arguments[r]
for(var n=0;n<t.length;n++){var a=t[n]
for(var o in a)if(a.hasOwnProperty(o)){var i=a[o]
void 0!==i&&(e[o]=i)}}return e}
var ur=function(e,t,r,n){n=n||this
if(e){r&&(e=e[r])
Me(e,(function(e,a){if(false===t.call(n,e,a,r))return false
ur(e,t,r,n)}))}}
var fr=function(e,t){var r,n
t=t||window
e=e.split(".")
for(r=0;r<e.length;r++){n=e[r]
t[n]||(t[n]={})
t=t[n]}return t}
var cr=function(e,t){var r,n
t=t||window
e=e.split(".")
for(r=0,n=e.length;r<n;r++){t=t[e[r]]
if(!t)break}return t}
var sr=function(e,t){if(!e||rr(e,"array"))return e
return Fe(e.split(t||","),tr)}
var lr=function(e){var t=Zt.cacheSuffix
t&&(e+=(-1===e.indexOf("?")?"?":"&")+t)
return e}
var dr={trim:tr,isArray:Le,is:rr,toArray:Ie,makeMap:nr,each:Me,map:Fe,grep:Ue,inArray:ze,hasOwn:ar,extend:ir,create:or,walk:ur,createNS:fr,resolve:cr,explode:sr,_addCacheSuffix:lr}
var vr=function(e,t){var r=t||document
var n=r.createElement("div")
n.innerHTML=e
if(!n.hasChildNodes()||n.childNodes.length>1){console.error("HTML does not have a single root node",e)
throw new Error("HTML must have a single root node")}return gr(n.childNodes[0])}
var mr=function(e,t){var r=t||document
var n=r.createElement(e)
return gr(n)}
var pr=function(e,t){var r=t||document
var n=r.createTextNode(e)
return gr(n)}
var gr=function(e){if(null===e||void 0===e)throw new Error("Node cannot be null or undefined")
return{dom:e}}
var hr=function(e,t,r){return q.from(e.dom.elementFromPoint(t,r)).map(gr)}
var yr={fromHtml:vr,fromTag:mr,fromText:pr,fromDom:gr,fromPoint:hr}
var br=function(e,t){var r=[]
var n=function(e){r.push(e)
return t(e)}
var a=t(e)
do{a=a.bind(n)}while(a.isSome())
return r}
var Cr=function(e,t,r){return 0!==(e.compareDocumentPosition(t)&r)}
var wr=function(e,t){return Cr(e,t,Node.DOCUMENT_POSITION_CONTAINED_BY)}
var xr=8
var Sr=9
var kr=11
var Nr=1
var Er=3
var _r=function(e,t){var r=e.dom
if(r.nodeType!==Nr)return false
var n=r
if(void 0!==n.matches)return n.matches(t)
if(void 0!==n.msMatchesSelector)return n.msMatchesSelector(t)
if(void 0!==n.webkitMatchesSelector)return n.webkitMatchesSelector(t)
if(void 0!==n.mozMatchesSelector)return n.mozMatchesSelector(t)
throw new Error("Browser lacks native selectors")}
var Tr=function(e){return e.nodeType!==Nr&&e.nodeType!==Sr&&e.nodeType!==kr||0===e.childElementCount}
var Ar=function(e,t){var r=void 0===t?document:t.dom
return Tr(r)?[]:Q(r.querySelectorAll(e),yr.fromDom)}
var Rr=function(e,t){var r=void 0===t?document:t.dom
return Tr(r)?q.none():q.from(r.querySelector(e)).map(yr.fromDom)}
var Dr=function(e,t){return e.dom===t.dom}
var Or=function(e,t){var r=e.dom
var n=t.dom
return r!==n&&r.contains(n)}
var Br=function(e,t){return wr(e.dom,t.dom)}
var Pr=function(e,t){return qt().browser.isIE()?Br(e,t):Or(e,t)}
"undefined"!==typeof window?window:Function("return this;")()
var Lr=function(e){var t=e.dom.nodeName
return t.toLowerCase()}
var Ir=function(e){return e.dom.nodeType}
var Mr=function(e){return function(t){return Ir(t)===e}}
var Fr=function(e){return Ir(e)===xr||"#comment"===Lr(e)}
var Ur=Mr(Nr)
var zr=Mr(Er)
var jr=Mr(Sr)
var Hr=Mr(kr)
var Vr=function(e){return yr.fromDom(e.dom.ownerDocument)}
var qr=function(e){return jr(e)?e:Vr(e)}
var $r=function(e){return yr.fromDom(qr(e).dom.documentElement)}
var Wr=function(e){return yr.fromDom(qr(e).dom.defaultView)}
var Kr=function(e){return q.from(e.dom.parentNode).map(yr.fromDom)}
var Xr=function(e,t){var r=E(t)?t:F
var n=e.dom
var a=[]
while(null!==n.parentNode&&void 0!==n.parentNode){var o=n.parentNode
var i=yr.fromDom(o)
a.push(i)
if(true===r(i))break
n=o}return a}
var Yr=function(e){var t=function(t){return re(t,(function(t){return!Dr(e,t)}))}
return Kr(e).map(en).map(t).getOr([])}
var Gr=function(e){return q.from(e.dom.previousSibling).map(yr.fromDom)}
var Jr=function(e){return q.from(e.dom.nextSibling).map(yr.fromDom)}
var Qr=function(e){return le(br(e,Gr))}
var Zr=function(e){return br(e,Jr)}
var en=function(e){return Q(e.dom.childNodes,yr.fromDom)}
var tn=function(e,t){var r=e.dom.childNodes
return q.from(r[t]).map(yr.fromDom)}
var rn=function(e){return tn(e,0)}
var nn=function(e){return tn(e,e.dom.childNodes.length-1)}
var an=function(e){return e.dom.childNodes.length}
var on=function(e){var t=e.dom.head
if(null===t||void 0===t)throw new Error("Head is not available yet")
return yr.fromDom(t)}
var un=function(e){return Hr(e)&&N(e.dom.host)}
var fn=E(Element.prototype.attachShadow)&&E(Node.prototype.getRootNode)
var cn=D(fn)
var sn=fn?function(e){return yr.fromDom(e.dom.getRootNode())}:qr
var ln=function(e){return un(e)?e:on(qr(e))}
var dn=function(e){var t=sn(e)
return un(t)?q.some(t):q.none()}
var vn=function(e){return yr.fromDom(e.dom.host)}
var mn=function(e){if(cn()&&N(e.target)){var t=yr.fromDom(e.target)
if(Ur(t)&&pn(t)&&e.composed&&e.composedPath){var r=e.composedPath()
if(r)return ge(r)}}return q.from(e.target)}
var pn=function(e){return N(e.dom.shadowRoot)}
var gn=function(e,t){var r=Kr(e)
r.each((function(r){r.dom.insertBefore(t.dom,e.dom)}))}
var hn=function(e,t){var r=Jr(e)
r.fold((function(){var r=Kr(e)
r.each((function(e){bn(e,t)}))}),(function(e){gn(e,t)}))}
var yn=function(e,t){var r=rn(e)
r.fold((function(){bn(e,t)}),(function(r){e.dom.insertBefore(t.dom,r.dom)}))}
var bn=function(e,t){e.dom.appendChild(t.dom)}
var Cn=function(e,t){gn(e,t)
bn(t,e)}
var wn=function(e,t){Z(t,(function(t){gn(e,t)}))}
var xn=function(e,t){Z(t,(function(t){bn(e,t)}))}
var Sn=function(e){e.dom.textContent=""
Z(en(e),(function(e){kn(e)}))}
var kn=function(e){var t=e.dom
null!==t.parentNode&&t.parentNode.removeChild(t)}
var Nn=function(e){var t=en(e)
t.length>0&&wn(e,t)
kn(e)}
var En=function(e){var t=zr(e)?e.dom.parentNode:e.dom
if(void 0===t||null===t||null===t.ownerDocument)return false
var r=t.ownerDocument
return dn(yr.fromDom(t)).fold((function(){return r.body.contains(t)}),R(En,vn))}
var _n=function(e,t){var r=function(r,n){return _n(e+r,t+n)}
return{left:e,top:t,translate:r}}
var Tn=_n
var An=function(e){var t=e.getBoundingClientRect()
return Tn(t.left,t.top)}
var Rn=function(e,t){return void 0!==e?e:void 0!==t?t:0}
var Dn=function(e){var t=e.dom.ownerDocument
var r=t.body
var n=t.defaultView
var a=t.documentElement
if(r===e.dom)return Tn(r.offsetLeft,r.offsetTop)
var o=Rn(null===n||void 0===n?void 0:n.pageYOffset,a.scrollTop)
var i=Rn(null===n||void 0===n?void 0:n.pageXOffset,a.scrollLeft)
var u=Rn(a.clientTop,r.clientTop)
var f=Rn(a.clientLeft,r.clientLeft)
return On(e).translate(i-f,o-u)}
var On=function(e){var t=e.dom
var r=t.ownerDocument
var n=r.body
if(n===t)return Tn(n.offsetLeft,n.offsetTop)
if(!En(e))return Tn(0,0)
return An(t)}
var Bn=function(e){var t=void 0!==e?e.dom:document
var r=t.body.scrollLeft||t.documentElement.scrollLeft
var n=t.body.scrollTop||t.documentElement.scrollTop
return Tn(r,n)}
var Pn=function(e,t,r){var n=void 0!==r?r.dom:document
var a=n.defaultView
a&&a.scrollTo(e,t)}
var Ln=function(e,t){var r=qt().browser.isSafari()
r&&E(e.dom.scrollIntoViewIfNeeded)?e.dom.scrollIntoViewIfNeeded(false):e.dom.scrollIntoView(t)}
var In=function(e){var t=void 0===e?window:e
return q.from(t["visualViewport"])}
var Mn=function(e,t,r,n){return{x:e,y:t,width:r,height:n,right:e+r,bottom:t+n}}
var Fn=function(e){var t=void 0===e?window:e
var r=t.document
var n=Bn(yr.fromDom(r))
return In(t).fold((function(){var e=t.document.documentElement
var r=e.clientWidth
var a=e.clientHeight
return Mn(n.left,n.top,r,a)}),(function(e){return Mn(Math.max(e.pageLeft,n.left),Math.max(e.pageTop,n.top),e.width,e.height)}))}
var Un=function(e){return function(t){return!!t&&t.nodeType===e}}
var zn=function(e){return!!e&&!Object.getPrototypeOf(e)}
var jn=Un(1)
var Hn=function(e){var t=e.map((function(e){return e.toLowerCase()}))
return function(e){if(e&&e.nodeName){var r=e.nodeName.toLowerCase()
return G(t,r)}return false}}
var Vn=function(e,t){var r=t.toLowerCase().split(" ")
return function(t){var n,a
if(jn(t))for(n=0;n<r.length;n++){var o=t.ownerDocument.defaultView.getComputedStyle(t,null)
a=o?o.getPropertyValue(e):null
if(a===r[n])return true}return false}}
var qn=function(e){return function(t){return jn(t)&&t.hasAttribute(e)}}
var $n=function(e,t){return function(r){return jn(r)&&r.getAttribute(e)===t}}
var Wn=function(e){return jn(e)&&e.hasAttribute("data-mce-bogus")}
var Kn=function(e){return jn(e)&&"all"===e.getAttribute("data-mce-bogus")}
var Xn=function(e){return jn(e)&&"TABLE"===e.tagName}
var Yn=function(e){return function(t){if(jn(t)){if(t.contentEditable===e)return true
if(t.getAttribute("data-mce-contenteditable")===e)return true}return false}}
var Gn=Hn(["textarea","input"])
var Jn=Un(3)
var Qn=Un(8)
var Zn=Un(9)
var ea=Un(11)
var ta=Hn(["br"])
var ra=Hn(["img"])
var na=Yn("true")
var aa=Yn("false")
var oa=Hn(["td","th"])
var ia=Hn(["video","audio","object","embed"])
var ua=function(e){return void 0!==e.style&&E(e.style.getPropertyValue)}
var fa=function(e,t,r){if(!(y(r)||x(r)||_(r))){console.error("Invalid call to Attribute.set. Key ",t,":: Value ",r,":: Element ",e)
throw new Error("Attribute value was not simple")}e.setAttribute(t,r+"")}
var ca=function(e,t,r){fa(e.dom,t,r)}
var sa=function(e,t){var r=e.dom
xe(t,(function(e,t){fa(r,t,e)}))}
var la=function(e,t){var r=e.dom.getAttribute(t)
return null===r?void 0:r}
var da=function(e,t){return q.from(la(e,t))}
var va=function(e,t){var r=e.dom
return!(!r||!r.hasAttribute)&&r.hasAttribute(t)}
var ma=function(e,t){e.dom.removeAttribute(t)}
var pa=function(e){return ae(e.dom.attributes,(function(e,t){e[t.name]=t.value
return e}),{})}
var ga=function(e,t,r){if(!y(r)){console.error("Invalid call to CSS.set. Property ",t,":: Value ",r,":: Element ",e)
throw new Error("CSS value must be a string: "+r)}ua(e)&&e.style.setProperty(t,r)}
var ha=function(e,t){var r=e.dom
xe(t,(function(e,t){ga(r,t,e)}))}
var ya=function(e,t){var r=e.dom
var n=window.getComputedStyle(r)
var a=n.getPropertyValue(t)
return""!==a||En(e)?a:ba(r,t)}
var ba=function(e,t){return ua(e)?e.style.getPropertyValue(t):""}
var Ca=function(e,t){var r=e.dom
var n=ba(r,t)
return q.from(n).filter((function(e){return e.length>0}))}
var wa=function(e){var t={}
var r=e.dom
if(ua(r))for(var n=0;n<r.style.length;n++){var a=r.style.item(n)
t[a]=r.style[a]}return t}
var xa=function(e){return e.dom.offsetWidth}
var Sa=qt().browser
var ka=function(e){return ie(e,Ur)}
var Na=function(e){return Sa.isFirefox()&&"table"===Lr(e)?ka(en(e)).filter((function(e){return"caption"===Lr(e)})).bind((function(e){return ka(Zr(e)).map((function(t){var r=t.dom.offsetTop
var n=e.dom.offsetTop
var a=e.dom.offsetHeight
return r<=n?-a:0}))})).getOr(0):0}
var Ea=function(e,t){return e.children&&G(e.children,t)}
var _a=function(e,t,r){var n,a=0,o=0
var i=e.ownerDocument
var u
r=r||e
if(t){if(r===e&&t.getBoundingClientRect&&"static"===ya(yr.fromDom(e),"position")){u=t.getBoundingClientRect()
a=u.left+(i.documentElement.scrollLeft||e.scrollLeft)-i.documentElement.clientLeft
o=u.top+(i.documentElement.scrollTop||e.scrollTop)-i.documentElement.clientTop
return{x:a,y:o}}n=t
while(n&&n!==r&&n.nodeType&&!Ea(n,r)){a+=n.offsetLeft||0
o+=n.offsetTop||0
n=n.offsetParent}n=t.parentNode
while(n&&n!==r&&n.nodeType&&!Ea(n,r)){a-=n.scrollLeft||0
o-=n.scrollTop||0
n=n.parentNode}o+=Na(yr.fromDom(t))}return{x:a,y:o}}
var Ta={},Aa={exports:Ta};(function(e,r,n,a){(function(a){if("object"===typeof r&&"undefined"!==typeof n)n.exports=a()
else if("function"===typeof e&&e.amd)e([],a)
else{var o
o="undefined"!==typeof window?window:"undefined"!==typeof t?t:"undefined"!==typeof self?self:this
o.EphoxContactWrapper=a()}})((function(){return function(){function e(t,r,n){function o(u,f){if(!r[u]){if(!t[u]){var c="function"==typeof a&&a
if(!f&&c)return c(u,!0)
if(i)return i(u,!0)
var s=new Error("Cannot find module '"+u+"'")
throw s.code="MODULE_NOT_FOUND",s}var l=r[u]={exports:{}}
t[u][0].call(l.exports,(function(e){var r=t[u][1][e]
return o(r||e)}),l,l.exports,e,t,r,n)}return r[u].exports}for(var i="function"==typeof a&&a,u=0;u<n.length;u++)o(n[u])
return o}return e}()({1:[function(e,t,r){var n=t.exports={}
var a
var o
function i(){throw new Error("setTimeout has not been defined")}function u(){throw new Error("clearTimeout has not been defined")}(function(){try{a="function"===typeof setTimeout?setTimeout:i}catch(e){a=i}try{o="function"===typeof clearTimeout?clearTimeout:u}catch(e){o=u}})()
function f(e){if(a===setTimeout)return setTimeout(e,0)
if((a===i||!a)&&setTimeout){a=setTimeout
return setTimeout(e,0)}try{return a(e,0)}catch(t){try{return a.call(null,e,0)}catch(t){return a.call(this,e,0)}}}function c(e){if(o===clearTimeout)return clearTimeout(e)
if((o===u||!o)&&clearTimeout){o=clearTimeout
return clearTimeout(e)}try{return o(e)}catch(t){try{return o.call(null,e)}catch(t){return o.call(this,e)}}}var s=[]
var l=false
var d
var v=-1
function m(){if(!l||!d)return
l=false
d.length?s=d.concat(s):v=-1
s.length&&p()}function p(){if(l)return
var e=f(m)
l=true
var t=s.length
while(t){d=s
s=[]
while(++v<t)d&&d[v].run()
v=-1
t=s.length}d=null
l=false
c(e)}n.nextTick=function(e){var t=new Array(arguments.length-1)
if(arguments.length>1)for(var r=1;r<arguments.length;r++)t[r-1]=arguments[r]
s.push(new g(e,t))
1!==s.length||l||f(p)}
function g(e,t){this.fun=e
this.array=t}g.prototype.run=function(){this.fun.apply(null,this.array)}
n.title="browser"
n.browser=true
n.env={}
n.argv=[]
n.version=""
n.versions={}
function h(){}n.on=h
n.addListener=h
n.once=h
n.off=h
n.removeListener=h
n.removeAllListeners=h
n.emit=h
n.prependListener=h
n.prependOnceListener=h
n.listeners=function(e){return[]}
n.binding=function(e){throw new Error("process.binding is not supported")}
n.cwd=function(){return"/"}
n.chdir=function(e){throw new Error("process.chdir is not supported")}
n.umask=function(){return 0}},{}],2:[function(e,t,r){(function(e){(function(r){var n=setTimeout
function a(){}function o(e,t){return function(){e.apply(t,arguments)}}function i(e){if("object"!==typeof this)throw new TypeError("Promises must be constructed via new")
if("function"!==typeof e)throw new TypeError("not a function")
this._state=0
this._handled=false
this._value=void 0
this._deferreds=[]
d(e,this)}function u(e,t){while(3===e._state)e=e._value
if(0===e._state){e._deferreds.push(t)
return}e._handled=true
i._immediateFn((function(){var r=1===e._state?t.onFulfilled:t.onRejected
if(null===r){(1===e._state?f:c)(t.promise,e._value)
return}var n
try{n=r(e._value)}catch(e){c(t.promise,e)
return}f(t.promise,n)}))}function f(e,t){try{if(t===e)throw new TypeError("A promise cannot be resolved with itself.")
if(t&&("object"===typeof t||"function"===typeof t)){var r=t.then
if(t instanceof i){e._state=3
e._value=t
s(e)
return}if("function"===typeof r){d(o(r,t),e)
return}}e._state=1
e._value=t
s(e)}catch(t){c(e,t)}}function c(e,t){e._state=2
e._value=t
s(e)}function s(e){2===e._state&&0===e._deferreds.length&&i._immediateFn((function(){e._handled||i._unhandledRejectionFn(e._value)}))
for(var t=0,r=e._deferreds.length;t<r;t++)u(e,e._deferreds[t])
e._deferreds=null}function l(e,t,r){this.onFulfilled="function"===typeof e?e:null
this.onRejected="function"===typeof t?t:null
this.promise=r}function d(e,t){var r=false
try{e((function(e){if(r)return
r=true
f(t,e)}),(function(e){if(r)return
r=true
c(t,e)}))}catch(e){if(r)return
r=true
c(t,e)}}i.prototype["catch"]=function(e){return this.then(null,e)}
i.prototype.then=function(e,t){var r=new this.constructor(a)
u(this,new l(e,t,r))
return r}
i.all=function(e){var t=Array.prototype.slice.call(e)
return new i((function(e,r){if(0===t.length)return e([])
var n=t.length
function a(o,i){try{if(i&&("object"===typeof i||"function"===typeof i)){var u=i.then
if("function"===typeof u){u.call(i,(function(e){a(o,e)}),r)
return}}t[o]=i
0===--n&&e(t)}catch(e){r(e)}}for(var o=0;o<t.length;o++)a(o,t[o])}))}
i.resolve=function(e){if(e&&"object"===typeof e&&e.constructor===i)return e
return new i((function(t){t(e)}))}
i.reject=function(e){return new i((function(t,r){r(e)}))}
i.race=function(e){return new i((function(t,r){for(var n=0,a=e.length;n<a;n++)e[n].then(t,r)}))}
i._immediateFn="function"===typeof e?function(t){e(t)}:function(e){n(e,0)}
i._unhandledRejectionFn=function(e){"undefined"!==typeof console&&console&&console.warn("Possible Unhandled Promise Rejection:",e)}
i._setImmediateFn=function(e){i._immediateFn=e}
i._setUnhandledRejectionFn=function(e){i._unhandledRejectionFn=e}
"undefined"!==typeof t&&t.exports?t.exports=i:r.Promise||(r.Promise=i)})(this)}).call(this,e("timers").setImmediate)},{timers:3}],3:[function(e,t,r){(function(t,n){var a=e("process/browser.js").nextTick
var o=Function.prototype.apply
var i=Array.prototype.slice
var u={}
var f=0
r.setTimeout=function(){return new c(o.call(setTimeout,window,arguments),clearTimeout)}
r.setInterval=function(){return new c(o.call(setInterval,window,arguments),clearInterval)}
r.clearTimeout=r.clearInterval=function(e){e.close()}
function c(e,t){this._id=e
this._clearFn=t}c.prototype.unref=c.prototype.ref=function(){}
c.prototype.close=function(){this._clearFn.call(window,this._id)}
r.enroll=function(e,t){clearTimeout(e._idleTimeoutId)
e._idleTimeout=t}
r.unenroll=function(e){clearTimeout(e._idleTimeoutId)
e._idleTimeout=-1}
r._unrefActive=r.active=function(e){clearTimeout(e._idleTimeoutId)
var t=e._idleTimeout
t>=0&&(e._idleTimeoutId=setTimeout((function(){e._onTimeout&&e._onTimeout()}),t))}
r.setImmediate="function"===typeof t?t:function(e){var t=f++
var n=!(arguments.length<2)&&i.call(arguments,1)
u[t]=true
a((function(){if(u[t]){n?e.apply(null,n):e.call(null)
r.clearImmediate(t)}}))
return t}
r.clearImmediate="function"===typeof n?n:function(e){delete u[e]}}).call(this,e("timers").setImmediate,e("timers").clearImmediate)},{"process/browser.js":1,timers:3}],4:[function(e,t,r){var n=e("promise-polyfill")
var a="undefined"!==typeof window?window:Function("return this;")()
t.exports={boltExport:a.Promise||n}},{"promise-polyfill":2}]},{},[4])(4)}))})(void 0,Ta,Aa,void 0)
var Ra=Aa.exports.boltExport
var Da=function(e){var t=q.none()
var r=[]
var n=function(e){return Da((function(t){a((function(r){t(e(r))}))}))}
var a=function(e){i()?f(e):r.push(e)}
var o=function(e){if(!i()){t=q.some(e)
u(r)
r=[]}}
var i=function(){return t.isSome()}
var u=function(e){Z(e,f)}
var f=function(e){t.each((function(t){setTimeout((function(){e(t)}),0)}))}
e(o)
return{get:a,map:n,isReady:i}}
var Oa=function(e){return Da((function(t){t(e)}))}
var Ba={nu:Da,pure:Oa}
var Pa=function(e){setTimeout((function(){throw e}),0)}
var La=function(e){var t=function(t){e().then(t,Pa)}
var r=function(t){return La((function(){return e().then(t)}))}
var n=function(t){return La((function(){return e().then((function(e){return t(e).toPromise()}))}))}
var a=function(t){return La((function(){return e().then((function(){return t.toPromise()}))}))}
var o=function(){return Ba.nu(t)}
var i=function(){var t=null
return La((function(){null===t&&(t=e())
return t}))}
var u=e
return{map:r,bind:n,anonBind:a,toLazy:o,toCached:i,toPromise:u,get:t}}
var Ia=function(e){return La((function(){return new Ra(e)}))}
var Ma=function(e){return La((function(){return Ra.resolve(e)}))}
var Fa={nu:Ia,pure:Ma}
var Ua=function(e,t){return t((function(t){var r=[]
var n=0
var a=function(a){return function(o){r[a]=o
n++
n>=e.length&&t(r)}}
0===e.length?t([]):Z(e,(function(e,t){e.get(a(t))}))}))}
var za=function(e){return Ua(e,Fa.nu)}
var ja=function(e){var t=function(t){return e===t}
var r=function(t){return ja(e)}
var n=function(t){return ja(e)}
var a=function(t){return ja(t(e))}
var o=function(t){return ja(e)}
var i=function(t){t(e)}
var u=function(t){return t(e)}
var f=function(t,r){return r(e)}
var c=function(t){return t(e)}
var s=function(t){return t(e)}
var l=function(){return q.some(e)}
return{is:t,isValue:U,isError:F,getOr:D(e),getOrThunk:D(e),getOrDie:D(e),or:r,orThunk:n,fold:f,map:a,mapError:o,each:i,bind:u,exists:c,forall:s,toOptional:l}}
var Ha=function(e){var t=function(e){return e()}
var r=function(){return L(String(e))()}
var n=function(e){return e}
var a=function(e){return e()}
var o=function(t){return Ha(e)}
var i=function(t){return Ha(t(e))}
var u=function(t){return Ha(e)}
var f=function(t,r){return t(e)}
return{is:F,isValue:F,isError:U,getOr:O,getOrThunk:t,getOrDie:r,or:n,orThunk:a,fold:f,map:o,mapError:i,each:T,bind:u,exists:F,forall:U,toOptional:q.none}}
var Va=function(e,t){return e.fold((function(){return Ha(t)}),ja)}
var qa={value:ja,error:Ha,fromOption:Va}
var $a=function(e){if(!C(e))throw new Error("cases must be an array")
if(0===e.length)throw new Error("there must be at least one case")
var t=[]
var r={}
Z(e,(function(n,a){var o=Ce(n)
if(1!==o.length)throw new Error("one and only one name per case")
var i=o[0]
var u=n[i]
if(void 0!==r[i])throw new Error("duplicate key detected:"+i)
if("cata"===i)throw new Error("cannot have a case named cata (sorry)")
if(!C(u))throw new Error("case arguments must be an array")
t.push(i)
r[i]=function(){var r=[]
for(var n=0;n<arguments.length;n++)r[n]=arguments[n]
var o=r.length
if(o!==u.length)throw new Error("Wrong number of arguments to case "+i+". Expected "+u.length+" ("+u+"), got "+o)
var f=function(e){var n=Ce(e)
if(t.length!==n.length)throw new Error("Wrong number of arguments to match. Expected: "+t.join(",")+"\nActual: "+n.join(","))
var a=se(t,(function(e){return G(n,e)}))
if(!a)throw new Error("Not all branches were specified when using match. Specified: "+n.join(", ")+"\nRequired: "+t.join(", "))
return e[i].apply(null,r)}
return{fold:function(){var t=[]
for(var n=0;n<arguments.length;n++)t[n]=arguments[n]
if(t.length!==e.length)throw new Error("Wrong number of arguments to fold. Expected "+e.length+", got "+t.length)
var o=t[a]
return o.apply(null,r)},match:f,log:function(e){console.log(e,{constructors:t,constructor:i,params:r})}}}}))
return r}
var Wa={generate:$a}
Wa.generate([{bothErrors:["error1","error2"]},{firstError:["error1","value2"]},{secondError:["value1","error2"]},{bothValues:["value1","value2"]}])
var Ka=function(e){return e.fold(O,O)}
function Xa(e,t,r,n,a){return e(r,n)?q.some(r):E(a)&&a(r)?q.none():t(r,n,a)}var Ya=function(e,t,r){var n=e.dom
var a=E(r)?r:F
while(n.parentNode){n=n.parentNode
var o=yr.fromDom(n)
if(t(o))return q.some(o)
if(a(o))break}return q.none()}
var Ga=function(e,t,r){var n=function(e,t){return t(e)}
return Xa(n,Ya,e,t,r)}
var Ja=function(e,t){var r=e.dom
if(!r.parentNode)return q.none()
return Qa(yr.fromDom(r.parentNode),(function(r){return!Dr(e,r)&&t(r)}))}
var Qa=function(e,t){var r=function(e){return t(yr.fromDom(e))}
var n=ie(e.dom.childNodes,r)
return n.map(yr.fromDom)}
var Za=function(e,t,r){return Ya(e,(function(e){return _r(e,t)}),r)}
var eo=function(e,t){return Rr(t,e)}
var to=function(e,t,r){var n=function(e,t){return _r(e,t)}
return Xa(n,Za,e,t,r)}
var ro=function(){var e=function(e,t){return function(){var r=[]
for(var n=0;n<arguments.length;n++)r[n]=arguments[n]
e.apply(t,r)}}
var t=Array.isArray||function(e){return"[object Array]"===Object.prototype.toString.call(e)}
var n=function(t){if("object"!==typeof this)throw new TypeError("Promises must be constructed via new")
if("function"!==typeof t)throw new TypeError("not a function")
this._state=null
this._value=null
this._deferreds=[]
s(t,e(i,this),e(u,this))}
var a=n.immediateFn||"function"===typeof r&&r||function(e){return setTimeout(e,1)}
function o(e){var t=this
if(null===this._state){this._deferreds.push(e)
return}a((function(){var r=t._state?e.onFulfilled:e.onRejected
if(null===r){(t._state?e.resolve:e.reject)(t._value)
return}var n
try{n=r(t._value)}catch(t){e.reject(t)
return}e.resolve(n)}))}function i(t){try{if(t===this)throw new TypeError("A promise cannot be resolved with itself.")
if(t&&("object"===typeof t||"function"===typeof t)){var r=t.then
if("function"===typeof r){s(e(r,t),e(i,this),e(u,this))
return}}this._state=true
this._value=t
f.call(this)}catch(e){u.call(this,e)}}function u(e){this._state=false
this._value=e
f.call(this)}function f(){for(var e=0,t=this._deferreds.length;e<t;e++)o.call(this,this._deferreds[e])
this._deferreds=null}function c(e,t,r,n){this.onFulfilled="function"===typeof e?e:null
this.onRejected="function"===typeof t?t:null
this.resolve=r
this.reject=n}var s=function(e,t,r){var n=false
try{e((function(e){if(n)return
n=true
t(e)}),(function(e){if(n)return
n=true
r(e)}))}catch(e){if(n)return
n=true
r(e)}}
n.prototype.catch=function(e){return this.then(null,e)}
n.prototype.then=function(e,t){var r=this
return new n((function(n,a){o.call(r,new c(e,t,n,a))}))}
n.all=function(){var e=[]
for(var r=0;r<arguments.length;r++)e[r]=arguments[r]
var a=Array.prototype.slice.call(1===e.length&&t(e[0])?e[0]:e)
return new n((function(e,t){if(0===a.length)return e([])
var r=a.length
var n=function(o,i){try{if(i&&("object"===typeof i||"function"===typeof i)){var u=i.then
if("function"===typeof u){u.call(i,(function(e){n(o,e)}),t)
return}}a[o]=i
0===--r&&e(a)}catch(e){t(e)}}
for(var o=0;o<a.length;o++)n(o,a[o])}))}
n.resolve=function(e){if(e&&"object"===typeof e&&e.constructor===n)return e
return new n((function(t){t(e)}))}
n.reject=function(e){return new n((function(t,r){r(e)}))}
n.race=function(e){return new n((function(t,r){for(var n=0,a=e.length;n<a;n++)e[n].then(t,r)}))}
return n}
var no=window.Promise?window.Promise:ro()
var ao
var oo=function(e,t){var r=window.requestAnimationFrame
var n=["ms","moz","webkit"]
var a=function(e){window.setTimeout(e,0)}
for(var o=0;o<n.length&&!r;o++)r=window[n[o]+"RequestAnimationFrame"]
r||(r=a)
r(e,t)}
var io=function(e,t){"number"!==typeof t&&(t=0)
return setTimeout(e,t)}
var uo=function(e,t){"number"!==typeof t&&(t=1)
return setInterval(e,t)}
var fo=function(e){return clearTimeout(e)}
var co=function(e){return clearInterval(e)}
var so=function(e,t){var r
var n=function(){var n=[]
for(var a=0;a<arguments.length;a++)n[a]=arguments[a]
clearTimeout(r)
r=io((function(){e.apply(this,n)}),t)}
n.stop=function(){clearTimeout(r)}
return n}
var lo={requestAnimationFrame:function(e,t){if(ao){ao.then(e)
return}ao=new no((function(e){t||(t=document.body)
oo(e,t)})).then(e)},setTimeout:io,setInterval:uo,setEditorTimeout:function(e,t,r){return io((function(){e.removed||t()}),r)},setEditorInterval:function(e,t,r){var n=uo((function(){e.removed?clearInterval(n):t()}),r)
return n},debounce:so,throttle:so,clearInterval:co,clearTimeout:fo}
var vo=function(e,t){void 0===t&&(t={})
var r=0
var n={}
var a=yr.fromDom(e)
var o=qr(a)
var i=t.maxLoadTime||5e3
var u=function(e){t.referrerPolicy=e}
var f=function(e){bn(ln(a),e)}
var c=function(e){var t=ln(a)
eo(t,"#"+e).each(kn)}
var s=function(e){return De(n,e).getOrThunk((function(){return{id:"mce-u"+r++,passed:[],failed:[],count:0}}))}
var l=function(r,a,u){var c
var l=dr._addCacheSuffix(r)
var d=s(l)
n[l]=d
d.count++
var v=function(e,t){var r=e.length
while(r--)e[r]()
d.status=t
d.passed=[]
d.failed=[]
if(c){c.onload=null
c.onerror=null
c=null}}
var m=function(){return v(d.passed,2)}
var p=function(){return v(d.failed,3)}
var g=function(e,t){e()||(Date.now()-b<i?lo.setTimeout(t):p())}
var h=function(){g((function(){var t=e.styleSheets
var r=t.length
while(r--){var n=t[r]
var a=n.ownerNode
if(a&&a.id===c.id){m()
return true}}return false}),h)}
a&&d.passed.push(a)
u&&d.failed.push(u)
if(1===d.status)return
if(2===d.status){m()
return}if(3===d.status){p()
return}d.status=1
var y=yr.fromTag("link",o.dom)
sa(y,{rel:"stylesheet",type:"text/css",id:d.id})
var b=Date.now()
t.contentCssCors&&ca(y,"crossOrigin","anonymous")
t.referrerPolicy&&ca(y,"referrerpolicy",t.referrerPolicy)
c=y.dom
c.onload=h
c.onerror=p
f(y)
ca(y,"href",l)}
var d=function(e){return Fa.nu((function(t){l(e,A(t,D(qa.value(e))),A(t,D(qa.error(e))))}))}
var v=function(e,t,r){za(Q(e,d)).get((function(e){var n=te(e,(function(e){return e.isValue()}))
n.fail.length>0?r(n.fail.map(Ka)):t(n.pass.map(Ka))}))}
var m=function(e){var t=dr._addCacheSuffix(e)
De(n,t).each((function(e){var r=--e.count
if(0===r){delete n[t]
c(e.id)}}))}
var p=function(e){Z(e,(function(e){m(e)}))}
return{load:l,loadAll:v,unload:m,unloadAll:p,_setReferrerPolicy:u}}
var mo=function(){var e=new WeakMap
var t=function(t,r){var n=sn(t)
var a=n.dom
return q.from(e.get(a)).getOrThunk((function(){var t=vo(a,r)
e.set(a,t)
return t}))}
return{forElement:t}}
var po=mo()
var go=function(){function e(e,t){this.node=e
this.rootNode=t
this.current=this.current.bind(this)
this.next=this.next.bind(this)
this.prev=this.prev.bind(this)
this.prev2=this.prev2.bind(this)}e.prototype.current=function(){return this.node}
e.prototype.next=function(e){this.node=this.findSibling(this.node,"firstChild","nextSibling",e)
return this.node}
e.prototype.prev=function(e){this.node=this.findSibling(this.node,"lastChild","previousSibling",e)
return this.node}
e.prototype.prev2=function(e){this.node=this.findPreviousNode(this.node,"lastChild","previousSibling",e)
return this.node}
e.prototype.findSibling=function(e,t,r,n){var a,o
if(e){if(!n&&e[t])return e[t]
if(e!==this.rootNode){a=e[r]
if(a)return a
for(o=e.parentNode;o&&o!==this.rootNode;o=o.parentNode){a=o[r]
if(a)return a}}}}
e.prototype.findPreviousNode=function(e,t,r,n){var a,o,i
if(e){a=e[r]
if(this.rootNode&&a===this.rootNode)return
if(a){if(!n)for(i=a[t];i;i=i[t])if(!i[t])return i
return a}o=e.parentNode
if(o&&o!==this.rootNode)return o}}
return e}()
var ho=["article","aside","details","div","dt","figcaption","footer","form","fieldset","header","hgroup","html","main","nav","section","summary","body","p","dl","multicol","dd","figure","address","center","blockquote","h1","h2","h3","h4","h5","h6","listing","xmp","pre","plaintext","menu","dir","ul","ol","li","hr","table","tbody","thead","tfoot","th","tr","td","caption"]
var yo=["td","th"]
var bo=["thead","tbody","tfoot"]
var Co=["h1","h2","h3","h4","h5","h6","p","div","address","pre","form","blockquote","center","dir","fieldset","header","footer","article","section","hgroup","aside","nav","figure"]
var wo=["h1","h2","h3","h4","h5","h6"]
var xo=["li","dd","dt"]
var So=["ul","ol","dl"]
var ko=["pre","script","textarea","style"]
var No=function(e){var t
return function(r){t=t||ve(e,U)
return t.hasOwnProperty(Lr(r))}}
var Eo=No(wo)
var _o=No(ho)
var To=function(e){return"table"===Lr(e)}
var Ao=function(e){return Ur(e)&&!_o(e)}
var Ro=function(e){return Ur(e)&&"br"===Lr(e)}
var Do=No(Co)
var Oo=No(So)
var Bo=No(xo)
var Po=No(bo)
var Lo=No(yo)
var Io=No(ko)
var Mo=function(e,t,r){return Za(e,t,r).isSome()}
var Fo="\ufeff"
var Uo=" "
var zo=function(e){return e===Fo}
var jo=function(e){return e.replace(/\uFEFF/g,"")}
var Ho=Fo
var Vo=zo
var qo=jo
var $o=jn
var Wo=Jn
var Ko=function(e){Wo(e)&&(e=e.parentNode)
return $o(e)&&e.hasAttribute("data-mce-caret")}
var Xo=function(e){return Wo(e)&&Vo(e.data)}
var Yo=function(e){return Ko(e)||Xo(e)}
var Go=function(e){return e.firstChild!==e.lastChild||!ta(e.firstChild)}
var Jo=function(e,t){var r
var n=e.ownerDocument
var a=n.createTextNode(Ho)
var o=e.parentNode
if(t){r=e.previousSibling
if(Wo(r)){if(Yo(r))return r
if(ni(r))return r.splitText(r.data.length-1)}o.insertBefore(a,e)}else{r=e.nextSibling
if(Wo(r)){if(Yo(r))return r
if(ri(r)){r.splitText(1)
return r}}e.nextSibling?o.insertBefore(a,e.nextSibling):o.appendChild(a)}return a}
var Qo=function(e){var t=e.container()
if(!Jn(t))return false
return t.data.charAt(e.offset())===Ho||e.isAtStart()&&Xo(t.previousSibling)}
var Zo=function(e){var t=e.container()
if(!Jn(t))return false
return t.data.charAt(e.offset()-1)===Ho||e.isAtEnd()&&Xo(t.nextSibling)}
var ei=function(){var e=document.createElement("br")
e.setAttribute("data-mce-bogus","1")
return e}
var ti=function(e,t,r){var n=t.ownerDocument
var a=n.createElement(e)
a.setAttribute("data-mce-caret",r?"before":"after")
a.setAttribute("data-mce-bogus","all")
a.appendChild(ei())
var o=t.parentNode
r?o.insertBefore(a,t):t.nextSibling?o.insertBefore(a,t.nextSibling):o.appendChild(a)
return a}
var ri=function(e){return Wo(e)&&e.data[0]===Ho}
var ni=function(e){return Wo(e)&&e.data[e.data.length-1]===Ho}
var ai=function(e){var t=e.getElementsByTagName("br")
var r=t[t.length-1]
Wn(r)&&r.parentNode.removeChild(r)}
var oi=function(e){if(e&&e.hasAttribute("data-mce-caret")){ai(e)
e.removeAttribute("data-mce-caret")
e.removeAttribute("data-mce-bogus")
e.removeAttribute("style")
e.removeAttribute("_moz_abspos")
return e}return null}
var ii=function(e){return Ko(e.startContainer)}
var ui=na
var fi=aa
var ci=ta
var si=Jn
var li=Hn(["script","style","textarea"])
var di=Hn(["img","input","textarea","hr","iframe","video","audio","object","embed"])
var vi=Hn(["table"])
var mi=Yo
var pi=function(e){if(mi(e))return false
if(si(e))return!li(e.parentNode)
return di(e)||ci(e)||vi(e)||hi(e)}
var gi=function(e){return jn(e)&&"true"===e.getAttribute("unselectable")}
var hi=function(e){return false===gi(e)&&fi(e)}
var yi=function(e,t){for(e=e.parentNode;e&&e!==t;e=e.parentNode){if(hi(e))return false
if(ui(e))return true}return true}
var bi=function(e){if(!hi(e))return false
return true!==ae(ye(e.getElementsByTagName("*")),(function(e,t){return e||ui(t)}),false)}
var Ci=function(e){return di(e)||bi(e)}
var wi=function(e,t){return pi(e)&&yi(e,t)}
var xi=/^[ \t\r\n]*$/
var Si=function(e){return xi.test(e)}
var ki=function(e,t){var r=yr.fromDom(t)
var n=yr.fromDom(e)
return Mo(n,"pre,code",B(Dr,r))}
var Ni=function(e,t){return Jn(e)&&Si(e.data)&&false===ki(e,t)}
var Ei=function(e){return jn(e)&&"A"===e.nodeName&&!e.hasAttribute("href")&&(e.hasAttribute("name")||e.hasAttribute("id"))}
var _i=function(e,t){return pi(e)&&false===Ni(e,t)||Ei(e)||Ti(e)}
var Ti=qn("data-mce-bookmark")
var Ai=qn("data-mce-bogus")
var Ri=$n("data-mce-bogus","all")
var Di=function(e,t){var r,n=0
if(_i(e,e))return false
r=e.firstChild
if(!r)return true
var a=new go(r,e)
do{if(t){if(Ri(r)){r=a.next(true)
continue}if(Ai(r)){r=a.next()
continue}}if(ta(r)){n++
r=a.next()
continue}if(_i(r,e))return false
r=a.next()}while(r)
return n<=1}
var Oi=function(e,t){void 0===t&&(t=true)
return Di(e.dom,t)}
var Bi=function(e){return"span"===e.nodeName.toLowerCase()}
var Pi=function(e,t){return N(e)&&(_i(e,t)||Ao(yr.fromDom(e)))}
var Li=function(e,t){var r=new go(e,t).prev(false)
var n=new go(e,t).next(false)
var a=S(r)||Pi(r,t)
var o=S(n)||Pi(n,t)
return a&&o}
var Ii=function(e){return Bi(e)&&"bookmark"===e.getAttribute("data-mce-type")}
var Mi=function(e,t){return Jn(e)&&e.data.length>0&&Li(e,t)}
var Fi=function(e){return!!jn(e)&&e.childNodes.length>0}
var Ui=function(e){return ea(e)||Zn(e)}
var zi=function(e,t,r){var n=r||t
if(jn(t)&&Ii(t))return t
var a=t.childNodes
for(var o=a.length-1;o>=0;o--)zi(e,a[o],n)
if(jn(t)){var i=t.childNodes
1===i.length&&Ii(i[0])&&t.parentNode.insertBefore(i[0],t)}Ui(t)||_i(t,n)||Fi(t)||Mi(t,n)||e.remove(t)
return t}
var ji=dr.makeMap
var Hi=/[&<>\"\u0060\u007E-\uD7FF\uE000-\uFFEF]|[\uD800-\uDBFF][\uDC00-\uDFFF]/g
var Vi=/[<>&\u007E-\uD7FF\uE000-\uFFEF]|[\uD800-\uDBFF][\uDC00-\uDFFF]/g
var qi=/[<>&\"\']/g
var $i=/&#([a-z0-9]+);?|&([a-z0-9]+);/gi
var Wi={128:"€",130:"‚",131:"ƒ",132:"„",133:"…",134:"†",135:"‡",136:"ˆ",137:"‰",138:"Š",139:"‹",140:"Œ",142:"Ž",145:"‘",146:"’",147:"“",148:"”",149:"•",150:"–",151:"—",152:"˜",153:"™",154:"š",155:"›",156:"œ",158:"ž",159:"Ÿ"}
var Ki={'"':"&quot;","'":"&#39;","<":"&lt;",">":"&gt;","&":"&amp;","`":"&#96;"}
var Xi={"&lt;":"<","&gt;":">","&amp;":"&","&quot;":'"',"&apos;":"'"}
var Yi=function(e){var t=yr.fromTag("div").dom
t.innerHTML=e
return t.textContent||t.innerText||e}
var Gi=function(e,t){var r,n,a
var o={}
if(e){e=e.split(",")
t=t||10
for(r=0;r<e.length;r+=2){n=String.fromCharCode(parseInt(e[r],t))
if(!Ki[n]){a="&"+e[r+1]+";"
o[n]=a
o[a]=n}}return o}}
var Ji=Gi("50,nbsp,51,iexcl,52,cent,53,pound,54,curren,55,yen,56,brvbar,57,sect,58,uml,59,copy,5a,ordf,5b,laquo,5c,not,5d,shy,5e,reg,5f,macr,5g,deg,5h,plusmn,5i,sup2,5j,sup3,5k,acute,5l,micro,5m,para,5n,middot,5o,cedil,5p,sup1,5q,ordm,5r,raquo,5s,frac14,5t,frac12,5u,frac34,5v,iquest,60,Agrave,61,Aacute,62,Acirc,63,Atilde,64,Auml,65,Aring,66,AElig,67,Ccedil,68,Egrave,69,Eacute,6a,Ecirc,6b,Euml,6c,Igrave,6d,Iacute,6e,Icirc,6f,Iuml,6g,ETH,6h,Ntilde,6i,Ograve,6j,Oacute,6k,Ocirc,6l,Otilde,6m,Ouml,6n,times,6o,Oslash,6p,Ugrave,6q,Uacute,6r,Ucirc,6s,Uuml,6t,Yacute,6u,THORN,6v,szlig,70,agrave,71,aacute,72,acirc,73,atilde,74,auml,75,aring,76,aelig,77,ccedil,78,egrave,79,eacute,7a,ecirc,7b,euml,7c,igrave,7d,iacute,7e,icirc,7f,iuml,7g,eth,7h,ntilde,7i,ograve,7j,oacute,7k,ocirc,7l,otilde,7m,ouml,7n,divide,7o,oslash,7p,ugrave,7q,uacute,7r,ucirc,7s,uuml,7t,yacute,7u,thorn,7v,yuml,ci,fnof,sh,Alpha,si,Beta,sj,Gamma,sk,Delta,sl,Epsilon,sm,Zeta,sn,Eta,so,Theta,sp,Iota,sq,Kappa,sr,Lambda,ss,Mu,st,Nu,su,Xi,sv,Omicron,t0,Pi,t1,Rho,t3,Sigma,t4,Tau,t5,Upsilon,t6,Phi,t7,Chi,t8,Psi,t9,Omega,th,alpha,ti,beta,tj,gamma,tk,delta,tl,epsilon,tm,zeta,tn,eta,to,theta,tp,iota,tq,kappa,tr,lambda,ts,mu,tt,nu,tu,xi,tv,omicron,u0,pi,u1,rho,u2,sigmaf,u3,sigma,u4,tau,u5,upsilon,u6,phi,u7,chi,u8,psi,u9,omega,uh,thetasym,ui,upsih,um,piv,812,bull,816,hellip,81i,prime,81j,Prime,81u,oline,824,frasl,88o,weierp,88h,image,88s,real,892,trade,89l,alefsym,8cg,larr,8ch,uarr,8ci,rarr,8cj,darr,8ck,harr,8dl,crarr,8eg,lArr,8eh,uArr,8ei,rArr,8ej,dArr,8ek,hArr,8g0,forall,8g2,part,8g3,exist,8g5,empty,8g7,nabla,8g8,isin,8g9,notin,8gb,ni,8gf,prod,8gh,sum,8gi,minus,8gn,lowast,8gq,radic,8gt,prop,8gu,infin,8h0,ang,8h7,and,8h8,or,8h9,cap,8ha,cup,8hb,int,8hk,there4,8hs,sim,8i5,cong,8i8,asymp,8j0,ne,8j1,equiv,8j4,le,8j5,ge,8k2,sub,8k3,sup,8k4,nsub,8k6,sube,8k7,supe,8kl,oplus,8kn,otimes,8l5,perp,8m5,sdot,8o8,lceil,8o9,rceil,8oa,lfloor,8ob,rfloor,8p9,lang,8pa,rang,9ea,loz,9j0,spades,9j3,clubs,9j5,hearts,9j6,diams,ai,OElig,aj,oelig,b0,Scaron,b1,scaron,bo,Yuml,m6,circ,ms,tilde,802,ensp,803,emsp,809,thinsp,80c,zwnj,80d,zwj,80e,lrm,80f,rlm,80j,ndash,80k,mdash,80o,lsquo,80p,rsquo,80q,sbquo,80s,ldquo,80t,rdquo,80u,bdquo,810,dagger,811,Dagger,81g,permil,81p,lsaquo,81q,rsaquo,85c,euro",32)
var Qi=function(e,t){return e.replace(t?Hi:Vi,(function(e){return Ki[e]||e}))}
var Zi=function(e){return(""+e).replace(qi,(function(e){return Ki[e]||e}))}
var eu=function(e,t){return e.replace(t?Hi:Vi,(function(e){if(e.length>1)return"&#"+(1024*(e.charCodeAt(0)-55296)+(e.charCodeAt(1)-56320)+65536)+";"
return Ki[e]||"&#"+e.charCodeAt(0)+";"}))}
var tu=function(e,t,r){r=r||Ji
return e.replace(t?Hi:Vi,(function(e){return Ki[e]||r[e]||e}))}
var ru=function(e,t){var r=Gi(t)||Ji
var n=function(e,t){return e.replace(t?Hi:Vi,(function(e){if(void 0!==Ki[e])return Ki[e]
if(void 0!==r[e])return r[e]
if(e.length>1)return"&#"+(1024*(e.charCodeAt(0)-55296)+(e.charCodeAt(1)-56320)+65536)+";"
return"&#"+e.charCodeAt(0)+";"}))}
var a=function(e,t){return tu(e,t,r)}
var o=ji(e.replace(/\+/g,","))
if(o.named&&o.numeric)return n
if(o.named){if(t)return a
return tu}if(o.numeric)return eu
return Qi}
var nu=function(e){return e.replace($i,(function(e,t){if(t){t="x"===t.charAt(0).toLowerCase()?parseInt(t.substr(1),16):parseInt(t,10)
if(t>65535){t-=65536
return String.fromCharCode(55296+(t>>10),56320+(1023&t))}return Wi[t]||String.fromCharCode(t)}return Xi[e]||Ji[e]||Yi(e)}))}
var au={encodeRaw:Qi,encodeAllRaw:Zi,encodeNumeric:eu,encodeNamed:tu,getEncodeFunc:ru,decode:nu}
var ou={},iu={}
var uu=dr.makeMap,fu=dr.each,cu=dr.extend,su=dr.explode,lu=dr.inArray
var du=function(e,t){e=dr.trim(e)
return e?e.split(t||" "):[]}
var vu=function(e){var t={}
var r,n
var a,o,i,u
var f=function(e,n,a){var o,i,u
var f=function(e,t){var r={}
var n,a
for(n=0,a=e.length;n<a;n++)r[e[n]]=t||{}
return r}
a=a||[]
n=n||""
"string"===typeof a&&(a=du(a))
var c=du(e)
o=c.length
while(o--){i=du([r,n].join(" "))
u={attributes:f(i),attributesOrder:i,children:f(a,iu)}
t[c[o]]=u}}
var c=function(e,r){var n,a,o,i
var u=du(e)
n=u.length
var f=du(r)
while(n--){a=t[u[n]]
for(o=0,i=f.length;o<i;o++){a.attributes[f[o]]={}
a.attributesOrder.push(f[o])}}}
if(ou[e])return ou[e]
r="id accesskey class dir lang style tabindex title role"
n="address blockquote div dl fieldset form h1 h2 h3 h4 h5 h6 hr menu ol p pre table ul"
a="a abbr b bdo br button cite code del dfn em embed i iframe img input ins kbd label map noscript object q s samp script select small span strong sub sup textarea u var #text #comment"
if("html4"!==e){r+=" contenteditable contextmenu draggable dropzone hidden spellcheck translate"
n+=" article aside details dialog figure main header footer hgroup section nav"
a+=" audio canvas command datalist mark meter output picture progress time wbr video ruby bdi keygen"}if("html5-strict"!==e){r+=" xml:lang"
u="acronym applet basefont big font strike tt"
a=[a,u].join(" ")
fu(du(u),(function(e){f(e,"",a)}))
i="center dir isindex noframes"
n=[n,i].join(" ")
o=[n,a].join(" ")
fu(du(i),(function(e){f(e,"",o)}))}o=o||[n,a].join(" ")
f("html","manifest","head body")
f("head","","base command link meta noscript script style title")
f("title hr noscript br")
f("base","href target")
f("link","href rel media hreflang type sizes hreflang")
f("meta","name http-equiv content charset")
f("style","media type scoped")
f("script","src async defer type charset")
f("body","onafterprint onbeforeprint onbeforeunload onblur onerror onfocus onhashchange onload onmessage onoffline ononline onpagehide onpageshow onpopstate onresize onscroll onstorage onunload",o)
f("address dt dd div caption","",o)
f("h1 h2 h3 h4 h5 h6 pre p abbr code var samp kbd sub sup i b u bdo span legend em strong small s cite dfn","",a)
f("blockquote","cite",o)
f("ol","reversed start type","li")
f("ul","","li")
f("li","value",o)
f("dl","","dt dd")
f("a","href target rel media hreflang type",a)
f("q","cite",a)
f("ins del","cite datetime",o)
f("img","src sizes srcset alt usemap ismap width height")
f("iframe","src name width height",o)
f("embed","src type width height")
f("object","data type typemustmatch name usemap form width height",[o,"param"].join(" "))
f("param","name value")
f("map","name",[o,"area"].join(" "))
f("area","alt coords shape href target rel media hreflang type")
f("table","border","caption colgroup thead tfoot tbody tr"+("html4"===e?" col":""))
f("colgroup","span","col")
f("col","span")
f("tbody thead tfoot","","tr")
f("tr","","td th")
f("td","colspan rowspan headers",o)
f("th","colspan rowspan headers scope abbr",o)
f("form","accept-charset action autocomplete enctype method name novalidate target",o)
f("fieldset","disabled form name",[o,"legend"].join(" "))
f("label","form for",a)
f("input","accept alt autocomplete checked dirname disabled form formaction formenctype formmethod formnovalidate formtarget height list max maxlength min multiple name pattern readonly required size src step type value width")
f("button","disabled form formaction formenctype formmethod formnovalidate formtarget name type value","html4"===e?o:a)
f("select","disabled form multiple name required size","option optgroup")
f("optgroup","disabled label","option")
f("option","disabled label selected value")
f("textarea","cols dirname disabled form maxlength name readonly required rows wrap")
f("menu","type label",[o,"li"].join(" "))
f("noscript","",o)
if("html4"!==e){f("wbr")
f("ruby","",[a,"rt rp"].join(" "))
f("figcaption","",o)
f("mark rt rp summary bdi","",a)
f("canvas","width height",o)
f("video","src crossorigin poster preload autoplay mediagroup loop muted controls width height buffered",[o,"track source"].join(" "))
f("audio","src crossorigin preload autoplay mediagroup loop muted controls buffered volume",[o,"track source"].join(" "))
f("picture","","img source")
f("source","src srcset type media sizes")
f("track","kind src srclang label default")
f("datalist","",[a,"option"].join(" "))
f("article section nav aside main header footer","",o)
f("hgroup","","h1 h2 h3 h4 h5 h6")
f("figure","",[o,"figcaption"].join(" "))
f("time","datetime",a)
f("dialog","open",o)
f("command","type label icon disabled checked radiogroup command")
f("output","for form name",a)
f("progress","value max",a)
f("meter","value min max low high optimum",a)
f("details","open",[o,"summary"].join(" "))
f("keygen","autofocus challenge disabled form keytype name")}if("html5-strict"!==e){c("script","language xml:space")
c("style","xml:space")
c("object","declare classid code codebase codetype archive standby align border hspace vspace")
c("embed","align name hspace vspace")
c("param","valuetype type")
c("a","charset name rev shape coords")
c("br","clear")
c("applet","codebase archive code object alt name width height align hspace vspace")
c("img","name longdesc align border hspace vspace")
c("iframe","longdesc frameborder marginwidth marginheight scrolling align")
c("font basefont","size color face")
c("input","usemap align")
c("select")
c("textarea")
c("h1 h2 h3 h4 h5 h6 div p legend caption","align")
c("ul","type compact")
c("li","type")
c("ol dl menu dir","compact")
c("pre","width xml:space")
c("hr","align noshade size width")
c("isindex","prompt")
c("table","summary width frame rules cellspacing cellpadding align bgcolor")
c("col","width align char charoff valign")
c("colgroup","width align char charoff valign")
c("thead","align char charoff valign")
c("tr","align char charoff valign bgcolor")
c("th","axis align char charoff valign nowrap bgcolor width height")
c("form","accept")
c("td","abbr axis scope align char charoff valign nowrap bgcolor width height")
c("tfoot","align char charoff valign")
c("tbody","align char charoff valign")
c("area","nohref")
c("body","background bgcolor text link vlink alink")}if("html4"!==e){c("input button select textarea","autofocus")
c("input textarea","placeholder")
c("a","download")
c("link script img","crossorigin")
c("img","loading")
c("iframe","sandbox seamless allowfullscreen loading")}fu(du("a form meter progress dfn"),(function(e){t[e]&&delete t[e].children[e]}))
delete t.caption.children.table
delete t.script
ou[e]=t
return t}
var mu=function(e,t){var r
if(e){r={}
"string"===typeof e&&(e={"*":e})
fu(e,(function(e,n){r[n]=r[n.toUpperCase()]="map"===t?uu(e,/[, ]/):su(e,/[, ]/)}))}return r}
var pu=function(e){var t={}
var r={}
var n=[]
var a={},o={}
var i=function(t,r,n){var a=e[t]
if(a)a=uu(a,/[, ]/,uu(a.toUpperCase(),/[, ]/))
else{a=ou[t]
if(!a){a=uu(r," ",uu(r.toUpperCase()," "))
a=cu(a,n)
ou[t]=a}}return a}
e=e||{}
var u=vu(e.schema)
false===e.verify_html&&(e.valid_elements="*[*]")
var f=mu(e.valid_styles)
var c=mu(e.invalid_styles,"map")
var s=mu(e.valid_classes,"map")
var l=i("whitespace_elements","pre script noscript style textarea video audio iframe object code")
var d=i("self_closing_elements","colgroup dd dt li option p td tfoot th thead tr")
var v=i("short_ended_elements","area base basefont br col frame hr img input isindex link meta param embed source wbr track")
var m=i("boolean_attributes","checked compact declare defer disabled ismap multiple nohref noresize noshade nowrap readonly selected autoplay loop controls")
var p="td th iframe video audio object script code"
var g=i("non_empty_elements",p+" pre",v)
var h=i("move_caret_before_on_enter_elements",p+" table",v)
var y=i("text_block_elements","h1 h2 h3 h4 h5 h6 p div address pre form blockquote center dir fieldset header footer article section hgroup aside main nav figure")
var b=i("block_elements","hr table tbody thead tfoot th tr td li ol ul caption dl dt dd noscript menu isindex option datalist select optgroup figcaption details summary",y)
var C=i("text_inline_elements","span strong b em i font strike u var cite dfn code mark q sup sub samp")
fu((e.special||"script noscript iframe noframes noembed title style textarea xmp").split(" "),(function(e){o[e]=new RegExp("</"+e+"[^>]*>","gi")}))
var w=function(e){return new RegExp("^"+e.replace(/([?+*])/g,".$1")+"$")}
var x=function(e){var r,a,o,i,u,f,c,s,l,d,v,m,p,g,h,y,b,C
var x=/^([#+\-])?([^\[!\/]+)(?:\/([^\[!]+))?(?:(!?)\[([^\]]+)])?$/,S=/^([!\-])?(\w+[\\:]:\w+|[^=:<]+)?(?:([=:<])(.*))?$/,k=/[*?+]/
if(e){var N=du(e,",")
if(t["@"]){y=t["@"].attributes
b=t["@"].attributesOrder}for(r=0,a=N.length;r<a;r++){u=x.exec(N[r])
if(u){g=u[1]
l=u[2]
h=u[3]
s=u[5]
m={}
p=[]
f={attributes:m,attributesOrder:p}
"#"===g&&(f.paddEmpty=true)
"-"===g&&(f.removeEmpty=true)
"!"===u[4]&&(f.removeEmptyAttrs=true)
if(y){xe(y,(function(e,t){m[t]=e}))
p.push.apply(p,b)}if(s){s=du(s,"|")
for(o=0,i=s.length;o<i;o++){u=S.exec(s[o])
if(u){c={}
v=u[1]
d=u[2].replace(/[\\:]:/g,":")
g=u[3]
C=u[4]
if("!"===v){f.attributesRequired=f.attributesRequired||[]
f.attributesRequired.push(d)
c.required=true}if("-"===v){delete m[d]
p.splice(lu(p,d),1)
continue}if(g){if("="===g){f.attributesDefault=f.attributesDefault||[]
f.attributesDefault.push({name:d,value:C})
c.defaultValue=C}if(":"===g){f.attributesForced=f.attributesForced||[]
f.attributesForced.push({name:d,value:C})
c.forcedValue=C}"<"===g&&(c.validValues=uu(C,"?"))}if(k.test(d)){f.attributePatterns=f.attributePatterns||[]
c.pattern=w(d)
f.attributePatterns.push(c)}else{m[d]||p.push(d)
m[d]=c}}}}if(!y&&"@"===l){y=m
b=p}if(h){f.outputName=l
t[h]=f}if(k.test(l)){f.pattern=w(l)
n.push(f)}else t[l]=f}}}}
var S=function(e){t={}
n=[]
x(e)
fu(u,(function(e,t){r[t]=e.children}))}
var k=function(e){var n=/^(~)?(.+)$/
if(e){ou.text_block_elements=ou.block_elements=null
fu(du(e,","),(function(e){var o=n.exec(e),i="~"===o[1],u=i?"span":"div",f=o[2]
r[f]=r[u]
a[f]=u
if(!i){b[f.toUpperCase()]={}
b[f]={}}if(!t[f]){var c=t[u]
c=cu({},c)
delete c.removeEmptyAttrs
delete c.removeEmpty
t[f]=c}fu(r,(function(e,t){if(e[u]){r[t]=e=cu({},r[t])
e[f]=e[u]}}))}))}}
var N=function(t){var n=/^([+\-]?)([A-Za-z0-9_\-.\u00b7\u00c0-\u00d6\u00d8-\u00f6\u00f8-\u037d\u037f-\u1fff\u200c-\u200d\u203f-\u2040\u2070-\u218f\u2c00-\u2fef\u3001-\ud7ff\uf900-\ufdcf\ufdf0-\ufffd]+)\[([^\]]+)]$/
ou[e.schema]=null
t&&fu(du(t,","),(function(e){var t=n.exec(e)
var a,o
if(t){o=t[1]
a=o?r[t[2]]:r[t[2]]={"#comment":{}}
a=r[t[2]]
fu(du(t[3],"|"),(function(e){"-"===o?delete a[e]:a[e]={}}))}}))}
var E=function(e){var r,a=t[e]
if(a)return a
r=n.length
while(r--){a=n[r]
if(a.pattern.test(e))return a}}
if(e.valid_elements)S(e.valid_elements)
else{fu(u,(function(e,n){t[n]={attributes:e.attributes,attributesOrder:e.attributesOrder}
r[n]=e.children}))
"html5"!==e.schema&&fu(du("strong/b em/i"),(function(e){var r=du(e,"/")
t[r[1]].outputName=r[0]}))
fu(du("ol ul sub sup blockquote span font a table tbody strong em b i"),(function(e){t[e]&&(t[e].removeEmpty=true)}))
fu(du("p h1 h2 h3 h4 h5 h6 th td pre div address caption li"),(function(e){t[e].paddEmpty=true}))
fu(du("span"),(function(e){t[e].removeEmptyAttrs=true}))}k(e.custom_elements)
N(e.valid_children)
x(e.extended_valid_elements)
N("+ol[ul|ol],+ul[ul|ol]")
fu({dd:"dl",dt:"dl",li:"ul ol",td:"tr",th:"tr",tr:"tbody thead tfoot",tbody:"table",thead:"table",tfoot:"table",legend:"fieldset",area:"map",param:"video audio object"},(function(e,r){t[r]&&(t[r].parentsRequired=du(e))}))
e.invalid_elements&&fu(su(e.invalid_elements),(function(e){t[e]&&delete t[e]}))
E("span")||x("span[!data-mce-type|*]")
var _=function(){return f}
var T=function(){return c}
var A=function(){return s}
var R=function(){return m}
var D=function(){return b}
var O=function(){return y}
var B=function(){return C}
var P=function(){return v}
var L=function(){return d}
var I=function(){return g}
var M=function(){return h}
var F=function(){return l}
var U=function(){return o}
var z=function(e,t){var n=r[e.toLowerCase()]
return!!(n&&n[t.toLowerCase()])}
var j=function(e,t){var r,n
var a=E(e)
if(a){if(!t)return true
if(a.attributes[t])return true
r=a.attributePatterns
if(r){n=r.length
while(n--)if(r[n].pattern.test(e))return true}}return false}
var H=function(){return a}
return{children:r,elements:t,getValidStyles:_,getValidClasses:A,getBlockElements:D,getInvalidStyles:T,getShortEndedElements:P,getTextBlockElements:O,getTextInlineElements:B,getBoolAttrs:R,getElementRule:E,getSelfClosingElements:L,getNonEmptyElements:I,getMoveCaretBeforeOnEnterElements:M,getWhiteSpaceElements:F,getSpecialElements:U,isValidChild:z,isValid:j,getCustomElements:H,addValidElements:x,setValidElements:S,addCustomElements:k,addValidChildren:N}}
var gu=function(e,t,r,n){var a=function(e){e=parseInt(e,10).toString(16)
return e.length>1?e:"0"+e}
return"#"+a(t)+a(r)+a(n)}
var hu=function(e,t){var r=this
var n=/rgb\s*\(\s*([0-9]+)\s*,\s*([0-9]+)\s*,\s*([0-9]+)\s*\)/gi
var a=/(?:url(?:(?:\(\s*\"([^\"]+)\"\s*\))|(?:\(\s*\'([^\']+)\'\s*\))|(?:\(\s*([^)\s]+)\s*\))))|(?:\'([^\']+)\')|(?:\"([^\"]+)\")/gi
var o=/\s*([^:]+):\s*([^;]+);?/g
var i=/\s+$/
var u
var f={}
var c
var s
var l=Fo
e=e||{}
if(t){c=t.getValidStyles()
s=t.getInvalidStyles()}var d=("\\\" \\' \\; \\: ; : "+l).split(" ")
for(u=0;u<d.length;u++){f[d[u]]=l+u
f[l+u]=d[u]}return{toHex:function(e){return e.replace(n,gu)},parse:function(t){var c={}
var s,d,v,m
var p=e.url_converter
var g=e.url_converter_scope||r
var h=function(e,t,r){var n=c[e+"-top"+t]
if(!n)return
var a=c[e+"-right"+t]
if(!a)return
var o=c[e+"-bottom"+t]
if(!o)return
var i=c[e+"-left"+t]
if(!i)return
var f=[n,a,o,i]
u=f.length-1
while(u--)if(f[u]!==f[u+1])break
if(u>-1&&r)return
c[e+t]=-1===u?f[0]:f.join(" ")
delete c[e+"-top"+t]
delete c[e+"-right"+t]
delete c[e+"-bottom"+t]
delete c[e+"-left"+t]}
var y=function(e){var t,r=c[e]
if(!r)return
r=r.split(" ")
t=r.length
while(t--)if(r[t]!==r[0])return false
c[e]=r[0]
return true}
var b=function(e,t,r,n){if(!y(t))return
if(!y(r))return
if(!y(n))return
c[e]=c[t]+" "+c[r]+" "+c[n]
delete c[t]
delete c[r]
delete c[n]}
var C=function(e){m=true
return f[e]}
var w=function(e,t){m&&(e=e.replace(/\uFEFF[0-9]/g,(function(e){return f[e]})))
t||(e=e.replace(/\\([\'\";:])/g,"$1"))
return e}
var x=function(e){return String.fromCharCode(parseInt(e.slice(1),16))}
var S=function(e){return e.replace(/\\[0-9a-f]+/gi,x)}
var k=function(t,r,n,a,o,i){o=o||i
if(o){o=w(o)
return"'"+o.replace(/\'/g,"\\'")+"'"}r=w(r||n||a)
if(!e.allow_script_urls){var u=r.replace(/[\s\r\n]+/g,"")
if(/(java|vb)script:/i.test(u))return""
if(!e.allow_svg_data_urls&&/^data:image\/svg/i.test(u))return""}p&&(r=p.call(g,r,"style"))
return"url('"+r.replace(/\'/g,"\\'")+"')"}
if(t){t=t.replace(/[\u0000-\u001F]/g,"")
t=t.replace(/\\[\"\';:\uFEFF]/g,C).replace(/\"[^\"]+\"|\'[^\']+\'/g,(function(e){return e.replace(/[;:]/g,C)}))
while(s=o.exec(t)){o.lastIndex=s.index+s[0].length
d=s[1].replace(i,"").toLowerCase()
v=s[2].replace(i,"")
if(d&&v){d=S(d)
v=S(v)
if(-1!==d.indexOf(l)||-1!==d.indexOf('"'))continue
if(!e.allow_script_urls&&("behavior"===d||/expression\s*\(|\/\*|\*\//.test(v)))continue
"font-weight"===d&&"700"===v?v="bold":"color"!==d&&"background-color"!==d||(v=v.toLowerCase())
v=v.replace(n,gu)
v=v.replace(a,k)
c[d]=m?w(v,true):v}}h("border","",true)
h("border","-width")
h("border","-color")
h("border","-style")
h("padding","")
h("margin","")
b("border","border-width","border-style","border-color")
"medium none"===c.border&&delete c.border
"none"===c["border-image"]&&delete c["border-image"]}return c},serialize:function(e,t){var r=""
var n=function(t){var n
var a=c[t]
if(a)for(var o=0,i=a.length;o<i;o++){t=a[o]
n=e[t]
n&&(r+=(r.length>0?" ":"")+t+": "+n+";")}}
var a=function(e,t){var r=s["*"]
if(r&&r[e])return false
r=s[t]
return!(r&&r[e])}
if(t&&c){n("*")
n(t)}else xe(e,(function(e,n){!e||s&&!a(n,t)||(r+=(r.length>0?" ":"")+n+": "+e+";")}))
return r}}}
var yu="mce-data-"
var bu=/^(?:mouse|contextmenu)|click/
var Cu={keyLocation:1,layerX:1,layerY:1,returnValue:1,webkitMovementX:1,webkitMovementY:1,keyIdentifier:1,mozPressure:1}
var wu=function(e){return e.isDefaultPrevented===Su||e.isDefaultPrevented===xu}
var xu=F
var Su=U
var ku=function(e,t,r,n){e.addEventListener?e.addEventListener(t,r,n||false):e.attachEvent&&e.attachEvent("on"+t,r)}
var Nu=function(e,t,r,n){e.removeEventListener?e.removeEventListener(t,r,n||false):e.detachEvent&&e.detachEvent("on"+t,r)}
var Eu=function(e){return bu.test(e.type)}
var _u=function(e,t){var r
var n=t||{}
for(r in e)Cu[r]||(n[r]=e[r])
n.target||(n.target=n.srcElement||document)
n.composedPath&&(n.composedPath=function(){return e.composedPath()})
if(e&&Eu(e)&&void 0===e.pageX&&void 0!==e.clientX){var a=n.target.ownerDocument||document
var o=a.documentElement
var i=a.body
n.pageX=e.clientX+(o&&o.scrollLeft||i&&i.scrollLeft||0)-(o&&o.clientLeft||i&&i.clientLeft||0)
n.pageY=e.clientY+(o&&o.scrollTop||i&&i.scrollTop||0)-(o&&o.clientTop||i&&i.clientTop||0)}n.preventDefault=function(){n.defaultPrevented=true
n.isDefaultPrevented=Su
e&&(e.preventDefault?e.preventDefault():e.returnValue=false)}
n.stopPropagation=function(){n.cancelBubble=true
n.isPropagationStopped=Su
e&&(e.stopPropagation?e.stopPropagation():e.cancelBubble=true)}
n.stopImmediatePropagation=function(){n.isImmediatePropagationStopped=Su
n.stopPropagation()}
if(false===wu(n)){n.isDefaultPrevented=true===n.defaultPrevented?Su:xu
n.isPropagationStopped=true===n.cancelBubble?Su:xu
n.isImmediatePropagationStopped=xu}"undefined"===typeof n.metaKey&&(n.metaKey=false)
return n}
var Tu=function(e,t,r){var n=e.document,a={type:"ready"}
if(r.domLoaded){t(a)
return}var o=function(){return"complete"===n.readyState||"interactive"===n.readyState&&n.body}
var i=function(){Nu(e,"DOMContentLoaded",i)
Nu(e,"load",i)
if(!r.domLoaded){r.domLoaded=true
t(a)}e=null}
o()?i():ku(e,"DOMContentLoaded",i)
r.domLoaded||ku(e,"load",i)}
var Au=function(){function e(){this.domLoaded=false
this.events={}
this.count=1
this.expando=yu+(+new Date).toString(32)
this.hasMouseEnterLeave="onmouseenter"in document.documentElement
this.hasFocusIn="onfocusin"in document.documentElement
this.count=1}e.prototype.bind=function(e,t,r,n){var a=this
var o,i,u,f,c,s,l
var d=window
var v=function(e){a.executeHandlers(_u(e||d.event),o)}
if(!e||3===e.nodeType||8===e.nodeType)return
if(e[a.expando])o=e[a.expando]
else{o=a.count++
e[a.expando]=o
a.events[o]={}}n=n||e
var m=t.split(" ")
u=m.length
while(u--){f=m[u]
s=v
c=l=false
"DOMContentLoaded"===f&&(f="ready")
if(a.domLoaded&&"ready"===f&&"complete"===e.readyState){r.call(n,_u({type:f}))
continue}if(!a.hasMouseEnterLeave){c=a.mouseEnterLeave[f]
c&&(s=function(e){var t=e.currentTarget
var r=e.relatedTarget
if(r&&t.contains)r=t.contains(r)
else while(r&&r!==t)r=r.parentNode
if(!r){e=_u(e||d.event)
e.type="mouseout"===e.type?"mouseleave":"mouseenter"
e.target=t
a.executeHandlers(e,o)}})}if(!a.hasFocusIn&&("focusin"===f||"focusout"===f)){l=true
c="focusin"===f?"focus":"blur"
s=function(e){e=_u(e||d.event)
e.type="focus"===e.type?"focusin":"focusout"
a.executeHandlers(e,o)}}i=a.events[o][f]
if(i)"ready"===f&&a.domLoaded?r(_u({type:f})):i.push({func:r,scope:n})
else{a.events[o][f]=i=[{func:r,scope:n}]
i.fakeName=c
i.capture=l
i.nativeHandler=s
"ready"===f?Tu(e,s,a):ku(e,c||f,s,l)}}e=i=null
return r}
e.prototype.unbind=function(e,t,r){var n,a,o,i,u
if(!e||3===e.nodeType||8===e.nodeType)return this
var f=e[this.expando]
if(f){u=this.events[f]
if(t){var c=t.split(" ")
a=c.length
while(a--){i=c[a]
n=u[i]
if(n){if(r){o=n.length
while(o--)if(n[o].func===r){var s=n.nativeHandler
var l=n.fakeName,d=n.capture
n=n.slice(0,o).concat(n.slice(o+1))
n.nativeHandler=s
n.fakeName=l
n.capture=d
u[i]=n}}if(!r||0===n.length){delete u[i]
Nu(e,n.fakeName||i,n.nativeHandler,n.capture)}}}}else{xe(u,(function(t,r){Nu(e,t.fakeName||r,t.nativeHandler,t.capture)}))
u={}}for(i in u)if(Oe(u,i))return this
delete this.events[f]
try{delete e[this.expando]}catch(t){e[this.expando]=null}}return this}
e.prototype.fire=function(e,t,r){var n
if(!e||3===e.nodeType||8===e.nodeType)return this
var a=_u(null,r)
a.type=t
a.target=e
do{n=e[this.expando]
n&&this.executeHandlers(a,n)
e=e.parentNode||e.ownerDocument||e.defaultView||e.parentWindow}while(e&&!a.isPropagationStopped())
return this}
e.prototype.clean=function(e){var t,r
if(!e||3===e.nodeType||8===e.nodeType)return this
e[this.expando]&&this.unbind(e)
e.getElementsByTagName||(e=e.document)
if(e&&e.getElementsByTagName){this.unbind(e)
r=e.getElementsByTagName("*")
t=r.length
while(t--){e=r[t]
e[this.expando]&&this.unbind(e)}}return this}
e.prototype.destroy=function(){this.events={}}
e.prototype.cancel=function(e){if(e){e.preventDefault()
e.stopImmediatePropagation()}return false}
e.prototype.executeHandlers=function(e,t){var r=this.events[t]
var n=r&&r[e.type]
if(n)for(var a=0,o=n.length;a<o;a++){var i=n[a]
i&&false===i.func.call(i.scope,e)&&e.preventDefault()
if(e.isImmediatePropagationStopped())return}}
e.Event=new e
return e}()
var Ru,Du,Ou,Bu,Pu,Lu,Iu,Mu,Fu,Uu,zu,ju,Hu,Vu,qu,$u,Wu,Ku,Xu="sizzle"+-new Date,Yu=window.document,Gu=0,Ju=0,Qu=Bf(),Zu=Bf(),ef=Bf(),tf=function(e,t){e===t&&(Uu=true)
return 0},rf="undefined",nf=1<<31,af={}.hasOwnProperty,of=[],uf=of.pop,ff=of.push,cf=of.push,sf=of.slice,lf=of.indexOf||function(e){var t=0,r=this.length
for(;t<r;t++)if(this[t]===e)return t
return-1},df="checked|selected|async|autofocus|autoplay|controls|defer|disabled|hidden|ismap|loop|multiple|open|readonly|required|scoped",vf="[\\x20\\t\\r\\n\\f]",mf="(?:\\\\.|[\\w-]|[^\\x00-\\xa0])+",pf="\\["+vf+"*("+mf+")(?:"+vf+"*([*^$|!~]?=)"+vf+"*(?:'((?:\\\\.|[^\\\\'])*)'|\"((?:\\\\.|[^\\\\\"])*)\"|("+mf+"))|)"+vf+"*\\]",gf=":("+mf+")(?:\\((('((?:\\\\.|[^\\\\'])*)'|\"((?:\\\\.|[^\\\\\"])*)\")|((?:\\\\.|[^\\\\()[\\]]|"+pf+")*)|.*)\\)|)",hf=new RegExp("^"+vf+"+|((?:^|[^\\\\])(?:\\\\.)*)"+vf+"+$","g"),yf=new RegExp("^"+vf+"*,"+vf+"*"),bf=new RegExp("^"+vf+"*([>+~]|"+vf+")"+vf+"*"),Cf=new RegExp("="+vf+"*([^\\]'\"]*?)"+vf+"*\\]","g"),wf=new RegExp(gf),xf=new RegExp("^"+mf+"$"),Sf={ID:new RegExp("^#("+mf+")"),CLASS:new RegExp("^\\.("+mf+")"),TAG:new RegExp("^("+mf+"|[*])"),ATTR:new RegExp("^"+pf),PSEUDO:new RegExp("^"+gf),CHILD:new RegExp("^:(only|first|last|nth|nth-last)-(child|of-type)(?:\\("+vf+"*(even|odd|(([+-]|)(\\d*)n|)"+vf+"*(?:([+-]|)"+vf+"*(\\d+)|))"+vf+"*\\)|)","i"),bool:new RegExp("^(?:"+df+")$","i"),needsContext:new RegExp("^"+vf+"*[>+~]|:(even|odd|eq|gt|lt|nth|first|last)(?:\\("+vf+"*((?:-\\d)?\\d*)"+vf+"*\\)|)(?=[^-]|$)","i")},kf=/^(?:input|select|textarea|button)$/i,Nf=/^h\d$/i,Ef=/^[^{]+\{\s*\[native \w/,_f=/^(?:#([\w-]+)|(\w+)|\.([\w-]+))$/,Tf=/[+~]/,Af=/'|\\/g,Rf=new RegExp("\\\\([\\da-f]{1,6}"+vf+"?|("+vf+")|.)","ig"),Df=function(e,t,r){var n="0x"+t-65536
return n!==n||r?t:n<0?String.fromCharCode(n+65536):String.fromCharCode(n>>10|55296,1023&n|56320)}
try{cf.apply(of=sf.call(Yu.childNodes),Yu.childNodes)
of[Yu.childNodes.length].nodeType}catch(e){cf={apply:of.length?function(e,t){ff.apply(e,sf.call(t))}:function(e,t){var r=e.length,n=0
while(e[r++]=t[n++]);e.length=r-1}}}var Of=function(e,t,r,n){var a,o,i,u,f,c,s,l,d,v;(t?t.ownerDocument||t:Yu)!==ju&&zu(t)
t=t||ju
r=r||[]
if(!e||"string"!==typeof e)return r
if(1!==(u=t.nodeType)&&9!==u)return[]
if(Vu&&!n){if(a=_f.exec(e))if(i=a[1]){if(9===u){o=t.getElementById(i)
if(!o||!o.parentNode)return r
if(o.id===i){r.push(o)
return r}}else if(t.ownerDocument&&(o=t.ownerDocument.getElementById(i))&&Ku(t,o)&&o.id===i){r.push(o)
return r}}else{if(a[2]){cf.apply(r,t.getElementsByTagName(e))
return r}if((i=a[3])&&Ru.getElementsByClassName){cf.apply(r,t.getElementsByClassName(i))
return r}}if(Ru.qsa&&(!qu||!qu.test(e))){l=s=Xu
d=t
v=9===u&&e
if(1===u&&"object"!==t.nodeName.toLowerCase()){c=Pu(e);(s=t.getAttribute("id"))?l=s.replace(Af,"\\$&"):t.setAttribute("id",l)
l="[id='"+l+"'] "
f=c.length
while(f--)c[f]=l+jf(c[f])
d=Tf.test(e)&&Uf(t.parentNode)||t
v=c.join(",")}if(v)try{cf.apply(r,d.querySelectorAll(v))
return r}catch(e){}finally{s||t.removeAttribute("id")}}}return Iu(e.replace(hf,"$1"),t,r,n)}
function Bf(){var e=[]
function t(r,n){e.push(r+" ")>Du.cacheLength&&delete t[e.shift()]
return t[r+" "]=n}return t}function Pf(e){e[Xu]=true
return e}function Lf(e,t){var r=t&&e,n=r&&1===e.nodeType&&1===t.nodeType&&(~t.sourceIndex||nf)-(~e.sourceIndex||nf)
if(n)return n
if(r)while(r=r.nextSibling)if(r===t)return-1
return e?1:-1}function If(e){return function(t){var r=t.nodeName.toLowerCase()
return"input"===r&&t.type===e}}function Mf(e){return function(t){var r=t.nodeName.toLowerCase()
return("input"===r||"button"===r)&&t.type===e}}function Ff(e){return Pf((function(t){t=+t
return Pf((function(r,n){var a,o=e([],r.length,t),i=o.length
while(i--)r[a=o[i]]&&(r[a]=!(n[a]=r[a]))}))}))}function Uf(e){return e&&typeof e.getElementsByTagName!==rf&&e}Ru=Of.support={}
Bu=Of.isXML=function(e){var t=e&&(e.ownerDocument||e).documentElement
return!!t&&"HTML"!==t.nodeName}
zu=Of.setDocument=function(e){var t,r=e?e.ownerDocument||e:Yu,n=r.defaultView
function a(e){try{return e.top}catch(e){}return null}if(r===ju||9!==r.nodeType||!r.documentElement)return ju
ju=r
Hu=r.documentElement
Vu=!Bu(r)
n&&n!==a(n)&&(n.addEventListener?n.addEventListener("unload",(function(){zu()}),false):n.attachEvent&&n.attachEvent("onunload",(function(){zu()})))
Ru.attributes=true
Ru.getElementsByTagName=true
Ru.getElementsByClassName=Ef.test(r.getElementsByClassName)
Ru.getById=true
Du.find.ID=function(e,t){if(typeof t.getElementById!==rf&&Vu){var r=t.getElementById(e)
return r&&r.parentNode?[r]:[]}}
Du.filter.ID=function(e){var t=e.replace(Rf,Df)
return function(e){return e.getAttribute("id")===t}}
Du.find.TAG=Ru.getElementsByTagName?function(e,t){if(typeof t.getElementsByTagName!==rf)return t.getElementsByTagName(e)}:function(e,t){var r,n=[],a=0,o=t.getElementsByTagName(e)
if("*"===e){while(r=o[a++])1===r.nodeType&&n.push(r)
return n}return o}
Du.find.CLASS=Ru.getElementsByClassName&&function(e,t){if(Vu)return t.getElementsByClassName(e)}
$u=[]
qu=[]
Ru.disconnectedMatch=true
qu=qu.length&&new RegExp(qu.join("|"))
$u=$u.length&&new RegExp($u.join("|"))
t=Ef.test(Hu.compareDocumentPosition)
Ku=t||Ef.test(Hu.contains)?function(e,t){var r=9===e.nodeType?e.documentElement:e,n=t&&t.parentNode
return e===n||!!(n&&1===n.nodeType&&(r.contains?r.contains(n):e.compareDocumentPosition&&16&e.compareDocumentPosition(n)))}:function(e,t){if(t)while(t=t.parentNode)if(t===e)return true
return false}
tf=t?function(e,t){if(e===t){Uu=true
return 0}var n=!e.compareDocumentPosition-!t.compareDocumentPosition
if(n)return n
n=(e.ownerDocument||e)===(t.ownerDocument||t)?e.compareDocumentPosition(t):1
if(1&n||!Ru.sortDetached&&t.compareDocumentPosition(e)===n){if(e===r||e.ownerDocument===Yu&&Ku(Yu,e))return-1
if(t===r||t.ownerDocument===Yu&&Ku(Yu,t))return 1
return Fu?lf.call(Fu,e)-lf.call(Fu,t):0}return 4&n?-1:1}:function(e,t){if(e===t){Uu=true
return 0}var n,a=0,o=e.parentNode,i=t.parentNode,u=[e],f=[t]
if(!o||!i)return e===r?-1:t===r?1:o?-1:i?1:Fu?lf.call(Fu,e)-lf.call(Fu,t):0
if(o===i)return Lf(e,t)
n=e
while(n=n.parentNode)u.unshift(n)
n=t
while(n=n.parentNode)f.unshift(n)
while(u[a]===f[a])a++
return a?Lf(u[a],f[a]):u[a]===Yu?-1:f[a]===Yu?1:0}
return r}
Of.matches=function(e,t){return Of(e,null,null,t)}
Of.matchesSelector=function(e,t){(e.ownerDocument||e)!==ju&&zu(e)
t=t.replace(Cf,"='$1']")
if(Ru.matchesSelector&&Vu&&(!$u||!$u.test(t))&&(!qu||!qu.test(t)))try{var r=Wu.call(e,t)
if(r||Ru.disconnectedMatch||e.document&&11!==e.document.nodeType)return r}catch(e){}return Of(t,ju,null,[e]).length>0}
Of.contains=function(e,t){(e.ownerDocument||e)!==ju&&zu(e)
return Ku(e,t)}
Of.attr=function(e,t){(e.ownerDocument||e)!==ju&&zu(e)
var r=Du.attrHandle[t.toLowerCase()],n=r&&af.call(Du.attrHandle,t.toLowerCase())?r(e,t,!Vu):void 0
return void 0!==n?n:Ru.attributes||!Vu?e.getAttribute(t):(n=e.getAttributeNode(t))&&n.specified?n.value:null}
Of.error=function(e){throw new Error("Syntax error, unrecognized expression: "+e)}
Of.uniqueSort=function(e){var t,r=[],n=0,a=0
Uu=!Ru.detectDuplicates
Fu=!Ru.sortStable&&e.slice(0)
e.sort(tf)
if(Uu){while(t=e[a++])t===e[a]&&(n=r.push(a))
while(n--)e.splice(r[n],1)}Fu=null
return e}
Ou=Of.getText=function(e){var t,r="",n=0,a=e.nodeType
if(a){if(1===a||9===a||11===a){if("string"===typeof e.textContent)return e.textContent
for(e=e.firstChild;e;e=e.nextSibling)r+=Ou(e)}else if(3===a||4===a)return e.nodeValue}else while(t=e[n++])r+=Ou(t)
return r}
Du=Of.selectors={cacheLength:50,createPseudo:Pf,match:Sf,attrHandle:{},find:{},relative:{">":{dir:"parentNode",first:true}," ":{dir:"parentNode"},"+":{dir:"previousSibling",first:true},"~":{dir:"previousSibling"}},preFilter:{ATTR:function(e){e[1]=e[1].replace(Rf,Df)
e[3]=(e[3]||e[4]||e[5]||"").replace(Rf,Df)
"~="===e[2]&&(e[3]=" "+e[3]+" ")
return e.slice(0,4)},CHILD:function(e){e[1]=e[1].toLowerCase()
if("nth"===e[1].slice(0,3)){e[3]||Of.error(e[0])
e[4]=+(e[4]?e[5]+(e[6]||1):2*("even"===e[3]||"odd"===e[3]))
e[5]=+(e[7]+e[8]||"odd"===e[3])}else e[3]&&Of.error(e[0])
return e},PSEUDO:function(e){var t,r=!e[6]&&e[2]
if(Sf.CHILD.test(e[0]))return null
if(e[3])e[2]=e[4]||e[5]||""
else if(r&&wf.test(r)&&(t=Pu(r,true))&&(t=r.indexOf(")",r.length-t)-r.length)){e[0]=e[0].slice(0,t)
e[2]=r.slice(0,t)}return e.slice(0,3)}},filter:{TAG:function(e){var t=e.replace(Rf,Df).toLowerCase()
return"*"===e?function(){return true}:function(e){return e.nodeName&&e.nodeName.toLowerCase()===t}},CLASS:function(e){var t=Qu[e+" "]
return t||(t=new RegExp("(^|"+vf+")"+e+"("+vf+"|$)"))&&Qu(e,(function(e){return t.test("string"===typeof e.className&&e.className||typeof e.getAttribute!==rf&&e.getAttribute("class")||"")}))},ATTR:function(e,t,r){return function(n){var a=Of.attr(n,e)
if(null==a)return"!="===t
if(!t)return true
a+=""
return"="===t?a===r:"!="===t?a!==r:"^="===t?r&&0===a.indexOf(r):"*="===t?r&&a.indexOf(r)>-1:"$="===t?r&&a.slice(-r.length)===r:"~="===t?(" "+a+" ").indexOf(r)>-1:"|="===t&&(a===r||a.slice(0,r.length+1)===r+"-")}},CHILD:function(e,t,r,n,a){var o="nth"!==e.slice(0,3),i="last"!==e.slice(-4),u="of-type"===t
return 1===n&&0===a?function(e){return!!e.parentNode}:function(t,r,f){var c,s,l,d,v,m,p=o!==i?"nextSibling":"previousSibling",g=t.parentNode,h=u&&t.nodeName.toLowerCase(),y=!f&&!u
if(g){if(o){while(p){l=t
while(l=l[p])if(u?l.nodeName.toLowerCase()===h:1===l.nodeType)return false
m=p="only"===e&&!m&&"nextSibling"}return true}m=[i?g.firstChild:g.lastChild]
if(i&&y){s=g[Xu]||(g[Xu]={})
c=s[e]||[]
v=c[0]===Gu&&c[1]
d=c[0]===Gu&&c[2]
l=v&&g.childNodes[v]
while(l=++v&&l&&l[p]||(d=v=0)||m.pop())if(1===l.nodeType&&++d&&l===t){s[e]=[Gu,v,d]
break}}else if(y&&(c=(t[Xu]||(t[Xu]={}))[e])&&c[0]===Gu)d=c[1]
else while(l=++v&&l&&l[p]||(d=v=0)||m.pop())if((u?l.nodeName.toLowerCase()===h:1===l.nodeType)&&++d){y&&((l[Xu]||(l[Xu]={}))[e]=[Gu,d])
if(l===t)break}d-=a
return d===n||d%n===0&&d/n>=0}}},PSEUDO:function(e,t){var r,n=Du.pseudos[e]||Du.setFilters[e.toLowerCase()]||Of.error("unsupported pseudo: "+e)
if(n[Xu])return n(t)
if(n.length>1){r=[e,e,"",t]
return Du.setFilters.hasOwnProperty(e.toLowerCase())?Pf((function(e,r){var a,o=n(e,t),i=o.length
while(i--){a=lf.call(e,o[i])
e[a]=!(r[a]=o[i])}})):function(e){return n(e,0,r)}}return n}},pseudos:{not:Pf((function(e){var t=[],r=[],n=Lu(e.replace(hf,"$1"))
return n[Xu]?Pf((function(e,t,r,a){var o,i=n(e,null,a,[]),u=e.length
while(u--)(o=i[u])&&(e[u]=!(t[u]=o))})):function(e,a,o){t[0]=e
n(t,null,o,r)
t[0]=null
return!r.pop()}})),has:Pf((function(e){return function(t){return Of(e,t).length>0}})),contains:Pf((function(e){e=e.replace(Rf,Df)
return function(t){return(t.textContent||t.innerText||Ou(t)).indexOf(e)>-1}})),lang:Pf((function(e){xf.test(e||"")||Of.error("unsupported lang: "+e)
e=e.replace(Rf,Df).toLowerCase()
return function(t){var r
do{if(r=Vu?t.lang:t.getAttribute("xml:lang")||t.getAttribute("lang")){r=r.toLowerCase()
return r===e||0===r.indexOf(e+"-")}}while((t=t.parentNode)&&1===t.nodeType)
return false}})),target:function(e){var t=window.location&&window.location.hash
return t&&t.slice(1)===e.id},root:function(e){return e===Hu},focus:function(e){return e===ju.activeElement&&(!ju.hasFocus||ju.hasFocus())&&!!(e.type||e.href||~e.tabIndex)},enabled:function(e){return false===e.disabled},disabled:function(e){return true===e.disabled},checked:function(e){var t=e.nodeName.toLowerCase()
return"input"===t&&!!e.checked||"option"===t&&!!e.selected},selected:function(e){e.parentNode&&e.parentNode.selectedIndex
return true===e.selected},empty:function(e){for(e=e.firstChild;e;e=e.nextSibling)if(e.nodeType<6)return false
return true},parent:function(e){return!Du.pseudos.empty(e)},header:function(e){return Nf.test(e.nodeName)},input:function(e){return kf.test(e.nodeName)},button:function(e){var t=e.nodeName.toLowerCase()
return"input"===t&&"button"===e.type||"button"===t},text:function(e){var t
return"input"===e.nodeName.toLowerCase()&&"text"===e.type&&(null==(t=e.getAttribute("type"))||"text"===t.toLowerCase())},first:Ff((function(){return[0]})),last:Ff((function(e,t){return[t-1]})),eq:Ff((function(e,t,r){return[r<0?r+t:r]})),even:Ff((function(e,t){var r=0
for(;r<t;r+=2)e.push(r)
return e})),odd:Ff((function(e,t){var r=1
for(;r<t;r+=2)e.push(r)
return e})),lt:Ff((function(e,t,r){var n=r<0?r+t:r
for(;--n>=0;)e.push(n)
return e})),gt:Ff((function(e,t,r){var n=r<0?r+t:r
for(;++n<t;)e.push(n)
return e}))}}
Du.pseudos.nth=Du.pseudos.eq
Z(["radio","checkbox","file","password","image"],(function(e){Du.pseudos[e]=If(e)}))
Z(["submit","reset"],(function(e){Du.pseudos[e]=Mf(e)}))
function zf(){}zf.prototype=Du.filters=Du.pseudos
Du.setFilters=new zf
Pu=Of.tokenize=function(e,t){var r,n,a,o,i,u,f,c=Zu[e+" "]
if(c)return t?0:c.slice(0)
i=e
u=[]
f=Du.preFilter
while(i){if(!r||(n=yf.exec(i))){n&&(i=i.slice(n[0].length)||i)
u.push(a=[])}r=false
if(n=bf.exec(i)){r=n.shift()
a.push({value:r,type:n[0].replace(hf," ")})
i=i.slice(r.length)}for(o in Du.filter){if(!Du.filter.hasOwnProperty(o))continue
if((n=Sf[o].exec(i))&&(!f[o]||(n=f[o](n)))){r=n.shift()
a.push({value:r,type:o,matches:n})
i=i.slice(r.length)}}if(!r)break}return t?i.length:i?Of.error(e):Zu(e,u).slice(0)}
function jf(e){var t=0,r=e.length,n=""
for(;t<r;t++)n+=e[t].value
return n}function Hf(e,t,r){var n=t.dir,a=r&&"parentNode"===n,o=Ju++
return t.first?function(t,r,o){while(t=t[n])if(1===t.nodeType||a)return e(t,r,o)}:function(t,r,i){var u,f,c=[Gu,o]
if(i){while(t=t[n])if((1===t.nodeType||a)&&e(t,r,i))return true}else while(t=t[n])if(1===t.nodeType||a){f=t[Xu]||(t[Xu]={})
if((u=f[n])&&u[0]===Gu&&u[1]===o)return c[2]=u[2]
f[n]=c
if(c[2]=e(t,r,i))return true}}}function Vf(e){return e.length>1?function(t,r,n){var a=e.length
while(a--)if(!e[a](t,r,n))return false
return true}:e[0]}function qf(e,t,r){var n=0,a=t.length
for(;n<a;n++)Of(e,t[n],r)
return r}function $f(e,t,r,n,a){var o,i=[],u=0,f=e.length,c=null!=t
for(;u<f;u++)if((o=e[u])&&(!r||r(o,n,a))){i.push(o)
c&&t.push(u)}return i}function Wf(e,t,r,n,a,o){n&&!n[Xu]&&(n=Wf(n))
a&&!a[Xu]&&(a=Wf(a,o))
return Pf((function(o,i,u,f){var c,s,l,d=[],v=[],m=i.length,p=o||qf(t||"*",u.nodeType?[u]:u,[]),g=!e||!o&&t?p:$f(p,d,e,u,f),h=r?a||(o?e:m||n)?[]:i:g
r&&r(g,h,u,f)
if(n){c=$f(h,v)
n(c,[],u,f)
s=c.length
while(s--)(l=c[s])&&(h[v[s]]=!(g[v[s]]=l))}if(o){if(a||e){if(a){c=[]
s=h.length
while(s--)(l=h[s])&&c.push(g[s]=l)
a(null,h=[],c,f)}s=h.length
while(s--)(l=h[s])&&(c=a?lf.call(o,l):d[s])>-1&&(o[c]=!(i[c]=l))}}else{h=$f(h===i?h.splice(m,h.length):h)
a?a(null,i,h,f):cf.apply(i,h)}}))}function Kf(e){var t,r,n,a=e.length,o=Du.relative[e[0].type],i=o||Du.relative[" "],u=o?1:0,f=Hf((function(e){return e===t}),i,true),c=Hf((function(e){return lf.call(t,e)>-1}),i,true),s=[function(e,r,n){var a=!o&&(n||r!==Mu)||((t=r).nodeType?f(e,r,n):c(e,r,n))
t=null
return a}]
for(;u<a;u++)if(r=Du.relative[e[u].type])s=[Hf(Vf(s),r)]
else{r=Du.filter[e[u].type].apply(null,e[u].matches)
if(r[Xu]){n=++u
for(;n<a;n++)if(Du.relative[e[n].type])break
return Wf(u>1&&Vf(s),u>1&&jf(e.slice(0,u-1).concat({value:" "===e[u-2].type?"*":""})).replace(hf,"$1"),r,u<n&&Kf(e.slice(u,n)),n<a&&Kf(e=e.slice(n)),n<a&&jf(e))}s.push(r)}return Vf(s)}function Xf(e,t){var r=t.length>0,n=e.length>0,a=function(a,o,i,u,f){var c,s,l,d=0,v="0",m=a&&[],p=[],g=Mu,h=a||n&&Du.find.TAG("*",f),y=Gu+=null==g?1:Math.random()||.1,b=h.length
f&&(Mu=o!==ju&&o)
for(;v!==b&&null!=(c=h[v]);v++){if(n&&c){s=0
while(l=e[s++])if(l(c,o,i)){u.push(c)
break}f&&(Gu=y)}if(r){(c=!l&&c)&&d--
a&&m.push(c)}}d+=v
if(r&&v!==d){s=0
while(l=t[s++])l(m,p,o,i)
if(a){if(d>0)while(v--)m[v]||p[v]||(p[v]=uf.call(u))
p=$f(p)}cf.apply(u,p)
f&&!a&&p.length>0&&d+t.length>1&&Of.uniqueSort(u)}if(f){Gu=y
Mu=g}return m}
return r?Pf(a):a}Lu=Of.compile=function(e,t){var r,n=[],a=[],o=ef[e+" "]
if(!o){t||(t=Pu(e))
r=t.length
while(r--){o=Kf(t[r])
o[Xu]?n.push(o):a.push(o)}o=ef(e,Xf(a,n))
o.selector=e}return o}
Iu=Of.select=function(e,t,r,n){var a,o,i,u,f,c="function"===typeof e&&e,s=!n&&Pu(e=c.selector||e)
r=r||[]
if(1===s.length){o=s[0]=s[0].slice(0)
if(o.length>2&&"ID"===(i=o[0]).type&&Ru.getById&&9===t.nodeType&&Vu&&Du.relative[o[1].type]){t=(Du.find.ID(i.matches[0].replace(Rf,Df),t)||[])[0]
if(!t)return r
c&&(t=t.parentNode)
e=e.slice(o.shift().value.length)}a=Sf.needsContext.test(e)?0:o.length
while(a--){i=o[a]
if(Du.relative[u=i.type])break
if((f=Du.find[u])&&(n=f(i.matches[0].replace(Rf,Df),Tf.test(o[0].type)&&Uf(t.parentNode)||t))){o.splice(a,1)
e=n.length&&jf(o)
if(!e){cf.apply(r,n)
return r}break}}}(c||Lu(e,s))(n,t,!Vu,r,Tf.test(e)&&Uf(t.parentNode)||t)
return r}
Ru.sortStable=Xu.split("").sort(tf).join("")===Xu
Ru.detectDuplicates=!!Uu
zu()
Ru.sortDetached=true
var Yf=document
var Gf=Array.prototype.push
var Jf=Array.prototype.slice
var Qf=/^(?:[^#<]*(<[\w\W]+>)[^>]*$|#([\w\-]*)$)/
var Zf=Au.Event
var ec=dr.makeMap("children,contents,next,prev")
var tc=function(e){return"undefined"!==typeof e}
var rc=function(e){return"string"===typeof e}
var nc=function(e){return e&&e===e.window}
var ac=function(e,t){t=t||Yf
var r=t.createElement("div")
var n=t.createDocumentFragment()
r.innerHTML=e
var a
while(a=r.firstChild)n.appendChild(a)
return n}
var oc=function(e,t,r,n){var a
if(rc(t))t=ac(t,Cc(e[0]))
else if(t.length&&!t.nodeType){t=kc.makeArray(t)
if(n)for(a=t.length-1;a>=0;a--)oc(e,t[a],r,n)
else for(a=0;a<t.length;a++)oc(e,t[a],r,n)
return e}if(t.nodeType){a=e.length
while(a--)r.call(e[a],t)}return e}
var ic=function(e,t){return e&&t&&-1!==(" "+e.className+" ").indexOf(" "+t+" ")}
var uc=function(e,t,r){var n,a
t=kc(t)[0]
e.each((function(){var e=this
if(r&&n===e.parentNode)a.appendChild(e)
else{n=e.parentNode
a=t.cloneNode(false)
e.parentNode.insertBefore(a,e)
a.appendChild(e)}}))
return e}
var fc=dr.makeMap("fillOpacity fontWeight lineHeight opacity orphans widows zIndex zoom"," ")
var cc=dr.makeMap("checked compact declare defer disabled ismap multiple nohref noshade nowrap readonly selected"," ")
var sc={for:"htmlFor",class:"className",readonly:"readOnly"}
var lc={float:"cssFloat"}
var dc={},vc={}
var mc=function(e,t){return new kc.fn.init(e,t)}
var pc=function(e,t){var r
if(t.indexOf)return t.indexOf(e)
r=t.length
while(r--)if(t[r]===e)return r
return-1}
var gc=/^\s*|\s*$/g
var hc=function(e){return null===e||void 0===e?"":(""+e).replace(gc,"")}
var yc=function(e,t){var r,n,a,o
if(e){r=e.length
if(void 0===r){for(n in e)if(e.hasOwnProperty(n)){o=e[n]
if(false===t.call(o,n,o))break}}else for(a=0;a<r;a++){o=e[a]
if(false===t.call(o,a,o))break}}return e}
var bc=function(e,t){var r=[]
yc(e,(function(e,n){t(n,e)&&r.push(n)}))
return r}
var Cc=function(e){if(!e)return Yf
if(9===e.nodeType)return e
return e.ownerDocument}
mc.fn=mc.prototype={constructor:mc,selector:"",context:null,length:0,init:function(e,t){var r=this
var n,a
if(!e)return r
if(e.nodeType){r.context=r[0]=e
r.length=1
return r}if(t&&t.nodeType)r.context=t
else{if(t)return kc(e).attr(t)
r.context=t=document}if(rc(e)){r.selector=e
n="<"===e.charAt(0)&&">"===e.charAt(e.length-1)&&e.length>=3?[null,e,null]:Qf.exec(e)
if(!n)return kc(t).find(e)
if(n[1]){a=ac(e,Cc(t)).firstChild
while(a){Gf.call(r,a)
a=a.nextSibling}}else{a=Cc(t).getElementById(n[2])
if(!a)return r
if(a.id!==n[2])return r.find(e)
r.length=1
r[0]=a}}else this.add(e,false)
return r},toArray:function(){return dr.toArray(this)},add:function(e,t){var r=this
var n,a
if(rc(e))return r.add(kc(e))
if(false!==t){n=kc.unique(r.toArray().concat(kc.makeArray(e)))
r.length=n.length
for(a=0;a<n.length;a++)r[a]=n[a]}else Gf.apply(r,kc.makeArray(e))
return r},attr:function(e,t){var r=this
var n
if("object"===typeof e)yc(e,(function(e,t){r.attr(e,t)}))
else{if(!tc(t)){if(r[0]&&1===r[0].nodeType){n=dc[e]
if(n&&n.get)return n.get(r[0],e)
if(cc[e])return r.prop(e)?e:void 0
t=r[0].getAttribute(e,2)
null===t&&(t=void 0)}return t}this.each((function(){var r
if(1===this.nodeType){r=dc[e]
if(r&&r.set){r.set(this,t)
return}null===t?this.removeAttribute(e,2):this.setAttribute(e,t,2)}}))}return r},removeAttr:function(e){return this.attr(e,null)},prop:function(e,t){var r=this
e=sc[e]||e
if("object"===typeof e)yc(e,(function(e,t){r.prop(e,t)}))
else{if(!tc(t)){if(r[0]&&r[0].nodeType&&e in r[0])return r[0][e]
return t}this.each((function(){1===this.nodeType&&(this[e]=t)}))}return r},css:function(e,t){var r=this
var n,a
var o=function(e){return e.replace(/-(\D)/g,(function(e,t){return t.toUpperCase()}))}
var i=function(e){return e.replace(/[A-Z]/g,(function(e){return"-"+e}))}
if("object"===typeof e)yc(e,(function(e,t){r.css(e,t)}))
else if(tc(t)){e=o(e)
"number"!==typeof t||fc[e]||(t=t.toString()+"px")
r.each((function(){var r=this.style
a=vc[e]
if(a&&a.set){a.set(this,t)
return}try{this.style[lc[e]||e]=t}catch(e){}null!==t&&""!==t||(r.removeProperty?r.removeProperty(i(e)):r.removeAttribute(e))}))}else{n=r[0]
a=vc[e]
if(a&&a.get)return a.get(n)
if(!n.ownerDocument.defaultView)return n.currentStyle?n.currentStyle[o(e)]:""
try{return n.ownerDocument.defaultView.getComputedStyle(n,null).getPropertyValue(i(e))}catch(e){return}}return r},remove:function(){var e=this
var t,r=this.length
while(r--){t=e[r]
Zf.clean(t)
t.parentNode&&t.parentNode.removeChild(t)}return this},empty:function(){var e=this
var t,r=this.length
while(r--){t=e[r]
while(t.firstChild)t.removeChild(t.firstChild)}return this},html:function(e){var t=this
var r
if(tc(e)){r=t.length
try{while(r--)t[r].innerHTML=e}catch(n){kc(t[r]).empty().append(e)}return t}return t[0]?t[0].innerHTML:""},text:function(e){var t=this
var r
if(tc(e)){r=t.length
while(r--)"innerText"in t[r]?t[r].innerText=e:t[0].textContent=e
return t}return t[0]?t[0].innerText||t[0].textContent:""},append:function(){return oc(this,arguments,(function(e){(1===this.nodeType||this.host&&1===this.host.nodeType)&&this.appendChild(e)}))},prepend:function(){return oc(this,arguments,(function(e){(1===this.nodeType||this.host&&1===this.host.nodeType)&&this.insertBefore(e,this.firstChild)}),true)},before:function(){var e=this
if(e[0]&&e[0].parentNode)return oc(e,arguments,(function(e){this.parentNode.insertBefore(e,this)}))
return e},after:function(){var e=this
if(e[0]&&e[0].parentNode)return oc(e,arguments,(function(e){this.parentNode.insertBefore(e,this.nextSibling)}),true)
return e},appendTo:function(e){kc(e).append(this)
return this},prependTo:function(e){kc(e).prepend(this)
return this},replaceWith:function(e){return this.before(e).remove()},wrap:function(e){return uc(this,e)},wrapAll:function(e){return uc(this,e,true)},wrapInner:function(e){this.each((function(){kc(this).contents().wrapAll(e)}))
return this},unwrap:function(){return this.parent().each((function(){kc(this).replaceWith(this.childNodes)}))},clone:function(){var e=[]
this.each((function(){e.push(this.cloneNode(true))}))
return kc(e)},addClass:function(e){return this.toggleClass(e,true)},removeClass:function(e){return this.toggleClass(e,false)},toggleClass:function(e,t){var r=this
if("string"!==typeof e)return r;-1!==e.indexOf(" ")?yc(e.split(" "),(function(){r.toggleClass(this,t)})):r.each((function(r,n){var a=ic(n,e)
if(a!==t){var o=n.className
a?n.className=hc((" "+o+" ").replace(" "+e+" "," ")):n.className+=o?" "+e:e}}))
return r},hasClass:function(e){return ic(this[0],e)},each:function(e){return yc(this,e)},on:function(e,t){return this.each((function(){Zf.bind(this,e,t)}))},off:function(e,t){return this.each((function(){Zf.unbind(this,e,t)}))},trigger:function(e){return this.each((function(){"object"===typeof e?Zf.fire(this,e.type,e):Zf.fire(this,e)}))},show:function(){return this.css("display","")},hide:function(){return this.css("display","none")},slice:function(){return kc(Jf.apply(this,arguments))},eq:function(e){return-1===e?this.slice(e):this.slice(e,+e+1)},first:function(){return this.eq(0)},last:function(){return this.eq(-1)},find:function(e){var t,r
var n=[]
for(t=0,r=this.length;t<r;t++)kc.find(e,this[t],n)
return kc(n)},filter:function(e){if("function"===typeof e)return kc(bc(this.toArray(),(function(t,r){return e(r,t)})))
return kc(kc.filter(e,this.toArray()))},closest:function(e){var t=[]
e instanceof kc&&(e=e[0])
this.each((function(r,n){while(n){if("string"===typeof e&&kc(n).is(e)){t.push(n)
break}if(n===e){t.push(n)
break}n=n.parentNode}}))
return kc(t)},offset:function(e){var t,r,n
var a,o=0,i=0
if(!e){t=this[0]
if(t){r=t.ownerDocument
n=r.documentElement
if(t.getBoundingClientRect){a=t.getBoundingClientRect()
o=a.left+(n.scrollLeft||r.body.scrollLeft)-n.clientLeft
i=a.top+(n.scrollTop||r.body.scrollTop)-n.clientTop}}return{left:o,top:i}}return this.css(e)},push:Gf,sort:Array.prototype.sort,splice:Array.prototype.splice}
dr.extend(mc,{extend:dr.extend,makeArray:function(e){if(nc(e)||e.nodeType)return[e]
return dr.toArray(e)},inArray:pc,isArray:dr.isArray,each:yc,trim:hc,grep:bc,find:Of,expr:Of.selectors,unique:Of.uniqueSort,text:Of.getText,contains:Of.contains,filter:function(e,t,r){var n=t.length
r&&(e=":not("+e+")")
while(n--)1!==t[n].nodeType&&t.splice(n,1)
t=1===t.length?kc.find.matchesSelector(t[0],e)?[t[0]]:[]:kc.find.matches(e,t)
return t}})
var wc=function(e,t,r){var n=[]
var a=e[t]
"string"!==typeof r&&r instanceof kc&&(r=r[0])
while(a&&9!==a.nodeType){if(void 0!==r){if(a===r)break
if("string"===typeof r&&kc(a).is(r))break}1===a.nodeType&&n.push(a)
a=a[t]}return n}
var xc=function(e,t,r,n){var a=[]
n instanceof kc&&(n=n[0])
for(;e;e=e[t]){if(r&&e.nodeType!==r)continue
if(void 0!==n){if(e===n)break
if("string"===typeof n&&kc(e).is(n))break}a.push(e)}return a}
var Sc=function(e,t,r){for(e=e[t];e;e=e[t])if(e.nodeType===r)return e
return null}
yc({parent:function(e){var t=e.parentNode
return t&&11!==t.nodeType?t:null},parents:function(e){return wc(e,"parentNode")},next:function(e){return Sc(e,"nextSibling",1)},prev:function(e){return Sc(e,"previousSibling",1)},children:function(e){return xc(e.firstChild,"nextSibling",1)},contents:function(e){return dr.toArray(("iframe"===e.nodeName?e.contentDocument||e.contentWindow.document:e).childNodes)}},(function(e,t){mc.fn[e]=function(r){var n=this
var a=[]
n.each((function(){var e=t.call(a,this,r,a)
e&&(kc.isArray(e)?a.push.apply(a,e):a.push(e))}))
if(this.length>1){ec[e]||(a=kc.unique(a))
0===e.indexOf("parents")&&(a=a.reverse())}var o=kc(a)
if(r)return o.filter(r)
return o}}))
yc({parentsUntil:function(e,t){return wc(e,"parentNode",t)},nextUntil:function(e,t){return xc(e,"nextSibling",1,t).slice(1)},prevUntil:function(e,t){return xc(e,"previousSibling",1,t).slice(1)}},(function(e,t){mc.fn[e]=function(r,n){var a=this
var o=[]
a.each((function(){var e=t.call(o,this,r,o)
e&&(kc.isArray(e)?o.push.apply(o,e):o.push(e))}))
if(this.length>1){o=kc.unique(o)
0!==e.indexOf("parents")&&"prevUntil"!==e||(o=o.reverse())}var i=kc(o)
if(n)return i.filter(n)
return i}}))
mc.fn.is=function(e){return!!e&&this.filter(e).length>0}
mc.fn.init.prototype=mc.fn
mc.overrideDefaults=function(e){var t
var r=function(n,a){t=t||e()
0===arguments.length&&(n=t.element)
a||(a=t.context)
return new r.fn.init(n,a)}
kc.extend(r,this)
return r}
mc.attrHooks=dc
mc.cssHooks=vc
var kc=mc
var Nc=dr.each
var Ec=dr.grep
var _c=Zt.ie
var Tc=/^([a-z0-9],?)+$/i
var Ac=function(e,t,r){var n=t.keep_values
var a={set:function(e,n,a){t.url_converter&&(n=t.url_converter.call(t.url_converter_scope||r(),n,a,e[0]))
e.attr("data-mce-"+a,n).attr(a,n)},get:function(e,t){return e.attr("data-mce-"+t)||e.attr(t)}}
var o={style:{set:function(t,r){if(null!==r&&"object"===typeof r){t.css(r)
return}n&&t.attr("data-mce-style",r)
if(null!==r&&"string"===typeof r){t.removeAttr("style")
t.css(e.parse(r))}else t.attr("style",r)},get:function(t){var r=t.attr("data-mce-style")||t.attr("style")
r=e.serialize(e.parse(r),t[0].nodeName)
return r}}}
n&&(o.href=o.src=a)
return o}
var Rc=function(e,t){var r=t.attr("style")
var n=e.serialize(e.parse(r),t[0].nodeName)
n||(n=null)
t.attr("data-mce-style",n)}
var Dc=function(e,t){var r,n,a=0
if(e)for(r=e.nodeType,e=e.previousSibling;e;e=e.previousSibling){n=e.nodeType
if(t&&3===n&&(n===r||!e.nodeValue.length))continue
a++
r=n}return a}
var Oc=function(e,t){void 0===t&&(t={})
var r={}
var n=window
var a={}
var o=0
var i=true
var u=true
var f=po.forElement(yr.fromDom(e),{contentCssCors:t.contentCssCors,referrerPolicy:t.referrerPolicy})
var c=[]
var s=t.schema?t.schema:pu({})
var l=hu({url_converter:t.url_converter,url_converter_scope:t.url_converter_scope},t.schema)
var d=t.ownEvents?new Au:Au.Event
var v=s.getBlockElements()
var m=kc.overrideDefaults((function(){return{context:e,element:Re.getRoot()}}))
var p=function(e){if("string"===typeof e)return!!v[e]
if(e){var t=e.nodeType
if(t)return!!(1===t&&v[e.nodeName])}return false}
var g=function(t){return t&&e&&y(t)?e.getElementById(t):t}
var h=function(e){return m("string"===typeof e?g(e):e)}
var b=function(e,t,r){var n,a
var o=h(e)
if(o.length){n=De[t]
a=n&&n.get?n.get(o,t):o.attr(t)}"undefined"===typeof a&&(a=r||"")
return a}
var C=function(e){var t=g(e)
if(!t)return[]
return t.attributes}
var w=function(e,r,n){""===n&&(n=null)
var a=h(e)
var o=a.attr(r)
if(!a.length)return
var i=De[r]
i&&i.set?i.set(a,n,r):a.attr(r,n)
o!==n&&t.onSetAttrib&&t.onSetAttrib({attrElm:a,attrName:r,attrValue:n})}
var x=function(t,r){if(!_c||1!==t.nodeType||r)return t.cloneNode(r)
var n=e.createElement(t.nodeName)
Nc(C(t),(function(e){w(n,e.nodeName,b(t,e.nodeName))}))
return n}
var S=function(){return t.root_element||e.body}
var N=function(e){var t=Fn(e)
return{x:t.x,y:t.y,w:t.width,h:t.height}}
var E=function(t,r){return _a(e.body,g(t),r)}
var _=function(e,r,n){var a=y(r)?h(e).css(r,n):h(e).css(r)
t.update_styles&&Rc(l,a)}
var A=function(e,r){var n=h(e).css(r)
t.update_styles&&Rc(l,n)}
var R=function(e,t,r){var n=h(e)
if(r)return n.css(t)
t=t.replace(/-(\D)/g,(function(e,t){return t.toUpperCase()}))
"float"===t&&(t=Zt.browser.isIE()?"styleFloat":"cssFloat")
return n[0]&&n[0].style?n[0].style[t]:void 0}
var D=function(e){var t,r
e=g(e)
t=R(e,"width")
r=R(e,"height");-1===t.indexOf("px")&&(t=0);-1===r.indexOf("px")&&(r=0)
return{w:parseInt(t,10)||e.offsetWidth||e.clientWidth,h:parseInt(r,10)||e.offsetHeight||e.clientHeight}}
var O=function(e){e=g(e)
var t=E(e)
var r=D(e)
return{x:t.x,y:t.y,w:r.w,h:r.h}}
var B=function(e,t){var r
if(!e)return false
if(!Array.isArray(e)){if("*"===t)return 1===e.nodeType
if(Tc.test(t)){var n=t.toLowerCase().split(/,/)
var a=e.nodeName.toLowerCase()
for(r=n.length-1;r>=0;r--)if(n[r]===a)return true
return false}if(e.nodeType&&1!==e.nodeType)return false}var o=Array.isArray(e)?e:[e]
return Of(t,o[0].ownerDocument||o[0],null,o).length>0}
var P=function(e,t,r,n){var a=[]
var o
var i=g(e)
n=void 0===n
r=r||("BODY"!==S().nodeName?S().parentNode:null)
if(dr.is(t,"string")){o=t
t="*"===t?function(e){return 1===e.nodeType}:function(e){return B(e,o)}}while(i){if(i===r||k(i.nodeType)||Zn(i)||ea(i))break
if(!t||"function"===typeof t&&t(i)){if(!n)return[i]
a.push(i)}i=i.parentNode}return n?a:null}
var L=function(e,t,r){var n=P(e,t,r,false)
return n&&n.length>0?n[0]:null}
var I=function(e,t,r){var n=t
if(e){"string"===typeof t&&(n=function(e){return B(e,t)})
for(e=e[r];e;e=e[r])if("function"===typeof n&&n(e))return e}return null}
var M=function(e,t){return I(e,t,"nextSibling")}
var F=function(e,t){return I(e,t,"previousSibling")}
var U=function(r,n){return Of(r,g(n)||t.root_element||e,[])}
var z=function(e,t,r){var n
var a="string"===typeof e?g(e):e
if(!a)return false
if(dr.isArray(a)&&(a.length||0===a.length)){n=[]
Nc(a,(function(e,a){e&&n.push(t.call(r,"string"===typeof e?g(e):e,a))}))
return n}var o=r||this
return t.call(o,a)}
var j=function(e,t){h(e).each((function(e,r){Nc(t,(function(e,t){w(r,t,e)}))}))}
var H=function(e,t){var r=h(e)
_c?r.each((function(e,r){if(false===r.canHaveHTML)return
while(r.firstChild)r.removeChild(r.firstChild)
try{r.innerHTML="<br>"+t
r.removeChild(r.firstChild)}catch(e){kc("<div></div>").html("<br>"+t).contents().slice(1).appendTo(r)}return t})):r.html(t)}
var V=function(t,r,n,a,o){return z(t,(function(t){var i="string"===typeof r?e.createElement(r):r
j(i,n)
a&&("string"!==typeof a&&a.nodeType?i.appendChild(a):"string"===typeof a&&H(i,a))
return o?i:t.appendChild(i)}))}
var q=function(t,r,n){return V(e.createElement(t),t,r,n,true)}
var $=au.decode
var W=au.encodeAllRaw
var K=function(e,t,r){var n,a=""
a+="<"+e
for(n in t)t.hasOwnProperty(n)&&null!==t[n]&&"undefined"!==typeof t[n]&&(a+=" "+n+'="'+W(t[n])+'"')
if("undefined"!==typeof r)return a+">"+r+"</"+e+">"
return a+" />"}
var X=function(t){var r
var n=e.createElement("div")
var a=e.createDocumentFragment()
a.appendChild(n)
t&&(n.innerHTML=t)
while(r=n.firstChild)a.appendChild(r)
a.removeChild(n)
return a}
var Y=function(e,t){var r=h(e)
t?r.each((function(){var e
while(e=this.firstChild)3===e.nodeType&&0===e.data.length?this.removeChild(e):this.parentNode.insertBefore(e,this)})).remove():r.remove()
return r.length>1?r.toArray():r[0]}
var G=function(e){return z(e,(function(e){var t
var r=e.attributes
for(t=r.length-1;t>=0;t--)e.removeAttributeNode(r.item(t))}))}
var J=function(e){return l.parse(e)}
var Q=function(e,t){return l.serialize(e,t)}
var ee=function(t){var n,a
if(Re!==Oc.DOM&&e===document){if(r[t])return
r[t]=true}a=e.getElementById("mceDefaultStyles")
if(!a){a=e.createElement("style")
a.id="mceDefaultStyles"
a.type="text/css"
n=e.getElementsByTagName("head")[0]
n.firstChild?n.insertBefore(a,n.firstChild):n.appendChild(a)}a.styleSheet?a.styleSheet.cssText+=t:a.appendChild(e.createTextNode(t))}
var te=function(e){e||(e="")
Z(e.split(","),(function(e){a[e]=true
f.load(e,T)}))}
var re=function(e,t,r){h(e).toggleClass(t,r).each((function(){""===this.className&&kc(this).attr("class",null)}))}
var ne=function(e,t){h(e).addClass(t)}
var ae=function(e,t){re(e,t,false)}
var oe=function(e,t){return h(e).hasClass(t)}
var ie=function(e){h(e).show()}
var ue=function(e){h(e).hide()}
var fe=function(e){return"none"===h(e).css("display")}
var ce=function(e){return(e||"mce_")+o++}
var se=function(e){var t="string"===typeof e?g(e):e
return jn(t)?t.outerHTML:kc("<div></div>").append(kc(t).clone()).html()}
var le=function(e,t){h(e).each((function(){try{if("outerHTML"in this){this.outerHTML=t
return}}catch(e){}Y(kc(this).html(t),true)}))}
var de=function(e,t){var r=g(t)
return z(e,(function(e){var t=r.parentNode
var n=r.nextSibling
n?t.insertBefore(e,n):t.appendChild(e)
return e}))}
var ve=function(e,t,r){return z(t,(function(t){dr.is(t,"array")&&(e=e.cloneNode(true))
r&&Nc(Ec(t.childNodes),(function(t){e.appendChild(t)}))
return t.parentNode.replaceChild(e,t)}))}
var me=function(e,t){var r
if(e.nodeName!==t.toUpperCase()){r=q(t)
Nc(C(e),(function(t){w(r,t.nodeName,b(e,t.nodeName))}))
ve(r,e,true)}return r||e}
var pe=function(e,t){var r,n=e
while(n){r=t
while(r&&n!==r)r=r.parentNode
if(n===r)break
n=n.parentNode}if(!n&&e.ownerDocument)return e.ownerDocument.documentElement
return n}
var ge=function(e){return l.toHex(dr.trim(e))}
var he=function(e){if(jn(e)){var t="a"===e.nodeName.toLowerCase()&&!b(e,"href")&&b(e,"id")
if(b(e,"name")||b(e,"data-mce-bookmark")||t)return true}return false}
var ye=function(e,t){var r,n,a=0
if(he(e))return false
e=e.firstChild
if(e){var o=new go(e,e.parentNode)
var i=s?s.getWhiteSpaceElements():{}
t=t||(s?s.getNonEmptyElements():null)
do{r=e.nodeType
if(jn(e)){var u=e.getAttribute("data-mce-bogus")
if(u){e=o.next("all"===u)
continue}n=e.nodeName.toLowerCase()
if(t&&t[n]){if("br"===n){a++
e=o.next()
continue}return false}if(he(e))return false}if(8===r)return false
if(3===r&&!Si(e.nodeValue))return false
if(3===r&&e.parentNode&&i[e.parentNode.nodeName]&&Si(e.nodeValue))return false
e=o.next()}while(e)}return a<=1}
var be=function(){return e.createRange()}
var Ce=function(e,t,r){var n=be()
var a
var o
var i
if(e&&t){n.setStart(e.parentNode,Dc(e))
n.setEnd(t.parentNode,Dc(t))
a=n.extractContents()
n=be()
n.setStart(t.parentNode,Dc(t)+1)
n.setEnd(e.parentNode,Dc(e)+1)
o=n.extractContents()
i=e.parentNode
i.insertBefore(zi(Re,a),e)
r?i.insertBefore(r,e):i.insertBefore(t,e)
i.insertBefore(zi(Re,o),e)
Y(e)
return r||t}}
var we=function(r,a,o,i){if(dr.isArray(r)){var u=r.length
var f=[]
while(u--)f[u]=we(r[u],a,o,i)
return f}!t.collect||r!==e&&r!==n||c.push([r,a,o,i])
var s=d.bind(r,a,o,i||Re)
return s}
var Se=function(t,r,a){if(dr.isArray(t)){var o=t.length
var i=[]
while(o--)i[o]=Se(t[o],r,a)
return i}if(c.length>0&&(t===e||t===n)){o=c.length
while(o--){var u=c[o]
t!==u[0]||r&&r!==u[1]||a&&a!==u[2]||d.unbind(u[0],u[1],u[2])}}return d.unbind(t,r,a)}
var ke=function(e,t,r){return d.fire(e,t,r)}
var Ne=function(e){if(e&&jn(e)){var t=e.getAttribute("data-mce-contenteditable")
if(t&&"inherit"!==t)return t
return"inherit"!==e.contentEditable?e.contentEditable:null}return null}
var Ee=function(e){var t=S()
var r=null
for(;e&&e!==t;e=e.parentNode){r=Ne(e)
if(null!==r)break}return r}
var _e=function(){if(c.length>0){var e=c.length
while(e--){var t=c[e]
d.unbind(t[0],t[1],t[2])}}xe(a,(function(e,t){f.unload(t)
delete a[t]}))
Of.setDocument&&Of.setDocument()}
var Te=function(e,t){while(e){if(t===e)return true
e=e.parentNode}return false}
var Ae=function(e){return"startContainer: "+e.startContainer.nodeName+", startOffset: "+e.startOffset+", endContainer: "+e.endContainer.nodeName+", endOffset: "+e.endOffset}
var Re={doc:e,settings:t,win:n,files:a,stdMode:i,boxModel:u,styleSheetLoader:f,boundEvents:c,styles:l,schema:s,events:d,isBlock:p,$:m,$$:h,root:null,clone:x,getRoot:S,getViewPort:N,getRect:O,getSize:D,getParent:L,getParents:P,get:g,getNext:M,getPrev:F,select:U,is:B,add:V,create:q,createHTML:K,createFragment:X,remove:Y,setStyle:_,getStyle:R,setStyles:A,removeAllAttribs:G,setAttrib:w,setAttribs:j,getAttrib:b,getPos:E,parseStyle:J,serializeStyle:Q,addStyle:ee,loadCSS:te,addClass:ne,removeClass:ae,hasClass:oe,toggleClass:re,show:ie,hide:ue,isHidden:fe,uniqueId:ce,setHTML:H,getOuterHTML:se,setOuterHTML:le,decode:$,encode:W,insertAfter:de,replace:ve,rename:me,findCommonAncestor:pe,toHex:ge,run:z,getAttribs:C,isEmpty:ye,createRng:be,nodeIndex:Dc,split:Ce,bind:we,unbind:Se,fire:ke,getContentEditable:Ne,getContentEditableParent:Ee,destroy:_e,isChildOf:Te,dumpRng:Ae}
var De=Ac(l,t,(function(){return Re}))
return Re}
Oc.DOM=Oc(document)
Oc.nodeIndex=Dc
var Bc=Oc.DOM
var Pc=dr.each,Lc=dr.grep
var Ic=0
var Mc=1
var Fc=2
var Uc=3
var zc=function(){function e(e){void 0===e&&(e={})
this.states={}
this.queue=[]
this.scriptLoadedCallbacks={}
this.queueLoadedCallbacks=[]
this.loading=0
this.settings=e}e.prototype._setReferrerPolicy=function(e){this.settings.referrerPolicy=e}
e.prototype.loadScript=function(e,t,r){var n=Bc
var a
var o=function(){n.remove(f)
a&&(a.onerror=a.onload=a=null)}
var i=function(){o()
t()}
var u=function(){o()
E(r)?r():"undefined"!==typeof console&&console.log&&console.log("Failed to load script: "+e)}
var f=n.uniqueId()
a=document.createElement("script")
a.id=f
a.type="text/javascript"
a.src=dr._addCacheSuffix(e)
this.settings.referrerPolicy&&n.setAttrib(a,"referrerpolicy",this.settings.referrerPolicy)
a.onload=i
a.onerror=u;(document.getElementsByTagName("head")[0]||document.body).appendChild(a)}
e.prototype.isDone=function(e){return this.states[e]===Fc}
e.prototype.markDone=function(e){this.states[e]=Fc}
e.prototype.add=function(e,t,r,n){var a=this.states[e]
this.queue.push(e)
void 0===a&&(this.states[e]=Ic)
if(t){this.scriptLoadedCallbacks[e]||(this.scriptLoadedCallbacks[e]=[])
this.scriptLoadedCallbacks[e].push({success:t,failure:n,scope:r||this})}}
e.prototype.load=function(e,t,r,n){return this.add(e,t,r,n)}
e.prototype.remove=function(e){delete this.states[e]
delete this.scriptLoadedCallbacks[e]}
e.prototype.loadQueue=function(e,t,r){this.loadScripts(this.queue,e,t,r)}
e.prototype.loadScripts=function(e,t,r,n){var a=this
var o=[]
var i=function(e,t){Pc(a.scriptLoadedCallbacks[t],(function(t){E(t[e])&&t[e].call(t.scope)}))
a.scriptLoadedCallbacks[t]=void 0}
a.queueLoadedCallbacks.push({success:t,failure:n,scope:r||this})
var u=function(){var t=Lc(e)
e.length=0
Pc(t,(function(e){if(a.states[e]===Fc){i("success",e)
return}if(a.states[e]===Uc){i("failure",e)
return}if(a.states[e]!==Mc){a.states[e]=Mc
a.loading++
a.loadScript(e,(function(){a.states[e]=Fc
a.loading--
i("success",e)
u()}),(function(){a.states[e]=Uc
a.loading--
o.push(e)
i("failure",e)
u()}))}}))
if(!a.loading){var r=a.queueLoadedCallbacks.slice(0)
a.queueLoadedCallbacks.length=0
Pc(r,(function(e){0===o.length?E(e.success)&&e.success.call(e.scope):E(e.failure)&&e.failure.call(e.scope,o)}))}}
u()}
e.ScriptLoader=new e
return e}()
var jc=function(e){var t=e
var r=function(){return t}
var n=function(e){t=e}
return{get:r,set:n}}
var Hc=function(e){return b(e)&&Oe(e,"raw")}
var Vc=function(e){return C(e)&&e.length>1}
var qc={}
var $c=jc("en")
var Wc=function(){return De(qc,$c.get())}
var Kc=function(){return Se(qc,(function(e){return qe({},e)}))}
var Xc=function(e){e&&$c.set(e)}
var Yc=function(){return $c.get()}
var Gc=function(e,t){var r=qc[e]
r||(qc[e]=r={})
xe(t,(function(e,t){r[t.toLowerCase()]=e}))}
var Jc=function(e){var t=Wc().getOr({})
var r=function(e){if(E(e))return Object.prototype.toString.call(e)
return n(e)?"":""+e}
var n=function(e){return""===e||null===e||void 0===e}
var a=function(e){var n=r(e)
return De(t,n.toLowerCase()).map(r).getOr(n)}
var o=function(e){return e.replace(/{context:\w+}$/,"")}
if(n(e))return""
if(Hc(e))return r(e.raw)
if(Vc(e)){var i=e.slice(1)
var u=a(e[0]).replace(/\{([0-9]+)\}/g,(function(e,t){return Oe(i,t)?r(i[t]):e}))
return o(u)}return o(a(e))}
var Qc=function(){return Wc().bind((function(e){return De(e,"_dir")})).exists((function(e){return"rtl"===e}))}
var Zc=function(e){return Oe(qc,e)}
var es={getData:Kc,setCode:Xc,getCode:Yc,add:Gc,translate:Jc,isRtl:Qc,hasCode:Zc}
var ts=function(){var e=[]
var t={}
var r={}
var n=[]
var a=function(e,t){var r=re(n,(function(r){return r.name===e&&r.state===t}))
Z(r,(function(e){return e.callback()}))}
var o=function(e){if(r[e])return r[e].instance
return}
var i=function(e){var t
r[e]&&(t=r[e].dependencies)
return t||[]}
var u=function(e,r){false!==ts.languageLoad&&m(e,(function(){var n=es.getCode()
var a=","+(r||"")+","
if(!n||r&&-1===a.indexOf(","+n+","))return
zc.ScriptLoader.add(t[e]+"/langs/"+n+".js")}),"loaded")}
var f=function(t,n,o){var i=n
e.push(i)
r[t]={instance:i,dependencies:o}
a(t,"added")
return i}
var c=function(e){delete t[e]
delete r[e]}
var s=function(e,t){if("object"===typeof t)return t
return"string"===typeof e?{prefix:"",resource:t,suffix:""}:{prefix:e.prefix,resource:t,suffix:e.suffix}}
var l=function(e,r){var n=t[e]
Z(r,(function(e){zc.ScriptLoader.add(n+"/"+e)}))}
var d=function(e,t,r,n){var a=i(e)
Z(a,(function(e){var r=s(t,e)
v(r.resource,r,void 0,void 0)}))
r&&(n?r.call(n):r.call(zc))}
var v=function(e,n,o,i,u){if(t[e])return
var f="string"===typeof n?n:n.prefix+n.resource+n.suffix
0!==f.indexOf("/")&&-1===f.indexOf("://")&&(f=ts.baseURL+"/"+f)
t[e]=f.substring(0,f.lastIndexOf("/"))
var c=function(){a(e,"loaded")
d(e,n,o,i)}
r[e]?c():zc.ScriptLoader.add(f,c,i,u)}
var m=function(e,a,o){void 0===o&&(o="added")
Oe(r,e)&&"added"===o||Oe(t,e)&&"loaded"===o?a():n.push({name:e,state:o,callback:a})}
return{items:e,urls:t,lookup:r,_listeners:n,get:o,dependencies:i,requireLangPack:u,add:f,remove:c,createUrl:s,addComponents:l,load:v,waitFor:m}}
ts.languageLoad=true
ts.baseURL=""
ts.PluginManager=ts()
ts.ThemeManager=ts()
var rs=function(e,t){var r=null
var n=function(){if(null!==r){clearTimeout(r)
r=null}}
var a=function(){var n=[]
for(var a=0;a<arguments.length;a++)n[a]=arguments[a]
null===r&&(r=setTimeout((function(){e.apply(null,n)
r=null}),t))}
return{cancel:n,throttle:a}}
var ns=function(e,t){var r=null
var n=function(){if(null!==r){clearTimeout(r)
r=null}}
var a=function(){var n=[]
for(var a=0;a<arguments.length;a++)n[a]=arguments[a]
null!==r&&clearTimeout(r)
r=setTimeout((function(){e.apply(null,n)
r=null}),t)}
return{cancel:n,throttle:a}}
var as=function(e,t){var r=la(e,t)
return void 0===r||""===r?[]:r.split(" ")}
var os=function(e,t,r){var n=as(e,t)
var a=n.concat([r])
ca(e,t,a.join(" "))
return true}
var is=function(e,t,r){var n=re(as(e,t),(function(e){return e!==r}))
n.length>0?ca(e,t,n.join(" ")):ma(e,t)
return false}
var us=function(e){return void 0!==e.dom.classList}
var fs=function(e){return as(e,"class")}
var cs=function(e,t){return os(e,"class",t)}
var ss=function(e,t){return is(e,"class",t)}
var ls=function(e,t){us(e)?e.dom.classList.add(t):cs(e,t)}
var ds=function(e){var t=us(e)?e.dom.classList:fs(e)
0===t.length&&ma(e,"class")}
var vs=function(e,t){if(us(e)){var r=e.dom.classList
r.remove(t)}else ss(e,t)
ds(e)}
var ms=function(e,t){return us(e)&&e.dom.classList.contains(t)}
var ps=function(e,t){var r=[]
Z(en(e),(function(e){t(e)&&(r=r.concat([e]))
r=r.concat(ps(e,t))}))
return r}
var gs=function(e,t){return Ar(t,e)}
var hs=D("mce-annotation")
var ys=D("data-mce-annotation")
var bs=D("data-mce-annotation-uid")
var Cs=function(e,t){var r=e.selection.getRng()
var n=yr.fromDom(r.startContainer)
var a=yr.fromDom(e.getBody())
var o=t.fold((function(){return"."+hs()}),(function(e){return"["+ys()+'="'+e+'"]'}))
var i=tn(n,r.startOffset).getOr(n)
var u=to(i,o,(function(e){return Dr(e,a)}))
var f=function(e,t){return va(e,t)?q.some(la(e,t)):q.none()}
return u.bind((function(t){return f(t,""+bs()).bind((function(r){return f(t,""+ys()).map((function(t){var n=xs(e,r)
return{uid:r,name:t,elements:n}}))}))}))}
var ws=function(e){return Ur(e)&&ms(e,hs())}
var xs=function(e,t){var r=yr.fromDom(e.getBody())
return gs(r,"["+bs()+'="'+t+'"]')}
var Ss=function(e,t){var r=yr.fromDom(e.getBody())
var n=gs(r,"["+ys()+'="'+t+'"]')
var a={}
Z(n,(function(e){var t=la(e,bs())
var r=a.hasOwnProperty(t)?a[t]:[]
a[t]=r.concat([e])}))
return a}
var ks=function(e,t){var r=jc({})
var n=function(){return{listeners:[],previous:jc(q.none())}}
var a=function(e,t){o(e,(function(e){t(e)
return e}))}
var o=function(e,t){var a=r.get()
var o=a.hasOwnProperty(e)?a[e]:n()
var i=t(o)
a[e]=i
r.set(a)}
var i=function(e,t,r){a(e,(function(n){Z(n.listeners,(function(n){return n(true,e,{uid:t,nodes:Q(r,(function(e){return e.dom}))})}))}))}
var u=function(e){a(e,(function(t){Z(t.listeners,(function(t){return t(false,e)}))}))}
var f=ns((function(){var t=r.get()
var n=me(Ce(t))
Z(n,(function(t){o(t,(function(r){var n=r.previous.get()
Cs(e,q.some(t)).fold((function(){if(n.isSome()){u(t)
r.previous.set(q.none())}}),(function(e){var t=e.uid,a=e.name,o=e.elements
if(!n.is(t)){i(a,t,o)
r.previous.set(q.some(t))}}))
return{previous:r.previous,listeners:r.listeners}}))}))}),30)
e.on("remove",(function(){f.cancel()}))
e.on("NodeChange",(function(){f.throttle()}))
var c=function(e,t){o(e,(function(e){return{previous:e.previous,listeners:e.listeners.concat([t])}}))}
return{addListener:c}}
var Ns=function(e,t){var r=function(e){return q.from(e.attr(ys())).bind(t.lookup)}
e.on("init",(function(){e.serializer.addNodeFilter("span",(function(e){Z(e,(function(e){r(e).each((function(t){false===t.persistent&&e.unwrap()}))}))}))}))}
var Es=function(){var e={}
var t=function(t,r){e[t]={name:t,settings:r}}
var r=function(t){return e.hasOwnProperty(t)?q.from(e[t]).map((function(e){return e.settings})):q.none()}
return{register:t,lookup:r}}
var _s=0
var Ts=function(e){var t=new Date
var r=t.getTime()
var n=Math.floor(1e9*Math.random())
_s++
return e+"_"+n+_s+String(r)}
var As=function(e,t){Z(t,(function(t){ls(e,t)}))}
var Rs=function(e,t){var r=t||document
var n=r.createElement("div")
n.innerHTML=e
return en(yr.fromDom(n))}
var Ds=function(e){return e.dom.innerHTML}
var Os=function(e,t){var r=Vr(e)
var n=r.dom
var a=yr.fromDom(n.createDocumentFragment())
var o=Rs(t,n)
xn(a,o)
Sn(e)
bn(e,a)}
var Bs=function(e,t){return yr.fromDom(e.dom.cloneNode(t))}
var Ps=function(e){return Bs(e,false)}
var Ls=function(e){return Bs(e,true)}
var Is=function(e,t,r){void 0===r&&(r=F)
var n=new go(e,t)
var a=function(e){var t
do{t=n[e]()}while(t&&!Jn(t)&&!r(t))
return q.from(t).filter(Jn)}
return{current:function(){return q.from(n.current()).filter(Jn)},next:function(){return a("next")},prev:function(){return a("prev")},prev2:function(){return a("prev2")}}}
var Ms=function(e,t){var r=t||function(t){return e.isBlock(t)||ta(t)||aa(t)}
var n=function(e,t,r,a){if(Jn(e)){var o=a(e,t,e.data)
if(-1!==o)return q.some({container:e,offset:o})}return r().bind((function(e){return n(e.container,e.offset,r,a)}))}
var a=function(e,t,a,o){var i=Is(e,o,r)
return n(e,t,(function(){return i.prev().map((function(e){return{container:e,offset:e.length}}))}),a).getOrNull()}
var o=function(e,t,a,o){var i=Is(e,o,r)
return n(e,t,(function(){return i.next().map((function(e){return{container:e,offset:0}}))}),a).getOrNull()}
return{backwards:a,forwards:o}}
var Fs=function(e){var t=[]
var r=function(e){t.push(e)}
for(var n=0;n<e.length;n++)e[n].each(r)
return t}
var Us=function(e,t,r){return e.isSome()&&t.isSome()?q.some(r(e.getOrDie(),t.getOrDie())):q.none()}
var zs=function(e,t,r,n){return e.isSome()&&t.isSome()&&r.isSome()?q.some(n(e.getOrDie(),t.getOrDie(),r.getOrDie())):q.none()}
var js=function(e,t){return e?q.some(t):q.none()}
var Hs=Math.round
var Vs=function(e){if(!e)return{left:0,top:0,bottom:0,right:0,width:0,height:0}
return{left:Hs(e.left),top:Hs(e.top),bottom:Hs(e.bottom),right:Hs(e.right),width:Hs(e.width),height:Hs(e.height)}}
var qs=function(e,t){e=Vs(e)
if(t)e.right=e.left
else{e.left=e.left+e.width
e.right=e.left}e.width=0
return e}
var $s=function(e,t){return e.left===t.left&&e.top===t.top&&e.bottom===t.bottom&&e.right===t.right}
var Ws=function(e,t,r){return e>=0&&e<=Math.min(t.height,r.height)/2}
var Ks=function(e,t){var r=Math.min(t.height/2,e.height/2)
if(e.bottom-r<t.top)return true
if(e.top>t.bottom)return false
return Ws(t.top-e.bottom,e,t)}
var Xs=function(e,t){if(e.top>t.bottom)return true
if(e.bottom<t.top)return false
return Ws(t.bottom-e.top,e,t)}
var Ys=function(e,t,r){return t>=e.left&&t<=e.right&&r>=e.top&&r<=e.bottom}
var Gs=function(e){var t=e.startContainer,r=e.startOffset
if(t.hasChildNodes()&&e.endOffset===r+1)return t.childNodes[r]
return null}
var Js=function(e,t){if(1===e.nodeType&&e.hasChildNodes()){t>=e.childNodes.length&&(t=e.childNodes.length-1)
e=e.childNodes[t]}return e}
var Qs=new RegExp("[̀-ͯ҃-҇҈-҉֑-ֽֿׁ-ׂׄ-ׇׅؐ-ًؚ-ٰٟۖ-ۜ۟-ۤۧ-۪ۨ-ܑۭܰ-݊ަ-ް߫-߳ࠖ-࠙ࠛ-ࠣࠥ-ࠧࠩ-࡙࠭-࡛ࣣ-ंऺ़ु-ै्॑-ॗॢ-ॣঁ়াু-ৄ্ৗৢ-ৣਁ-ਂ਼ੁ-ੂੇ-ੈੋ-੍ੑੰ-ੱੵઁ-ં઼ુ-ૅે-ૈ્ૢ-ૣଁ଼ାିୁ-ୄ୍ୖୗୢ-ୣஂாீ்ௗఀా-ీె-ైొ-్ౕ-ౖౢ-ౣಁ಼ಿೂೆೌ-್ೕ-ೖೢ-ೣഁാു-ൄ്ൗൢ-ൣ්ාි-ුූෟัิ-ฺ็-๎ັິ-ູົ-ຼ່-ໍ༘-ཱ༹༙༵༷-ཾྀ-྄྆-྇ྍ-ྗྙ-ྼ࿆ိ-ူဲ-့္-်ွ-ှၘ-ၙၞ-ၠၱ-ၴႂႅ-ႆႍႝ፝-፟ᜒ-᜔ᜲ-᜴ᝒ-ᝓᝲ-ᝳ឴-឵ិ-ួំ៉-៓៝᠋-᠍ᢩᤠ-ᤢᤧ-ᤨᤲ᤹-᤻ᨗ-ᨘᨛᩖᩘ-ᩞ᩠ᩢᩥ-ᩬᩳ-᩿᩼᪰-᪽᪾ᬀ-ᬃ᬴ᬶ-ᬺᬼᭂ᭫-᭳ᮀ-ᮁᮢ-ᮥᮨ-ᮩ᮫-ᮭ᯦ᯨ-ᯩᯭᯯ-ᯱᰬ-ᰳᰶ-᰷᳐-᳔᳒-᳢᳠-᳨᳭᳴᳸-᳹᷀-᷵᷼-᷿‌-‍⃐-⃜⃝-⃠⃡⃢-⃤⃥-⃰⳯-⵿⳱ⷠ-〪ⷿ-〭〮-゙〯-゚꙯꙰-꙲ꙴ-꙽ꚞ-ꚟ꛰-꛱ꠂ꠆ꠋꠥ-ꠦ꣄꣠-꣱ꤦ-꤭ꥇ-ꥑꦀ-ꦂ꦳ꦶ-ꦹꦼꧥꨩ-ꨮꨱ-ꨲꨵ-ꨶꩃꩌꩼꪰꪲ-ꪴꪷ-ꪸꪾ-꪿꫁ꫬ-ꫭ꫶ꯥꯨ꯭ﬞ︀-️︠-︯ﾞ-ﾟ]")
var Zs=function(e){return"string"===typeof e&&e.charCodeAt(0)>=768&&Qs.test(e)}
var el=function(){var e=[]
for(var t=0;t<arguments.length;t++)e[t]=arguments[t]
return function(t){for(var r=0;r<e.length;r++)if(e[r](t))return true
return false}}
var tl=function(){var e=[]
for(var t=0;t<arguments.length;t++)e[t]=arguments[t]
return function(t){for(var r=0;r<e.length;r++)if(!e[r](t))return false
return true}}
var rl=jn
var nl=pi
var al=Vn("display","block table")
var ol=Vn("float","left right")
var il=tl(rl,nl,P(ol))
var ul=P(Vn("white-space","pre pre-line pre-wrap"))
var fl=Jn
var cl=ta
var sl=Oc.nodeIndex
var ll=Js
var dl=function(e){return"createRange"in e?e.createRange():Oc.DOM.createRng()}
var vl=function(e){return e&&/[\r\n\t ]/.test(e)}
var ml=function(e){return!!e.setStart&&!!e.setEnd}
var pl=function(e){var t=e.startContainer
var r=e.startOffset
var n
if(vl(e.toString())&&ul(t.parentNode)&&Jn(t)){n=t.data
if(vl(n[r-1])||vl(n[r+1]))return true}return false}
var gl=function(e){var t=e.ownerDocument
var r=dl(t)
var n=t.createTextNode(Uo)
var a=e.parentNode
a.insertBefore(n,e)
r.setStart(n,0)
r.setEnd(n,1)
var o=Vs(r.getBoundingClientRect())
a.removeChild(n)
return o}
var hl=function(e){var t=e.startContainer
var r=e.endContainer
var n=e.startOffset
var a=e.endOffset
if(t===r&&Jn(r)&&0===n&&1===a){var o=e.cloneRange()
o.setEndAfter(r)
return bl(o)}return null}
var yl=function(e){return 0===e.left&&0===e.right&&0===e.top&&0===e.bottom}
var bl=function(e){var t
var r=e.getClientRects()
t=r.length>0?Vs(r[0]):Vs(e.getBoundingClientRect())
if(!ml(e)&&cl(e)&&yl(t))return gl(e)
if(yl(t)&&ml(e))return hl(e)
return t}
var Cl=function(e,t){var r=qs(e,t)
r.width=1
r.right=r.left+1
return r}
var wl=function(e){var t=[]
var r,n
var a=function(e){if(0===e.height)return
if(t.length>0&&$s(e,t[t.length-1]))return
t.push(e)}
var o=function(e,r){var n=dl(e.ownerDocument)
if(r<e.data.length){if(Zs(e.data[r]))return t
if(Zs(e.data[r-1])){n.setStart(e,r)
n.setEnd(e,r+1)
if(!pl(n)){a(Cl(bl(n),false))
return t}}}if(r>0){n.setStart(e,r-1)
n.setEnd(e,r)
pl(n)||a(Cl(bl(n),false))}if(r<e.data.length){n.setStart(e,r)
n.setEnd(e,r+1)
pl(n)||a(Cl(bl(n),true))}}
if(fl(e.container())){o(e.container(),e.offset())
return t}if(rl(e.container()))if(e.isAtEnd()){n=ll(e.container(),e.offset())
fl(n)&&o(n,n.data.length)
il(n)&&!cl(n)&&a(Cl(bl(n),false))}else{n=ll(e.container(),e.offset())
fl(n)&&o(n,0)
if(il(n)&&e.isAtEnd()){a(Cl(bl(n),false))
return t}r=ll(e.container(),e.offset()-1)
il(r)&&!cl(r)&&(al(r)||al(n)||!il(n))&&a(Cl(bl(r),false))
il(n)&&a(Cl(bl(n),true))}return t}
var xl=function(e,t,r){var n=function(){if(fl(e))return 0===t
return 0===t}
var a=function(){if(fl(e))return t>=e.data.length
return t>=e.childNodes.length}
var o=function(){var r=dl(e.ownerDocument)
r.setStart(e,t)
r.setEnd(e,t)
return r}
var i=function(){r||(r=wl(xl(e,t)))
return r}
var u=function(){return i().length>0}
var f=function(r){return r&&e===r.container()&&t===r.offset()}
var c=function(r){return ll(e,r?t-1:t)}
return{container:D(e),offset:D(t),toRange:o,getClientRects:i,isVisible:u,isAtStart:n,isAtEnd:a,isEqual:f,getNode:c}}
xl.fromRangeStart=function(e){return xl(e.startContainer,e.startOffset)}
xl.fromRangeEnd=function(e){return xl(e.endContainer,e.endOffset)}
xl.after=function(e){return xl(e.parentNode,sl(e)+1)}
xl.before=function(e){return xl(e.parentNode,sl(e))}
xl.isAbove=function(e,t){return Us(ge(t.getClientRects()),he(e.getClientRects()),Ks).getOr(false)}
xl.isBelow=function(e,t){return Us(he(t.getClientRects()),ge(e.getClientRects()),Xs).getOr(false)}
xl.isAtStart=function(e){return!!e&&e.isAtStart()}
xl.isAtEnd=function(e){return!!e&&e.isAtEnd()}
xl.isTextPosition=function(e){return!!e&&Jn(e.container())}
xl.isElementPosition=function(e){return false===xl.isTextPosition(e)}
var Sl=function(e,t){Jn(t)&&0===t.data.length&&e.remove(t)}
var kl=function(e,t,r){t.insertNode(r)
Sl(e,r.previousSibling)
Sl(e,r.nextSibling)}
var Nl=function(e,t,r){var n=q.from(r.firstChild)
var a=q.from(r.lastChild)
t.insertNode(r)
n.each((function(t){return Sl(e,t.previousSibling)}))
a.each((function(t){return Sl(e,t.nextSibling)}))}
var El=function(e,t,r){ea(r)?Nl(e,t,r):kl(e,t,r)}
var _l=Jn
var Tl=Wn
var Al=Oc.nodeIndex
var Rl=function(e){var t=e.parentNode
if(Tl(t))return Rl(t)
return t}
var Dl=function(e){if(!e)return[]
return je(e.childNodes,(function(e,t){Tl(t)&&"BR"!==t.nodeName?e=e.concat(Dl(t)):e.push(t)
return e}),[])}
var Ol=function(e,t){while(e=e.previousSibling){if(!_l(e))break
t+=e.data.length}return t}
var Bl=function(e){return function(t){return e===t}}
var Pl=function(e){var t,r
t=Dl(Rl(e))
r=He(t,Bl(e),e)
t=t.slice(0,r+1)
var n=je(t,(function(e,r,n){_l(r)&&_l(t[n-1])&&e++
return e}),0)
t=Ue(t,Hn([e.nodeName]))
r=He(t,Bl(e),e)
return r-n}
var Ll=function(e){var t
t=_l(e)?"text()":e.nodeName.toLowerCase()
return t+"["+Pl(e)+"]"}
var Il=function(e,t,r){var n=[]
for(t=t.parentNode;t!==e;t=t.parentNode){if(r&&r(t))break
n.push(t)}return n}
var Ml=function(e,t){var r,n,a,o,i,u=[]
r=t.container()
n=t.offset()
if(_l(r))a=Ol(r,n)
else{o=r.childNodes
if(n>=o.length){a="after"
n=o.length-1}else a="before"
r=o[n]}u.push(Ll(r))
i=Il(e,r)
i=Ue(i,P(Wn))
u=u.concat(Fe(i,(function(e){return Ll(e)})))
return u.reverse().join("/")+","+a}
var Fl=function(e,t,r){var n=Dl(e)
n=Ue(n,(function(e,t){return!_l(e)||!_l(n[t-1])}))
n=Ue(n,Hn([t]))
return n[r]}
var Ul=function(e,t){var r,n=e,a=0
while(_l(n)){r=n.data.length
if(t>=a&&t<=a+r){e=n
t-=a
break}if(!_l(n.nextSibling)){e=n
t=r
break}a+=r
n=n.nextSibling}_l(e)&&t>e.data.length&&(t=e.data.length)
return xl(e,t)}
var zl=function(e,t){var r
if(!t)return null
var n=t.split(",")
var a=n[0].split("/")
r=n.length>1?n[1]:"before"
var o=je(a,(function(e,t){var r=/([\w\-\(\)]+)\[([0-9]+)\]/.exec(t)
if(!r)return null
"text()"===r[1]&&(r[1]="#text")
return Fl(e,r[1],parseInt(r[2],10))}),e)
if(!o)return null
if(!_l(o)){r="after"===r?Al(o)+1:Al(o)
return xl(o.parentNode,r)}return Ul(o,parseInt(r,10))}
var jl=aa
var Hl=function(e,t,r){var n,a
a=e(t.data.slice(0,r)).length
for(n=t.previousSibling;n&&Jn(n);n=n.previousSibling)a+=e(n.data).length
return a}
var Vl=function(e,t,r,n,a){var o=n[a?"startContainer":"endContainer"]
var i=n[a?"startOffset":"endOffset"]
var u=[]
var f,c=0
var s=e.getRoot()
if(Jn(o))u.push(r?Hl(t,o,i):i)
else{f=o.childNodes
if(i>=f.length&&f.length){c=1
i=Math.max(0,f.length-1)}u.push(e.nodeIndex(f[i],r)+c)}for(;o&&o!==s;o=o.parentNode)u.push(e.nodeIndex(o,r))
return u}
var ql=function(e,t,r,n){var a=t.dom,o={}
o.start=Vl(a,e,r,n,true)
t.isCollapsed()||(o.end=Vl(a,e,r,n,false))
return o}
var $l=function(e,t,r){var n=0
dr.each(e.select(t),(function(e){if("all"===e.getAttribute("data-mce-bogus"))return
if(e===r)return false
n++}))
return n}
var Wl=function(e,t){var r,n,a
var o=t?"start":"end"
r=e[o+"Container"]
n=e[o+"Offset"]
if(jn(r)&&"TR"===r.nodeName){a=r.childNodes
r=a[Math.min(t?n:n-1,a.length-1)]
if(r){n=t?0:r.childNodes.length
e["set"+(t?"Start":"End")](r,n)}}}
var Kl=function(e){Wl(e,true)
Wl(e,false)
return e}
var Xl=function(e,t){var r
if(jn(e)){e=Js(e,t)
if(jl(e))return e}if(Yo(e)){Jn(e)&&Ko(e)&&(e=e.parentNode)
r=e.previousSibling
if(jl(r))return r
r=e.nextSibling
if(jl(r))return r}}
var Yl=function(e){return Xl(e.startContainer,e.startOffset)||Xl(e.endContainer,e.endOffset)}
var Gl=function(e,t,r){var n=r.getNode()
var a=n?n.nodeName:null
var o=r.getRng()
if(jl(n)||"IMG"===a)return{name:a,index:$l(r.dom,a,n)}
var i=Yl(o)
if(i){a=i.tagName
return{name:a,index:$l(r.dom,a,i)}}return ql(e,r,t,o)}
var Jl=function(e){var t=e.getRng()
return{start:Ml(e.dom.getRoot(),xl.fromRangeStart(t)),end:Ml(e.dom.getRoot(),xl.fromRangeEnd(t))}}
var Ql=function(e){return{rng:e.getRng()}}
var Zl=function(e,t,r){var n={"data-mce-type":"bookmark",id:t,style:"overflow:hidden;line-height:0px"}
return r?e.create("span",n,"&#xFEFF;"):e.create("span",n)}
var ed=function(e,t){var r=e.dom
var n=e.getRng()
var a=r.uniqueId()
var o=e.isCollapsed()
var i=e.getNode()
var u=i.nodeName
if("IMG"===u)return{name:u,index:$l(r,u,i)}
var f=Kl(n.cloneRange())
if(!o){f.collapse(false)
var c=Zl(r,a+"_end",t)
El(r,f,c)}n=Kl(n)
n.collapse(true)
var s=Zl(r,a+"_start",t)
El(r,n,s)
e.moveToBookmark({id:a,keep:true})
return{id:a}}
var td=function(e,t,r){return 2===t?Gl(qo,r,e):3===t?Jl(e):t?Ql(e):ed(e,false)}
var rd=B(Gl,O,true)
var nd=Oc.DOM
var ad="font-family font-size font-weight font-style text-decoration text-transform color background-color border border-radius outline text-shadow"
var od=function(e,t,r){var n=e.getParam(t,r)
if(-1!==n.indexOf("=")){var a=e.getParam(t,"","hash")
return a.hasOwnProperty(e.id)?a[e.id]:r}return n}
var id=function(e){return e.getParam("iframe_attrs",{})}
var ud=function(e){return e.getParam("doctype","<!DOCTYPE html>")}
var fd=function(e){return e.getParam("document_base_url","")}
var cd=function(e){return od(e,"body_id","tinymce")}
var sd=function(e){return od(e,"body_class","")}
var ld=function(e){return e.getParam("content_security_policy","")}
var dd=function(e){return e.getParam("br_in_pre",true)}
var vd=function(e){if(e.getParam("force_p_newlines",false))return"p"
var t=e.getParam("forced_root_block","p")
return false===t?"":true===t?"p":t}
var md=function(e){return e.getParam("forced_root_block_attrs",{})}
var pd=function(e){return e.getParam("br_newline_selector",".mce-toc h2,figcaption,caption")}
var gd=function(e){return e.getParam("no_newline_selector","")}
var hd=function(e){return e.getParam("keep_styles",true)}
var yd=function(e){return e.getParam("end_container_on_empty_block",false)}
var bd=function(e){return dr.explode(e.getParam("font_size_style_values","xx-small,x-small,small,medium,large,x-large,xx-large"))}
var Cd=function(e){return dr.explode(e.getParam("font_size_classes",""))}
var wd=function(e){return e.getParam("images_dataimg_filter",U,"function")}
var xd=function(e){return e.getParam("automatic_uploads",true,"boolean")}
var Sd=function(e){return e.getParam("images_reuse_filename",false,"boolean")}
var kd=function(e){return e.getParam("images_replace_blob_uris",true,"boolean")}
var Nd=function(e){return e.getParam("icons","","string")}
var Ed=function(e){return e.getParam("icons_url","","string")}
var _d=function(e){return e.getParam("images_upload_url","","string")}
var Td=function(e){return e.getParam("images_upload_base_path","","string")}
var Ad=function(e){return e.getParam("images_upload_credentials",false,"boolean")}
var Rd=function(e){return e.getParam("images_upload_handler",null,"function")}
var Dd=function(e){return e.getParam("content_css_cors",false,"boolean")}
var Od=function(e){return e.getParam("referrer_policy","","string")}
var Bd=function(e){return e.getParam("language","en","string")}
var Pd=function(e){return e.getParam("language_url","","string")}
var Ld=function(e){return e.getParam("indent_use_margin",false)}
var Id=function(e){return e.getParam("indentation","40px","string")}
var Md=function(e){var t=e.getParam("content_css")
return y(t)?Q(t.split(","),lt):C(t)?t:false===t||e.inline?[]:["default"]}
var Fd=function(e){var t=e.getParam("font_css",[])
return C(t)?t:Q(t.split(","),lt)}
var Ud=function(e){return e.getParam("directionality",es.isRtl()?"rtl":void 0)}
var zd=function(e){return e.getParam("inline_boundaries_selector","a[href],code,.mce-annotation","string")}
var jd=function(e){var t=e.getParam("object_resizing")
return false!==t&&!Zt.iOS&&(y(t)?t:"table,img,figure.image,div,video,iframe")}
var Hd=function(e){return e.getParam("resize_img_proportional",true,"boolean")}
var Vd=function(e){return e.getParam("placeholder",nd.getAttrib(e.getElement(),"placeholder"),"string")}
var qd=function(e){return e.getParam("event_root")}
var $d=function(e){return e.getParam("service_message")}
var Wd=function(e){return e.getParam("theme")}
var Kd=function(e){return e.getParam("validate")}
var Xd=function(e){return false!==e.getParam("inline_boundaries")}
var Yd=function(e){return e.getParam("formats")}
var Gd=function(e){var t=e.getParam("preview_styles",ad)
return y(t)?t:""}
var Jd=function(e){return e.getParam("format_empty_lines",false,"boolean")}
var Qd=function(e){return e.getParam("custom_ui_selector","","string")}
var Zd=function(e){return e.getParam("theme_url")}
var ev=function(e){return e.getParam("inline")}
var tv=function(e){return e.getParam("hidden_input")}
var rv=function(e){return e.getParam("submit_patch")}
var nv=function(e){return"xml"===e.getParam("encoding")}
var av=function(e){return e.getParam("add_form_submit_trigger")}
var ov=function(e){return e.getParam("add_unload_trigger")}
var iv=function(e){return""!==vd(e)}
var uv=function(e){return e.getParam("custom_undo_redo_levels",0,"number")}
var fv=function(e){return e.getParam("disable_nodechange")}
var cv=function(e){return e.getParam("readonly")}
var sv=function(e){return e.getParam("content_css_cors")}
var lv=function(e){return e.getParam("plugins","","string")}
var dv=function(e){return e.getParam("external_plugins")}
var vv=function(e){return e.getParam("block_unsupported_drop",true,"boolean")}
var mv=function(e){return e.getParam("visual",true,"boolean")}
var pv=function(e){return e.getParam("visual_table_class","mce-item-table","string")}
var gv=function(e){return e.getParam("visual_anchor_class","mce-item-anchor","string")}
var hv=jn
var yv=Jn
var bv=function(e){var t=e.parentNode
t&&t.removeChild(e)}
var Cv=function(e){var t=qo(e)
return{count:e.length-t.length,text:t}}
var wv=function(e){var t
while(-1!==(t=e.data.lastIndexOf(Ho)))e.deleteData(t,1)}
var xv=function(e,t){Tv(e)
return t}
var Sv=function(e,t){var r=Cv(e.data.substr(0,t.offset()))
var n=Cv(e.data.substr(t.offset()))
var a=r.text+n.text
if(a.length>0){wv(e)
return xl(e,t.offset()-r.count)}return t}
var kv=function(e,t){var r=t.container()
var n=Y(ye(r.childNodes),e).map((function(e){return e<t.offset()?xl(r,t.offset()-1):t})).getOr(t)
Tv(e)
return n}
var Nv=function(e,t){return yv(e)&&t.container()===e?Sv(e,t):xv(e,t)}
var Ev=function(e,t){return t.container()===e.parentNode?kv(e,t):xv(e,t)}
var _v=function(e,t){return xl.isTextPosition(t)?Nv(e,t):Ev(e,t)}
var Tv=function(e){hv(e)&&Yo(e)&&(Go(e)?e.removeAttribute("data-mce-caret"):bv(e))
if(yv(e)){wv(e)
0===e.data.length&&bv(e)}}
var Av=qt().browser
var Rv=aa
var Dv=ia
var Ov=oa
var Bv="*[contentEditable=false],video,audio,embed,object"
var Pv=function(e,t,r){var n=qs(t.getBoundingClientRect(),r)
var a,o,i,u,f
if("BODY"===e.tagName){a=e.ownerDocument.documentElement
o=e.scrollLeft||a.scrollLeft
i=e.scrollTop||a.scrollTop}else{f=e.getBoundingClientRect()
o=e.scrollLeft-f.left
i=e.scrollTop-f.top}n.left+=o
n.right+=o
n.top+=i
n.bottom+=i
n.width=1
u=t.offsetWidth-t.clientWidth
if(u>0){r&&(u*=-1)
n.left+=u
n.right+=u}return n}
var Lv=function(e){var t=gs(yr.fromDom(e),Bv)
for(var r=0;r<t.length;r++){var n=t[r].dom
var a=n.previousSibling
if(ni(a)){var o=a.data
1===o.length?a.parentNode.removeChild(a):a.deleteData(o.length-1,1)}a=n.nextSibling
if(ri(a)){o=a.data
1===o.length?a.parentNode.removeChild(a):a.deleteData(0,1)}}}
var Iv=function(e,t,r,n){var a=jc(q.none())
var o,i
var u=vd(e)
var f=u.length>0?u:"p"
var c=function(e,n){var o,u
s()
if(Ov(n))return null
if(!r(n)){i=Jo(n,e)
u=n.ownerDocument.createRange()
if(Fv(i.nextSibling)){u.setStart(i,0)
u.setEnd(i,0)}else{u.setStart(i,1)
u.setEnd(i,1)}return u}i=ti(f,n,e)
o=Pv(t,n,e)
kc(i).css("top",o.top)
var c=kc('<div class="mce-visual-caret" data-mce-bogus="all"></div>').css(o).appendTo(t)[0]
a.set(q.some({caret:c,element:n,before:e}))
a.get().each((function(t){e&&kc(t.caret).addClass("mce-visual-caret-before")}))
l()
u=n.ownerDocument.createRange()
u.setStart(i,0)
u.setEnd(i,0)
return u}
var s=function(){Lv(t)
if(i){Tv(i)
i=null}a.get().each((function(e){kc(e.caret).remove()
a.set(q.none())}))
if(o){lo.clearInterval(o)
o=null}}
var l=function(){o=lo.setInterval((function(){n()?kc("div.mce-visual-caret",t).toggleClass("mce-visual-caret-hidden"):kc("div.mce-visual-caret",t).addClass("mce-visual-caret-hidden")}),500)}
var d=function(){a.get().each((function(e){var r=Pv(t,e.element,e.before)
kc(e.caret).css(qe({},r))}))}
var v=function(){return lo.clearInterval(o)}
var m=function(){return".mce-visual-caret {position: absolute;background-color: black;background-color: currentcolor;}.mce-visual-caret-hidden {display: none;}*[data-mce-caret] {position: absolute;left: -1000px;right: auto;top: 0;margin: 0;padding: 0;}"}
return{show:c,hide:s,getCss:m,reposition:d,destroy:v}}
var Mv=function(){return Av.isIE()||Av.isEdge()||Av.isFirefox()}
var Fv=function(e){return Rv(e)||Dv(e)}
var Uv=function(e){return Fv(e)||Xn(e)&&Mv()}
var zv=aa
var jv=ia
var Hv=Vn("display","block table table-cell table-caption list-item")
var Vv=Yo
var qv=Ko
var $v=jn
var Wv=pi
var Kv=function(e){return e>0}
var Xv=function(e){return e<0}
var Yv=function(e,t){var r
while(r=e(t))if(!qv(r))return r
return null}
var Gv=function(e,t,r,n,a){var o=new go(e,n)
var i=zv(e)||qv(e)
if(Xv(t)){if(i){e=Yv(o.prev.bind(o),true)
if(r(e))return e}while(e=Yv(o.prev.bind(o),a))if(r(e))return e}if(Kv(t)){if(i){e=Yv(o.next.bind(o),true)
if(r(e))return e}while(e=Yv(o.next.bind(o),a))if(r(e))return e}return null}
var Jv=function(e,t){while(e&&e!==t){if(Hv(e))return e
e=e.parentNode}return null}
var Qv=function(e,t,r){return Jv(e.container(),r)===Jv(t.container(),r)}
var Zv=function(e,t){if(!t)return null
var r=t.container()
var n=t.offset()
if(!$v(r))return null
return r.childNodes[n+e]}
var em=function(e,t){var r=t.ownerDocument.createRange()
if(e){r.setStartBefore(t)
r.setEndBefore(t)}else{r.setStartAfter(t)
r.setEndAfter(t)}return r}
var tm=function(e,t,r){return Jv(t,e)===Jv(r,e)}
var rm=function(e,t,r){var n,a
a=e?"previousSibling":"nextSibling"
while(r&&r!==t){n=r[a]
Vv(n)&&(n=n[a])
if(zv(n)||jv(n)){if(tm(t,n,r))return n
break}if(Wv(n))break
r=r.parentNode}return null}
var nm=B(em,true)
var am=B(em,false)
var om=function(e,t,r){var n,a,o
var i=B(rm,true,t)
var u=B(rm,false,t)
a=r.startContainer
var f=r.startOffset
if(Ko(a)){$v(a)||(a=a.parentNode)
o=a.getAttribute("data-mce-caret")
if("before"===o){n=a.nextSibling
if(Uv(n))return nm(n)}if("after"===o){n=a.previousSibling
if(Uv(n))return am(n)}}if(!r.collapsed)return r
if(Jn(a)){if(Vv(a)){if(1===e){n=u(a)
if(n)return nm(n)
n=i(a)
if(n)return am(n)}if(-1===e){n=i(a)
if(n)return am(n)
n=u(a)
if(n)return nm(n)}return r}if(ni(a)&&f>=a.data.length-1){if(1===e){n=u(a)
if(n)return nm(n)}return r}if(ri(a)&&f<=1){if(-1===e){n=i(a)
if(n)return am(n)}return r}if(f===a.data.length){n=u(a)
if(n)return nm(n)
return r}if(0===f){n=i(a)
if(n)return am(n)
return r}}return r}
var im=function(e,t){return q.from(Zv(e?0:-1,t)).filter(zv)}
var um=function(e,t,r){var n=om(e,t,r)
if(-1===e)return xl.fromRangeStart(n)
return xl.fromRangeEnd(n)}
var fm=function(e){return q.from(e.getNode()).map(yr.fromDom)}
var cm=function(e){return q.from(e.getNode(true)).map(yr.fromDom)}
var sm=function(e,t){while(t=e(t))if(t.isVisible())return t
return t}
var lm=function(e,t){var r=Qv(e,t)
if(!r&&ta(e.getNode()))return true
return r}
var dm;(function(e){e[e["Backwards"]=-1]="Backwards"
e[e["Forwards"]=1]="Forwards"})(dm||(dm={}))
var vm=aa
var mm=Jn
var pm=jn
var gm=ta
var hm=pi
var ym=Ci
var bm=wi
var Cm=function(e,t){var r=[]
while(e&&e!==t){r.push(e)
e=e.parentNode}return r}
var wm=function(e,t){if(e.hasChildNodes()&&t<e.childNodes.length)return e.childNodes[t]
return null}
var xm=function(e,t){if(Kv(e)){if(hm(t.previousSibling)&&!mm(t.previousSibling))return xl.before(t)
if(mm(t))return xl(t,0)}if(Xv(e)){if(hm(t.nextSibling)&&!mm(t.nextSibling))return xl.after(t)
if(mm(t))return xl(t,t.data.length)}if(Xv(e)){if(gm(t))return xl.before(t)
return xl.after(t)}return xl.before(t)}
var Sm=function(e,t){var r=t.nextSibling
return r&&hm(r)?mm(r)?xl(r,0):xl.before(r):km(dm.Forwards,xl.after(t),e)}
var km=function(e,t,r){var n,a,o
var i
if(!pm(r)||!t)return null
if(t.isEqual(xl.after(r))&&r.lastChild){i=xl.after(r.lastChild)
if(Xv(e)&&hm(r.lastChild)&&pm(r.lastChild))return gm(r.lastChild)?xl.before(r.lastChild):i}else i=t
var u=i.container()
var f=i.offset()
if(mm(u)){if(Xv(e)&&f>0)return xl(u,--f)
if(Kv(e)&&f<u.length)return xl(u,++f)
n=u}else{if(Xv(e)&&f>0){a=wm(u,f-1)
if(hm(a)){if(!ym(a)){o=Gv(a,e,bm,a)
if(o){if(mm(o))return xl(o,o.data.length)
return xl.after(o)}}if(mm(a))return xl(a,a.data.length)
return xl.before(a)}}if(Kv(e)&&f<u.childNodes.length){a=wm(u,f)
if(hm(a)){if(gm(a))return Sm(r,a)
if(!ym(a)){o=Gv(a,e,bm,a)
if(o){if(mm(o))return xl(o,0)
return xl.before(o)}}if(mm(a))return xl(a,0)
return xl.after(a)}}n=a||i.getNode()}if(Kv(e)&&i.isAtEnd()||Xv(e)&&i.isAtStart()){n=Gv(n,e,U,r,true)
if(bm(n,r))return xm(e,n)}a=Gv(n,e,bm,r)
var c=Ve(re(Cm(u,r),vm))
if(c&&(!a||!c.contains(a))){i=Kv(e)?xl.after(c):xl.before(c)
return i}if(a)return xm(e,a)
return null}
var Nm=function(e){return{next:function(t){return km(dm.Forwards,t,e)},prev:function(t){return km(dm.Backwards,t,e)}}}
var Em=function(e,t,r){var n=e?xl.before(r):xl.after(r)
return Bm(e,t,n)}
var _m=function(e){return ta(e)?xl.before(e):xl.after(e)}
var Tm=function(e){return xl.isTextPosition(e)?0===e.offset():pi(e.getNode())}
var Am=function(e){if(xl.isTextPosition(e)){var t=e.container()
return e.offset()===t.data.length}return pi(e.getNode(true))}
var Rm=function(e,t){return!xl.isTextPosition(e)&&!xl.isTextPosition(t)&&e.getNode()===t.getNode(true)}
var Dm=function(e){return!xl.isTextPosition(e)&&ta(e.getNode())}
var Om=function(e,t,r){return e?!Rm(t,r)&&!Dm(t)&&Am(t)&&Tm(r):!Rm(r,t)&&Tm(t)&&Am(r)}
var Bm=function(e,t,r){var n=Nm(t)
return q.from(e?n.next(r):n.prev(r))}
var Pm=function(e,t,r){return Bm(e,t,r).bind((function(n){return Qv(r,n,t)&&Om(e,r,n)?Bm(e,t,n):q.some(n)}))}
var Lm=function(e,t,r,n){return Pm(e,t,r).bind((function(r){return n(r)?Lm(e,t,r,n):q.some(r)}))}
var Im=function(e,t){var r=e?t.firstChild:t.lastChild
return Jn(r)?q.some(xl(r,e?0:r.data.length)):r?pi(r)?q.some(e?xl.before(r):_m(r)):Em(e,t,r):q.none()}
var Mm=B(Bm,true)
var Fm=B(Bm,false)
var Um=B(Im,true)
var zm=B(Im,false)
var jm="_mce_caret"
var Hm=function(e){return jn(e)&&e.id===jm}
var Vm=function(e,t){while(t&&t!==e){if(t.id===jm)return t
t=t.parentNode}return null}
var qm=function(e){return y(e.start)}
var $m=function(e){return e.hasOwnProperty("rng")}
var Wm=function(e){return e.hasOwnProperty("id")}
var Km=function(e){return e.hasOwnProperty("name")}
var Xm=function(e){return dr.isArray(e.start)}
var Ym=function(e,t){jn(t)&&e.isBlock(t)&&!t.innerHTML&&!Zt.ie&&(t.innerHTML='<br data-mce-bogus="1" />')
return t}
var Gm=function(e,t){var r
var n=e.createRng()
r=zl(e.getRoot(),t.start)
n.setStart(r.container(),r.offset())
r=zl(e.getRoot(),t.end)
n.setEnd(r.container(),r.offset())
return n}
var Jm=function(e,t){var r=e.ownerDocument.createTextNode(Ho)
e.appendChild(r)
t.setStart(r,0)
t.setEnd(r,0)}
var Qm=function(e){return false===e.hasChildNodes()}
var Zm=function(e,t){return zm(e).fold(F,(function(e){t.setStart(e.container(),e.offset())
t.setEnd(e.container(),e.offset())
return true}))}
var ep=function(e,t,r){if(Qm(t)&&Vm(e,t)){Jm(t,r)
return true}return false}
var tp=function(e,t,r,n){var a=r[t?"start":"end"]
var o,i,u,f
var c=e.getRoot()
if(a){u=a[0]
for(i=c,o=a.length-1;o>=1;o--){f=i.childNodes
if(ep(c,i,n))return true
if(a[o]>f.length-1){if(ep(c,i,n))return true
return Zm(i,n)}i=f[a[o]]}3===i.nodeType&&(u=Math.min(a[0],i.nodeValue.length))
1===i.nodeType&&(u=Math.min(a[0],i.childNodes.length))
t?n.setStart(i,u):n.setEnd(i,u)}return true}
var rp=function(e){return Jn(e)&&e.data.length>0}
var np=function(e,t,r){var n,a,o,i,u=e.get(r.id+"_"+t)
var f=r.keep
var c,s
if(u){n=u.parentNode
if("start"===t){if(f)if(u.hasChildNodes()){n=u.firstChild
a=1}else if(rp(u.nextSibling)){n=u.nextSibling
a=0}else if(rp(u.previousSibling)){n=u.previousSibling
a=u.previousSibling.data.length}else{n=u.parentNode
a=e.nodeIndex(u)+1}else a=e.nodeIndex(u)
c=n
s=a}else{if(f)if(u.hasChildNodes()){n=u.firstChild
a=1}else if(rp(u.previousSibling)){n=u.previousSibling
a=u.previousSibling.data.length}else{n=u.parentNode
a=e.nodeIndex(u)}else a=e.nodeIndex(u)
c=n
s=a}if(!f){i=u.previousSibling
o=u.nextSibling
dr.each(dr.grep(u.childNodes),(function(e){Jn(e)&&(e.nodeValue=e.nodeValue.replace(/\uFEFF/g,""))}))
while(u=e.get(r.id+"_"+t))e.remove(u,true)
if(i&&o&&i.nodeType===o.nodeType&&Jn(i)&&!Zt.opera){a=i.nodeValue.length
i.appendData(o.nodeValue)
e.remove(o)
c=i
s=a}}return q.some(xl(c,s))}return q.none()}
var ap=function(e,t){var r=e.createRng()
return tp(e,true,t,r)&&tp(e,false,t,r)?q.some(r):q.none()}
var op=function(e,t){var r=np(e,"start",t)
var n=np(e,"end",t)
return Us(r,n.or(r),(function(t,r){var n=e.createRng()
n.setStart(Ym(e,t.container()),t.offset())
n.setEnd(Ym(e,r.container()),r.offset())
return n}))}
var ip=function(e,t){return q.from(e.select(t.name)[t.index]).map((function(t){var r=e.createRng()
r.selectNode(t)
return r}))}
var up=function(e,t){var r=e.dom
if(t){if(Xm(t))return ap(r,t)
if(qm(t))return q.some(Gm(r,t))
if(Wm(t))return op(r,t)
if(Km(t))return ip(r,t)
if($m(t))return q.some(t.rng)}return q.none()}
var fp=function(e,t,r){return td(e,t,r)}
var cp=function(e,t){up(e,t).each((function(t){e.setRng(t)}))}
var sp=function(e){return jn(e)&&"SPAN"===e.tagName&&"bookmark"===e.getAttribute("data-mce-type")}
var lp=function(e){return function(t){return e===t}}
var dp=lp(Uo)
var vp=function(e){return""!==e&&-1!==" \f\n\r\t\v".indexOf(e)}
var mp=function(e){return!vp(e)&&!dp(e)}
var pp=function(e){return!!e.nodeType}
var gp=function(e){return e&&/^(IMG)$/.test(e.nodeName)}
var hp=function(e,t,r){var n=r.startOffset
var a,o,i,u=r.startContainer
if(r.startContainer===r.endContainer&&gp(r.startContainer.childNodes[r.startOffset]))return
if(1===u.nodeType){i=u.childNodes
if(n<i.length){u=i[n]
a=new go(u,e.getParent(u,e.isBlock))}else{u=i[i.length-1]
a=new go(u,e.getParent(u,e.isBlock))
a.next(true)}for(o=a.current();o;o=a.next())if(3===o.nodeType&&!wp(o)){r.setStart(o,0)
t.setRng(r)
return}}}
var yp=function(e,t,r){if(e){var n=t?"nextSibling":"previousSibling"
for(e=r?e:e[n];e;e=e[n])if(1===e.nodeType||!wp(e))return e}}
var bp=function(e,t){pp(t)&&(t=t.nodeName)
return!!e.schema.getTextBlockElements()[t.toLowerCase()]}
var Cp=function(e,t,r){return e.schema.isValidChild(t,r)}
var wp=function(e,t){void 0===t&&(t=false)
if(N(e)&&Jn(e)){var r=t?e.data.replace(/ /g," "):e.data
return Si(r)}return false}
var xp=function(e){return N(e)&&Jn(e)&&0===e.length}
var Sp=function(e,t){"string"!==typeof e?e=e(t):t&&(e=e.replace(/%(\w+)/g,(function(e,r){return t[r]||e})))
return e}
var kp=function(e,t){e=e||""
t=t||""
e=""+(e.nodeName||e)
t=""+(t.nodeName||t)
return e.toLowerCase()===t.toLowerCase()}
var Np=function(e,t,r){"color"!==r&&"backgroundColor"!==r||(t=e.toHex(t))
"fontWeight"===r&&700===t&&(t="bold")
"fontFamily"===r&&(t=t.replace(/[\'\"]/g,"").replace(/,\s+/g,","))
return""+t}
var Ep=function(e,t,r){return Np(e,e.getStyle(t,r),r)}
var _p=function(e,t){var r
e.getParent(t,(function(t){r=e.getStyle(t,"text-decoration")
return r&&"none"!==r}))
return r}
var Tp=function(e,t,r){return e.getParents(t,r,e.getRoot())}
var Ap=function(e,t){var r=function(e){var t=function(e){return e.length>1&&"%"===e.charAt(0)}
return J(["styles","attributes"],(function(r){return De(e,r).exists((function(e){var r=C(e)?e:Re(e)
return J(r,t)}))}))}
return J(e.formatter.get(t),r)}
var Rp=function(e,t,r){var n=["inline","block","selector","attributes","styles","classes"]
var a=function(e){return Te(e,(function(e,t){return J(n,(function(e){return e===t}))}))}
return J(e.formatter.get(t),(function(t){var n=a(t)
return J(e.formatter.get(r),(function(e){var t=a(e)
return Pe(n,t)}))}))}
var Dp=function(e){return Be(e,"block")}
var Op=function(e){return Be(e,"selector")}
var Bp=function(e){return Be(e,"inline")}
var Pp=function(e,t){return J(t.childNodes,e.isBlock)}
var Lp=sp
var Ip=Tp
var Mp=wp
var Fp=bp
var Up=function(e){return ta(e)&&e.getAttribute("data-mce-bogus")&&!e.nextSibling}
var zp=function(e,t){var r=t
while(r){if(jn(r)&&e.getContentEditable(r))return"false"===e.getContentEditable(r)?r:t
r=r.parentNode}return t}
var jp=function(e,t,r,n){var a=t.data
for(var o=r;e?o>=0:o<a.length;e?o--:o++)if(n(a.charAt(o)))return e?o+1:o
return-1}
var Hp=function(e,t,r){return jp(e,t,r,(function(e){return dp(e)||vp(e)}))}
var Vp=function(e,t,r){return jp(e,t,r,mp)}
var qp=function(e,t,r,n,a,o){var i
var u=e.getParent(r,e.isBlock)||t
var f=function(t,r,n){var o=Ms(e)
var f=a?o.backwards:o.forwards
return q.from(f(t,r,(function(e,t){if(Lp(e.parentNode))return-1
i=e
return n(a,e,t)}),u))}
var c=f(r,n,Hp)
return c.bind((function(e){return o?f(e.container,e.offset+(a?-1:0),Vp):q.some(e)})).orThunk((function(){return i?q.some({container:i,offset:a?0:i.length}):q.none()}))}
var $p=function(e,t,r,n,a){Jn(n)&&0===n.nodeValue.length&&n[a]&&(n=n[a])
var o=Ip(e,n)
for(var i=0;i<o.length;i++)for(var u=0;u<t.length;u++){var f=t[u]
if("collapsed"in f&&f.collapsed!==r.collapsed)continue
if(e.is(o[i],f.selector))return o[i]}return n}
var Wp=function(e,t,r,n){var a
var o=e.dom
var i=o.getRoot()
t[0].wrapper||(a=o.getParent(r,t[0].block,i))
if(!a){var u=o.getParent(r,"LI,TD,TH")
a=o.getParent(Jn(r)?r.parentNode:r,(function(t){return t!==i&&Fp(e,t)}),u)}a&&t[0].wrapper&&(a=Ip(o,a,"ul,ol").reverse()[0]||a)
if(!a){a=r
while(a[n]&&!o.isBlock(a[n])){a=a[n]
if(kp(a,"br"))break}}return a||r}
var Kp=function(e,t,r,n){var a=r.parentNode
return!N(r[n])&&(!(a!==t&&!k(a)&&!e.isBlock(a))||Kp(e,t,a,n))}
var Xp=function(e,t,r,n,a){var o=r
var i
var u=a?"previousSibling":"nextSibling"
var f=e.getRoot()
if(Jn(r)&&!Mp(r)&&(a?n>0:n<r.data.length))return r
while(true){if(!t[0].block_expand&&e.isBlock(o))return o
for(i=o[u];i;i=i[u]){var c=Jn(i)&&!Kp(e,f,i,u)
if(!Lp(i)&&!Up(i)&&!Mp(i,c))return o}if(o===f||o.parentNode===f){r=o
break}o=o.parentNode}return r}
var Yp=function(e){return Lp(e.parentNode)||Lp(e)}
var Gp=function(e,t,r,n){void 0===n&&(n=false)
var a=t.startContainer,o=t.startOffset,i=t.endContainer,u=t.endOffset
var f=e.dom
if(jn(a)&&a.hasChildNodes()){a=Js(a,o)
Jn(a)&&(o=0)}if(jn(i)&&i.hasChildNodes()){i=Js(i,t.collapsed?u:u-1)
Jn(i)&&(u=i.nodeValue.length)}a=zp(f,a)
i=zp(f,i)
if(Yp(a)){a=Lp(a)?a:a.parentNode
a=t.collapsed?a.previousSibling||a:a.nextSibling||a
Jn(a)&&(o=t.collapsed?a.length:0)}if(Yp(i)){i=Lp(i)?i:i.parentNode
i=t.collapsed?i.nextSibling||i:i.previousSibling||i
Jn(i)&&(u=t.collapsed?0:i.length)}if(t.collapsed){var c=qp(f,e.getBody(),a,o,true,n)
c.each((function(e){var t=e.container,r=e.offset
a=t
o=r}))
var s=qp(f,e.getBody(),i,u,false,n)
s.each((function(e){var t=e.container,r=e.offset
i=t
u=r}))}if(r[0].inline||r[0].block_expand){r[0].inline&&Jn(a)&&0!==o||(a=Xp(f,r,a,o,true))
r[0].inline&&Jn(i)&&u!==i.nodeValue.length||(i=Xp(f,r,i,u,false))}if(r[0].selector&&false!==r[0].expand&&!r[0].inline){a=$p(f,r,t,a,"previousSibling")
i=$p(f,r,t,i,"nextSibling")}if(r[0].block||r[0].selector){a=Wp(e,r,a,"previousSibling")
i=Wp(e,r,i,"nextSibling")
if(r[0].block){f.isBlock(a)||(a=Xp(f,r,a,o,true))
f.isBlock(i)||(i=Xp(f,r,i,u,false))}}if(jn(a)){o=f.nodeIndex(a)
a=a.parentNode}if(jn(i)){u=f.nodeIndex(i)+1
i=i.parentNode}return{startContainer:a,startOffset:o,endContainer:i,endOffset:u}}
var Jp=function(e,t){var r=e.childNodes
t>=r.length?t=r.length-1:t<0&&(t=0)
return r[t]||e}
var Qp=function(e,t){return Jp(e,t-1)}
var Zp=function(e,t,r){var n=t.startContainer
var a=t.startOffset
var o=t.endContainer
var i=t.endOffset
var u=function(e){var t
t=e[0]
3===t.nodeType&&t===n&&a>=t.nodeValue.length&&e.splice(0,1)
t=e[e.length-1]
0===i&&e.length>0&&t===o&&3===t.nodeType&&e.splice(e.length-1,1)
return e}
var f=function(e,t,r){var n=[]
for(;e&&e!==r;e=e[t])n.push(e)
return n}
var c=function(e,t){do{if(e.parentNode===t)return e
e=e.parentNode}while(e)}
var s=function(e,t,n){var a=n?"nextSibling":"previousSibling"
for(var o=e,i=o.parentNode;o&&o!==t;o=i){i=o.parentNode
var c=f(o===e?o:o[a],a)
if(c.length){n||c.reverse()
r(u(c))}}}
1===n.nodeType&&n.hasChildNodes()&&(n=Jp(n,a))
1===o.nodeType&&o.hasChildNodes()&&(o=Qp(o,i))
if(n===o)return r(u([n]))
var l=e.findCommonAncestor(n,o)
for(var d=n;d;d=d.parentNode){if(d===o)return s(n,l,true)
if(d===l)break}for(d=o;d;d=d.parentNode){if(d===n)return s(o,l)
if(d===l)break}var v=c(n,l)||n
var m=c(o,l)||o
s(n,v,true)
var p=f(v===n?v:v.nextSibling,"nextSibling",m===o?m.nextSibling:m)
p.length&&r(u(p))
s(o,m)}
var eg=function(e){var t=[]
if(e)for(var r=0;r<e.rangeCount;r++)t.push(e.getRangeAt(r))
return t}
var tg=function(e){return ce(e,(function(e){var t=Gs(e)
return t?[yr.fromDom(t)]:[]}))}
var rg=function(e){return eg(e).length>1}
var ng=function(e){return re(tg(e),Lo)}
var ag=function(e){return gs(e,"td[data-mce-selected],th[data-mce-selected]")}
var og=function(e,t){var r=ag(t)
return r.length>0?r:ng(e)}
var ig=function(e){return og(eg(e.selection.getSel()),yr.fromDom(e.getBody()))}
var ug=function(e){var t=e.startContainer,r=e.startOffset
return Jn(t)?0===r?q.some(yr.fromDom(t)):q.none():q.from(t.childNodes[r]).map(yr.fromDom)}
var fg=function(e){var t=e.endContainer,r=e.endOffset
return Jn(t)?r===t.data.length?q.some(yr.fromDom(t)):q.none():q.from(t.childNodes[r-1]).map(yr.fromDom)}
var cg=function(e){return rn(e).fold(D([e]),(function(t){return[e].concat(cg(t))}))}
var sg=function(e){return nn(e).fold(D([e]),(function(t){return"br"===Lr(t)?Gr(t).map((function(t){return[e].concat(sg(t))})).getOr([]):[e].concat(sg(t))}))}
var lg=function(e,t){return Us(ug(t),fg(t),(function(t,r){var n=ie(cg(e),B(Dr,t))
var a=ie(sg(e),B(Dr,r))
return n.isSome()&&a.isSome()})).getOr(false)}
var dg=function(e,t,r,n){var a=r,o=new go(r,a)
var i=Te(e.schema.getMoveCaretBeforeOnEnterElements(),(function(e,t){return!G(["td","th","table"],t.toLowerCase())}))
do{if(Jn(r)&&0!==dr.trim(r.nodeValue).length){n?t.setStart(r,0):t.setEnd(r,r.nodeValue.length)
return}if(i[r.nodeName]){n?t.setStartBefore(r):"BR"===r.nodeName?t.setEndBefore(r):t.setEndAfter(r)
return}}while(r=n?o.next():o.prev())
"BODY"===a.nodeName&&(n?t.setStart(a,0):t.setEnd(a,a.childNodes.length))}
var vg=function(e){var t=e.selection.getSel()
return t&&t.rangeCount>0}
var mg=function(e,t){var r=ig(e)
r.length>0?Z(r,(function(r){var n=r.dom
var a=e.dom.createRng()
a.setStartBefore(n)
a.setEndAfter(n)
t(a,true)})):t(e.selection.getRng(),false)}
var pg=function(e,t,r){var n=ed(e,t)
r(n)
e.moveToBookmark(n)}
var gg=function(e,t){var r=function(r){if(!e(r))throw new Error("Can only get "+t+" value of a "+t+" node")
return n(r).getOr("")}
var n=function(t){return e(t)?q.from(t.dom.nodeValue):q.none()}
var a=function(r,n){if(!e(r))throw new Error("Can only set raw "+t+" value of a "+t+" node")
r.dom.nodeValue=n}
return{get:r,getOption:n,set:a}}
var hg=gg(zr,"text")
var yg=function(e){return hg.get(e)}
var bg=function(e){return zr(e)&&yg(e)===Ho}
var Cg=function(e,t,r,n){return Kr(t).fold((function(){return"skipping"}),(function(a){return"br"===n||bg(t)?"valid":ws(t)?"existing":Hm(t.dom)?"caret":Cp(e,r,n)&&Cp(e,Lr(a),r)?"valid":"invalid-child"}))}
var wg=function(e,t){var r=Gp(e,t,[{inline:true}])
t.setStart(r.startContainer,r.startOffset)
t.setEnd(r.endContainer,r.endOffset)
e.selection.setRng(t)}
var xg=function(e,t,r,n){var a=t.uid,o=void 0===a?Ts("mce-annotation"):a,i=$e(t,["uid"])
var u=yr.fromTag("span",e)
ls(u,hs())
ca(u,""+bs(),o)
ca(u,""+ys(),r)
var f=n(o,i),c=f.attributes,s=void 0===c?{}:c,l=f.classes,d=void 0===l?[]:l
sa(u,s)
As(u,d)
return u}
var Sg=function(e,t,r,n,a){var o=[]
var i=xg(e.getDoc(),a,r,n)
var u=jc(q.none())
var f=function(){u.set(q.none())}
var c=function(){return u.get().getOrThunk((function(){var e=Ps(i)
o.push(e)
u.set(q.some(e))
return e}))}
var s=function(e){Z(e,l)}
var l=function(t){var r=Cg(e,t,"span",Lr(t))
switch(r){case"invalid-child":f()
var n=en(t)
s(n)
f()
break
case"valid":var a=c()
Cn(t,a)}}
var d=function(e){var t=Q(e,yr.fromDom)
s(t)}
Zp(e.dom,t,(function(e){f()
d(e)}))
return o}
var kg=function(e,t,r,n){e.undoManager.transact((function(){var a=e.selection
var o=a.getRng()
var i=ig(e).length>0
o.collapsed&&!i&&wg(e,o)
if(a.getRng().collapsed&&!i){var u=xg(e.getDoc(),n,t,r.decorate)
Os(u,Uo)
a.getRng().insertNode(u.dom)
a.select(u.dom)}else pg(a,false,(function(){mg(e,(function(a){Sg(e,a,t,r.decorate,n)}))}))}))}
var Ng=function(e){var t=Es()
Ns(e,t)
var r=ks(e)
return{register:function(e,r){t.register(e,r)},annotate:function(r,n){t.lookup(r).each((function(t){kg(e,r,t,n)}))},annotationChanged:function(e,t){r.addListener(e,t)},remove:function(t){Cs(e,q.some(t)).each((function(e){var t=e.elements
Z(t,Nn)}))},getAll:function(t){var r=Ss(e,t)
return Se(r,(function(e){return Q(e,(function(e){return e.dom}))}))}}}
var Eg=function(e){return{getBookmark:B(fp,e),moveToBookmark:B(cp,e)}}
Eg.isBookmarkNode=sp
var _g=function(e,t){while(t&&t!==e){if(na(t)||aa(t))return t
t=t.parentNode}return null}
var Tg=function(e,t,r){if(r.collapsed)return false
if(Zt.browser.isIE()&&r.startOffset===r.endOffset-1&&r.startContainer===r.endContainer){var n=r.startContainer.childNodes[r.startOffset]
if(jn(n))return J(n.getClientRects(),(function(r){return Ys(r,e,t)}))}return J(r.getClientRects(),(function(r){return Ys(r,e,t)}))}
var Ag=function(e,t){return e.fire("PreProcess",t)}
var Rg=function(e,t){return e.fire("PostProcess",t)}
var Dg=function(e){return e.fire("remove")}
var Og=function(e){return e.fire("detach")}
var Bg=function(e,t){return e.fire("SwitchMode",{mode:t})}
var Pg=function(e,t,r,n,a){e.fire("ObjectResizeStart",{target:t,width:r,height:n,origin:a})}
var Lg=function(e,t,r,n,a){e.fire("ObjectResized",{target:t,width:r,height:n,origin:a})}
var Ig=function(e){return e.fire("PreInit")}
var Mg=function(e){return e.fire("PostRender")}
var Fg=function(e){return e.fire("Init")}
var Ug=function(e,t){return e.fire("PlaceholderToggle",{state:t})}
var zg=function(e,t,r){return e.fire(t,r)}
var jg={BACKSPACE:8,DELETE:46,DOWN:40,ENTER:13,LEFT:37,RIGHT:39,SPACEBAR:32,TAB:9,UP:38,PAGE_UP:33,PAGE_DOWN:34,END:35,HOME:36,modifierPressed:function(e){return e.shiftKey||e.ctrlKey||e.altKey||jg.metaKeyPressed(e)},metaKeyPressed:function(e){return Zt.mac?e.metaKey:e.ctrlKey&&!e.altKey}}
var Hg=aa
var Vg=function(e,t){var r="data-mce-selected"
var n=t.dom,a=dr.each
var o,i,u,f,c
var s,l,d,v,m,p,g,h
var y,b
var C=t.getDoc(),w=document
var x=Math.abs,S=Math.round,k=t.getBody()
var E,_
var T={nw:[0,0,-1,-1],ne:[1,0,1,-1],se:[1,1,1,1],sw:[0,1,-1,1]}
var A=function(e){return e&&("IMG"===e.nodeName||t.dom.is(e,"figure.image"))}
var R=function(e){return ia(e)||n.hasClass(e,"mce-preview-object")}
var D=function(e,t){if("longpress"===e.type||0===e.type.indexOf("touch")){var r=e.touches[0]
return A(e.target)&&!Tg(r.clientX,r.clientY,t)}return A(e.target)&&!Tg(e.clientX,e.clientY,t)}
var O=function(e){var r=e.target
D(e,t.selection.getRng())&&!e.isDefaultPrevented()&&t.selection.select(r)}
var B=function(e){return n.is(e,"figure.image")?[e.querySelector("img")]:n.hasClass(e,"mce-preview-object")&&N(e.firstElementChild)?[e,e.firstElementChild]:[e]}
var P=function(e){var r=jd(t)
if(!r)return false
if("false"===e.getAttribute("data-mce-resize"))return false
if(e===t.getBody())return false
return n.hasClass(e,"mce-preview-object")?_r(yr.fromDom(e.firstElementChild),r):_r(yr.fromDom(e),r)}
var L=function(e){return R(e)?n.create("img",{src:Zt.transparentSrc}):e.cloneNode(true)}
var I=function(e,r,a){if(N(a)){var o=B(e)
Z(o,(function(e){e.style[r]||!t.schema.isValid(e.nodeName.toLowerCase(),r)?n.setStyle(e,r,a):n.setAttrib(e,r,""+a)}))}}
var M=function(e,t,r){I(e,"width",t)
I(e,"height",r)}
var F=function(e){var r,a,c
var C,w
r=e.screenX-s
a=e.screenY-l
y=r*f[2]+m
b=a*f[3]+p
y=y<5?5:y
b=b<5?5:b
c=(A(o)||R(o))&&false!==Hd(t)?!jg.modifierPressed(e):jg.modifierPressed(e)
if(c)if(x(r)>x(a)){b=S(y*g)
y=S(b/g)}else{y=S(b/g)
b=S(y*g)}M(i,y,b)
C=f.startPos.x+r
w=f.startPos.y+a
C=C>0?C:0
w=w>0?w:0
n.setStyles(u,{left:C,top:w,display:"block"})
u.innerHTML=y+" &times; "+b
f[2]<0&&i.clientWidth<=y&&n.setStyle(i,"left",d+(m-y))
f[3]<0&&i.clientHeight<=b&&n.setStyle(i,"top",v+(p-b))
r=k.scrollWidth-E
a=k.scrollHeight-_
r+a!==0&&n.setStyles(u,{left:C-r,top:w-a})
if(!h){Pg(t,o,m,p,"corner-"+f.name)
h=true}}
var U=function(){var e=h
h=false
if(e){I(o,"width",y)
I(o,"height",b)}n.unbind(C,"mousemove",F)
n.unbind(C,"mouseup",U)
if(w!==C){n.unbind(w,"mousemove",F)
n.unbind(w,"mouseup",U)}n.remove(i)
n.remove(u)
n.remove(c)
z(o)
if(e){Lg(t,o,y,b,"corner-"+f.name)
n.setAttrib(o,"style",n.getAttrib(o,"style"))}t.nodeChanged()}
var z=function(e){q()
var d=n.getPos(e,k)
var v=d.x
var h=d.y
var x=e.getBoundingClientRect()
var S=x.width||x.right-x.left
var N=x.height||x.bottom-x.top
if(o!==e){j()
o=e
y=b=0}var A=t.fire("ObjectSelected",{target:e})
var R=n.getAttrib(o,r,"1")
P(e)&&!A.isDefaultPrevented()?a(T,(function(e,t){var a
var d=function(a){var d=B(o)[0]
s=a.screenX
l=a.screenY
m=d.clientWidth
p=d.clientHeight
g=p/m
f=e
f.name=t
f.startPos={x:S*e[0]+v,y:N*e[1]+h}
E=k.scrollWidth
_=k.scrollHeight
c=n.add(k,"div",{class:"mce-resize-backdrop"})
n.setStyles(c,{position:"fixed",left:"0",top:"0",width:"100%",height:"100%"})
i=L(o)
n.addClass(i,"mce-clonedresizable")
n.setAttrib(i,"data-mce-bogus","all")
i.contentEditable="false"
n.setStyles(i,{left:v,top:h,margin:0})
M(i,S,N)
i.removeAttribute(r)
k.appendChild(i)
n.bind(C,"mousemove",F)
n.bind(C,"mouseup",U)
if(w!==C){n.bind(w,"mousemove",F)
n.bind(w,"mouseup",U)}u=n.add(k,"div",{class:"mce-resize-helper","data-mce-bogus":"all"},m+" &times; "+p)}
a=n.get("mceResizeHandle"+t)
a&&n.remove(a)
a=n.add(k,"div",{id:"mceResizeHandle"+t,"data-mce-bogus":"all",class:"mce-resizehandle",unselectable:true,style:"cursor:"+t+"-resize; margin:0; padding:0"})
11===Zt.ie&&(a.contentEditable=false)
n.bind(a,"mousedown",(function(e){e.stopImmediatePropagation()
e.preventDefault()
d(e)}))
e.elm=a
n.setStyles(a,{left:S*e[0]+v-a.offsetWidth/2,top:N*e[1]+h-a.offsetHeight/2})})):j()
n.getAttrib(o,r)||o.setAttribute(r,R)}
var j=function(){q()
o&&o.removeAttribute(r)
xe(T,(function(e,t){var r=n.get("mceResizeHandle"+t)
if(r){n.unbind(r)
n.remove(r)}}))}
var H=function(o){var i,u
var f=function(e,t){if(e)do{if(e===t)return true}while(e=e.parentNode)}
if(h||t.removed)return
a(n.select("img[data-mce-selected],hr[data-mce-selected]"),(function(e){e.removeAttribute(r)}))
u="mousedown"===o.type?o.target:e.getNode()
u=n.$(u).closest("table,img,figure.image,hr,video,span.mce-preview-object")[0]
if(f(u,k)){$()
i=e.getStart(true)
if(f(i,u)&&f(e.getEnd(true),u)){z(u)
return}}j()}
var V=function(e){return Hg(_g(t.getBody(),e))}
var q=function(){xe(T,(function(e){if(e.elm){n.unbind(e.elm)
delete e.elm}}))}
var $=function(){try{t.getDoc().execCommand("enableObjectResizing",false,"false")}catch(e){}}
t.on("init",(function(){$()
if(Zt.browser.isIE()||Zt.browser.isEdge()){t.on("mousedown click",(function(e){var r=e.target,n=r.nodeName
if(!h&&/^(TABLE|IMG|HR)$/.test(n)&&!V(r)){2!==e.button&&t.selection.select(r,"TABLE"===n)
"mousedown"===e.type&&t.nodeChanged()}}))
var e=function(e){var r=function(e){lo.setEditorTimeout(t,(function(){return t.selection.select(e)}))}
if(V(e.target)||ia(e.target)){e.preventDefault()
r(e.target)
return}if(/^(TABLE|IMG|HR)$/.test(e.target.nodeName)){e.preventDefault()
"IMG"===e.target.tagName&&r(e.target)}}
n.bind(k,"mscontrolselect",e)
t.on("remove",(function(){return n.unbind(k,"mscontrolselect",e)}))}var r=lo.throttle((function(e){t.composing||H(e)}))
t.on("nodechange ResizeEditor ResizeWindow ResizeContent drop FullscreenStateChanged",r)
t.on("keyup compositionend",(function(e){o&&"TABLE"===o.nodeName&&r(e)}))
t.on("hide blur",j)
t.on("contextmenu longpress",O,true)}))
t.on("remove",q)
var W=function(){o=i=c=null}
return{isResizable:P,showResizeRect:z,hideResizeRect:j,updateResizeRect:H,destroy:W}}
var qg=function(e){return na(e)||aa(e)}
var $g=function(e,t,r){while(e&&e!==t){if(r(e))return e
e=e.parentNode}return null}
var Wg=function(e,t,r){var n
var a=r.elementFromPoint(e,t)
var o=r.body.createTextRange()
a&&"HTML"!==a.tagName||(a=r.body)
o.moveToElementText(a)
n=dr.toArray(o.getClientRects())
n=n.sort((function(e,r){e=Math.abs(Math.max(e.top-t,e.bottom-t))
r=Math.abs(Math.max(r.top-t,r.bottom-t))
return e-r}))
if(n.length>0){t=(n[0].bottom+n[0].top)/2
try{o.moveToPoint(e,t)
o.collapse(true)
return o}catch(e){}}return null}
var Kg=function(e,t){var r=e&&e.parentElement?e.parentElement():null
return aa($g(r,t,qg))?null:e}
var Xg=function(e,t,r){var n,a
var o=r
if(o.caretPositionFromPoint){a=o.caretPositionFromPoint(e,t)
if(a){n=r.createRange()
n.setStart(a.offsetNode,a.offset)
n.collapse(true)}}else if(r.caretRangeFromPoint)n=r.caretRangeFromPoint(e,t)
else if(o.body.createTextRange){n=o.body.createTextRange()
try{n.moveToPoint(e,t)
n.collapse(true)}catch(a){n=Wg(e,t,r)}return Kg(n,r.body)}return n}
var Yg=function(e,t){return e&&t&&e.startContainer===t.startContainer&&e.startOffset===t.startOffset&&e.endContainer===t.endContainer&&e.endOffset===t.endOffset}
var Gg=function(e,t,r){while(e&&e!==t){if(r(e))return e
e=e.parentNode}return null}
var Jg=function(e,t,r){return null!==Gg(e,t,r)}
var Qg=function(e,t,r){return Jg(e,t,(function(e){return e.nodeName===r}))}
var Zg=function(e){return e&&"TABLE"===e.nodeName}
var eh=function(e){return e&&/^(TD|TH|CAPTION)$/.test(e.nodeName)}
var th=function(e,t){return Yo(e)&&false===Jg(e,t,Hm)}
var rh=function(e,t,r){var n=new go(t,e.getParent(t.parentNode,e.isBlock)||e.getRoot())
while(t=n[r?"prev":"next"]())if(ta(t))return true}
var nh=function(e,t){return e.previousSibling&&e.previousSibling.nodeName===t}
var ah=function(e,t){while(t&&t!==e){if(aa(t))return true
t=t.parentNode}return false}
var oh=function(e,t,r,n,a){var o
var i=e.getRoot()
var u
var f=e.schema.getNonEmptyElements()
var c=e.getParent(a.parentNode,e.isBlock)||i
if(n&&ta(a)&&t&&e.isEmpty(c))return q.some(xl(a.parentNode,e.nodeIndex(a)))
var s=new go(a,c)
while(u=s[n?"prev":"next"]()){if("false"===e.getContentEditableParent(u)||th(u,i))return q.none()
if(Jn(u)&&u.nodeValue.length>0){if(false===Qg(u,i,"A"))return q.some(xl(u,n?u.nodeValue.length:0))
return q.none()}if(e.isBlock(u)||f[u.nodeName.toLowerCase()])return q.none()
o=u}if(r&&o)return q.some(xl(o,0))
return q.none()}
var ih=function(e,t,r,n){var a,o
var i=e.getRoot()
var u
var f,c=false
a=n[(r?"start":"end")+"Container"]
o=n[(r?"start":"end")+"Offset"]
var s=jn(a)&&o===a.childNodes.length
var l=e.schema.getNonEmptyElements()
f=r
if(Yo(a))return q.none()
jn(a)&&o>a.childNodes.length-1&&(f=false)
if(Zn(a)){a=i
o=0}if(a===i){if(f){u=a.childNodes[o>0?o-1:0]
if(u){if(Yo(u))return q.none()
if(l[u.nodeName]||Zg(u))return q.none()}}if(a.hasChildNodes()){o=Math.min(!f&&o>0?o-1:o,a.childNodes.length-1)
a=a.childNodes[o]
o=Jn(a)&&s?a.data.length:0
if(!t&&a===i.lastChild&&Zg(a))return q.none()
if(ah(i,a)||Yo(a))return q.none()
if(a.hasChildNodes()&&false===Zg(a)){u=a
var d=new go(a,i)
do{if(aa(u)||Yo(u)){c=false
break}if(Jn(u)&&u.nodeValue.length>0){o=f?0:u.nodeValue.length
a=u
c=true
break}if(l[u.nodeName.toLowerCase()]&&!eh(u)){o=e.nodeIndex(u)
a=u.parentNode
f||o++
c=true
break}}while(u=f?d.next():d.prev())}}}if(t){Jn(a)&&0===o&&oh(e,s,t,true,a).each((function(e){a=e.container()
o=e.offset()
c=true}))
if(jn(a)){u=a.childNodes[o]
u||(u=a.childNodes[o-1])
!u||!ta(u)||nh(u,"A")||rh(e,u,false)||rh(e,u,true)||oh(e,s,t,true,u).each((function(e){a=e.container()
o=e.offset()
c=true}))}}f&&!t&&Jn(a)&&o===a.nodeValue.length&&oh(e,s,t,false,a).each((function(e){a=e.container()
o=e.offset()
c=true}))
return c?q.some(xl(a,o)):q.none()}
var uh=function(e,t){var r=t.collapsed,n=t.cloneRange()
var a=xl.fromRangeStart(t)
ih(e,r,true,n).each((function(e){r&&xl.isAbove(a,e)||n.setStart(e.container(),e.offset())}))
r||ih(e,r,false,n).each((function(e){n.setEnd(e.container(),e.offset())}))
r&&n.collapse(true)
return Yg(t,n)?q.none():q.some(n)}
var fh=function(e,t){return e.splitText(t)}
var ch=function(e){var t=e.startContainer,r=e.startOffset,n=e.endContainer,a=e.endOffset
if(t===n&&Jn(t)){if(r>0&&r<t.nodeValue.length){n=fh(t,r)
t=n.previousSibling
if(a>r){a-=r
t=n=fh(n,a).previousSibling
a=n.nodeValue.length
r=0}else a=0}}else{if(Jn(t)&&r>0&&r<t.nodeValue.length){t=fh(t,r)
r=0}if(Jn(n)&&a>0&&a<n.nodeValue.length){n=fh(n,a).previousSibling
a=n.nodeValue.length}}return{startContainer:t,startOffset:r,endContainer:n,endOffset:a}}
var sh=function(e){var t=function(t,r){return Zp(e,t,r)}
var r=ch
var n=function(t){return uh(e,t).fold(F,(function(e){t.setStart(e.startContainer,e.startOffset)
t.setEnd(e.endContainer,e.endOffset)
return true}))}
return{walk:t,split:r,normalize:n}}
sh.compareRanges=Yg
sh.getCaretRangeFromPoint=Xg
sh.getSelectedNode=Gs
sh.getNode=Js
var lh=function(e,t){var r=function(t,r){if(!_(r)&&!r.match(/^[0-9]+$/))throw new Error(e+".set accepts only positive integer values. Value was "+r)
var n=t.dom
ua(n)&&(n.style[e]=r+"px")}
var n=function(r){var n=t(r)
if(n<=0||null===n){var a=ya(r,e)
return parseFloat(a)||0}return n}
var a=n
var o=function(e,t){return ae(t,(function(t,r){var n=ya(e,r)
var a=void 0===n?0:parseInt(n,10)
return isNaN(a)?t:t+a}),0)}
var i=function(e,t,r){var n=o(e,r)
var a=t>n?t-n:0
return a}
return{set:r,get:n,getOuter:a,aggregate:o,max:i}}
var dh=lh("height",(function(e){var t=e.dom
return En(e)?t.getBoundingClientRect().height:t.offsetHeight}))
var vh=function(e){return dh.get(e)}
var mh=function(e,t){var r=e.view(t)
return r.fold(D([]),(function(t){var r=e.owner(t)
var n=mh(e,r)
return[t].concat(n)}))}
var ph=function(e,t){var r=t.owner(e)
return mh(t,r)}
var gh=function(e){var t
var r=e.dom===document?q.none():q.from(null===(t=e.dom.defaultView)||void 0===t?void 0:t.frameElement)
return r.map(yr.fromDom)}
var hh=function(e){return qr(e)}
var yh=Object.freeze({__proto__:null,view:gh,owner:hh})
var bh=function(e){var t=yr.fromDom(document)
var r=Bn(t)
var n=ph(e,yh)
var a=On(e)
var o=ne(n,(function(e,t){var r=On(t)
return{left:e.left+r.left,top:e.top+r.top}}),{left:0,top:0})
return Tn(o.left+a.left+r.left,o.top+a.top+r.top)}
var Ch=function(e){return"textarea"===Lr(e)}
var wh=function(e,t){var r=e.fire("ScrollIntoView",t)
return r.isDefaultPrevented()}
var xh=function(e,t){e.fire("AfterScrollIntoView",t)}
var Sh=function(e,t){var r=en(e)
if(0===r.length||Ch(e))return{element:e,offset:t}
if(t<r.length&&!Ch(r[t]))return{element:r[t],offset:0}
var n=r[r.length-1]
return Ch(n)?{element:e,offset:t}:"img"===Lr(n)?{element:n,offset:1}:zr(n)?{element:n,offset:yg(n).length}:{element:n,offset:en(n).length}}
var kh=function(e,t){var r=Dn(e)
var n=vh(e)
return{element:e,bottom:r.top+n,height:n,pos:r,cleanup:t}}
var Nh=function(e,t){var r=Sh(e,t)
var n=yr.fromHtml('<span data-mce-bogus="all">'+Ho+"</span>")
gn(r.element,n)
return kh(n,(function(){return kn(n)}))}
var Eh=function(e){return kh(yr.fromDom(e),T)}
var _h=function(e,t,r,n){Dh(e,(function(a,o){return Ah(e,t,r,n)}),r)}
var Th=function(e,t,r,n,a){var o={elm:n.element.dom,alignToTop:a}
if(wh(e,o))return
var i=Bn(t).top
r(t,i,n,a)
xh(e,o)}
var Ah=function(e,t,r,n){var a=yr.fromDom(e.getBody())
var o=yr.fromDom(e.getDoc())
xa(a)
var i=Nh(yr.fromDom(r.startContainer),r.startOffset)
Th(e,o,t,i,n)
i.cleanup()}
var Rh=function(e,t,r,n){var a=yr.fromDom(e.getDoc())
Th(e,a,r,Eh(t),n)}
var Dh=function(e,t,r){var n=r.startContainer
var a=r.startOffset
var o=r.endContainer
var i=r.endOffset
t(yr.fromDom(n),yr.fromDom(o))
var u=e.dom.createRng()
u.setStart(n,a)
u.setEnd(o,i)
e.selection.setRng(r)}
var Oh=function(e,t,r,n){var a=e.pos
if(r)Pn(a.left,a.top,n)
else{var o=a.top-t+e.height
Pn(a.left,o,n)}}
var Bh=function(e,t,r,n,a){var o=r+t
var i=n.pos.top
var u=n.bottom
var f=u-i>=r
if(i<t)Oh(n,r,false!==a,e)
else if(i>o){var c=f?false!==a:true===a
Oh(n,r,c,e)}else u>o&&!f&&Oh(n,r,true===a,e)}
var Ph=function(e,t,r,n){var a=e.dom.defaultView.innerHeight
Bh(e,t,a,r,n)}
var Lh=function(e,t,r,n){var a=e.dom.defaultView.innerHeight
Bh(e,t,a,r,n)
var o=bh(r.element)
var i=Fn(window)
o.top<i.y?Ln(r.element,false!==n):o.top>i.bottom&&Ln(r.element,true===n)}
var Ih=function(e,t,r){return _h(e,Ph,t,r)}
var Mh=function(e,t,r){return Rh(e,t,Ph,r)}
var Fh=function(e,t,r){return _h(e,Lh,t,r)}
var Uh=function(e,t,r){return Rh(e,t,Lh,r)}
var zh=function(e,t,r){var n=e.inline?Mh:Uh
n(e,t,r)}
var jh=function(e,t,r){var n=e.inline?Ih:Fh
n(e,t,r)}
var Hh=function(){return yr.fromDom(document)}
var Vh=function(e){return e.dom.focus()}
var qh=function(e){var t=sn(e).dom
return e.dom===t.activeElement}
var $h=function(e){void 0===e&&(e=Hh())
return q.from(e.dom.activeElement).map(yr.fromDom)}
var Wh=function(e){return $h(sn(e)).filter((function(t){return e.dom.contains(t.dom)}))}
var Kh=function(e,t,r,n){return{start:e,soffset:t,finish:r,foffset:n}}
var Xh={create:Kh}
var Yh=Wa.generate([{before:["element"]},{on:["element","offset"]},{after:["element"]}])
var Gh=function(e,t,r,n){return e.fold(t,r,n)}
var Jh=function(e){return e.fold(O,O,O)}
var Qh=Yh.before
var Zh=Yh.on
var ey=Yh.after
var ty={before:Qh,on:Zh,after:ey,cata:Gh,getStart:Jh}
var ry=Wa.generate([{domRange:["rng"]},{relative:["startSitu","finishSitu"]},{exact:["start","soffset","finish","foffset"]}])
var ny=function(e){return ry.exact(e.start,e.soffset,e.finish,e.foffset)}
var ay=function(e){return e.match({domRange:function(e){return yr.fromDom(e.startContainer)},relative:function(e,t){return ty.getStart(e)},exact:function(e,t,r,n){return e}})}
var oy=ry.domRange
var iy=ry.relative
var uy=ry.exact
var fy=function(e){var t=ay(e)
return Wr(t)}
var cy=Xh.create
var sy={domRange:oy,relative:iy,exact:uy,exactFromRange:ny,getWin:fy,range:cy}
var ly=qt().browser
var dy=function(e,t){var r=zr(t)?yg(t).length:en(t).length+1
if(e>r)return r
if(e<0)return 0
return e}
var vy=function(e){return sy.range(e.start,dy(e.soffset,e.start),e.finish,dy(e.foffset,e.finish))}
var my=function(e,t){return!zn(t.dom)&&(Pr(e,t)||Dr(e,t))}
var py=function(e){return function(t){return my(e,t.start)&&my(e,t.finish)}}
var gy=function(e){return true===e.inline||ly.isIE()}
var hy=function(e){return sy.range(yr.fromDom(e.startContainer),e.startOffset,yr.fromDom(e.endContainer),e.endOffset)}
var yy=function(e){var t=e.getSelection()
var r=t&&0!==t.rangeCount?q.from(t.getRangeAt(0)):q.none()
return r.map(hy)}
var by=function(e){var t=Wr(e)
return yy(t.dom).filter(py(e))}
var Cy=function(e,t){return q.from(t).filter(py(e)).map(vy)}
var wy=function(e){var t=document.createRange()
try{t.setStart(e.start.dom,e.soffset)
t.setEnd(e.finish.dom,e.foffset)
return q.some(t)}catch(e){return q.none()}}
var xy=function(e){var t=gy(e)?by(yr.fromDom(e.getBody())):q.none()
e.bookmark=t.isSome()?t:e.bookmark}
var Sy=function(e,t){var r=yr.fromDom(e.getBody())
var n=gy(e)?q.from(t):q.none()
var a=n.map(hy).filter(py(r))
e.bookmark=a.isSome()?a:e.bookmark}
var ky=function(e){var t=e.bookmark?e.bookmark:q.none()
return t.bind((function(t){return Cy(yr.fromDom(e.getBody()),t)})).bind(wy)}
var Ny=function(e){ky(e).each((function(t){return e.selection.setRng(t)}))}
var Ey=function(e){var t=e.className.toString()
return-1!==t.indexOf("tox-")||-1!==t.indexOf("mce-")}
var _y={isEditorUIElement:Ey}
var Ty=function(e){return"nodechange"===e.type&&e.selectionChange}
var Ay=function(e,t){var r=function(){t.throttle()}
Oc.DOM.bind(document,"mouseup",r)
e.on("remove",(function(){Oc.DOM.unbind(document,"mouseup",r)}))}
var Ry=function(e){e.on("focusout",(function(){xy(e)}))}
var Dy=function(e,t){e.on("mouseup touchend",(function(e){t.throttle()}))}
var Oy=function(e,t){var r=qt().browser
r.isIE()?Ry(e):Dy(e,t)
e.on("keyup NodeChange",(function(t){Ty(t)||xy(e)}))}
var By=function(e){var t=rs((function(){xy(e)}),0)
e.on("init",(function(){e.inline&&Ay(e,t)
Oy(e,t)}))
e.on("remove",(function(){t.cancel()}))}
var Py
var Ly=Oc.DOM
var Iy=function(e){return _y.isEditorUIElement(e)}
var My=function(e){var t=e.classList
return void 0!==t&&(t.contains("tox-edit-area")||t.contains("tox-edit-area__iframe")||t.contains("mce-content-body"))}
var Fy=function(e,t){var r=Qd(e)
var n=Ly.getParent(t,(function(t){return Iy(t)||!!r&&e.dom.is(t,r)}))
return null!==n}
var Uy=function(e){try{var t=sn(yr.fromDom(e.getElement()))
return $h(t).fold((function(){return document.body}),(function(e){return e.dom}))}catch(e){return document.body}}
var zy=function(e,t){var r=t.editor
By(r)
r.on("focusin",(function(){var t=e.focusedEditor
if(t!==r){t&&t.fire("blur",{focusedEditor:r})
e.setActive(r)
e.focusedEditor=r
r.fire("focus",{blurredEditor:t})
r.focus(true)}}))
r.on("focusout",(function(){lo.setEditorTimeout(r,(function(){var t=e.focusedEditor
if(!Fy(r,Uy(r))&&t===r){r.fire("blur",{focusedEditor:null})
e.focusedEditor=null}}))}))
if(!Py){Py=function(t){var r=e.activeEditor
r&&mn(t).each((function(t){if(t.ownerDocument===document&&t!==document.body&&!Fy(r,t)&&e.focusedEditor===r){r.fire("blur",{focusedEditor:null})
e.focusedEditor=null}}))}
Ly.bind(document,"focusin",Py)}}
var jy=function(e,t){e.focusedEditor===t.editor&&(e.focusedEditor=null)
if(!e.activeEditor){Ly.unbind(document,"focusin",Py)
Py=null}}
var Hy=function(e){e.on("AddEditor",B(zy,e))
e.on("RemoveEditor",B(jy,e))}
var Vy=function(e,t){return e.dom.getParent(t,(function(t){return"true"===e.dom.getContentEditable(t)}))}
var qy=function(e){return e.collapsed?q.from(Js(e.startContainer,e.startOffset)).map(yr.fromDom):q.none()}
var $y=function(e,t){return qy(t).bind((function(t){return Po(t)?q.some(t):false===Pr(e,t)?q.some(e):q.none()}))}
var Wy=function(e,t){$y(yr.fromDom(e.getBody()),t).bind((function(e){return Um(e.dom)})).fold((function(){e.selection.normalize()
return}),(function(t){return e.selection.setRng(t.toRange())}))}
var Ky=function(e){if(e.setActive)try{e.setActive()}catch(t){e.focus()}else e.focus()}
var Xy=function(e){return qh(e)||Wh(e).isSome()}
var Yy=function(e){return e.iframeElement&&qh(yr.fromDom(e.iframeElement))}
var Gy=function(e){var t=e.getBody()
return t&&Xy(yr.fromDom(t))}
var Jy=function(e){var t=sn(yr.fromDom(e.getElement()))
return $h(t).filter((function(t){return!My(t.dom)&&Fy(e,t.dom)})).isSome()}
var Qy=function(e){return e.inline?Gy(e):Yy(e)}
var Zy=function(e){return Qy(e)||Jy(e)}
var eb=function(e){var t=e.selection
var r=e.getBody()
var n=t.getRng()
e.quirks.refreshContentEditable()
void 0!==e.bookmark&&false===Qy(e)&&ky(e).each((function(t){e.selection.setRng(t)
n=t}))
var a=Vy(e,t.getNode())
if(e.$.contains(r,a)){Ky(a)
Wy(e,n)
tb(e)
return}if(!e.inline){Zt.opera||Ky(r)
e.getWin().focus()}if(Zt.gecko||e.inline){Ky(r)
Wy(e,n)}tb(e)}
var tb=function(e){return e.editorManager.setActive(e)}
var rb=function(e,t){if(e.removed)return
t?tb(e):eb(e)}
var nb=function(e,t,r,n,a){var o=r?t.startContainer:t.endContainer
var i=r?t.startOffset:t.endOffset
return q.from(o).map(yr.fromDom).map((function(e){return n&&t.collapsed?e:tn(e,a(e,i)).getOr(e)})).bind((function(e){return Ur(e)?q.some(e):Kr(e).filter(Ur)})).map((function(e){return e.dom})).getOr(e)}
var ab=function(e,t,r){return nb(e,t,true,r,(function(e,t){return Math.min(an(e),t)}))}
var ob=function(e,t,r){return nb(e,t,false,r,(function(e,t){return t>0?t-1:t}))}
var ib=function(e,t){var r=e
while(e&&Jn(e)&&0===e.length)e=t?e.nextSibling:e.previousSibling
return e||r}
var ub=function(e,t){var r,n,a
if(!t)return e
n=t.startContainer
a=t.endContainer
var o=t.startOffset
var i=t.endOffset
r=t.commonAncestorContainer
if(!t.collapsed){n===a&&i-o<2&&n.hasChildNodes()&&(r=n.childNodes[o])
if(3===n.nodeType&&3===a.nodeType){n=n.length===o?ib(n.nextSibling,true):n.parentNode
a=0===i?ib(a.previousSibling,false):a.parentNode
if(n&&n===a)return n}}if(r&&3===r.nodeType)return r.parentNode
return r}
var fb=function(e,t,r,n){var a
var o=[]
var i=e.getRoot()
r=e.getParent(r||ab(i,t,t.collapsed),e.isBlock)
n=e.getParent(n||ob(i,t,t.collapsed),e.isBlock)
r&&r!==i&&o.push(r)
if(r&&n&&r!==n){a=r
var u=new go(r,i)
while((a=u.next())&&a!==n)e.isBlock(a)&&o.push(a)}n&&r!==n&&n!==i&&o.push(n)
return o}
var cb=function(e,t,r){return q.from(t).map((function(t){var n=e.nodeIndex(t)
var a=e.createRng()
a.setStart(t.parentNode,n)
a.setEnd(t.parentNode,n+1)
if(r){dg(e,a,t,true)
dg(e,a,t,false)}return a}))}
var sb=function(e,t){return Q(t,(function(t){var r=e.fire("GetSelectionRange",{range:t})
return r.range!==t?r.range:t}))}
var lb={"#text":3,"#comment":8,"#cdata":4,"#pi":7,"#doctype":10,"#document-fragment":11}
var db=function(e,t,r){var n=r?"lastChild":"firstChild"
var a=r?"prev":"next"
if(e[n])return e[n]
if(e!==t){var o=e[a]
if(o)return o
for(var i=e.parent;i&&i!==t;i=i.parent){o=i[a]
if(o)return o}}}
var vb=function(e){if(!Si(e.value))return false
var t=e.parent
if(t&&("span"!==t.name||t.attr("style"))&&/^[ ]+$/.test(e.value))return false
return true}
var mb=function(e){var t="a"===e.name&&!e.attr("href")&&e.attr("id")
return e.attr("name")||e.attr("id")&&!e.firstChild||e.attr("data-mce-bookmark")||t}
var pb=function(){function e(e,t){this.name=e
this.type=t
if(1===t){this.attributes=[]
this.attributes.map={}}}e.create=function(t,r){var n=new e(t,lb[t]||1)
r&&xe(r,(function(e,t){n.attr(t,e)}))
return n}
e.prototype.replace=function(e){var t=this
e.parent&&e.remove()
t.insert(e,t)
t.remove()
return t}
e.prototype.attr=function(e,t){var r=this
var n
if("string"!==typeof e){void 0!==e&&null!==e&&xe(e,(function(e,t){r.attr(t,e)}))
return r}if(n=r.attributes){if(void 0!==t){if(null===t){if(e in n.map){delete n.map[e]
var a=n.length
while(a--)if(n[a].name===e){n.splice(a,1)
return r}}return r}if(e in n.map){a=n.length
while(a--)if(n[a].name===e){n[a].value=t
break}}else n.push({name:e,value:t})
n.map[e]=t
return r}return n.map[e]}}
e.prototype.clone=function(){var t=this
var r=new e(t.name,t.type)
var n
if(n=t.attributes){var a=[]
a.map={}
for(var o=0,i=n.length;o<i;o++){var u=n[o]
if("id"!==u.name){a[a.length]={name:u.name,value:u.value}
a.map[u.name]=u.value}}r.attributes=a}r.value=t.value
r.shortEnded=t.shortEnded
return r}
e.prototype.wrap=function(e){var t=this
t.parent.insert(e,t)
e.append(t)
return t}
e.prototype.unwrap=function(){var e=this
for(var t=e.firstChild;t;){var r=t.next
e.insert(t,e,true)
t=r}e.remove()}
e.prototype.remove=function(){var e=this,t=e.parent,r=e.next,n=e.prev
if(t){if(t.firstChild===e){t.firstChild=r
r&&(r.prev=null)}else n.next=r
if(t.lastChild===e){t.lastChild=n
n&&(n.next=null)}else r.prev=n
e.parent=e.next=e.prev=null}return e}
e.prototype.append=function(e){var t=this
e.parent&&e.remove()
var r=t.lastChild
if(r){r.next=e
e.prev=r
t.lastChild=e}else t.lastChild=t.firstChild=e
e.parent=t
return e}
e.prototype.insert=function(e,t,r){e.parent&&e.remove()
var n=t.parent||this
if(r){t===n.firstChild?n.firstChild=e:t.prev.next=e
e.prev=t.prev
e.next=t
t.prev=e}else{t===n.lastChild?n.lastChild=e:t.next.prev=e
e.next=t.next
e.prev=t
t.next=e}e.parent=n
return e}
e.prototype.getAll=function(e){var t=this
var r=[]
for(var n=t.firstChild;n;n=db(n,t))n.name===e&&r.push(n)
return r}
e.prototype.empty=function(){var e=this
if(e.firstChild){var t=[]
for(var r=e.firstChild;r;r=db(r,e))t.push(r)
var n=t.length
while(n--){r=t[n]
r.parent=r.firstChild=r.lastChild=r.next=r.prev=null}}e.firstChild=e.lastChild=null
return e}
e.prototype.isEmpty=function(e,t,r){void 0===t&&(t={})
var n=this
var a=n.firstChild
if(mb(n))return false
if(a)do{if(1===a.type){if(a.attr("data-mce-bogus"))continue
if(e[a.name])return false
if(mb(a))return false}if(8===a.type)return false
if(3===a.type&&!vb(a))return false
if(3===a.type&&a.parent&&t[a.parent.name]&&Si(a.value))return false
if(r&&r(a))return false}while(a=db(a,n))
return true}
e.prototype.walk=function(e){return db(this,null,e)}
return e}()
var gb=function(e){var t=/data:[^;]+;base64,([a-z0-9\+\/=]+)/gi
var r=[]
var n={}
var a=Ts("img")
var o
var i=0
var u=0
while(o=t.exec(e)){var f=o[0]
var c=a+"_"+u++
n[c]=f
i<o.index&&r.push(e.substr(i,o.index-i))
r.push(c)
i=o.index+f.length}var s=new RegExp(a+"_[0-9]+","g")
if(0===i)return{prefix:a,uris:n,html:e,re:s}
i<e.length&&r.push(e.substr(i))
return{prefix:a,uris:n,html:r.join(""),re:s}}
var hb=function(e,t){return e.replace(t.re,(function(e){return De(t.uris,e).getOr(e)}))}
var yb=function(e){var t=/data:([^;]+);base64,([a-z0-9\+\/=]+)/i.exec(e)
return t?q.some({type:t[1],data:decodeURIComponent(t[2])}):q.none()}
var bb=["img","video"]
var Cb=function(e){return 0===e.indexOf("data-")||0===e.indexOf("aria-")}
var wb=function(e,t){var r=k(e)?G(bb,t):e
return!r}
var xb=function(e,t,r){return!e.allow_html_data_urls&&(/^data:image\//i.test(t)?wb(e.allow_svg_data_urls,r)&&/^data:image\/svg\+xml/i.test(t):/^data:/i.test(t))}
var Sb=function(e,t,r){var n,a,o=1
var i=e.getShortEndedElements()
var u=/<([!?\/])?([A-Za-z0-9\-_:.]+)(\s(?:[^'">]+(?:"[^"]*"|'[^']*'))*[^"'>]*(?:"[^">]*|'[^'>]*)?|\s*|\/)>/g
u.lastIndex=n=r
while(a=u.exec(t)){n=u.lastIndex
if("/"===a[1])o--
else if(!a[1]){if(a[2]in i)continue
o++}if(0===o)break}return n}
var kb=function(e,t){return/^\s*\[if [\w\W]+\]>.*<!\[endif\](--!?)?>/.test(e.substr(t))}
var Nb=function(e,t,r){void 0===r&&(r=0)
var n=e.toLowerCase()
if(-1!==n.indexOf("[if ",r)&&kb(n,r)){var a=n.indexOf("[endif]",r)
return n.indexOf(">",a)}if(t){var o=n.indexOf(">",r)
return-1!==o?o:n.length}var i=/--!?>/g
i.lastIndex=r
var u=i.exec(e)
return u?u.index+u[0].length:n.length}
var Eb=function(e,t){var r=e.exec(t)
if(r){var n=r[1]
var a=r[2]
return"string"===typeof n&&"data-mce-bogus"===n.toLowerCase()?a:null}return null}
var _b=function(e,t){void 0===t&&(t=pu())
e=e||{}
false!==e.fix_self_closing&&(e.fix_self_closing=true)
var r=e.comment?e.comment:T
var n=e.cdata?e.cdata:T
var a=e.text?e.text:T
var o=e.start?e.start:T
var i=e.end?e.end:T
var u=e.pi?e.pi:T
var f=e.doctype?e.doctype:T
var c=function(c,s){void 0===s&&(s="html")
var l=c.html
var d,v,m,p=0
var g=[]
var h,y,b,C
var w,x
var S,k,N,E,_,T
var A,R,D
var O,B,P=0
var L=au.decode
var I=dr.makeMap("src,href,data,background,action,formaction,poster,xlink:href")
var M=/((java|vb)script|mhtml):/i
var F="html"===s?0:1
var U=function(e){var t,r
t=g.length
while(t--)if(g[t].name===e)break
if(t>=0){for(r=g.length-1;r>=t;r--){e=g[r]
e.valid&&i(e.name)}g.length=t}}
var z=function(e,t){return a(hb(e,c),t)}
var j=function(t){if(""===t)return
">"===t.charAt(0)&&(t=" "+t)
e.allow_conditional_comments||"[if"!==t.substr(0,3).toLowerCase()||(t=" "+t)
r(hb(t,c))}
var H=function(e){return hb(e,c)}
var V=function(e,t){var r=e||""
var n=!ct(r,"--")
var a=Nb(l,n,t)
e=l.substr(t,a-t)
j(n?r+e:e)
return a+1}
var q=function(t,r,n,a,o){var i,u
var f=/[\s\u0000-\u001F]+/g
r=r.toLowerCase()
n=H(r in Y?r:L(n||a||o||""))
if(G&&!w&&false===Cb(r)){i=_[r]
if(!i&&T){u=T.length
while(u--){i=T[u]
if(i.pattern.test(r))break}-1===u&&(i=null)}if(!i)return
if(i.validValues&&!(n in i.validValues))return}if(I[r]&&!e.allow_script_urls){var c=n.replace(f,"")
try{c=decodeURIComponent(c)}catch(e){c=unescape(c)}if(M.test(c))return
if(xb(e,c,t))return}if(w&&(r in I||0===r.indexOf("on")))return
h.map[r]=n
h.push({name:r,value:n})}
var $=new RegExp("<(?:(?:!--([\\w\\W]*?)--!?>)|(?:!\\[CDATA\\[([\\w\\W]*?)\\]\\]>)|(?:![Dd][Oo][Cc][Tt][Yy][Pp][Ee]([\\w\\W]*?)>)|(?:!(--)?)|(?:\\?([^\\s\\/<>]+) ?([\\w\\W]*?)[?/]>)|(?:\\/([A-Za-z][A-Za-z0-9\\-_\\:\\.]*)>)|(?:([A-Za-z][A-Za-z0-9\\-_:.]*)(\\s(?:[^'\">]+(?:\"[^\"]*\"|'[^']*'))*[^\"'>]*(?:\"[^\">]*|'[^'>]*)?|\\s*|\\/)>))","g")
var W=/([\w:\-]+)(?:\s*=\s*(?:(?:\"((?:[^\"])*)\")|(?:\'((?:[^\'])*)\')|([^>\s]+)))?/g
var K=t.getShortEndedElements()
var X=e.self_closing_elements||t.getSelfClosingElements()
var Y=t.getBoolAttrs()
var G=e.validate
var J=e.remove_internals
var Q=e.fix_self_closing
var Z=t.getSpecialElements()
var ee=l+">"
while(d=$.exec(ee)){var te=d[0]
p<d.index&&z(L(l.substr(p,d.index-p)))
if(v=d[7]){v=v.toLowerCase()
":"===v.charAt(0)&&(v=v.substr(1))
U(v)}else if(v=d[8]){if(d.index+te.length>l.length){z(L(l.substr(d.index)))
p=d.index+te.length
continue}v=v.toLowerCase()
":"===v.charAt(0)&&(v=v.substr(1))
x=v in K
Q&&X[v]&&g.length>0&&g[g.length-1].name===v&&U(v)
var re=Eb(W,d[9])
if(null!==re){if("all"===re){p=Sb(t,l,$.lastIndex)
$.lastIndex=p
continue}k=false}if(!G||(S=t.getElementRule(v))){k=true
if(G){_=S.attributes
T=S.attributePatterns}if(E=d[9]){w=-1!==E.indexOf("data-mce-type")
w&&J&&(k=false)
h=[]
h.map={}
E.replace(W,(function(e,t,r,n,a){q(v,t,r,n,a)
return""}))}else{h=[]
h.map={}}if(G&&!w){A=S.attributesRequired
R=S.attributesDefault
D=S.attributesForced
O=S.removeEmptyAttrs
O&&!h.length&&(k=false)
if(D){y=D.length
while(y--){N=D[y]
C=N.name
B=N.value
"{$uid}"===B&&(B="mce_"+P++)
h.map[C]=B
h.push({name:C,value:B})}}if(R){y=R.length
while(y--){N=R[y]
C=N.name
if(!(C in h.map)){B=N.value
"{$uid}"===B&&(B="mce_"+P++)
h.map[C]=B
h.push({name:C,value:B})}}}if(A){y=A.length
while(y--)if(A[y]in h.map)break;-1===y&&(k=false)}if(N=h.map["data-mce-bogus"]){if("all"===N){p=Sb(t,l,$.lastIndex)
$.lastIndex=p
continue}k=false}}k&&o(v,h,x)}else k=false
if(m=Z[v]){m.lastIndex=p=d.index+te.length
if(d=m.exec(l)){k&&(b=l.substr(p,d.index-p))
p=d.index+d[0].length}else{b=l.substr(p)
p=l.length}if(k){b.length>0&&z(b,true)
i(v)}$.lastIndex=p
continue}x||(E&&E.indexOf("/")===E.length-1?k&&i(v):g.push({name:v,valid:k}))}else if(v=d[1])j(v)
else if(v=d[2]){var ne=1===F||e.preserve_cdata||g.length>0&&t.isValidChild(g[g.length-1].name,"#cdata")
if(!ne){p=V("",d.index+2)
$.lastIndex=p
continue}n(v)}else if(v=d[3])f(v)
else{if((v=d[4])||"<!"===te){p=V(v,d.index+te.length)
$.lastIndex=p
continue}if(v=d[5]){if(1!==F){p=V("?",d.index+2)
$.lastIndex=p
continue}u(v,d[6])}}p=d.index+te.length}p<l.length&&z(L(l.substr(p)))
for(y=g.length-1;y>=0;y--){v=g[y]
v.valid&&i(v.name)}}
var s=function(e,t){void 0===t&&(t="html")
c(gb(e),t)}
return{parse:s}}
_b.findEndTag=Sb
var Tb=function(e,t){var r=new RegExp(["\\s?("+e.join("|")+')="[^"]+"'].join("|"),"gi")
return t.replace(r,"")}
var Ab=function(e,t){var r=t
var n=/<(\w+) [^>]*data-mce-bogus="all"[^>]*>/g
var a,o,i,u
var f=e.schema
r=Tb(e.getTempAttrs(),r)
var c=f.getShortEndedElements()
while(u=n.exec(r)){o=n.lastIndex
i=u[0].length
a=c[u[1]]?o:_b.findEndTag(f,r,o)
r=r.substring(0,o-i)+r.substring(a)
n.lastIndex=o-i}return qo(r)}
var Rb=Ab
var Db=function(e,t){var r=vd(e)
var n=new RegExp("^(<"+r+"[^>]*>(&nbsp;|&#160;|\\s| |<br \\/>|)<\\/"+r+">[\r\n]*|<br \\/>[\r\n]*)$")
return t.replace(n,"")}
var Ob=function(e,t,r,n){var a
t.format=r
t.get=true
t.getInner=true
t.no_events||e.fire("BeforeGetContent",t)
a="raw"===t.format?dr.trim(Rb(e.serializer,n.innerHTML)):"text"===t.format?e.dom.isEmpty(n)?"":qo(n.innerText||n.textContent):"tree"===t.format?e.serializer.serialize(n,t):Db(e,e.serializer.serialize(n,t))
G(["text","tree"],t.format)||Io(yr.fromDom(n))?t.content=a:t.content=dr.trim(a)
t.no_events||e.fire("GetContent",t)
return t.content}
var Bb=function(e,t,r){return q.from(e.getBody()).fold(D("tree"===t.format?new pb("body",11):""),(function(n){return Ob(e,t,r,n)}))}
var Pb=dr.each
var Lb=function(e){var t=function(t,r){if(t.nodeName!==r.nodeName)return false
var n=function(t){var r={}
Pb(e.getAttribs(t),(function(n){var a=n.nodeName.toLowerCase()
0!==a.indexOf("_")&&"style"!==a&&0!==a.indexOf("data-")&&(r[a]=e.getAttrib(t,a))}))
return r}
var a=function(e,t){var r,n
for(n in e)if(e.hasOwnProperty(n)){r=t[n]
if("undefined"===typeof r)return false
if(e[n]!==r)return false
delete t[n]}for(n in t)if(t.hasOwnProperty(n))return false
return true}
if(!a(n(t),n(r)))return false
if(!a(e.parseStyle(e.getAttrib(t,"style")),e.parseStyle(e.getAttrib(r,"style"))))return false
return!sp(t)&&!sp(r)}
return{compare:t}}
var Ib=dr.makeMap
var Mb=function(e){var t=[]
e=e||{}
var r=e.indent
var n=Ib(e.indent_before||"")
var a=Ib(e.indent_after||"")
var o=au.getEncodeFunc(e.entity_encoding||"raw",e.entities)
var i="html"===e.element_format
return{start:function(e,u,f){var c,s,l,d
if(r&&n[e]&&t.length>0){d=t[t.length-1]
d.length>0&&"\n"!==d&&t.push("\n")}t.push("<",e)
if(u)for(c=0,s=u.length;c<s;c++){l=u[c]
t.push(" ",l.name,'="',o(l.value,true),'"')}t[t.length]=!f||i?">":" />"
if(f&&r&&a[e]&&t.length>0){d=t[t.length-1]
d.length>0&&"\n"!==d&&t.push("\n")}},end:function(e){var n
t.push("</",e,">")
if(r&&a[e]&&t.length>0){n=t[t.length-1]
n.length>0&&"\n"!==n&&t.push("\n")}},text:function(e,r){e.length>0&&(t[t.length]=r?e:o(e))},cdata:function(e){t.push("<![CDATA[",e,"]]>")},comment:function(e){t.push("\x3c!--",e,"--\x3e")},pi:function(e,n){n?t.push("<?",e," ",o(n),"?>"):t.push("<?",e,"?>")
r&&t.push("\n")},doctype:function(e){t.push("<!DOCTYPE",e,">",r?"\n":"")},reset:function(){t.length=0},getContent:function(){return t.join("").replace(/\n$/,"")}}}
var Fb=function(e,t){void 0===t&&(t=pu())
var r=Mb(e)
e=e||{}
e.validate=!("validate"in e)||e.validate
var n=function(n){var a=e.validate
var o={3:function(e){r.text(e.value,e.raw)},8:function(e){r.comment(e.value)},7:function(e){r.pi(e.name,e.value)},10:function(e){r.doctype(e.value)},4:function(e){r.cdata(e.value)},11:function(e){if(e=e.firstChild)do{i(e)}while(e=e.next)}}
r.reset()
var i=function(e){var n=o[e.type]
var u,f,c,s,l,d,v,m,p
if(n)n(e)
else{u=e.name
f=e.shortEnded
c=e.attributes
if(a&&c&&c.length>1){d=[]
d.map={}
p=t.getElementRule(e.name)
if(p){for(v=0,m=p.attributesOrder.length;v<m;v++){s=p.attributesOrder[v]
if(s in c.map){l=c.map[s]
d.map[s]=l
d.push({name:s,value:l})}}for(v=0,m=c.length;v<m;v++){s=c[v].name
if(!(s in d.map)){l=c.map[s]
d.map[s]=l
d.push({name:s,value:l})}}c=d}}r.start(e.name,c,f)
if(!f){if(e=e.firstChild)do{i(e)}while(e=e.next)
r.end(u)}}}
1!==n.type||e.inner?o[11](n):i(n)
return r.getContent()}
return{serialize:n}}
var Ub=new Set
zb=["margin","margin-left","margin-right","margin-top","margin-bottom","padding","padding-left","padding-right","padding-top","padding-bottom","border","border-width","border-style","border-color","background","background-attachment","background-clip","background-color","background-image","background-origin","background-position","background-repeat","background-size","float","position","left","right","top","bottom","z-index","display","transform","width","max-width","min-width","height","max-height","min-height","overflow","overflow-x","overflow-y","text-overflow","vertical-align","transition","transition-delay","transition-duration","transition-property","transition-timing-function"],Z(zb,(function(e){Ub.add(e)}))
var zb
var jb=["font","text-decoration","text-emphasis"]
var Hb=function(e,t){return Ce(e.parseStyle(e.getAttrib(t,"style")))}
var Vb=function(e){return Ub.has(e)}
var qb=function(e,t){return se(Hb(e,t),(function(e){return!Vb(e)}))}
var $b=function(e){return re(e,(function(e){return J(jb,(function(t){return ct(e,t)}))}))}
var Wb=function(e,t,r){var n=Hb(e,t)
var a=Hb(e,r)
var o=function(n){var a=e.getStyle(t,n)
var o=e.getStyle(r,n)
return mt(a)&&mt(o)&&a!==o}
return J(n,(function(e){var t=function(t){return J(t,(function(t){return t===e}))}
if(!t(a)&&t(jb)){var r=$b(a)
return J(r,o)}return o(e)}))}
var Kb=function(e,t,r){return q.from(r.container()).filter(Jn).exists((function(n){var a=e?0:-1
return t(n.data.charAt(r.offset()+a))}))}
var Xb=B(Kb,true,vp)
var Yb=B(Kb,false,vp)
var Gb=function(e){var t=e.container()
return Jn(t)&&(0===t.data.length||Vo(t.data)&&Eg.isBookmarkNode(t.parentNode))}
var Jb=function(e,t){return function(r){return q.from(Zv(e?0:-1,r)).filter(t).isSome()}}
var Qb=function(e){return ra(e)&&"block"===ya(yr.fromDom(e),"display")}
var Zb=function(e){return aa(e)&&!Kn(e)}
var eC=Jb(true,Qb)
var tC=Jb(false,Qb)
var rC=Jb(true,ia)
var nC=Jb(false,ia)
var aC=Jb(true,Xn)
var oC=Jb(false,Xn)
var iC=Jb(true,Zb)
var uC=Jb(false,Zb)
var fC=function(e){var t=[]
var r=e.dom
while(r){t.push(yr.fromDom(r))
r=r.lastChild}return t}
var cC=function(e){var t=gs(e,"br")
var r=re(fC(e).slice(-1),Ro)
t.length===r.length&&Z(r,kn)}
var sC=function(e){Sn(e)
bn(e,yr.fromHtml('<br data-mce-bogus="1">'))}
var lC=function(e){nn(e).each((function(t){Gr(t).each((function(r){_o(e)&&Ro(t)&&_o(r)&&kn(t)}))}))}
var dC=function(e){return e.slice(0,-1)}
var vC=function(e,t,r){return Pr(t,e)?dC(Xr(e,(function(e){return r(e)||Dr(e,t)}))):[]}
var mC=function(e,t){return vC(e,t,F)}
var pC=function(e,t){return[e].concat(mC(e,t))}
var gC=function(e,t,r){return Lm(e,t,r,Gb)}
var hC=function(e,t){return ie(pC(yr.fromDom(t.container()),e),_o)}
var yC=function(e,t,r){return gC(e,t.dom,r).forall((function(e){return hC(t,r).fold((function(){return false===Qv(e,r,t.dom)}),(function(n){return false===Qv(e,r,t.dom)&&Pr(n,yr.fromDom(e.container()))}))}))}
var bC=function(e,t,r){return hC(t,r).fold((function(){return gC(e,t.dom,r).forall((function(e){return false===Qv(e,r,t.dom)}))}),(function(t){return gC(e,t.dom,r).isNone()}))}
var CC=B(bC,false)
var wC=B(bC,true)
var xC=B(yC,false)
var SC=B(yC,true)
var kC=function(e){return fm(e).exists(Ro)}
var NC=function(e,t,r){var n=re(pC(yr.fromDom(r.container()),t),_o)
var a=ge(n).getOr(t)
return Bm(e,a.dom,r).filter(kC)}
var EC=function(e,t){return fm(t).exists(Ro)||NC(true,e,t).isSome()}
var _C=function(e,t){return cm(t).exists(Ro)||NC(false,e,t).isSome()}
var TC=B(NC,false)
var AC=B(NC,true)
var RC=function(e){return xl.isTextPosition(e)&&!e.isAtStart()&&!e.isAtEnd()}
var DC=function(e,t){var r=re(pC(yr.fromDom(t.container()),e),_o)
return ge(r).getOr(e)}
var OC=function(e,t){return RC(t)?Yb(t):Yb(t)||Fm(DC(e,t).dom,t).exists(Yb)}
var BC=function(e,t){return RC(t)?Xb(t):Xb(t)||Mm(DC(e,t).dom,t).exists(Xb)}
var PC=function(e){return G(["pre","pre-wrap"],e)}
var LC=function(e){return fm(e).bind((function(e){return Ga(e,Ur)})).exists((function(e){return PC(ya(e,"white-space"))}))}
var IC=function(e,t){return Fm(e.dom,t).isNone()}
var MC=function(e,t){return Mm(e.dom,t).isNone()}
var FC=function(e,t){return IC(e,t)||MC(e,t)||CC(e,t)||wC(e,t)||_C(e,t)||EC(e,t)}
var UC=function(e,t){return!LC(t)&&(FC(e,t)||OC(e,t)||BC(e,t))}
var zC=function(e,t){return!LC(t)&&(CC(e,t)||xC(e,t)||_C(e,t)||OC(e,t))}
var jC=function(e){var t=e.container()
var r=e.offset()
return Jn(t)&&r<t.data.length?xl(t,r+1):e}
var HC=function(e,t){return!LC(t)&&(wC(e,t)||SC(e,t)||EC(e,t)||BC(e,t))}
var VC=function(e,t){return zC(e,t)||HC(e,jC(t))}
var qC=function(e,t){return dp(e.charAt(t))}
var $C=function(e){var t=e.container()
return Jn(t)&&ft(t.data,Uo)}
var WC=function(e){var t=e.split("")
return Q(t,(function(e,r){return dp(e)&&r>0&&r<t.length-1&&mp(t[r-1])&&mp(t[r+1])?" ":e})).join("")}
var KC=function(e,t){var r=t.data
var n=xl(t,0)
if(qC(r,0)&&!VC(e,n)){t.data=" "+r.slice(1)
return true}return false}
var XC=function(e){var t=e.data
var r=WC(t)
if(r!==t){e.data=r
return true}return false}
var YC=function(e,t){var r=t.data
var n=xl(t,r.length-1)
if(qC(r,r.length-1)&&!VC(e,n)){t.data=r.slice(0,-1)+" "
return true}return false}
var GC=function(e,t){return q.some(t).filter($C).bind((function(t){var r=t.container()
var n=KC(e,r)||XC(r)||YC(e,r)
return n?q.some(t):q.none()}))}
var JC=function(e){var t=yr.fromDom(e.getBody())
e.selection.isCollapsed()&&GC(t,xl.fromRangeStart(e.selection.getRng())).each((function(t){e.selection.setRng(t.toRange())}))}
var QC=function(e,t,r){var n=ae(e,(function(n,a){return vp(a)||dp(a)?n.previousCharIsSpace||""===n.str&&t||n.str.length===e.length-1&&r?{previousCharIsSpace:false,str:n.str+Uo}:{previousCharIsSpace:true,str:n.str+" "}:{previousCharIsSpace:false,str:n.str+a}}),{previousCharIsSpace:false,str:""})
return n.str}
var ZC=function(e,t,r){if(0===r)return
var n=yr.fromDom(e)
var a=Ya(n,_o).getOr(n)
var o=e.data.slice(t,t+r)
var i=t+r>=e.data.length&&HC(a,xl(e,e.data.length))
var u=0===t&&zC(a,xl(e,0))
e.replaceData(t,r,QC(o,u,i))}
var ew=function(e,t){var r=e.data.slice(t)
var n=r.length-dt(r).length
return ZC(e,t,n)}
var tw=function(e,t){var r=e.data.slice(0,t)
var n=r.length-vt(r).length
return ZC(e,t-n,n)}
var rw=function(e,t,r,n){void 0===n&&(n=true)
var a=vt(e.data).length
var o=n?e:t
var i=n?t:e
n?o.appendData(i.data):o.insertData(0,i.data)
kn(yr.fromDom(i))
r&&ew(o,a)
return o}
var nw=function(e,t){var r=e.container()
var n=e.offset()
return false===xl.isTextPosition(e)&&r===t.parentNode&&n>xl.before(t).offset()}
var aw=function(e,t){return nw(t,e)?xl(t.container(),t.offset()-1):t}
var ow=function(e){return Jn(e)?xl(e,0):xl.before(e)}
var iw=function(e){return Jn(e)?xl(e,e.data.length):xl.after(e)}
var uw=function(e){return pi(e.previousSibling)?q.some(iw(e.previousSibling)):e.previousSibling?zm(e.previousSibling):q.none()}
var fw=function(e){return pi(e.nextSibling)?q.some(ow(e.nextSibling)):e.nextSibling?Um(e.nextSibling):q.none()}
var cw=function(e,t){var r=xl.before(t.previousSibling?t.previousSibling:t.parentNode)
return Fm(e,r).fold((function(){return Mm(e,xl.after(t))}),q.some)}
var sw=function(e,t){return Mm(e,xl.after(t)).fold((function(){return Fm(e,xl.before(t))}),q.some)}
var lw=function(e,t){return uw(t).orThunk((function(){return fw(t)})).orThunk((function(){return cw(e,t)}))}
var dw=function(e,t){return fw(t).orThunk((function(){return uw(t)})).orThunk((function(){return sw(e,t)}))}
var vw=function(e,t,r){return e?dw(t,r):lw(t,r)}
var mw=function(e,t,r){return vw(e,t,r).map(B(aw,r))}
var pw=function(e,t,r){r.fold((function(){e.focus()}),(function(r){e.selection.setRng(r.toRange(),t)}))}
var gw=function(e){return function(t){return t.dom===e}}
var hw=function(e,t){return t&&Oe(e.schema.getBlockElements(),Lr(t))}
var yw=function(e){if(Oi(e)){var t=yr.fromHtml('<br data-mce-bogus="1">')
Sn(e)
bn(e,t)
return q.some(xl.before(t.dom))}return q.none()}
var bw=function(e,t,r){var n=Gr(e).filter(zr)
var a=Jr(e).filter(zr)
kn(e)
return zs(n,a,t,(function(e,t,n){var a=e.dom,o=t.dom
var i=a.data.length
rw(a,o,r)
return n.container()===o?xl(a,i):n})).orThunk((function(){if(r){n.each((function(e){return tw(e.dom,e.dom.length)}))
a.each((function(e){return ew(e.dom,0)}))}return t}))}
var Cw=function(e,t){return Oe(e.schema.getTextInlineElements(),Lr(t))}
var ww=function(e,t,r,n){void 0===n&&(n=true)
var a=mw(t,e.getBody(),r.dom)
var o=Ya(r,B(hw,e),gw(e.getBody()))
var i=bw(r,a,Cw(e,r))
if(e.dom.isEmpty(e.getBody())){e.setContent("")
e.selection.setCursorLocation()}else o.bind(yw).fold((function(){n&&pw(e,t,i)}),(function(r){n&&pw(e,t,q.some(r))}))}
var xw=function(e,t){return{start:e,end:t}}
var Sw=function(e,t,r){return{rng:e,table:t,cells:r}}
var kw=Wa.generate([{removeTable:["element"]},{emptyCells:["cells"]},{deleteCellSelection:["rng","cell"]}])
var Nw=function(e){return function(t){return Dr(e,t)}}
var Ew=function(e,t){return to(yr.fromDom(e),"td,th",t)}
var _w=function(e,t){return Za(e,"table",t)}
var Tw=function(e){return!Dr(e.start,e.end)}
var Aw=function(e,t){return _w(e.start,t).bind((function(r){return _w(e.end,t).bind((function(e){return js(Dr(r,e),r)}))}))}
var Rw=function(e,t){return!Tw(e)&&Aw(e,t).exists((function(e){var t=e.dom.rows
return 1===t.length&&1===t[0].cells.length}))}
var Dw=function(e){return gs(e,"td,th")}
var Ow=function(e,t){var r=Ew(e.startContainer,t)
var n=Ew(e.endContainer,t)
return Us(r,n,xw)}
var Bw=function(e,t){return _w(e.start,t).bind((function(t){return he(Dw(t)).map((function(t){return xw(e.start,t)}))}))}
var Pw=function(e,t){var r=Ew(t.startContainer,e)
var n=Ew(t.endContainer,e)
return t.collapsed?q.none():Us(r,n,xw).fold((function(){return r.fold((function(){return n.bind((function(t){return _w(t,e).bind((function(e){return ge(Dw(e)).map((function(e){return xw(e,t)}))}))}))}),(function(t){return _w(t,e).bind((function(e){return he(Dw(e)).map((function(e){return xw(t,e)}))}))}))}),(function(t){return Lw(e,t)?q.none():Bw(t,e)}))}
var Lw=function(e,t){return Aw(t,e).isSome()}
var Iw=function(e,t){return Aw(e,t).map((function(t){return Sw(e,t,Dw(t))}))}
var Mw=function(e,t,r){return e.filter((function(e){return Tw(e)&&Lw(r,e)})).orThunk((function(){return Pw(r,t)})).bind((function(e){return Iw(e,r)}))}
var Fw=function(e,t){return ue(e,(function(e){return Dr(e,t)}))}
var Uw=function(e){return Us(Fw(e.cells,e.rng.start),Fw(e.cells,e.rng.end),(function(t,r){return e.cells.slice(t,r+1)}))}
var zw=function(e,t,r){return e.filter((function(e){return Rw(e,r)&&lg(e.start,t)})).map((function(e){return e.start}))}
var jw=function(e){return Uw(e).map((function(t){var r=e.cells
return t.length===r.length?kw.removeTable(e.table):kw.emptyCells(t)}))}
var Hw=function(e,t){var r=Nw(e)
var n=Ow(t,r)
return zw(n,t,r).map((function(e){return kw.deleteCellSelection(t,e)})).orThunk((function(){return Mw(n,t,r).bind(jw)}))}
var Vw=function(e){var t=Fr(e)?Gr(e):nn(e)
return t.bind(Vw).orThunk((function(){return q.some(e)}))}
var qw=function(e,t){Z(t,sC)
e.selection.setCursorLocation(t[0].dom,0)
return true}
var $w=function(e,t,r){t.deleteContents()
var n=Vw(r).getOr(r)
var a=yr.fromDom(e.dom.getParent(n.dom,e.dom.isBlock))
if(Oi(a)){sC(a)
e.selection.setCursorLocation(a.dom,0)}if(!Dr(r,a)){var o=Kr(a).is(r)?[]:Yr(a)
Z(o.concat(en(r)),(function(e){Dr(e,a)||Pr(e,a)||kn(e)}))}return true}
var Ww=function(e,t){ww(e,false,t)
return true}
var Kw=function(e,t,r){return Hw(t,r).map((function(t){return t.fold(B(Ww,e),B(qw,e),B($w,e))}))}
var Xw=function(e,t){return ex(e,t)}
var Yw=function(e,t,r,n){return Qw(t,n).fold((function(){return Kw(e,t,r)}),(function(t){return Xw(e,t)})).getOr(false)}
var Gw=function(e,t){var r=yr.fromDom(e.getBody())
var n=e.selection.getRng()
var a=ig(e)
return 0!==a.length?qw(e,a):Yw(e,r,n,t)}
var Jw=function(e,t){return ie(pC(t,e),Lo)}
var Qw=function(e,t){return ie(pC(t,e),(function(e){return"caption"===Lr(e)}))}
var Zw=function(e,t,r,n,a){return Pm(r,e.getBody(),a).bind((function(e){return Jw(t,yr.fromDom(e.getNode())).map((function(e){return false===Dr(e,n)}))}))}
var ex=function(e,t){sC(t)
e.selection.setCursorLocation(t.dom,0)
return q.some(true)}
var tx=function(e,t,r,n){return Um(e.dom).bind((function(a){return zm(e.dom).map((function(e){return t?r.isEqual(a)&&n.isEqual(e):r.isEqual(e)&&n.isEqual(a)}))})).getOr(true)}
var rx=function(e,t){return ex(e,t)}
var nx=function(e,t,r){return Qw(e,yr.fromDom(r.getNode())).map((function(e){return false===Dr(e,t)}))}
var ax=function(e,t,r,n,a){return Pm(r,e.getBody(),a).bind((function(o){return tx(n,r,a,o)?rx(e,n):nx(t,n,o)})).or(q.some(true))}
var ox=function(e,t,r,n){var a=xl.fromRangeStart(e.selection.getRng())
return Jw(r,n).bind((function(n){return Oi(n)?ex(e,n):Zw(e,r,t,n,a)})).getOr(false)}
var ix=function(e,t,r,n){var a=xl.fromRangeStart(e.selection.getRng())
return Oi(n)?ex(e,n):ax(e,r,t,n,a)}
var ux=function(e,t){return e?aC(t):oC(t)}
var fx=function(e,t){var r=xl.fromRangeStart(e.selection.getRng())
return ux(t,r)||Bm(t,e.getBody(),r).exists((function(e){return ux(t,e)}))}
var cx=function(e,t,r){var n=yr.fromDom(e.getBody())
return Qw(n,r).fold((function(){return ox(e,t,n,r)||fx(e,t)}),(function(r){return ix(e,t,n,r).getOr(false)}))}
var sx=function(e,t){var r=yr.fromDom(e.selection.getStart(true))
var n=ig(e)
return e.selection.isCollapsed()&&0===n.length?cx(e,t,r):Gw(e,r)}
var lx=function(e,t,r,n){var a=document.createRange()
a.setStart(e,t)
a.setEnd(r,n)
return a}
var dx=function(e){var t=xl.fromRangeStart(e)
var r=xl.fromRangeEnd(e)
var n=e.commonAncestorContainer
return Bm(false,n,r).map((function(a){return!Qv(t,r,n)&&Qv(t,a,n)?lx(t.container(),t.offset(),a.container(),a.offset()):e})).getOr(e)}
var vx=function(e){return e.collapsed?e:dx(e)}
var mx=function(e){return e.firstChild&&e.firstChild===e.lastChild}
var px=function(e){return"br"===e.name||e.value===Uo}
var gx=function(e,t){var r=e.getBlockElements()
return r[t.name]&&mx(t)&&px(t.firstChild)}
var hx=function(e,t){var r=e.getNonEmptyElements()
return t&&(t.isEmpty(r)||gx(e,t))}
var yx=function(e,t){var r=t.firstChild
var n=t.lastChild
r&&"meta"===r.name&&(r=r.next)
n&&"mce_marker"===n.attr("id")&&(n=n.prev)
hx(e,n)&&(n=n.prev)
if(!r||r!==n)return false
return"ul"===r.name||"ol"===r.name}
var bx=function(e){var t=e.firstChild
var r=e.lastChild
t&&"META"===t.nodeName&&t.parentNode.removeChild(t)
r&&"mce_marker"===r.id&&r.parentNode.removeChild(r)
return e}
var Cx=function(e,t,r){var n=t.serialize(r)
var a=e.createFragment(n)
return bx(a)}
var wx=function(e){return dr.grep(e.childNodes,(function(e){return"LI"===e.nodeName}))}
var xx=function(e){return e.data===Uo||ta(e)}
var Sx=function(e){return e&&e.firstChild&&e.firstChild===e.lastChild&&xx(e.firstChild)}
var kx=function(e){return!e.firstChild||Sx(e)}
var Nx=function(e){return e.length>0&&kx(e[e.length-1])?e.slice(0,-1):e}
var Ex=function(e,t){var r=e.getParent(t,e.isBlock)
return r&&"LI"===r.nodeName?r:null}
var _x=function(e,t){return!!Ex(e,t)}
var Tx=function(e,t){var r=t.cloneRange()
var n=t.cloneRange()
r.setStartBefore(e)
n.setEndAfter(e)
return[r.cloneContents(),n.cloneContents()]}
var Ax=function(e,t){var r=xl.before(e)
var n=Nm(t)
var a=n.next(r)
return a?a.toRange():null}
var Rx=function(e,t){var r=xl.after(e)
var n=Nm(t)
var a=n.prev(r)
return a?a.toRange():null}
var Dx=function(e,t,r,n){var a=Tx(e,n)
var o=e.parentNode
o.insertBefore(a[0],e)
dr.each(t,(function(t){o.insertBefore(t,e)}))
o.insertBefore(a[1],e)
o.removeChild(e)
return Rx(t[t.length-1],r)}
var Ox=function(e,t,r){var n=e.parentNode
dr.each(t,(function(t){n.insertBefore(t,e)}))
return Ax(e,r)}
var Bx=function(e,t,r,n){n.insertAfter(t.reverse(),e)
return Rx(t[0],r)}
var Px=function(e,t,r,n){var a=Cx(t,e,n)
var o=Ex(t,r.startContainer)
var i=Nx(wx(a.firstChild))
var u=1,f=2
var c=t.getRoot()
var s=function(e){var n=xl.fromRangeStart(r)
var a=Nm(t.getRoot())
var i=e===u?a.prev(n):a.next(n)
return!i||Ex(t,i.getNode())!==o}
if(s(u))return Ox(o,i,c)
if(s(f))return Bx(o,i,c,t)
return Dx(o,i,c,r)}
var Lx=function(e,t,r){var n=yr.fromDom(e.getRoot())
r=zC(n,xl.fromRangeStart(t))?r.replace(/^ /,"&nbsp;"):r.replace(/^&nbsp;/," ")
r=HC(n,xl.fromRangeEnd(t))?r.replace(/(&nbsp;| )(<br( \/)>)?$/,"&nbsp;"):r.replace(/&nbsp;(<br( \/)?>)?$/," ")
return r}
var Ix=oa
var Mx=function(e,t,r){if(null!==r){var n=e.getParent(t.endContainer,Ix)
return r===n&&lg(yr.fromDom(r),t)}return false}
var Fx=function(e,t,r){if("all"===r.getAttribute("data-mce-bogus"))r.parentNode.insertBefore(e.dom.createFragment(t),r)
else{var n=r.firstChild
var a=r.lastChild
!n||n===a&&"BR"===n.nodeName?e.dom.setHTML(r,t):e.selection.setContent(t)}}
var Ux=function(e,t){q.from(e.getParent(t,"td,th")).map(yr.fromDom).each(lC)}
var zx=function(e,t){var r=e.schema.getTextInlineElements()
var n=e.dom
if(t){var a=e.getBody()
var o=Lb(n)
dr.each(n.select("*[data-mce-fragment]"),(function(e){var t=N(r[e.nodeName.toLowerCase()])
if(t&&qb(n,e))for(var i=e.parentNode;N(i)&&i!==a;i=i.parentNode){var u=Wb(n,e,i)
if(u)break
if(o.compare(i,e)){n.remove(e,true)
break}}}))}}
var jx=function(e){var t=e
while(t=t.walk())1===t.type&&t.attr("data-mce-fragment","1")}
var Hx=function(e){dr.each(e.getElementsByTagName("*"),(function(e){e.removeAttribute("data-mce-fragment")}))}
var Vx=function(e){return!!e.getAttribute("data-mce-fragment")}
var qx=function(e,t){return t&&!e.schema.getShortEndedElements()[t.nodeName]}
var $x=function(e,t){var r
var n=e.dom,a=e.selection
var o
var i=function(t){var r=e.getBody()
for(;t&&t!==r;t=t.parentNode)if("false"===n.getContentEditable(t))return t
return null}
if(!t)return
a.scrollIntoView(t)
var u=i(t)
if(u){n.remove(t)
a.select(u)
return}var f=n.createRng()
var c=t.previousSibling
if(c&&3===c.nodeType){f.setStart(c,c.nodeValue.length)
if(!Zt.ie){o=t.nextSibling
if(o&&3===o.nodeType){c.appendData(o.data)
o.parentNode.removeChild(o)}}}else{f.setStartBefore(t)
f.setEndBefore(t)}var s=function(t){var r=xl.fromRangeStart(t)
var n=Nm(e.getBody())
r=n.next(r)
if(r)return r.toRange()}
var l=n.getParent(t,n.isBlock)
n.remove(t)
if(l&&n.isEmpty(l)){e.$(l).empty()
f.setStart(l,0)
f.setEnd(l,0)
if(Ix(l)||Vx(l)||!(r=s(f)))n.add(l,n.create("br",{"data-mce-bogus":"1"}))
else{f=r
n.remove(l)}}a.setRng(f)}
var Wx=function(e){var t=e.dom
var r=vx(e.selection.getRng())
e.selection.setRng(r)
var n=t.getParent(r.startContainer,Ix)
Mx(t,r,n)?$w(e,r,yr.fromDom(n)):e.getDoc().execCommand("Delete",false,null)}
var Kx=function(e,t,r){var n,a,o
var i,u,f
var c=e.selection,s=e.dom;/^ | $/.test(t)&&(t=Lx(s,c.getRng(),t))
var l=e.parser
var d=r.merge
var v=Fb({validate:Kd(e)},e.schema)
var m='<span id="mce_marker" data-mce-type="bookmark">&#xFEFF;</span>'
o={content:t,format:"html",selection:true,paste:r.paste}
o=e.fire("BeforeSetContent",o)
if(o.isDefaultPrevented()){e.fire("SetContent",{content:o.content,format:"html",selection:true,paste:r.paste})
return}t=o.content;-1===t.indexOf("{$caret}")&&(t+="{$caret}")
t=t.replace(/\{\$caret\}/,m)
u=c.getRng()
var p=u.startContainer||(u.parentElement?u.parentElement():null)
var g=e.getBody()
if(p===g&&c.isCollapsed()&&s.isBlock(g.firstChild)&&qx(e,g.firstChild)&&s.isEmpty(g.firstChild)){u=s.createRng()
u.setStart(g.firstChild,0)
u.setEnd(g.firstChild,0)
c.setRng(u)}c.isCollapsed()||Wx(e)
n=c.getNode()
var h={context:n.nodeName.toLowerCase(),data:r.data,insert:true}
var y=l.parse(t,h)
if(true===r.paste&&yx(e.schema,y)&&_x(s,n)){u=Px(v,s,c.getRng(),y)
c.setRng(u)
e.fire("SetContent",o)
return}jx(y)
f=y.lastChild
if("mce_marker"===f.attr("id")){i=f
for(f=f.prev;f;f=f.walk(true))if(3===f.type||!s.isBlock(f.name)){e.schema.isValidChild(f.parent.name,"span")&&f.parent.insert(i,f,"br"===f.name)
break}}e._selectionOverrides.showBlockCaretContainer(n)
if(h.invalid){e.selection.setContent(m)
n=c.getNode()
a=e.getBody()
9===n.nodeType?n=f=a:f=n
while(f!==a){n=f
f=f.parentNode}t=n===a?a.innerHTML:s.getOuterHTML(n)
t=v.serialize(l.parse(t.replace(/<span (id="mce_marker"|id=mce_marker).+?<\/span>/i,(function(){return v.serialize(y)}))))
n===a?s.setHTML(a,t):s.setOuterHTML(n,t)}else{t=v.serialize(y)
Fx(e,t,n)}zx(e,d)
$x(e,s.get("mce_marker"))
Hx(e.getBody())
Ux(s,c.getStart())
e.fire("SetContent",o)
e.addVisual()}
var Xx=function(e,t){t(e)
e.firstChild&&Xx(e.firstChild,t)
e.next&&Xx(e.next,t)}
var Yx=function(e,t,r){var n={}
var a={}
var o=[]
r.firstChild&&Xx(r.firstChild,(function(r){Z(e,(function(e){e.name===r.name&&(n[e.name]?n[e.name].nodes.push(r):n[e.name]={filter:e,nodes:[r]})}))
Z(t,(function(e){"string"===typeof r.attr(e.name)&&(a[e.name]?a[e.name].nodes.push(r):a[e.name]={filter:e,nodes:[r]})}))}))
for(var i in n)n.hasOwnProperty(i)&&o.push(n[i])
for(var u in a)a.hasOwnProperty(u)&&o.push(a[u])
return o}
var Gx=function(e,t,r){var n=Yx(e,t,r)
Z(n,(function(e){Z(e.filter.callbacks,(function(t){t(e.nodes,e.filter.name,{})}))}))}
var Jx="html"
var Qx=function(e){return e instanceof pb}
var Zx=function(e){Qy(e)&&Um(e.getBody()).each((function(t){var r=t.getNode()
var n=Xn(r)?Um(r).getOr(t):t
e.selection.setRng(n.toRange())}))}
var eS=function(e,t){e.dom.setHTML(e.getBody(),t)
Zx(e)}
var tS=function(e,t,r,n){var a,o
if(0===r.length||/^\s+$/.test(r)){o='<br data-mce-bogus="1">'
"TABLE"===t.nodeName?r="<tr><td>"+o+"</td></tr>":/^(UL|OL)$/.test(t.nodeName)&&(r="<li>"+o+"</li>")
a=vd(e)
if(a&&e.schema.isValidChild(t.nodeName.toLowerCase(),a.toLowerCase())){r=o
r=e.dom.createHTML(a,md(e),r)}else r||(r='<br data-mce-bogus="1">')
eS(e,r)
e.fire("SetContent",n)}else{"raw"!==n.format&&(r=Fb({validate:e.validate},e.schema).serialize(e.parser.parse(r,{isRootContent:true,insert:true})))
n.content=Io(yr.fromDom(t))?r:dr.trim(r)
eS(e,n.content)
n.no_events||e.fire("SetContent",n)}return n.content}
var rS=function(e,t,r,n){Gx(e.parser.getNodeFilters(),e.parser.getAttributeFilters(),r)
var a=Fb({validate:e.validate},e.schema).serialize(r)
n.content=Io(yr.fromDom(t))?a:dr.trim(a)
eS(e,n.content)
n.no_events||e.fire("SetContent",n)
return r}
var nS=function(e,t,r){r.format=r.format?r.format:Jx
r.set=true
r.content=Qx(t)?"":t
r.no_events||e.fire("BeforeSetContent",r)
Qx(t)||(t=r.content)
return q.from(e.getBody()).fold(D(t),(function(n){return Qx(t)?rS(e,n,t,r):tS(e,n,t,r)}))}
var aS=function(e,t){return Ja(e,t).isSome()}
var oS=function(e){return E(e)?e:F}
var iS=function(e,t,r){var n=e.dom
var a=oS(r)
while(n.parentNode){n=n.parentNode
var o=yr.fromDom(n)
var i=t(o)
if(i.isSome())return i
if(a(o))break}return q.none()}
var uS=function(e,t,r){var n=t(e)
var a=oS(r)
return n.orThunk((function(){return a(e)?q.none():iS(e,t,a)}))}
var fS=kp
var cS=function(e,t,r){var n=e.formatter.get(r)
if(n)for(var a=0;a<n.length;a++)if(false===n[a].inherit&&e.dom.is(t,n[a].selector))return true
return false}
var sS=function(e,t,r,n){var a=e.dom.getRoot()
if(t===a)return false
t=e.dom.getParent(t,(function(t){if(cS(e,t,r))return true
return t.parentNode===a||!!vS(e,t,r,n,true)}))
return vS(e,t,r,n)}
var lS=function(e,t,r){if(fS(t,r.inline))return true
if(fS(t,r.block))return true
if(r.selector)return 1===t.nodeType&&e.is(t,r.selector)}
var dS=function(e,t,r,n,a,o){var i,u
var f=r[n]
var c
if(r.onmatch)return r.onmatch(t,r,n)
if(f)if("undefined"===typeof f.length){for(i in f)if(f.hasOwnProperty(i)){u="attributes"===n?e.getAttrib(t,i):Ep(e,t,i)
if(a&&!u&&!r.exact)return
if((!a||r.exact)&&!fS(u,Np(e,Sp(f[i],o),i)))return}}else for(c=0;c<f.length;c++)if("attributes"===n?e.getAttrib(t,f[c]):Ep(e,t,f[c]))return r
return r}
var vS=function(e,t,r,n,a){var o=e.formatter.get(r)
var i,u,f,c
var s=e.dom
if(o&&t)for(u=0;u<o.length;u++){i=o[u]
if(lS(e.dom,t,i)&&dS(s,t,i,"attributes",a,n)&&dS(s,t,i,"styles",a,n)){if(c=i.classes)for(f=0;f<c.length;f++)if(!e.dom.hasClass(t,Sp(c[f],n)))return
return i}}}
var mS=function(e,t,r,n){if(n)return sS(e,n,t,r)
n=e.selection.getNode()
if(sS(e,n,t,r))return true
var a=e.selection.getStart()
if(a!==n&&sS(e,a,t,r))return true
return false}
var pS=function(e,t,r){var n=[]
var a={}
var o=e.selection.getStart()
e.dom.getParent(o,(function(o){for(var i=0;i<t.length;i++){var u=t[i]
if(!a[u]&&vS(e,o,u,r)){a[u]=true
n.push(u)}}}),e.dom.getRoot())
return n}
var gS=function(e,t){var r=function(t){return Dr(t,yr.fromDom(e.getBody()))}
var n=function(t,r){return vS(e,t.dom,r)?q.some(r):q.none()}
return q.from(e.selection.getStart(true)).bind((function(e){return uS(yr.fromDom(e),(function(e){return be(t,(function(t){return n(e,t)}))}),r)})).getOrNull()}
var hS=function(e,t){var r=e.formatter.get(t)
var n,a,o,i,u
var f=e.dom
if(r){n=e.selection.getStart()
a=Tp(f,n)
for(i=r.length-1;i>=0;i--){u=r[i].selector
if(!u||r[i].defaultBlock)return true
for(o=a.length-1;o>=0;o--)if(f.is(a[o],u))return true}}return false}
var yS=function(e,t,r){return ae(r,(function(r,n){var a=Ap(e,n)
return e.formatter.matchNode(t,n,{},a)?r.concat([n]):r}),[])}
var bS=Ho,CS="_mce_caret"
var wS=function(e,t){return e.importNode(t,true)}
var xS=function(e){var t=[]
while(e){if(3===e.nodeType&&e.nodeValue!==bS||e.childNodes.length>1)return[]
1===e.nodeType&&t.push(e)
e=e.firstChild}return t}
var SS=function(e){return xS(e).length>0}
var kS=function(e){if(e){var t=new go(e,e)
for(e=t.current();e;e=t.next())if(Jn(e))return e}return null}
var NS=function(e){var t=yr.fromTag("span")
sa(t,{id:CS,"data-mce-bogus":"1","data-mce-type":"format-caret"})
e&&bn(t,yr.fromText(bS))
return t}
var ES=function(e){var t=kS(e)
t&&t.nodeValue.charAt(0)===bS&&t.deleteData(0,1)
return t}
var _S=function(e,t,r){void 0===r&&(r=true)
var n=e.dom,a=e.selection
if(SS(t))ww(e,false,yr.fromDom(t),r)
else{var o=a.getRng()
var i=n.getParent(t,n.isBlock)
var u=o.startContainer
var f=o.startOffset
var c=o.endContainer
var s=o.endOffset
var l=ES(t)
n.remove(t,true)
u===l&&f>0&&o.setStart(l,f-1)
c===l&&s>0&&o.setEnd(l,s-1)
i&&n.isEmpty(i)&&sC(yr.fromDom(i))
a.setRng(o)}}
var TS=function(e,t,r){void 0===r&&(r=true)
var n=e.dom,a=e.selection
if(t)_S(e,t,r)
else{t=Vm(e.getBody(),a.getStart())
if(!t)while(t=n.get(CS))_S(e,t,false)}}
var AS=function(e,t,r){var n=e.dom,a=n.getParent(r,B(bp,e))
if(a&&n.isEmpty(a))r.parentNode.replaceChild(t,r)
else{cC(yr.fromDom(r))
n.isEmpty(r)?r.parentNode.replaceChild(t,r):n.insertAfter(t,r)}}
var RS=function(e,t){e.appendChild(t)
return t}
var DS=function(e,t){var r=ne(e,(function(e,t){return RS(e,t.cloneNode(false))}),t)
return RS(r,r.ownerDocument.createTextNode(bS))}
var OS=function(e,t,r,n,a,o){var i=e.formatter
var u=e.dom
var f=re(Ce(i.get()),(function(e){return e!==n&&!ft(e,"removeformat")}))
var c=yS(e,r,f)
var s=re(c,(function(t){return!Rp(e,t,n)}))
if(s.length>0){var l=r.cloneNode(false)
u.add(t,l)
i.remove(n,a,l,o)
u.remove(l)
return q.some(l)}return q.none()}
var BS=function(e,t,r){var n,a
var o=e.selection
var i=o.getRng()
var u=i.startOffset
var f=i.startContainer
var c=f.nodeValue
n=Vm(e.getBody(),o.getStart())
n&&(a=kS(n))
var s=/[^\s\u00a0\u00ad\u200b\ufeff]/
if(c&&u>0&&u<c.length&&s.test(c.charAt(u))&&s.test(c.charAt(u-1))){var l=o.getBookmark()
i.collapse(true)
var d=Gp(e,i,e.formatter.get(t))
d=ch(d)
e.formatter.apply(t,r,d)
o.moveToBookmark(l)}else{if(n&&a.nodeValue===bS)e.formatter.apply(t,r,n)
else{n=wS(e.getDoc(),NS(true).dom)
a=n.firstChild
i.insertNode(n)
u=1
e.formatter.apply(t,r,n)}o.setCursorLocation(a,u)}}
var PS=function(e,t,r,n){var a=e.dom
var o=e.selection
var i,u,f
var c=[]
var s=o.getRng()
var l=s.startContainer
var d=s.startOffset
u=l
if(3===l.nodeType){d!==l.nodeValue.length&&(i=true)
u=u.parentNode}while(u){if(vS(e,u,t,r,n)){f=u
break}u.nextSibling&&(i=true)
c.push(u)
u=u.parentNode}if(!f)return
if(i){var v=o.getBookmark()
s.collapse(true)
var m=Gp(e,s,e.formatter.get(t),true)
m=ch(m)
e.formatter.remove(t,r,m,n)
o.moveToBookmark(v)}else{var p=Vm(e.getBody(),f)
var g=NS(false).dom
AS(e,g,null!==p?p:f)
var h=OS(e,g,f,t,r,n)
var y=DS(c.concat(h.toArray()),g)
_S(e,p,false)
o.setCursorLocation(y,1)
a.isEmpty(f)&&a.remove(f)}}
var LS=function(e,t){var r=e.selection,n=e.getBody()
TS(e,null,false)
8!==t&&46!==t||!r.isCollapsed()||r.getStart().innerHTML!==bS||TS(e,Vm(n,r.getStart()))
37!==t&&39!==t||TS(e,Vm(n,r.getStart()))}
var IS=function(e){e.on("mouseup keydown",(function(t){LS(e,t.keyCode)}))}
var MS=function(e,t){var r=NS(false)
var n=DS(t,r.dom)
gn(yr.fromDom(e),r)
kn(yr.fromDom(e))
return xl(n,0)}
var FS=function(e,t){var r=e.schema.getTextInlineElements()
return r.hasOwnProperty(Lr(t))&&!Hm(t.dom)&&!Wn(t.dom)}
var US=function(e){return Hm(e.dom)&&SS(e.dom)}
var zS={}
var jS=Ue
var HS=Me
var VS=function(e,t){var r=zS[e]
r||(zS[e]=[])
zS[e].push(t)}
var qS=function(e,t){HS(zS[e],(function(e){e(t)}))}
VS("pre",(function(e){var t=e.selection.getRng()
var r
var n=function(e){return o(e.previousSibling)&&-1!==ze(r,e.previousSibling)}
var a=function(e,t){kc(t).remove()
kc(e).append("<br><br>").append(t.childNodes)}
var o=Hn(["pre"])
if(!t.collapsed){r=e.selection.getSelectedBlocks()
HS(jS(jS(r,o),n),(function(e){a(e.previousSibling,e)}))}}))
var $S=dr.each
var WS=function(e){return jn(e)&&!sp(e)&&!Hm(e)&&!Wn(e)}
var KS=function(e,t){var r
for(r=e;r;r=r[t]){if(Jn(r)&&0!==r.nodeValue.length)return e
if(jn(r)&&!sp(r))return r}return e}
var XS=function(e,t,r){var n,a
var o=Lb(e)
if(t&&r){t=KS(t,"previousSibling")
r=KS(r,"nextSibling")
if(o.compare(t,r)){for(n=t.nextSibling;n&&n!==r;){a=n
n=n.nextSibling
t.appendChild(a)}e.remove(r)
dr.each(dr.grep(r.childNodes),(function(e){t.appendChild(e)}))
return t}}return r}
var YS=function(e,t,r,n){if(n&&false!==t.merge_siblings){var a=XS(e,yp(n),n)
XS(e,a,yp(a,true))}}
var GS=function(e,t,r){if(t.clear_child_styles){var n=t.links?"*:not(a)":"*"
$S(e.select(n,r),(function(r){WS(r)&&$S(t.styles,(function(t,n){e.setStyle(r,n,"")}))}))}}
var JS=function(e,t,r){$S(e.childNodes,(function(e){if(WS(e)){t(e)&&r(e)
e.hasChildNodes()&&JS(e,t,r)}}))}
var QS=function(e,t){"SPAN"===t.nodeName&&0===e.getAttribs(t).length&&e.remove(t,true)}
var ZS=function(e,t){return function(r){return!!(r&&Ep(e,r,t))}}
var ek=function(e,t,r){return function(n){e.setStyle(n,t,r)
""===n.getAttribute("style")&&n.removeAttribute("style")
QS(e,n)}}
var tk=Wa.generate([{keep:[]},{rename:["name"]},{removed:[]}])
var rk=/^(src|href|style)$/
var nk=dr.each
var ak=kp
var ok=function(e){return/^(TR|TH|TD)$/.test(e.nodeName)}
var ik=function(e,t,r){return e.isChildOf(t,r)&&t!==r&&!e.isBlock(r)}
var uk=function(e,t,r){var n,a
n=t[r?"startContainer":"endContainer"]
a=t[r?"startOffset":"endOffset"]
if(jn(n)){var o=n.childNodes.length-1
!r&&a&&a--
n=n.childNodes[a>o?o:a]}Jn(n)&&r&&a>=n.nodeValue.length&&(n=new go(n,e.getBody()).next()||n)
Jn(n)&&!r&&0===a&&(n=new go(n,e.getBody()).prev()||n)
return n}
var fk=function(e,t){var r=t?"firstChild":"lastChild"
if(ok(e)&&e[r]){var n=e[r]
return"TR"===e.nodeName&&n[r]||n}return e}
var ck=function(e,t,r,n){var a=e.create(r,n)
t.parentNode.insertBefore(a,t)
a.appendChild(t)
return a}
var sk=function(e,t,r,n,a){var o=yr.fromDom(t)
var i=yr.fromDom(e.create(n,a))
var u=r?Zr(o):Qr(o)
xn(i,u)
if(r){gn(o,i)
yn(i,o)}else{hn(o,i)
bn(i,o)}return i.dom}
var lk=function(e,t,r){if(ak(t,r.inline))return true
if(ak(t,r.block))return true
if(r.selector)return jn(t)&&e.is(t,r.selector)}
var dk=function(e,t){return t.links&&"A"===e.nodeName}
var vk=function(e,t,r,n){t=yp(t,r,n)
return!t||"BR"===t.nodeName||e.isBlock(t)}
var mk=function(e,t,r){var n=t.parentNode
var a
var o=e.dom,i=vd(e)
if(r.block)if(i)n===o.getRoot()&&(r.list_block&&ak(t,r.list_block)||Z(ye(t.childNodes),(function(t){if(Cp(e,i,t.nodeName.toLowerCase()))if(a)a.appendChild(t)
else{a=ck(o,t,i)
o.setAttribs(a,e.settings.forced_root_block_attrs)}else a=0})))
else if(o.isBlock(t)&&!o.isBlock(n)){vk(o,t,false)||vk(o,t.firstChild,true,true)||t.insertBefore(o.create("br"),t.firstChild)
vk(o,t,true)||vk(o,t.lastChild,false,true)||t.appendChild(o.create("br"))}if(r.selector&&r.inline&&!ak(r.inline,t))return
o.remove(t,true)}
var pk=function(e,t,r,n,a){var o
var i=e.dom
if(!lk(i,n,t)&&!dk(n,t))return tk.keep()
var u=n
if(t.inline&&"all"===t.remove&&C(t.preserve_attributes)){var f=re(i.getAttribs(u),(function(e){return G(t.preserve_attributes,e.name.toLowerCase())}))
i.removeAllAttribs(u)
Z(f,(function(e){return i.setAttrib(u,e.name,e.value)}))
if(f.length>0)return tk.rename("span")}if("all"!==t.remove){nk(t.styles,(function(e,n){e=Np(i,Sp(e,r),n+"")
if(_(n)){n=e
a=null}(t.remove_similar||!a||ak(Ep(i,a,n),e))&&i.setStyle(u,n,"")
o=true}))
if(o&&""===i.getAttrib(u,"style")){u.removeAttribute("style")
u.removeAttribute("data-mce-style")}nk(t.attributes,(function(e,n){var o
e=Sp(e,r)
if(_(n)){n=e
a=null}if(t.remove_similar||!a||ak(i.getAttrib(a,n),e)){if("class"===n){e=i.getAttrib(u,n)
if(e){o=""
Z(e.split(/\s+/),(function(e){/mce\-\w+/.test(e)&&(o+=(o?" ":"")+e)}))
if(o){i.setAttrib(u,n,o)
return}}}rk.test(n)&&u.removeAttribute("data-mce-"+n)
if("style"===n&&Hn(["li"])(u)&&"none"===i.getStyle(u,"list-style-type")){u.removeAttribute(n)
i.setStyle(u,"list-style-type","none")
return}"class"===n&&u.removeAttribute("className")
u.removeAttribute(n)}}))
nk(t.classes,(function(e){e=Sp(e,r)
a&&!i.hasClass(a,e)||i.removeClass(u,e)}))
var c=i.getAttribs(u)
for(var s=0;s<c.length;s++){var l=c[s].nodeName
if(0!==l.indexOf("_")&&0!==l.indexOf("data-"))return tk.keep()}}if("none"!==t.remove){mk(e,u,t)
return tk.removed()}return tk.keep()}
var gk=function(e,t,r,n,a){return pk(e,t,r,n,a).fold(F,(function(t){e.dom.rename(n,t)
return true}),U)}
var hk=function(e,t,r,n,a){var o
Z(Tp(e.dom,t.parentNode).reverse(),(function(t){if(!o&&"_start"!==t.id&&"_end"!==t.id){var i=vS(e,t,r,n,a)
i&&false!==i.split&&(o=t)}}))
return o}
var yk=function(e,t,r,n){return pk(e,t,r,n,n).fold(D(n),(function(t){var r=e.dom.createFragment()
r.appendChild(n)
return e.dom.rename(n,t)}),D(null))}
var bk=function(e,t,r,n,a,o,i,u){var f,c,s
var l=e.dom
if(r){var d=r.parentNode
for(var v=n.parentNode;v&&v!==d;v=v.parentNode){f=l.clone(v,false)
for(var m=0;m<t.length;m++){f=yk(e,t[m],u,f)
if(null===f)break}if(f){c&&f.appendChild(c)
s||(s=f)
c=f}}!o||i.mixed&&l.isBlock(r)||(n=l.split(r,n))
if(c){a.parentNode.insertBefore(c,a)
s.appendChild(a)
i.inline&&YS(l,i,u,c)}}return n}
var Ck=function(e,t,r,n,a){var o=e.formatter.get(t)
var i=o[0]
var u=true
var f=e.dom
var c=e.selection
var s=function(n){var u=hk(e,n,t,r,a)
return bk(e,o,u,n,n,true,i,r)}
var l=function(e){return sp(e)&&jn(e)&&("_start"===e.id||"_end"===e.id)}
var d=function(t){var n,a
var c=t.parentNode
Jn(t)&&Pp(f,c)&&gk(e,i,r,c,c)
if(jn(t)&&f.getContentEditable(t)){n=u
u="true"===f.getContentEditable(t)
a=true}var s=ye(t.childNodes)
if(u&&!a)for(var l=0;l<o.length;l++)if(gk(e,o[l],r,t,t))break
if(i.deep&&s.length){for(l=0;l<s.length;l++)d(s[l])
a&&(u=n)}}
var v=function(e){var t=f.get(e?"_start":"_end")
var r=t[e?"firstChild":"lastChild"]
l(r)&&(r=r[e?"firstChild":"lastChild"])
Jn(r)&&0===r.data.length&&(r=e?t.previousSibling||t.nextSibling:t.nextSibling||t.previousSibling)
f.remove(t,true)
return r}
var m=function(t){var r,n
var a=Gp(e,t,o,t.collapsed)
if(i.split){a=ch(a)
r=uk(e,a,true)
n=uk(e,a)
if(r!==n){r=fk(r,true)
n=fk(n,false)
if(ik(f,r,n)){var u=q.from(r.firstChild).getOr(r)
s(sk(f,u,true,"span",{id:"_start","data-mce-type":"bookmark"}))
v(true)
return}if(ik(f,n,r)){u=q.from(n.lastChild).getOr(n)
s(sk(f,u,false,"span",{id:"_end","data-mce-type":"bookmark"}))
v(false)
return}r=ck(f,r,"span",{id:"_start","data-mce-type":"bookmark"})
n=ck(f,n,"span",{id:"_end","data-mce-type":"bookmark"})
var c=f.createRng()
c.setStartAfter(r)
c.setEndBefore(n)
Zp(f,c,(function(e){Z(e,(function(e){sp(e)||sp(e.parentNode)||s(e)}))}))
s(r)
s(n)
r=v(true)
n=v()}else r=n=s(r)
a.startContainer=r.parentNode?r.parentNode:r
a.startOffset=f.nodeIndex(r)
a.endContainer=n.parentNode?n.parentNode:n
a.endOffset=f.nodeIndex(n)+1}Zp(f,a,(function(t){Z(t,(function(t){d(t)
var r=["underline","line-through","overline"]
Z(r,(function(r){jn(t)&&e.dom.getStyle(t,"text-decoration")===r&&t.parentNode&&_p(f,t.parentNode)===r&&gk(e,{deep:false,exact:true,inline:"span",styles:{textDecoration:r}},null,t)}))}))}))}
if(n){if(pp(n)){var p=f.createRng()
p.setStartBefore(n)
p.setEndAfter(n)
m(p)}else m(n)
return}if("false"===f.getContentEditable(c.getNode())){n=c.getNode()
for(var g=0;g<o.length;g++)if(o[g].ceFalseOverride&&gk(e,o[g],r,n,n))break
return}if(c.isCollapsed()&&i.inline&&!ig(e).length)PS(e,t,r,a)
else{pg(c,true,(function(){mg(e,m)}))
i.inline&&mS(e,t,r,c.getStart())&&hp(f,c,c.getRng())
e.nodeChanged()}}
var wk=dr.each
var xk=function(e,t,r,n){var a=function(t){if(1===t.nodeType&&t.parentNode&&1===t.parentNode.nodeType){var r=_p(e,t.parentNode)
e.getStyle(t,"color")&&r?e.setStyle(t,"text-decoration",r):e.getStyle(t,"text-decoration")===r&&e.setStyle(t,"text-decoration",null)}}
if(t.styles&&(t.styles.color||t.styles.textDecoration)){dr.walk(n,a,"childNodes")
a(n)}}
var Sk=function(e,t,r,n){t.styles&&t.styles.backgroundColor&&JS(n,ZS(e,"fontSize"),ek(e,"backgroundColor",Sp(t.styles.backgroundColor,r)))}
var kk=function(e,t,r,n){if("sub"===t.inline||"sup"===t.inline){JS(n,ZS(e,"fontSize"),ek(e,"fontSize",""))
e.remove(e.select("sup"===t.inline?"sub":"sup",n),true)}}
var Nk=function(e,t,r,n){wk(t,(function(t){wk(e.dom.select(t.inline,n),(function(n){if(!WS(n))return
gk(e,t,r,n,t.exact?n:null)}))
GS(e.dom,t,n)}))}
var Ek=function(e,t,r,n,a){if(vS(e,a.parentNode,r,n)&&gk(e,t,n,a))return
t.merge_with_parents&&e.dom.getParent(a.parentNode,(function(o){if(vS(e,o,r,n)){gk(e,t,n,a)
return true}}))}
var _k=dr.each
var Tk=function(e,t){return Be(e,t)}
var Ak=function(e){return e&&1===e.nodeType&&!sp(e)&&!Hm(e)&&!Wn(e)}
var Rk=function(e,t,r,n){if(Jd(e)&&Bp(t)){var a=qe(qe({},e.schema.getTextBlockElements()),{td:{},th:{},li:{},dt:{},dd:{},figcaption:{},caption:{},details:{},summary:{}})
var o=aS(yr.fromDom(r),(function(e){return Hm(e.dom)}))
return Be(a,n)&&Oi(yr.fromDom(r.parentNode),false)&&!o}return false}
var Dk=function(e,t,r,n){var a=e.formatter.get(t)
var o=a[0]
var i=!n&&e.selection.isCollapsed()
var u=e.dom
var f=e.selection
var c=function(e,t){t=t||o
if(e){t.onformat&&t.onformat(e,t,r,n)
_k(t.styles,(function(t,n){u.setStyle(e,n,Sp(t,r))}))
if(t.styles){var a=u.getAttrib(e,"style")
a&&u.setAttrib(e,"data-mce-style",a)}_k(t.attributes,(function(t,n){u.setAttrib(e,n,Sp(t,r))}))
_k(t.classes,(function(t){t=Sp(t,r)
u.hasClass(e,t)||u.addClass(e,t)}))}}
var s=function(e,t){var r=false
if(!Op(o))return false
_k(e,(function(e){if("collapsed"in e&&e.collapsed!==i)return
if(u.is(t,e.selector)&&!Hm(t)){c(t,e)
r=true
return false}}))
return r}
var l=function(n,i,u,f){var l=[]
var d=true
var v=o.inline||o.block
var m=n.create(v)
c(m)
Zp(n,i,(function(i){var u
var p=function(i){var g=false
var h=d
var y=i.nodeName.toLowerCase()
var b=i.parentNode.nodeName.toLowerCase()
if(jn(i)&&n.getContentEditable(i)){h=d
d="true"===n.getContentEditable(i)
g=true}if(ta(i)&&!Rk(e,o,i,b)){u=null
Dp(o)&&n.remove(i)
return}if(o.wrapper&&vS(e,i,t,r)){u=null
return}if(d&&!g&&Dp(o)&&!o.wrapper&&bp(e,y)&&Cp(e,b,v)){var C=n.rename(i,v)
c(C)
l.push(C)
u=null
return}if(Op(o)){var w=s(a,i)
Jn(i)&&Pp(n,i.parentNode)&&s(a,i.parentNode)
if(!Tk(o,"inline")||w){u=null
return}}if(!d||g||!Cp(e,v,y)||!Cp(e,b,v)||!f&&3===i.nodeType&&1===i.nodeValue.length&&65279===i.nodeValue.charCodeAt(0)||Hm(i)||Tk(o,"inline")&&n.isBlock(i)){u=null
_k(dr.grep(i.childNodes),p)
g&&(d=h)
u=null}else{if(!u){u=n.clone(m,false)
i.parentNode.insertBefore(u,i)
l.push(u)}u.appendChild(i)}}
_k(i,p)}))
true===o.links&&_k(l,(function(e){var t=function(e){"A"===e.nodeName&&c(e,o)
_k(dr.grep(e.childNodes),t)}
t(e)}))
_k(l,(function(i){var u=function(e){var t=0
_k(e.childNodes,(function(e){xp(e)||sp(e)||t++}))
return t}
var f=function(e){var t=false
_k(e.childNodes,(function(e){if(Ak(e)){t=e
return false}}))
return t}
var s=function(e){var t
var r=f(e)
if(r&&!sp(r)&&lS(n,r,o)){t=n.clone(r,false)
c(t)
n.replace(t,e,true)
n.remove(r,true)}return t||e}
var d=u(i)
if((l.length>1||!n.isBlock(i))&&0===d){n.remove(i,true)
return}if(Bp(o)||o.wrapper){o.exact||1!==d||(i=s(i))
Nk(e,a,r,i)
Ek(e,o,t,r,i)
Sk(n,o,r,i)
xk(n,o,r,i)
kk(n,o,r,i)
YS(n,o,r,i)}}))}
if("false"===u.getContentEditable(f.getNode())){n=f.getNode()
for(var d=0,v=a.length;d<v;d++){var m=a[d]
if(m.ceFalseOverride&&Op(m)&&u.is(n,m.selector)){c(n,m)
return}}return}if(o){if(n)if(pp(n)){if(!s(a,n)){var p=u.createRng()
p.setStartBefore(n)
p.setEndAfter(n)
l(u,Gp(e,p,a),null,true)}}else l(u,n,null,true)
else if(i&&Bp(o)&&!ig(e).length)BS(e,t,r)
else{var g=f.getNode()
var h=a[0]
e.settings.forced_root_block||!h.defaultBlock||u.getParent(g,u.isBlock)||Dk(e,h.defaultBlock)
f.setRng(vx(f.getRng()))
pg(f,true,(function(t){mg(e,(function(t,r){var n=r?t:Gp(e,t,a)
l(u,n)}))}))
hp(u,f,f.getRng())
e.nodeChanged()}qS(t,e)}}
var Ok=function(e,t){var r=jc({})
e.set({})
t.on("NodeChange",(function(n){Bk(t,n.element,r,e.get())}))}
var Bk=function(e,t,r,n){var a=Ce(r.get())
var o={}
var i={}
var u=re(Tp(e.dom,t),(function(e){return 1===e.nodeType&&!e.getAttribute("data-mce-bogus")}))
xe(n,(function(t,r){dr.each(u,(function(n){if(e.formatter.matchNode(n,r,{},t.similar)){if(-1===a.indexOf(r)){Z(t.callbacks,(function(e){e(true,{node:n,format:r,parents:u})}))
o[r]=t.callbacks}i[r]=t.callbacks
return false}if(cS(e,n,r))return false}))}))
var f=Pk(r.get(),i,t,u)
r.set(qe(qe({},o),f))}
var Pk=function(e,t,r,n){return _e(e,(function(e,a){if(Oe(t,a))return true
Z(e,(function(e){e(false,{node:r,format:a,parents:n})}))
return false})).t}
var Lk=function(e,t,r,n){var a=e.get()
Z(t.split(","),(function(e){a[e]||(a[e]={similar:n,callbacks:[]})
a[e].callbacks.push(r)}))
e.set(a)}
var Ik=function(e,t,r){var n=e.get()
Z(t.split(","),(function(e){n[e].callbacks=re(n[e].callbacks,(function(e){return e!==r}))
0===n[e].callbacks.length&&delete n[e]}))
e.set(n)}
var Mk=function(e,t,r,n,a){null===t.get()&&Ok(t,e)
Lk(t,r,n,a)
return{unbind:function(){return Ik(t,r,n)}}}
var Fk=function(e,t,r,n){var a=e.formatter.get(t)
!mS(e,t,r,n)||"toggle"in a[0]&&!a[0].toggle?Dk(e,t,r,n):Ck(e,t,r,n)}
var Uk=function(e,t){var r=t||document
var n=r.createDocumentFragment()
Z(e,(function(e){n.appendChild(e.dom)}))
return yr.fromDom(n)}
var zk=function(e,t,r){return{element:e,width:t,rows:r}}
var jk=function(e,t){return{element:e,cells:t}}
var Hk=function(e,t){return{x:e,y:t}}
var Vk=function(e,t){var r=parseInt(la(e,t),10)
return isNaN(r)?1:r}
var qk=function(e,t,r,n,a){var o=Vk(a,"rowspan")
var i=Vk(a,"colspan")
var u=e.rows
for(var f=r;f<r+o;f++){u[f]||(u[f]=jk(Ls(n),[]))
for(var c=t;c<t+i;c++){var s=u[f].cells
s[c]=f===r&&c===t?a:Ps(a)}}}
var $k=function(e,t,r){var n=e.rows
var a=n[r]?n[r].cells:[]
return!!a[t]}
var Wk=function(e,t,r){while($k(e,t,r))t++
return t}
var Kk=function(e){return ae(e,(function(e,t){return t.cells.length>e?t.cells.length:e}),0)}
var Xk=function(e,t){var r=e.rows
for(var n=0;n<r.length;n++){var a=r[n].cells
for(var o=0;o<a.length;o++)if(Dr(a[o],t))return q.some(Hk(o,n))}return q.none()}
var Yk=function(e,t,r,n,a){var o=[]
var i=e.rows
for(var u=r;u<=a;u++){var f=i[u].cells
var c=t<n?f.slice(t,n+1):f.slice(n,t+1)
o.push(jk(i[u].element,c))}return o}
var Gk=function(e,t,r){var n=t.x,a=t.y
var o=r.x,i=r.y
var u=a<i?Yk(e,n,a,o,i):Yk(e,n,i,o,a)
return zk(e.element,Kk(u),u)}
var Jk=function(e,t){var r=Ps(e.element)
var n=yr.fromTag("tbody")
xn(n,t)
bn(r,n)
return r}
var Qk=function(e){return Q(e.rows,(function(e){var t=Q(e.cells,(function(e){var t=Ls(e)
ma(t,"colspan")
ma(t,"rowspan")
return t}))
var r=Ps(e.element)
xn(r,t)
return r}))}
var Zk=function(e){var t=zk(Ps(e),0,[])
Z(gs(e,"tr"),(function(e,r){Z(gs(e,"td,th"),(function(n,a){qk(t,Wk(t,a,r),r,e,n)}))}))
return zk(t.element,Kk(t.rows),t.rows)}
var eN=function(e){return Jk(e,Qk(e))}
var tN=function(e,t,r){return Xk(e,t).bind((function(t){return Xk(e,r).map((function(r){return Gk(e,t,r)}))}))}
var rN=function(e){return ie(e,(function(e){return"ul"===Lr(e)||"ol"===Lr(e)}))}
var nN=function(e,t){return ie(e,(function(e){return"li"===Lr(e)&&lg(e,t)})).fold(D([]),(function(t){return rN(e).map((function(e){var t=yr.fromTag(Lr(e))
var r=Te(wa(e),(function(e,t){return ct(t,"list-style")}))
ha(t,r)
return[yr.fromTag("li"),t]})).getOr([])}))}
var aN=function(e,t){var r=ae(t,(function(e,t){bn(t,e)
return t}),e)
return t.length>0?Uk([r]):r}
var oN=function(e){return Bo(e)?Kr(e).filter(Oo).fold(D([]),(function(t){return[e,t]})):Oo(e)?[e]:[]}
var iN=function(e,t){var r=yr.fromDom(t.commonAncestorContainer)
var n=pC(r,e)
var a=re(n,(function(e){return Ao(e)||Eo(e)}))
var o=nN(n,t)
var i=a.concat(o.length?o:oN(r))
return Q(i,Ps)}
var uN=function(){return Uk([])}
var fN=function(e,t){return aN(yr.fromDom(t.cloneContents()),iN(e,t))}
var cN=function(e,t){return Za(t,"table",B(Dr,e))}
var sN=function(e,t){return cN(e,t[0]).bind((function(e){var r=t[0]
var n=t[t.length-1]
var a=Zk(e)
return tN(a,r,n).map((function(e){return Uk([eN(e)])}))})).getOrThunk(uN)}
var lN=function(e,t){return t.length>0&&t[0].collapsed?uN():fN(e,t[0])}
var dN=function(e,t){var r=og(t,e)
return r.length>0?sN(e,r):lN(e,t)}
var vN=function(e){return e.replace(/^[ \f\n\r\t\v]+/,"")}
var mN=function(e,t){return t>=0&&t<e.length&&vp(e.charAt(t))}
var pN=function(e,t){var r=qo(e.innerText)
return t?vN(r):r}
var gN=function(e){return e.map((function(e){return e.nodeName})).getOr("div").toLowerCase()}
var hN=function(e){return q.from(e.selection.getRng()).map((function(t){var r=q.from(e.dom.getParent(t.commonAncestorContainer,e.dom.isBlock))
var n=e.getBody()
var a=gN(r)
var o=Zt.browser.isIE()&&"pre"!==a
var i=e.dom.add(n,a,{"data-mce-bogus":"all",style:"overflow: hidden; opacity: 0;"},t.cloneContents())
var u=pN(i,o)
var f=qo(i.textContent)
e.dom.remove(i)
if(mN(f,0)||mN(f,f.length-1)){var c=r.getOr(n)
var s=pN(c,o)
var l=s.indexOf(u)
if(-1===l)return u
var d=mN(s,l-1)
var v=mN(s,l+u.length)
return(d?" ":"")+u+(v?" ":"")}return u})).getOr("")}
var yN=function(e,t){var r=e.selection.getRng(),n=e.dom.create("body")
var a=e.selection.getSel()
var o=sb(e,eg(a))
var i=t.contextual?dN(yr.fromDom(e.getBody()),o).dom:r.cloneContents()
i&&n.appendChild(i)
return e.selection.serializer.serialize(n,t)}
var bN=function(e,t,r){void 0===r&&(r={})
r.get=true
r.format=t
r.selection=true
r=e.fire("BeforeGetContent",r)
if(r.isDefaultPrevented()){e.fire("GetContent",r)
return r.content}if("text"===r.format)return hN(e)
r.getInner=true
var n=yN(e,r)
if("tree"===r.format)return n
r.content=e.selection.isCollapsed()?"":n
e.fire("GetContent",r)
return r.content}
var CN=0,wN=1,xN=2
var SN=function(e,t){var r=e.length+t.length+2
var n=new Array(r)
var a=new Array(r)
var o=function(e,t,r){return{start:e,end:t,diag:r}}
var i=function(r,n,a,o,u){var c=f(r,n,a,o)
if(null===c||c.start===n&&c.diag===n-o||c.end===r&&c.diag===r-a){var s=r
var l=a
while(s<n||l<o)if(s<n&&l<o&&e[s]===t[l]){u.push([CN,e[s]]);++s;++l}else if(n-r>o-a){u.push([xN,e[s]]);++s}else{u.push([wN,t[l]]);++l}}else{i(r,c.start,a,c.start-c.diag,u)
for(var d=c.start;d<c.end;++d)u.push([CN,e[d]])
i(c.end,n,c.end-c.diag,o,u)}}
var u=function(r,n,a,i){var u=r
while(u-n<i&&u<a&&e[u]===t[u-n])++u
return o(r,u,n)}
var f=function(r,o,i,f){var c=o-r
var s=f-i
if(0===c||0===s)return null
var l=c-s
var d=s+c
var v=(d%2===0?d:d+1)/2
n[1+v]=r
a[1+v]=o+1
var m,p,g,h,y
for(m=0;m<=v;++m){for(p=-m;p<=m;p+=2){g=p+v
p===-m||p!==m&&n[g-1]<n[g+1]?n[g]=n[g+1]:n[g]=n[g-1]+1
h=n[g]
y=h-r+i-p
while(h<o&&y<f&&e[h]===t[y]){n[g]=++h;++y}if(l%2!==0&&l-m<=p&&p<=l+m&&a[g-l]<=n[g])return u(a[g-l],p+r-i,o,f)}for(p=l-m;p<=l+m;p+=2){g=p+v-l
p===l-m||p!==l+m&&a[g+1]<=a[g-1]?a[g]=a[g+1]-1:a[g]=a[g-1]
h=a[g]-1
y=h-r+i-p
while(h>=r&&y>=i&&e[h]===t[y]){a[g]=h--
y--}if(l%2===0&&-m<=p&&p<=m&&a[g]<=n[g+l])return u(a[g],p+r-i,o,f)}}}
var c=[]
i(0,e.length,0,t.length,c)
return c}
var kN=function(e){if(jn(e))return e.outerHTML
if(Jn(e))return au.encodeRaw(e.data,false)
if(Qn(e))return"\x3c!--"+e.data+"--\x3e"
return""}
var NN=function(e){var t
var r=document.createElement("div")
var n=document.createDocumentFragment()
e&&(r.innerHTML=e)
while(t=r.firstChild)n.appendChild(t)
return n}
var EN=function(e,t,r){var n=NN(t)
if(e.hasChildNodes()&&r<e.childNodes.length){var a=e.childNodes[r]
a.parentNode.insertBefore(n,a)}else e.appendChild(n)}
var _N=function(e,t){if(e.hasChildNodes()&&t<e.childNodes.length){var r=e.childNodes[t]
r.parentNode.removeChild(r)}}
var TN=function(e,t){var r=0
Z(e,(function(e){if(e[0]===CN)r++
else if(e[0]===wN){EN(t,e[1],r)
r++}else e[0]===xN&&_N(t,r)}))}
var AN=function(e){return re(Q(ye(e.childNodes),kN),(function(e){return e.length>0}))}
var RN=function(e,t){var r=Q(ye(t.childNodes),kN)
TN(SN(r,e),t)
return t}
var DN=jc(q.none())
var ON=function(){return DN.get().getOrThunk((function(){var e=document.implementation.createHTMLDocument("undo")
DN.set(q.some(e))
return e}))}
var BN=function(e){return-1!==e.indexOf("</iframe>")}
var PN=function(e){return{type:"fragmented",fragments:e,content:"",bookmark:null,beforeBookmark:null}}
var LN=function(e){return{type:"complete",fragments:null,content:e,bookmark:null,beforeBookmark:null}}
var IN=function(e){var t=AN(e.getBody())
var r=ce(t,(function(t){var r=Ab(e.serializer,t)
return r.length>0?[r]:[]}))
var n=r.join("")
return BN(n)?PN(r):LN(n)}
var MN=function(e,t,r){"fragmented"===t.type?RN(t.fragments,e.getBody()):e.setContent(t.content,{format:"raw"})
e.selection.moveToBookmark(r?t.beforeBookmark:t.bookmark)}
var FN=function(e){return"fragmented"===e.type?e.fragments.join(""):e.content}
var UN=function(e){var t=yr.fromTag("body",ON())
Os(t,FN(e))
Z(gs(t,"*[data-mce-bogus]"),Nn)
return Ds(t)}
var zN=function(e,t){return FN(e)===FN(t)}
var jN=function(e,t){return UN(e)===UN(t)}
var HN=function(e,t){return!(!e||!t)&&(!!zN(e,t)||jN(e,t))}
var VN=function(e){return 0===e.get()}
var qN=function(e,t,r){VN(r)&&(e.typing=t)}
var $N=function(e,t){if(e.typing){qN(e,false,t)
e.add()}}
var WN=function(e){if(e.typing){e.typing=false
e.add()}}
var KN=function(e,t,r){VN(t)&&r.set(q.some(rd(e.selection)))}
var XN=function(e,t,r,n,a,o,i){var u=IN(e)
o=o||{}
o=dr.extend(o,u)
if(false===VN(n)||e.removed)return null
var f=t.data[r.get()]
if(e.fire("BeforeAddUndo",{level:o,lastLevel:f,originalEvent:i}).isDefaultPrevented())return null
if(f&&HN(f,o))return null
t.data[r.get()]&&a.get().each((function(e){t.data[r.get()].beforeBookmark=e}))
var c=uv(e)
if(c&&t.data.length>c){for(var s=0;s<t.data.length-1;s++)t.data[s]=t.data[s+1]
t.data.length--
r.set(t.data.length)}o.bookmark=rd(e.selection)
r.get()<t.data.length-1&&(t.data.length=r.get()+1)
t.data.push(o)
r.set(t.data.length-1)
var l={level:o,lastLevel:f,originalEvent:i}
if(r.get()>0){e.setDirty(true)
e.fire("AddUndo",l)
e.fire("change",l)}else e.fire("AddUndo",l)
return o}
var YN=function(e,t,r){t.data=[]
r.set(0)
t.typing=false
e.fire("ClearUndos")}
var GN=function(e,t,r,n,a){if(t.transact(n)){var o=t.data[r.get()].bookmark
var i=t.data[r.get()-1]
MN(e,i,true)
t.transact(a)&&(t.data[r.get()-1].beforeBookmark=o)}}
var JN=function(e,t,r){var n
if(t.get()<r.length-1){t.set(t.get()+1)
n=r[t.get()]
MN(e,n,false)
e.setDirty(true)
e.fire("Redo",{level:n})}return n}
var QN=function(e,t,r,n){var a
if(t.typing){t.add()
t.typing=false
qN(t,false,r)}if(n.get()>0){n.set(n.get()-1)
a=t.data[n.get()]
MN(e,a,true)
e.setDirty(true)
e.fire("Undo",{level:a})}return a}
var ZN=function(e){e.clear()
e.add()}
var eE=function(e,t,r){return r.get()>0||t.typing&&t.data[0]&&!HN(IN(e),t.data[0])}
var tE=function(e,t){return t.get()<e.data.length-1&&!e.typing}
var rE=function(e,t,r){$N(e,t)
e.beforeChange()
e.ignore(r)
return e.add()}
var nE=function(e,t){try{e.set(e.get()+1)
t()}finally{e.set(e.get()-1)}}
var aE=function(e,t){var r=e.dom
var n=N(t)?t:e.getBody()
S(e.hasVisual)&&(e.hasVisual=mv(e))
Z(r.select("table,a",n),(function(t){switch(t.nodeName){case"TABLE":var n=pv(e)
var a=r.getAttrib(t,"border")
a&&"0"!==a||!e.hasVisual?r.removeClass(t,n):r.addClass(t,n)
break
case"A":if(!r.getAttrib(t,"href")){var o=r.getAttrib(t,"name")||t.id
var i=gv(e)
o&&e.hasVisual?r.addClass(t,i):r.removeClass(t,i)}}}))
e.fire("VisualAid",{element:t,hasVisual:e.hasVisual})}
var oE=function(e){return{undoManager:{beforeChange:function(t,r){return KN(e,t,r)},addUndoLevel:function(t,r,n,a,o,i){return XN(e,t,r,n,a,o,i)},undo:function(t,r,n){return QN(e,t,r,n)},redo:function(t,r){return JN(e,t,r)},clear:function(t,r){return YN(e,t,r)},reset:function(e){return ZN(e)},hasUndo:function(t,r){return eE(e,t,r)},hasRedo:function(e,t){return tE(e,t)},transact:function(e,t,r){return rE(e,t,r)},ignore:function(e,t){return nE(e,t)},extra:function(t,r,n,a){return GN(e,t,r,n,a)}},formatter:{match:function(t,r,n){return mS(e,t,r,n)},matchAll:function(t,r){return pS(e,t,r)},matchNode:function(t,r,n,a){return vS(e,t,r,n,a)},canApply:function(t){return hS(e,t)},closest:function(t){return gS(e,t)},apply:function(t,r,n){return Dk(e,t,r,n)},remove:function(t,r,n,a){return Ck(e,t,r,n,a)},toggle:function(t,r,n){return Fk(e,t,r,n)},formatChanged:function(t,r,n,a){return Mk(e,t,r,n,a)}},editor:{getContent:function(t,r){return Bb(e,t,r)},setContent:function(t,r){return nS(e,t,r)},insertContent:function(t,r){return Kx(e,t,r)},addVisual:function(t){return aE(e,t)}},selection:{getContent:function(t,r){return bN(e,t,r)}},raw:{getModel:function(){return q.none()}}}}
var iE=function(e){var t=function(e){return b(e)?e:{}}
var r=L("Unimplemented feature for rtc")
var n=e.undoManager,a=e.formatter,o=e.editor,i=e.selection,u=e.raw
var f=T
return{undoManager:{beforeChange:f,addUndoLevel:r,undo:function(){return n.undo()},redo:function(){return n.redo()},clear:function(){return n.clear()},reset:function(){return n.reset()},hasUndo:function(){return n.hasUndo()},hasRedo:function(){return n.hasRedo()},transact:function(e,t,r){return n.transact(r)},ignore:function(e,t){return n.ignore(t)},extra:function(e,t,r,a){return n.extra(r,a)}},formatter:{match:function(e,r,n){return a.match(e,t(r))},matchAll:r,matchNode:r,canApply:function(e){return a.canApply(e)},closest:function(e){return a.closest(e)},apply:function(e,r,n){return a.apply(e,t(r))},remove:function(e,r,n,o){return a.remove(e,t(r))},toggle:function(e,r,n){return a.toggle(e,t(r))},formatChanged:function(e,t,r,n){return a.formatChanged(t,r,n)}},editor:{getContent:function(e,t){return o.getContent(e)},setContent:function(e,t){return o.setContent(e,t)},insertContent:function(e,t){return o.insertContent(e)},addVisual:f},selection:{getContent:function(e,t){return i.getContent(t)}},raw:{getModel:function(){return q.some(u.getRawModel())}}}}
var uE=function(){var e=D(null)
var t=D("")
return{undoManager:{beforeChange:T,addUndoLevel:e,undo:e,redo:e,clear:T,reset:T,hasUndo:F,hasRedo:F,transact:e,ignore:T,extra:T},formatter:{match:F,matchAll:D([]),matchNode:F,canApply:F,closest:t,apply:T,remove:T,toggle:T,formatChanged:D({unbind:T})},editor:{getContent:t,setContent:t,insertContent:T,addVisual:T},selection:{getContent:t},raw:{getModel:D(q.none())}}}
var fE=function(e){return Oe(e.plugins,"rtc")}
var cE=function(e){return De(e.plugins,"rtc").bind((function(e){return q.from(e.setup)}))}
var sE=function(e){var t=e
return cE(e).fold((function(){t.rtcInstance=oE(e)
return q.none()}),(function(e){return q.some(e().then((function(e){t.rtcInstance=iE(e)
return e.rtc.isRemote}),(function(e){t.rtcInstance=uE()
return no.reject(e)})))}))}
var lE=function(e){return e.rtcInstance?e.rtcInstance:oE(e)}
var dE=function(e){var t=e.rtcInstance
if(t)return t
throw new Error("Failed to get RTC instance not yet initialized.")}
var vE=function(e,t,r){dE(e).undoManager.beforeChange(t,r)}
var mE=function(e,t,r,n,a,o,i){return dE(e).undoManager.addUndoLevel(t,r,n,a,o,i)}
var pE=function(e,t,r,n){return dE(e).undoManager.undo(t,r,n)}
var gE=function(e,t,r){return dE(e).undoManager.redo(t,r)}
var hE=function(e,t,r){dE(e).undoManager.clear(t,r)}
var yE=function(e,t){dE(e).undoManager.reset(t)}
var bE=function(e,t,r){return dE(e).undoManager.hasUndo(t,r)}
var CE=function(e,t,r){return dE(e).undoManager.hasRedo(t,r)}
var wE=function(e,t,r,n){return dE(e).undoManager.transact(t,r,n)}
var xE=function(e,t,r){dE(e).undoManager.ignore(t,r)}
var SE=function(e,t,r,n,a){dE(e).undoManager.extra(t,r,n,a)}
var kE=function(e,t,r,n){return dE(e).formatter.match(t,r,n)}
var NE=function(e,t,r){return dE(e).formatter.matchAll(t,r)}
var EE=function(e,t,r,n,a){return dE(e).formatter.matchNode(t,r,n,a)}
var _E=function(e,t){return dE(e).formatter.canApply(t)}
var TE=function(e,t){return dE(e).formatter.closest(t)}
var AE=function(e,t,r,n){dE(e).formatter.apply(t,r,n)}
var RE=function(e,t,r,n,a){dE(e).formatter.remove(t,r,n,a)}
var DE=function(e,t,r,n){dE(e).formatter.toggle(t,r,n)}
var OE=function(e,t,r,n,a){void 0===a&&(a=false)
return dE(e).formatter.formatChanged(t,r,n,a)}
var BE=function(e,t,r){return lE(e).editor.getContent(t,r)}
var PE=function(e,t,r){return lE(e).editor.setContent(t,r)}
var LE=function(e,t,r){return lE(e).editor.insertContent(t,r)}
var IE=function(e,t,r){return dE(e).selection.getContent(t,r)}
var ME=function(e,t){return dE(e).editor.addVisual(t)}
var FE=function(e,t){void 0===t&&(t={})
var r=t.format?t.format:"html"
return IE(e,r,t)}
var UE=function(e){if(0===e.dom.length){kn(e)
return q.none()}return q.some(e)}
var zE=function(e,t){return e.filter((function(e){return Eg.isBookmarkNode(e.dom)})).bind(t?Jr:Gr)}
var jE=function(e,t,r,n){var a=e.dom
var o=t.dom
var i=n?a.length:o.length
if(n){rw(a,o,false,!n)
r.setStart(o,i)}else{rw(o,a,false,!n)
r.setEnd(o,i)}}
var HE=function(e,t){Kr(e).each((function(r){var n=e.dom
t&&zC(r,xl(n,0))?ew(n,0):!t&&HC(r,xl(n,n.length))&&tw(n,n.length)}))}
var VE=function(e,t,r,n){e.bind((function(e){var a=n?tw:ew
a(e.dom,n?e.dom.length:0)
return t.filter(zr).map((function(t){return jE(e,t,r,n)}))})).orThunk((function(){var e=zE(t,n).or(t).filter(zr)
return e.map((function(e){return HE(e,n)}))}))}
var qE=function(e,t){var r=q.from(t.firstChild).map(yr.fromDom)
var n=q.from(t.lastChild).map(yr.fromDom)
e.deleteContents()
e.insertNode(t)
var a=r.bind(Gr).filter(zr).bind(UE)
var o=n.bind(Jr).filter(zr).bind(UE)
VE(a,r,e,true)
VE(o,n,e,false)
e.collapse(false)}
var $E=function(e,t){return qe(qe({format:"html"},e),{set:true,selection:true,content:t})}
var WE=function(e,t){if("raw"!==t.format){var r=e.selection.getRng()
var n=e.dom.getParent(r.commonAncestorContainer,e.dom.isBlock)
var a=n?{context:n.nodeName.toLowerCase()}:{}
var o=e.parser.parse(t.content,qe(qe({isRootContent:true,forced_root_block:false},a),t))
return Fb({validate:e.validate},e.schema).serialize(o)}return t.content}
var KE=function(e,t,r){void 0===r&&(r={})
var n=$E(r,t)
if(!n.no_events){n=e.fire("BeforeSetContent",n)
if(n.isDefaultPrevented()){e.fire("SetContent",n)
return}}r.content=WE(e,n)
var a=e.selection.getRng()
qE(a,a.createContextualFragment(r.content))
e.selection.setRng(a)
jh(e,a)
n.no_events||e.fire("SetContent",n)}
var XE=function(e,t,r){if(e&&e.hasOwnProperty(t)){var n=re(e[t],(function(e){return e!==r}))
0===n.length?delete e[t]:e[t]=n}}
function YE(e,t){var r
var n
return{selectorChangedWithUnbind:function(a,o){if(!r){r={}
n={}
t.on("NodeChange",(function(t){var a=t.element,o=e.getParents(a,null,e.getRoot()),i={}
dr.each(r,(function(t,r){dr.each(o,(function(a){if(e.is(a,r)){if(!n[r]){dr.each(t,(function(e){e(true,{node:a,selector:r,parents:o})}))
n[r]=t}i[r]=t
return false}}))}))
dr.each(n,(function(e,t){if(!i[t]){delete n[t]
dr.each(e,(function(e){e(false,{node:a,selector:t,parents:o})}))}}))}))}r[a]||(r[a]=[])
r[a].push(o)
return{unbind:function(){XE(r,a,o)
XE(n,a,o)}}}}}var GE=function(e){return!!e.select}
var JE=function(e){return!!(e&&e.ownerDocument)&&Pr(yr.fromDom(e.ownerDocument),yr.fromDom(e))}
var QE=function(e){return!!e&&(!!GE(e)||JE(e.startContainer)&&JE(e.endContainer))}
var ZE=function(e,t,r,n){var a
var o
var i=YE(e,n).selectorChangedWithUnbind
var u=function(t,r){var a=e.createRng()
if(N(t)&&N(r)){a.setStart(t,r)
a.setEnd(t,r)
b(a)
g(false)}else{dg(e,a,n.getBody(),true)
b(a)}}
var f=function(e){return FE(n,e)}
var c=function(e,t){return KE(n,e,t)}
var s=function(e){return ab(n.getBody(),y(),e)}
var l=function(e){return ob(n.getBody(),y(),e)}
var d=function(e,t){return B.getBookmark(e,t)}
var v=function(e){return B.moveToBookmark(e)}
var m=function(t,r){cb(e,t,r).each(b)
return t}
var p=function(){var e=y(),t=h()
if(!e||e.item)return false
if(e.compareEndPoints)return 0===e.compareEndPoints("StartToEnd",e)
return!t||e.collapsed}
var g=function(e){var t=y()
t.collapse(!!e)
b(t)}
var h=function(){return t.getSelection?t.getSelection():t.document.selection}
var y=function(){var r,i,u
var f=function(e,t,r){try{return t.compareBoundaryPoints(e,r)}catch(e){return-1}}
var c=t.document
if(void 0!==n.bookmark&&false===Qy(n)){var s=ky(n)
if(s.isSome())return s.map((function(e){return sb(n,[e])[0]})).getOr(c.createRange())}try{if((r=h())&&!zn(r.anchorNode)){i=r.rangeCount>0?r.getRangeAt(0):r.createRange?r.createRange():c.createRange()
i=sb(n,[i])[0]}}catch(e){}i||(i=c.createRange?c.createRange():c.body.createTextRange())
if(i.setStart&&9===i.startContainer.nodeType&&i.collapsed){u=e.getRoot()
i.setStart(u,0)
i.setEnd(u,0)}if(a&&o)if(0===f(i.START_TO_START,i,a)&&0===f(i.END_TO_END,i,a))i=o
else{a=null
o=null}return i}
var b=function(e,t){var r
if(!QE(e))return
var i=GE(e)?e:null
if(i){o=null
try{i.select()}catch(e){}return}var u=h()
var f=n.fire("SetSelectionRange",{range:e,forward:t})
e=f.range
if(u){o=e
try{u.removeAllRanges()
u.addRange(e)}catch(e){}if(false===t&&u.extend){u.collapse(e.endContainer,e.endOffset)
u.extend(e.startContainer,e.startOffset)}a=u.rangeCount>0?u.getRangeAt(0):null}if(!e.collapsed&&e.startContainer===e.endContainer&&u.setBaseAndExtent&&!Zt.ie&&e.endOffset-e.startOffset<2&&e.startContainer.hasChildNodes()){r=e.startContainer.childNodes[e.startOffset]
if(r&&"IMG"===r.tagName){u.setBaseAndExtent(e.startContainer,e.startOffset,e.endContainer,e.endOffset)
u.anchorNode===e.startContainer&&u.focusNode===e.endContainer||u.setBaseAndExtent(r,0,r,1)}}n.fire("AfterSetSelectionRange",{range:e,forward:t})}
var C=function(t){c(e.getOuterHTML(t))
return t}
var w=function(){return ub(n.getBody(),y())}
var x=function(t,r){return fb(e,y(),t,r)}
var S=function(){var t=h()
var r=null===t||void 0===t?void 0:t.anchorNode
var n=null===t||void 0===t?void 0:t.focusNode
if(!t||!r||!n||zn(r)||zn(n))return true
var a=e.createRng()
a.setStart(r,t.anchorOffset)
a.collapse(true)
var o=e.createRng()
o.setStart(n,t.focusOffset)
o.collapse(true)
return a.compareBoundaryPoints(a.START_TO_START,o)<=0}
var k=function(){var t=y()
var r=h()
if(!rg(r)&&vg(n)){var a=uh(e,t)
a.each((function(e){b(e,S())}))
return a.getOr(t)}return t}
var E=function(e,t){i(e,t)
return O}
var _=function(){var t
var r=e.getRoot()
while(r&&"BODY"!==r.nodeName){if(r.scrollHeight>r.clientHeight){t=r
break}r=r.parentNode}return t}
var T=function(e,t){return zh(n,e,t)}
var A=function(e,t){return b(Xg(e,t,n.getDoc()))}
var R=function(){var e=y()
return e.collapsed?xl.fromRangeStart(e).getClientRects()[0]:e.getBoundingClientRect()}
var D=function(){t=a=o=null
P.destroy()}
var O={bookmarkManager:null,controlSelection:null,dom:e,win:t,serializer:r,editor:n,collapse:g,setCursorLocation:u,getContent:f,setContent:c,getBookmark:d,moveToBookmark:v,select:m,isCollapsed:p,isForward:S,setNode:C,getNode:w,getSel:h,setRng:b,getRng:y,getStart:s,getEnd:l,getSelectedBlocks:x,normalize:k,selectorChanged:E,selectorChangedWithUnbind:i,getScrollContainer:_,scrollIntoView:T,placeCaretAt:A,getBoundingClientRect:R,destroy:D}
var B=Eg(O)
var P=Vg(O,n)
O.bookmarkManager=B
O.controlSelection=P
return O}
var e_=function(e,t){Z(t,(function(t){e.attr(t,null)}))}
var t_=function(e,t,r){e.addNodeFilter("font",(function(e){Z(e,(function(e){var n=t.parse(e.attr("style"))
var a=e.attr("color")
var o=e.attr("face")
var i=e.attr("size")
a&&(n.color=a)
o&&(n["font-family"]=o)
i&&(n["font-size"]=r[parseInt(e.attr("size"),10)-1])
e.name="span"
e.attr("style",t.serialize(n))
e_(e,["color","face","size"])}))}))}
var r_=function(e,t){e.addNodeFilter("strike",(function(e){Z(e,(function(e){var r=t.parse(e.attr("style"))
r["text-decoration"]="line-through"
e.name="span"
e.attr("style",t.serialize(r))}))}))}
var n_=function(e,t){var r=hu()
t.convert_fonts_to_spans&&t_(e,r,dr.explode(t.font_size_legacy_values))
r_(e,r)}
var a_=function(e,t){t.inline_styles&&n_(e,t)}
var o_=function(e){return new no((function(t,r){var n=function(){r("Cannot convert "+e+" to Blob. Resource might not exist or is inaccessible.")}
try{var a=new XMLHttpRequest
a.open("GET",e,true)
a.responseType="blob"
a.onload=function(){200===a.status?t(a.response):n()}
a.onerror=n
a.send()}catch(e){n()}}))}
var i_=function(e){var t
var r=decodeURIComponent(e).split(",")
var n=/data:([^;]+)/.exec(r[0])
n&&(t=n[1])
return{type:t,data:r[1]}}
var u_=function(e,t){var r
try{r=atob(t)}catch(e){return q.none()}var n=new Uint8Array(r.length)
for(var a=0;a<n.length;a++)n[a]=r.charCodeAt(a)
return q.some(new Blob([n],{type:e}))}
var f_=function(e){return new no((function(t){var r=i_(e),n=r.type,a=r.data
u_(n,a).fold((function(){return t(new Blob([]))}),t)}))}
var c_=function(e){if(0===e.indexOf("blob:"))return o_(e)
if(0===e.indexOf("data:"))return f_(e)
return null}
var s_=function(e){return new no((function(t){var r=new FileReader
r.onloadend=function(){t(r.result)}
r.readAsDataURL(e)}))}
var l_=0
var d_=function(e){return(e||"blobid")+l_++}
var v_=function(e,t,r,n){var a,o
if(0===t.src.indexOf("blob:")){o=e.getByUri(t.src)
o?r({image:t,blobInfo:o}):c_(t.src).then((function(n){s_(n).then((function(i){a=i_(i).data
o=e.create(d_(),n,a)
e.add(o)
r({image:t,blobInfo:o})}))}),(function(e){n(e)}))
return}var i=i_(t.src),u=i.data,f=i.type
a=u
o=e.getByData(a,f)
o?r({image:t,blobInfo:o}):c_(t.src).then((function(n){o=e.create(d_(),n,a)
e.add(o)
r({image:t,blobInfo:o})}),(function(e){n(e)}))}
var m_=function(e){return e?ye(e.getElementsByTagName("img")):[]}
var p_=function(e,t){var r={}
var n=function(n,a){a||(a=U)
var o=re(m_(n),(function(t){var r=t.src
if(!Zt.fileApi)return false
if(t.hasAttribute("data-mce-bogus"))return false
if(t.hasAttribute("data-mce-placeholder"))return false
if(!r||r===Zt.transparentSrc)return false
if(0===r.indexOf("blob:"))return!e.isUploaded(r)&&a(t)
if(0===r.indexOf("data:"))return a(t)
return false}))
var i=Q(o,(function(e){if(void 0!==r[e.src])return new no((function(t){r[e.src].then((function(r){if("string"===typeof r)return r
t({image:e,blobInfo:r.blobInfo})}))}))
var n=new no((function(r,n){v_(t,e,r,n)})).then((function(e){delete r[e.image.src]
return e})).catch((function(t){delete r[e.src]
return t}))
r[e.src]=n
return n}))
return no.all(i)}
return{findAll:n}}
var g_=function(e,t,r,n){var a=e.padd_empty_with_br||t.insert
a&&r[n.name]?n.empty().append(new pb("br",1)).shortEnded=true:n.empty().append(new pb("#text",3)).value=Uo}
var h_=function(e){return y_(e,"#text")&&e.firstChild.value===Uo}
var y_=function(e,t){return e&&e.firstChild&&e.firstChild===e.lastChild&&e.firstChild.name===t}
var b_=function(e,t){var r=e.getElementRule(t.name)
return r&&r.paddEmpty}
var C_=function(e,t,r,n){return n.isEmpty(t,r,(function(t){return b_(e,t)}))}
var w_=function(e,t){return e&&(t[e.name]||"br"===e.name)}
var x_=function(e){return e.attr("data-mce-bogus")}
var S_=function(e){return e.attr("src")===Zt.transparentSrc||e.attr("data-mce-placeholder")}
var k_=function(e,t){if(t.images_dataimg_filter){var r=new Image
r.src=e.attr("src")
xe(e.attributes.map,(function(e,t){r.setAttribute(t,e)}))
return t.images_dataimg_filter(r)}return true}
var N_=function(e,t){var r=t.blob_cache
var n=function(e){var n=e.attr("src")
if(S_(e)||x_(e))return
yb(n).filter((function(){return k_(e,t)})).bind((function(e){var t=e.type,n=e.data
return q.from(r.getByData(n,t)).orThunk((function(){return u_(t,n).map((function(e){var t=r.create(d_(),e,n)
r.add(t)
return t}))}))})).each((function(t){e.attr("src",t.blobUri())}))}
r&&e.addAttributeFilter("src",(function(e){return Z(e,n)}))}
var E_=function(e,t){var r=e.schema
t.remove_trailing_brs&&e.addNodeFilter("br",(function(e,n,a){var o
var i=e.length
var u
var f=dr.extend({},r.getBlockElements())
var c=r.getNonEmptyElements()
var s,l,d,v
var m=r.getWhiteSpaceElements()
var p,g
f.body=1
for(o=0;o<i;o++){u=e[o]
s=u.parent
if(f[u.parent.name]&&u===s.lastChild){d=u.prev
while(d){v=d.name
if("span"!==v||"bookmark"!==d.attr("data-mce-type")){"br"===v&&(u=null)
break}d=d.prev}if(u){u.remove()
if(C_(r,c,m,s)){p=r.getElementRule(s.name)
p&&(p.removeEmpty?s.remove():p.paddEmpty&&g_(t,a,f,s))}}}else{l=u
while(s&&s.firstChild===l&&s.lastChild===l){l=s
if(f[s.name])break
s=s.parent}if(l===s&&true!==t.padd_empty_with_br){g=new pb("#text",3)
g.value=Uo
u.replace(g)}}}}))
e.addAttributeFilter("href",(function(e){var r=e.length
var n=function(e){var t=e.split(" ").filter((function(e){return e.length>0}))
return t.concat(["noopener"]).sort().join(" ")}
var a=function(e){var t=e?dr.trim(e):""
return/\b(noopener)\b/g.test(t)?t:n(t)}
if(!t.allow_unsafe_link_target)while(r--){var o=e[r]
"a"===o.name&&"_blank"===o.attr("target")&&o.attr("rel",a(o.attr("rel")))}}))
t.allow_html_in_named_anchor||e.addAttributeFilter("id,name",(function(e){var t,r,n,a,o=e.length
while(o--){a=e[o]
if("a"===a.name&&a.firstChild&&!a.attr("href")){n=a.parent
t=a.lastChild
do{r=t.prev
n.insert(t,a)
t=r}while(t)}}}))
t.fix_list_elements&&e.addNodeFilter("ul,ol",(function(e){var t,r,n=e.length
while(n--){t=e[n]
r=t.parent
if("ul"===r.name||"ol"===r.name)if(t.prev&&"li"===t.prev.name)t.prev.append(t)
else{var a=new pb("li",1)
a.attr("style","list-style-type: none")
t.wrap(a)}}}))
t.validate&&r.getValidClasses()&&e.addAttributeFilter("class",(function(e){var t,n,a,o,i,u=e.length
var f=r.getValidClasses()
var c,s
while(u--){t=e[u]
n=t.attr("class").split(" ")
i=""
for(a=0;a<n.length;a++){o=n[a]
s=false
c=f["*"]
c&&c[o]&&(s=true)
c=f[t.name]
!s&&c&&c[o]&&(s=true)
if(s){i&&(i+=" ")
i+=o}}i.length||(i=null)
t.attr("class",i)}}))
N_(e,t)}
var __=dr.makeMap,T_=dr.each,A_=dr.explode,R_=dr.extend
var D_=function(e,t){void 0===t&&(t=pu())
var r={}
var n=[]
var a={}
var o={}
e=e||{}
e.validate=!("validate"in e)||e.validate
e.root_name=e.root_name||"body"
var i=function(e){var r,n,a,o,i,f,c,s,l
var d,v
var m=__("tr,td,th,tbody,thead,tfoot,table")
var p=t.getNonEmptyElements()
var g=t.getWhiteSpaceElements()
var h=t.getTextBlockElements()
var y=t.getSpecialElements()
for(r=0;r<e.length;r++){n=e[r]
if(!n.parent||n.fixed)continue
if(h[n.name]&&"li"===n.parent.name){d=n.next
while(d){if(!h[d.name])break
d.name="li"
d.fixed=true
n.parent.insert(d,n.parent)
d=d.next}n.unwrap(n)
continue}o=[n]
for(a=n.parent;a&&!t.isValidChild(a.name,n.name)&&!m[a.name];a=a.parent)o.push(a)
if(a&&o.length>1){o.reverse()
i=f=u(o[0].clone())
for(l=0;l<o.length-1;l++){if(t.isValidChild(f.name,o[l].name)){c=u(o[l].clone())
f.append(c)}else c=f
for(s=o[l].firstChild;s&&s!==o[l+1];){v=s.next
c.append(s)
s=v}f=c}if(C_(t,p,g,i))a.insert(n,o[0],true)
else{a.insert(i,o[0],true)
a.insert(n,i)}a=o[0];(C_(t,p,g,a)||y_(a,"br"))&&a.empty().remove()}else if(n.parent){if("li"===n.name){d=n.prev
if(d&&("ul"===d.name||"ol"===d.name)){d.append(n)
continue}d=n.next
if(d&&("ul"===d.name||"ol"===d.name)){d.insert(n,d.firstChild,true)
continue}n.wrap(u(new pb("ul",1)))
continue}t.isValidChild(n.parent.name,"div")&&t.isValidChild("div",n.name)?n.wrap(u(new pb("div",1))):y[n.name]?n.empty().remove():n.unwrap()}}}
var u=function(e){var t,i,u
i=e.name
if(i in r){u=a[i]
u?u.push(e):a[i]=[e]}t=n.length
while(t--){i=n[t].name
if(i in e.attributes.map){u=o[i]
u?u.push(e):o[i]=[e]}}return e}
var f=function(e,t){T_(A_(e),(function(e){var n=r[e]
n||(r[e]=n=[])
n.push(t)}))}
var c=function(){var e=[]
for(var t in r)r.hasOwnProperty(t)&&e.push({name:t,callbacks:r[t]})
return e}
var s=function(e,t){T_(A_(e),(function(e){var r
for(r=0;r<n.length;r++)if(n[r].name===e){n[r].callbacks.push(t)
return}n.push({name:e,callbacks:[t]})}))}
var l=function(){return[].concat(n)}
var d=function(u,f){var c,s,l,d,v,m,p
var g=[]
var h
var y
var b=function(e){return false===e?"":true===e?"p":e}
f=f||{}
a={}
o={}
var C=R_(__("script,style,head,html,body,title,meta,param"),t.getBlockElements())
var w=t.getNonEmptyElements()
var x=t.children
var S=e.validate
var k="forced_root_block"in f?f.forced_root_block:e.forced_root_block
var N=b(k)
var E=t.getWhiteSpaceElements()
var _=/^[ \t\r\n]+/
var T=/[ \t\r\n]+$/
var A=/[ \t\r\n]+/g
var R=/^[ \t\r\n]+$/
h=E.hasOwnProperty(f.context)||E.hasOwnProperty(e.root_name)
var D=function(){var r,n,a=I.firstChild
var o=function(e){if(e){a=e.firstChild
a&&3===a.type&&(a.value=a.value.replace(_,""))
a=e.lastChild
a&&3===a.type&&(a.value=a.value.replace(T,""))}}
if(!t.isValidChild(I.name,N.toLowerCase()))return
while(a){r=a.next
if(3===a.type||1===a.type&&"p"!==a.name&&!C[a.name]&&!a.attr("data-mce-type"))if(n)n.append(a)
else{n=O(N,1)
n.attr(e.forced_root_block_attrs)
I.insert(n,a)
n.append(a)}else{o(n)
n=null}a=r}o(n)}
var O=function(e,t){var n=new pb(e,t)
var o
if(e in r){o=a[e]
o?o.push(n):a[e]=[n]}return n}
var B=function(e){var r,n,a,o
var i=t.getBlockElements()
for(r=e.prev;r&&3===r.type;){a=r.value.replace(T,"")
if(a.length>0){r.value=a
return}n=r.next
if(n){if(3===n.type&&n.value.length){r=r.prev
continue}if(!i[n.name]&&"script"!==n.name&&"style"!==n.name){r=r.prev
continue}}o=r.prev
r.remove()
r=o}}
var P=function(e){var t
var r={}
for(t in e)"li"!==t&&"p"!==t&&(r[t]=e[t])
return r}
var L=_b({validate:S,allow_html_data_urls:e.allow_html_data_urls,allow_svg_data_urls:e.allow_svg_data_urls,allow_script_urls:e.allow_script_urls,allow_conditional_comments:e.allow_conditional_comments,preserve_cdata:e.preserve_cdata,self_closing_elements:P(t.getSelfClosingElements()),cdata:function(e){y.append(O("#cdata",4)).value=e},text:function(e,t){var r
if(!h){e=e.replace(A," ")
w_(y.lastChild,C)&&(e=e.replace(_,""))}if(0!==e.length){r=O("#text",3)
r.raw=!!t
y.append(r).value=e}},comment:function(e){y.append(O("#comment",8)).value=e},pi:function(e,t){y.append(O(e,7)).value=t
B(y)},doctype:function(e){var t=y.append(O("#doctype",10))
t.value=e
B(y)},start:function(e,r,a){var i,u,f,c
var s=S?t.getElementRule(e):{}
if(s){i=O(s.outputName||e,1)
i.attributes=r
i.shortEnded=a
y.append(i)
c=x[y.name]
c&&x[i.name]&&!c[i.name]&&g.push(i)
u=n.length
while(u--){f=n[u].name
if(f in r.map){m=o[f]
m?m.push(i):o[f]=[i]}}C[e]&&B(i)
a||(y=i)
!h&&E[e]&&(h=true)}},end:function(r){var n,a,o,i
var u=S?t.getElementRule(r):{}
if(u){if(C[r]&&!h){n=y.firstChild
if(n&&3===n.type){a=n.value.replace(_,"")
if(a.length>0){n.value=a
n=n.next}else{o=n.next
n.remove()
n=o
while(n&&3===n.type){a=n.value
o=n.next
if(0===a.length||R.test(a)){n.remove()
n=o}n=o}}}n=y.lastChild
if(n&&3===n.type){a=n.value.replace(T,"")
if(a.length>0){n.value=a
n=n.prev}else{o=n.prev
n.remove()
n=o
while(n&&3===n.type){a=n.value
o=n.prev
if(0===a.length||R.test(a)){n.remove()
n=o}n=o}}}}h&&E[r]&&(h=false)
if(u.removeEmpty&&C_(t,w,E,y)){i=y.parent
C[y.name]?y.empty().remove():y.unwrap()
y=i
return}u.paddEmpty&&(h_(y)||C_(t,w,E,y))&&g_(e,f,C,y)
y=y.parent}}},t)
var I=y=new pb(f.context||e.root_name,11)
L.parse(u,f.format)
S&&g.length&&(f.context?f.invalid=true:i(g))
N&&("body"===I.name||f.isRootContent)&&D()
if(!f.invalid){for(p in a){if(!a.hasOwnProperty(p))continue
m=r[p]
c=a[p]
d=c.length
while(d--)c[d].parent||c.splice(d,1)
for(s=0,l=m.length;s<l;s++)m[s](c,p,f)}for(s=0,l=n.length;s<l;s++){m=n[s]
if(m.name in o){c=o[m.name]
d=c.length
while(d--)c[d].parent||c.splice(d,1)
for(d=0,v=m.callbacks.length;d<v;d++)m.callbacks[d](c,m.name,f)}}}return I}
var v={schema:t,addAttributeFilter:s,getAttributeFilters:l,addNodeFilter:f,getNodeFilters:c,filterNode:u,parse:d}
E_(v,e)
a_(v,e)
return v}
var O_=function(e,t,r){e.addAttributeFilter("data-mce-tabindex",(function(e,t){var r,n=e.length
while(n--){r=e[n]
r.attr("tabindex",r.attr("data-mce-tabindex"))
r.attr(t,null)}}))
e.addAttributeFilter("src,href,style",(function(e,n){var a,o,i=e.length
var u="data-mce-"+n
var f=t.url_converter
var c=t.url_converter_scope
while(i--){a=e[i]
o=a.attr(u)
if(void 0!==o){a.attr(n,o.length>0?o:null)
a.attr(u,null)}else{o=a.attr(n)
"style"===n?o=r.serializeStyle(r.parseStyle(o),a.name):f&&(o=f.call(c,o,n,a.name))
a.attr(n,o.length>0?o:null)}}}))
e.addAttributeFilter("class",(function(e){var t,r,n=e.length
while(n--){t=e[n]
r=t.attr("class")
if(r){r=t.attr("class").replace(/(?:^|\s)mce-item-\w+(?!\S)/g,"")
t.attr("class",r.length>0?r:null)}}}))
e.addAttributeFilter("data-mce-type",(function(e,t,r){var n,a=e.length
while(a--){n=e[a]
if("bookmark"===n.attr("data-mce-type")&&!r.cleanup){var o=q.from(n.firstChild).exists((function(e){return!Vo(e.value)}))
o?n.unwrap():n.remove()}}}))
e.addNodeFilter("noscript",(function(e){var t,r=e.length
while(r--){t=e[r].firstChild
t&&(t.value=au.decode(t.value))}}))
e.addNodeFilter("script,style",(function(e,r){var n,a,o,i=e.length
var u=function(e){return e.replace(/(<!--\[CDATA\[|\]\]-->)/g,"\n").replace(/^[\r\n]*|[\r\n]*$/g,"").replace(/^\s*((<!--)?(\s*\/\/)?\s*<!\[CDATA\[|(<!--\s*)?\/\*\s*<!\[CDATA\[\s*\*\/|(\/\/)?\s*<!--|\/\*\s*<!--\s*\*\/)\s*[\r\n]*/gi,"").replace(/\s*(\/\*\s*\]\]>\s*\*\/(-->)?|\s*\/\/\s*\]\]>(-->)?|\/\/\s*(-->)?|\]\]>|\/\*\s*-->\s*\*\/|\s*-->\s*)\s*$/g,"")}
while(i--){n=e[i]
a=n.firstChild?n.firstChild.value:""
if("script"===r){o=n.attr("type")
o&&n.attr("type","mce-no/type"===o?null:o.replace(/^mce\-/,""))
"xhtml"===t.element_format&&a.length>0&&(n.firstChild.value="// <![CDATA[\n"+u(a)+"\n// ]]>")}else"xhtml"===t.element_format&&a.length>0&&(n.firstChild.value="\x3c!--\n"+u(a)+"\n--\x3e")}}))
e.addNodeFilter("#comment",(function(e){var n,a=e.length
while(a--){n=e[a]
if(t.preserve_cdata&&0===n.value.indexOf("[CDATA[")){n.name="#cdata"
n.type=4
n.value=r.decode(n.value.replace(/^\[CDATA\[|\]\]$/g,""))}else if(0===n.value.indexOf("mce:protected ")){n.name="#text"
n.type=3
n.raw=true
n.value=unescape(n.value).substr(14)}}}))
e.addNodeFilter("xml:namespace,input",(function(e,t){var r,n=e.length
while(n--){r=e[n]
7===r.type?r.remove():1===r.type&&("input"!==t||r.attr("type")||r.attr("type","text"))}}))
e.addAttributeFilter("data-mce-type",(function(t){Z(t,(function(t){"format-caret"===t.attr("data-mce-type")&&(t.isEmpty(e.schema.getNonEmptyElements())?t.remove():t.unwrap())}))}))
e.addAttributeFilter("data-mce-src,data-mce-href,data-mce-style,data-mce-selected,data-mce-expando,data-mce-type,data-mce-resize,data-mce-placeholder",(function(e,t){var r=e.length
while(r--)e[r].attr(t,null)}))}
var B_=function(e){var t=function(e){return e&&"br"===e.name}
var r=e.lastChild
if(t(r)){var n=r.prev
if(t(n)){r.remove()
n.remove()}}}
var P_=function(e,t,r){var n,a
var o=e.dom
t=t.cloneNode(true)
var i=document.implementation
if(i.createHTMLDocument){n=i.createHTMLDocument("")
dr.each("BODY"===t.nodeName?t.childNodes:[t],(function(e){n.body.appendChild(n.importNode(e,true))}))
t="BODY"!==t.nodeName?n.body.firstChild:n.body
a=o.doc
o.doc=n}Ag(e,qe(qe({},r),{node:t}))
a&&(o.doc=a)
return t}
var L_=function(e,t){return e&&e.hasEventListeners("PreProcess")&&!t.no_events}
var I_=function(e,t,r){return L_(e,r)?P_(e,t,r):t}
var M_=function(e,t,r){if(-1===dr.inArray(t,r)){e.addAttributeFilter(r,(function(e,t){var r=e.length
while(r--)e[r].attr(t,null)}))
t.push(r)}}
var F_=function(e,t,r){if(!t.no_events&&e){var n=Rg(e,qe(qe({},t),{content:r}))
return n.content}return r}
var U_=function(e,t,r){var n=qo(r.getInner?t.innerHTML:e.getOuterHTML(t))
return r.selection||Io(yr.fromDom(t))?n:dr.trim(n)}
var z_=function(e,t,r){var n=r.selection?qe({forced_root_block:false},r):r
var a=e.parse(t,n)
B_(a)
return a}
var j_=function(e,t,r){var n=Fb(e,t)
return n.serialize(r)}
var H_=function(e,t,r,n,a){var o=j_(t,r,n)
return F_(e,a,o)}
var V_=function(e,t){var r=["data-mce-selected"]
var n=t&&t.dom?t.dom:Oc.DOM
var a=t&&t.schema?t.schema:pu(e)
e.entity_encoding=e.entity_encoding||"named"
e.remove_trailing_brs=!("remove_trailing_brs"in e)||e.remove_trailing_brs
var o=D_(e,a)
O_(o,e,n)
var i=function(r,i){void 0===i&&(i={})
var u=qe({format:"html"},i)
var f=I_(t,r,u)
var c=U_(n,f,u)
var s=z_(o,c,u)
return"tree"===u.format?s:H_(t,e,a,s,u)}
return{schema:a,addNodeFilter:o.addNodeFilter,addAttributeFilter:o.addAttributeFilter,serialize:i,addRules:function(e){a.addValidElements(e)},setRules:function(e){a.setValidElements(e)},addTempAttr:B(M_,o,r),getTempAttrs:D(r),getNodeFilters:o.getNodeFilters,getAttributeFilters:o.getAttributeFilters}}
var q_=function(e,t){var r=V_(e,t)
return{schema:r.schema,addNodeFilter:r.addNodeFilter,addAttributeFilter:r.addAttributeFilter,serialize:r.serialize,addRules:r.addRules,setRules:r.setRules,addTempAttr:r.addTempAttr,getTempAttrs:r.getTempAttrs,getNodeFilters:r.getNodeFilters,getAttributeFilters:r.getAttributeFilters}}
var $_="html"
var W_=function(e,t){void 0===t&&(t={})
var r=t.format?t.format:$_
return BE(e,t,r)}
var K_=function(e,t,r){void 0===r&&(r={})
return PE(e,t,r)}
var X_=Oc.DOM
var Y_=function(e){X_.setStyle(e.id,"display",e.orgDisplay)}
var G_=function(e){return q.from(e).each((function(e){return e.destroy()}))}
var J_=function(e){e.contentAreaContainer=e.formElement=e.container=e.editorContainer=null
e.bodyElement=e.contentDocument=e.contentWindow=null
e.iframeElement=e.targetElm=null
e.selection&&(e.selection=e.selection.win=e.selection.dom=e.selection.dom.doc=null)}
var Q_=function(e){var t=e.formElement
if(t){if(t._mceOldSubmit){t.submit=t._mceOldSubmit
t._mceOldSubmit=null}X_.unbind(t,"submit reset",e.formEventDelegate)}}
var Z_=function(e){if(!e.removed){var t=e._selectionOverrides,r=e.editorUpload
var n=e.getBody()
var a=e.getElement()
n&&e.save({is_removing:true})
e.removed=true
e.unbindAllNativeEvents()
e.hasHiddenInput&&a&&X_.remove(a.nextSibling)
Dg(e)
e.editorManager.remove(e)
!e.inline&&n&&Y_(e)
Og(e)
X_.remove(e.getContainer())
G_(t)
G_(r)
e.destroy()}}
var eT=function(e,t){var r=e.selection,n=e.dom
if(e.destroyed)return
if(!t&&!e.removed){e.remove()
return}if(!t){e.editorManager.off("beforeunload",e._beforeUnload)
e.theme&&e.theme.destroy&&e.theme.destroy()
G_(r)
G_(n)}Q_(e)
J_(e)
e.destroyed=true}
var tT=Object.prototype.hasOwnProperty
var rT=function(e,t){var r=b(e)&&b(t)
return r?aT(e,t):t}
var nT=function(e){return function(){var t=[]
for(var r=0;r<arguments.length;r++)t[r]=arguments[r]
if(0===t.length)throw new Error("Can't merge zero objects")
var n={}
for(var a=0;a<t.length;a++){var o=t[a]
for(var i in o)tT.call(o,i)&&(n[i]=e(n[i],o[i]))}return n}}
var aT=nT(rT)
var oT=function(e,t){return{sections:D(e),settings:D(t)}}
var iT=qt().deviceType
var uT=iT.isTouch()
var fT=iT.isPhone()
var cT=iT.isTablet()
var sT=["lists","autolink","autosave"]
var lT={table_grid:false,object_resizing:false,resize:false}
var dT=function(e){var t=C(e)?e.join(" "):e
var r=Q(y(t)?t.split(" "):[],lt)
return re(r,(function(e){return e.length>0}))}
var vT=function(e){return re(e,B(G,sT))}
var mT=function(e,t){var r=_e(t,(function(t,r){return G(e,r)}))
return oT(r.t,r.f)}
var pT=function(e,t,r){void 0===r&&(r={})
var n=e.sections()
var a=n.hasOwnProperty(t)?n[t]:{}
return dr.extend({},r,a)}
var gT=function(e,t){return e.sections().hasOwnProperty(t)}
var hT=function(e,t,r){var n=e.sections()
return gT(e,t)&&n[t].theme===r}
var yT=function(e,t){return gT(e,t)?e.sections()[t]:{}}
var bT=function(e,t){return De(e,"toolbar_mode").orThunk((function(){return De(e,"toolbar_drawer").map((function(e){return false===e?"wrap":e}))})).getOr(t)}
var CT=function(e,t,r,n,a){var o={id:t,theme:"silver",toolbar_mode:bT(e,"floating"),plugins:"",document_base_url:r,add_form_submit_trigger:true,submit_patch:true,add_unload_trigger:true,convert_urls:true,relative_urls:true,remove_script_host:true,object_resizing:true,doctype:"<!DOCTYPE html>",visual:true,font_size_legacy_values:"xx-small,small,medium,large,x-large,xx-large,300%",forced_root_block:"p",hidden_input:true,inline_styles:true,convert_fonts_to_spans:true,indent:true,indent_before:"p,h1,h2,h3,h4,h5,h6,blockquote,div,title,style,pre,script,td,th,ul,ol,li,dl,dt,dd,area,table,thead,tfoot,tbody,tr,section,summary,article,hgroup,aside,figure,figcaption,option,optgroup,datalist",indent_after:"p,h1,h2,h3,h4,h5,h6,blockquote,div,title,style,pre,script,td,th,ul,ol,li,dl,dt,dd,area,table,thead,tfoot,tbody,tr,section,summary,article,hgroup,aside,figure,figcaption,option,optgroup,datalist",entity_encoding:"named",url_converter:a.convertURL,url_converter_scope:a}
return qe(qe({},o),n?lT:{})}
var wT=function(e,t){var r={resize:false,toolbar_mode:bT(e,"scrolling"),toolbar_sticky:false}
var n={menubar:false}
return qe(qe(qe({},lT),r),t?n:{})}
var xT=function(e,t){var r=t.external_plugins?t.external_plugins:{}
return e&&e.external_plugins?dr.extend({},e.external_plugins,r):r}
var ST=function(e,t){return[].concat(dT(e)).concat(dT(t))}
var kT=function(e,t,r,n){return e&&hT(t,"mobile","mobile")?vT(n):e&&gT(t,"mobile")?n:r}
var NT=function(e,t,r,n){var a=dT(r.forced_plugins)
var o=dT(n.plugins)
var i=yT(t,"mobile")
var u=i.plugins?dT(i.plugins):o
var f=kT(e,t,o,u)
var c=ST(a,f)
if(Zt.browser.isIE()&&G(c,"rtc"))throw new Error("RTC plugin is not supported on IE 11.")
return dr.extend(n,{plugins:c.join(" ")})}
var ET=function(e,t){return e&&gT(t,"mobile")}
var _T=function(e,t,r,n,a){var o=e?{mobile:wT(a.mobile||{},t)}:{}
var i=mT(["mobile"],aT(o,a))
var u=dr.extend(r,n,i.settings(),ET(e,i)?pT(i,"mobile"):{},{validate:true,external_plugins:xT(n,i.settings())})
return NT(e,i,n,u)}
var TT=function(e,t,r,n,a){var o=CT(a,t,r,uT,e)
return _T(fT||cT,fT,o,n,a)}
var AT=function(e,t,r){return q.from(t.settings[r]).filter(e)}
var RT=function(e){var t={}
"string"===typeof e?Z(e.indexOf("=")>0?e.split(/[;,](?![^=;,]*(?:[;,]|$))/):e.split(","),(function(e){var r=e.split("=")
r.length>1?t[dr.trim(r[0])]=dr.trim(r[1]):t[dr.trim(r[0])]=dr.trim(r[0])})):t=e
return t}
var DT=function(e){return function(t){return C(t)&&se(t,e)}}
var OT=function(e,t,r,n){var a=t in e.settings?e.settings[t]:r
return"hash"===n?RT(a):"string"===n?AT(y,e,t).getOr(r):"number"===n?AT(_,e,t).getOr(r):"boolean"===n?AT(x,e,t).getOr(r):"object"===n?AT(b,e,t).getOr(r):"array"===n?AT(C,e,t).getOr(r):"string[]"===n?AT(DT(y),e,t).getOr(r):"function"===n?AT(E,e,t).getOr(r):a}
var BT=function(){var e={}
var t=function(t,r){e[t]=r}
var r=function(t){if(e[t])return e[t]
return{icons:{}}}
var n=function(t){return Oe(e,t)}
return{add:t,get:r,has:n}}
var PT=BT()
var LT=function(e,t){var r=t.dom
return r[e]}
var IT=function(e,t){return parseInt(ya(t,e),10)}
var MT=B(LT,"clientWidth")
var FT=B(LT,"clientHeight")
var UT=B(IT,"margin-top")
var zT=B(IT,"margin-left")
var jT=function(e){return e.dom.getBoundingClientRect()}
var HT=function(e,t,r){var n=MT(e)
var a=FT(e)
return t>=0&&r>=0&&t<=n&&r<=a}
var VT=function(e,t,r,n){var a=jT(t)
var o=e?a.left+t.dom.clientLeft+zT(t):0
var i=e?a.top+t.dom.clientTop+UT(t):0
var u=r-o
var f=n-i
return{x:u,y:f}}
var qT=function(e,t,r){var n=yr.fromDom(e.getBody())
var a=e.inline?n:$r(n)
var o=VT(e.inline,a,t,r)
return HT(a,o.x,o.y)}
var $T=function(e){return q.from(e).map(yr.fromDom)}
var WT=function(e){var t=e.inline?e.getBody():e.getContentAreaContainer()
return $T(t).map(En).getOr(false)}
var KT=function(){var e=function(){throw new Error("Theme did not provide a NotificationManager implementation.")}
return{open:e,close:e,reposition:e,getArgs:e}}
var XT=function(e){var t=[]
var r=function(){var t=e.theme
return t&&t.getNotificationManagerImpl?t.getNotificationManagerImpl():KT()}
var n=function(){return q.from(t[0])}
var a=function(e,t){return e.type===t.type&&e.text===t.text&&!e.progressBar&&!e.timeout&&!t.progressBar&&!t.timeout}
var o=function(){t.length>0&&r().reposition(t)}
var i=function(e){t.push(e)}
var u=function(e){ue(t,(function(t){return t===e})).each((function(e){t.splice(e,1)}))}
var f=function(f,c){void 0===c&&(c=true)
if(e.removed||!WT(e))return
c&&e.fire("BeforeOpenNotification",{notification:f})
return ie(t,(function(e){return a(r().getArgs(e),f)})).getOrThunk((function(){e.editorManager.setActive(e)
var t=r().open(f,(function(){u(t)
o()
n().fold((function(){return e.focus()}),(function(e){return Vh(yr.fromDom(e.getEl()))}))}))
i(t)
o()
e.fire("OpenNotification",{notification:qe({},t)})
return t}))}
var c=function(){n().each((function(e){r().close(e)
u(e)
o()}))}
var s=function(){return t}
var l=function(e){e.on("SkinLoaded",(function(){var t=$d(e)
t&&f({text:t,type:"warning",timeout:0},false)}))
e.on("ResizeEditor ResizeWindow NodeChange",(function(){lo.requestAnimationFrame(o)}))
e.on("remove",(function(){Z(t.slice(),(function(e){r().close(e)}))}))}
l(e)
return{open:f,close:c,getNotifications:s}}
var YT=ts.PluginManager
var GT=ts.ThemeManager
function JT(){var e=function(){throw new Error("Theme did not provide a WindowManager implementation.")}
return{open:e,openUrl:e,alert:e,confirm:e,close:e,getParams:e,setParams:e}}var QT=function(e){var t=[]
var r=function(){var t=e.theme
return t&&t.getWindowManagerImpl?t.getWindowManagerImpl():JT()}
var n=function(e,t){return function(){var r=[]
for(var n=0;n<arguments.length;n++)r[n]=arguments[n]
return t?t.apply(e,r):void 0}}
var a=function(t){e.fire("OpenWindow",{dialog:t})}
var o=function(t){e.fire("CloseWindow",{dialog:t})}
var i=function(e){t.push(e)
a(e)}
var u=function(r){o(r)
t=re(t,(function(e){return e!==r}))
0===t.length&&e.focus()}
var f=function(){return q.from(t[t.length-1])}
var c=function(t){e.editorManager.setActive(e)
xy(e)
var r=t()
i(r)
return r}
var s=function(e,t){return c((function(){return r().open(e,t,u)}))}
var l=function(e){return c((function(){return r().openUrl(e,u)}))}
var d=function(e,t,a){var o=r()
o.alert(e,n(a||o,t))}
var v=function(e,t,a){var o=r()
o.confirm(e,n(a||o,t))}
var m=function(){f().each((function(e){r().close(e)
u(e)}))}
e.on("remove",(function(){Z(t,(function(e){r().close(e)}))}))
return{open:s,openUrl:l,alert:d,confirm:v,close:m}}
var ZT=function(e,t){e.notificationManager.open({type:"error",text:t})}
var eA=function(e,t){e._skinLoaded?ZT(e,t):e.on("SkinLoaded",(function(){ZT(e,t)}))}
var tA=function(e,t){eA(e,es.translate(["Failed to upload image: {0}",t]))}
var rA=function(e,t,r){zg(e,t,{message:r})
console.error(r)}
var nA=function(e,t,r){return r?"Failed to load "+e+": "+r+" from url "+t:"Failed to load "+e+" url: "+t}
var aA=function(e,t,r){rA(e,"PluginLoadError",nA("plugin",t,r))}
var oA=function(e,t,r){rA(e,"IconsLoadError",nA("icons",t,r))}
var iA=function(e,t,r){rA(e,"LanguageLoadError",nA("language",t,r))}
var uA=function(e,t,r){var n=es.translate(["Failed to initialize plugin: {0}",t])
zg(e,"PluginLoadError",{message:n})
fA(n,r)
eA(e,n)}
var fA=function(e){var t=[]
for(var r=1;r<arguments.length;r++)t[r-1]=arguments[r]
var n=window.console
n&&(n.error?n.error.apply(n,We([e],t)):n.log.apply(n,We([e],t)))}
var cA=function(e){return/^[a-z0-9\-]+$/i.test(e)}
var sA=function(e){return dA(e,Md(e))}
var lA=function(e){return dA(e,Fd(e))}
var dA=function(e,t){var r=e.editorManager.baseURL+"/skins/content"
var n=e.editorManager.suffix
var a="content"+n+".css"
var o=true===e.inline
return Q(t,(function(t){return cA(t)&&!o?r+"/"+t+"/"+a:e.documentBaseURI.toAbsolute(t)}))}
var vA=function(e){e.contentCSS=e.contentCSS.concat(sA(e),lA(e))}
var mA=function(){var e=1,t=2
var r={}
var n=function(e,t){return{status:e,resultUri:t}}
var a=function(e){return e in r}
var o=function(e){var t=r[e]
return t?t.resultUri:null}
var i=function(t){return!!a(t)&&r[t].status===e}
var u=function(e){return!!a(e)&&r[e].status===t}
var f=function(t){r[t]=n(e,null)}
var c=function(e,a){r[e]=n(t,a)}
var s=function(e){delete r[e]}
var l=function(){r={}}
return{hasBlobUri:a,getResultUri:o,isPending:i,isUploaded:u,markPending:f,markUploaded:c,removeFailed:s,destroy:l}}
var pA=0
var gA=function(){var e=function(){return Math.round(4294967295*Math.random()).toString(36)}
var t=(new Date).getTime()
return"s"+t.toString(36)+e()+e()+e()}
var hA=function(e){return e+pA+++gA()}
var yA=function(){var e=[]
var t=function(e){var t={"image/jpeg":"jpg","image/jpg":"jpg","image/gif":"gif","image/png":"png","image/apng":"apng","image/avif":"avif","image/svg+xml":"svg","image/webp":"webp","image/bmp":"bmp","image/tiff":"tiff"}
return t[e.toLowerCase()]||"dat"}
var r=function(e,t,r,a,o){if(y(e)){var i=e
return n({id:i,name:a,filename:o,blob:t,base64:r})}if(b(e))return n(e)
throw new Error("Unknown input type")}
var n=function(e){if(!e.blob||!e.base64)throw new Error("blob and base64 representations of the image are required for BlobInfo to be created")
var r=e.id||hA("blobid")
var n=e.name||r
var a=e.blob
return{id:D(r),name:D(n),filename:D(e.filename||n+"."+t(a.type)),blob:D(a),base64:D(e.base64),blobUri:D(e.blobUri||URL.createObjectURL(a)),uri:D(e.uri)}}
var a=function(t){i(t.id())||e.push(t)}
var o=function(t){return ie(e,t).getOrUndefined()}
var i=function(e){return o((function(t){return t.id()===e}))}
var u=function(e){return o((function(t){return t.blobUri()===e}))}
var f=function(e,t){return o((function(r){return r.base64()===e&&r.blob().type===t}))}
var c=function(t){e=re(e,(function(e){if(e.blobUri()===t){URL.revokeObjectURL(e.blobUri())
return false}return true}))}
var s=function(){Z(e,(function(e){URL.revokeObjectURL(e.blobUri())}))
e=[]}
return{create:r,add:a,get:i,getByUri:u,getByData:f,findFirst:o,removeByUri:c,destroy:s}}
var bA=function(e,t){var r={}
var n=function(e,t){if(e)return e.replace(/\/$/,"")+"/"+t.replace(/^\//,"")
return t}
var a=function(e,r,a,o){var i=new XMLHttpRequest
i.open("POST",t.url)
i.withCredentials=t.credentials
i.upload.onprogress=function(e){o(e.loaded/e.total*100)}
i.onerror=function(){a("Image upload failed due to a XHR Transport error. Code: "+i.status)}
i.onload=function(){if(i.status<200||i.status>=300){a("HTTP Error: "+i.status)
return}var e=JSON.parse(i.responseText)
if(!e||"string"!==typeof e.location){a("Invalid JSON: "+i.responseText)
return}r(n(t.basePath,e.location))}
var u=new FormData
u.append("file",e.blob(),e.filename())
i.send(u)}
var o=function(){return new no((function(e){e([])}))}
var i=function(e,t){return{url:t,blobInfo:e,status:true}}
var u=function(e,t,r){return{url:"",blobInfo:e,status:false,error:{message:t,options:r}}}
var f=function(e,t){dr.each(r[e],(function(e){e(t)}))
delete r[e]}
var c=function(t,r,n){e.markPending(t.blobUri())
return new no((function(a){var o,c
try{var s=function(){if(o){o.close()
c=T}}
var l=function(r){s()
e.markUploaded(t.blobUri(),r)
f(t.blobUri(),i(t,r))
a(i(t,r))}
var d=function(r,n){var o=n||{}
s()
e.removeFailed(t.blobUri())
f(t.blobUri(),u(t,r,o))
a(u(t,r,o))}
c=function(e){if(e<0||e>100)return
q.from(o).orThunk((function(){return q.from(n).map(I)})).each((function(t){o=t
t.progressBar.value(e)}))}
r(t,l,d,c)}catch(e){a(u(t,e.message,{}))}}))}
var s=function(e){return e===a}
var l=function(e){var t=e.blobUri()
return new no((function(e){r[t]=r[t]||[]
r[t].push(e)}))}
var d=function(r,n){r=dr.grep(r,(function(t){return!e.isUploaded(t.blobUri())}))
return no.all(dr.map(r,(function(r){return e.isPending(r.blobUri())?l(r):c(r,t.handler,n)})))}
var v=function(e,r){return!t.url&&s(t.handler)?o():d(e,r)}
false===E(t.handler)&&(t.handler=a)
return{upload:v}}
var CA=function(e){return function(){return e.notificationManager.open({text:e.translate("Image uploading..."),type:"info",timeout:-1,progressBar:true})}}
var wA=function(e,t){return bA(t,{url:_d(e),basePath:Td(e),credentials:Ad(e),handler:Rd(e)})}
var xA=function(e){var t=mA()
var r=wA(e,t)
return{upload:function(t,n){void 0===n&&(n=true)
return r.upload(t,n?CA(e):void 0)}}}
var SA=function(e){var t=jc(null)
e.on("change AddUndo",(function(e){t.set(qe({},e.level))}))
var r=function(){var r=e.undoManager.data
he(r).filter((function(e){return!HN(t.get(),e)})).each((function(t){e.setDirty(true)
e.fire("change",{level:t,lastLevel:pe(r,r.length-2).getOrNull()})}))}
return{fireIfChanged:r}}
var kA=function(e){var t=yA()
var r,n
var a=mA()
var o=[]
var i=SA(e)
var u=function(t){return function(r){if(e.selection)return t(r)
return[]}}
var f=function(e){return e+(-1===e.indexOf("?")?"?":"&")+(new Date).getTime()}
var c=function(e,t,r){var n=0
do{n=e.indexOf(t,n)
if(-1!==n){e=e.substring(0,n)+r+e.substr(n+t.length)
n+=r.length-t.length+1}}while(-1!==n)
return e}
var s=function(e,t,r){var n='src="'+r+'"'+(r===Zt.transparentSrc?' data-mce-placeholder="1"':"")
e=c(e,'src="'+t+'"',n)
e=c(e,'data-mce-src="'+t+'"','data-mce-src="'+r+'"')
return e}
var l=function(t,r){Z(e.undoManager.data,(function(e){"fragmented"===e.type?e.fragments=Q(e.fragments,(function(e){return s(e,t,r)})):e.content=s(e.content,t,r)}))}
var d=function(t,r){var n=e.convertURL(r,"src")
l(t.src,r)
e.$(t).attr({src:Sd(e)?f(r):r,"data-mce-src":n})}
var v=function(n){r||(r=wA(e,a))
return h().then(u((function(a){var o=Q(a,(function(e){return e.blobInfo}))
return r.upload(o,CA(e)).then(u((function(r){var o=[]
var u=Q(r,(function(r,n){var i=a[n].blobInfo
var u=a[n].image
if(r.status&&kd(e)){t.removeByUri(u.src)
d(u,r.url)}else if(r.error){if(r.error.options.remove){l(u.getAttribute("src"),Zt.transparentSrc)
o.push(u)}tA(e,r.error.message)}return{element:u,status:r.status,uploadUri:r.url,blobInfo:i}}))
u.length>0&&i.fireIfChanged()
o.length>0&&(fE(e)?console.error("Removing images on failed uploads is currently unsupported for RTC"):e.undoManager.transact((function(){Z(o,(function(r){e.dom.remove(r)
t.removeByUri(r.src)}))})))
n&&n(u)
return u})))})))}
var m=function(t){if(xd(e))return v(t)}
var p=function(t){if(false===se(o,(function(e){return e(t)})))return false
if(0===t.getAttribute("src").indexOf("data:")){var r=wd(e)
return r(t)}return true}
var g=function(e){o.push(e)}
var h=function(){n||(n=p_(a,t))
return n.findAll(e.getBody(),p).then(u((function(t){t=re(t,(function(t){if("string"===typeof t){eA(e,t)
return false}return true}))
Z(t,(function(e){l(e.image.src,e.blobInfo.blobUri())
e.image.src=e.blobInfo.blobUri()
e.image.removeAttribute("data-mce-src")}))
return t})))}
var y=function(){t.destroy()
a.destroy()
n=r=null}
var b=function(r){return r.replace(/src="(blob:[^"]+)"/g,(function(r,n){var o=a.getResultUri(n)
if(o)return'src="'+o+'"'
var i=t.getByUri(n)
i||(i=ae(e.editorManager.get(),(function(e,t){return e||t.editorUpload&&t.editorUpload.blobCache.getByUri(n)}),null))
if(i){var u=i.blob()
return'src="data:'+u.type+";base64,"+i.base64()+'"'}return r}))}
e.on("SetContent",(function(){xd(e)?m():h()}))
e.on("RawSaveContent",(function(e){e.content=b(e.content)}))
e.on("GetContent",(function(e){if(e.source_view||"raw"===e.format||"tree"===e.format)return
e.content=b(e.content)}))
e.on("PostRender",(function(){e.parser.addNodeFilter("img",(function(e){Z(e,(function(e){var r=e.attr("src")
if(t.getByUri(r))return
var n=a.getResultUri(r)
n&&e.attr("src",n)}))}))}))
return{blobCache:t,addFilter:g,uploadImages:v,uploadImagesAuto:m,scanForImages:h,destroy:y}}
var NA=function(e){var t={valigntop:[{selector:"td,th",styles:{verticalAlign:"top"}}],valignmiddle:[{selector:"td,th",styles:{verticalAlign:"middle"}}],valignbottom:[{selector:"td,th",styles:{verticalAlign:"bottom"}}],alignleft:[{selector:"figure.image",collapsed:false,classes:"align-left",ceFalseOverride:true,preview:"font-family font-size"},{selector:"figure,p,h1,h2,h3,h4,h5,h6,td,th,tr,div,ul,ol,li",styles:{textAlign:"left"},inherit:false,preview:false,defaultBlock:"div"},{selector:"img,table,audio,video",collapsed:false,styles:{float:"left"},preview:"font-family font-size"}],aligncenter:[{selector:"figure,p,h1,h2,h3,h4,h5,h6,td,th,tr,div,ul,ol,li",styles:{textAlign:"center"},inherit:false,preview:"font-family font-size",defaultBlock:"div"},{selector:"figure.image",collapsed:false,classes:"align-center",ceFalseOverride:true,preview:"font-family font-size"},{selector:"img,audio,video",collapsed:false,styles:{display:"block",marginLeft:"auto",marginRight:"auto"},preview:false},{selector:"table",collapsed:false,styles:{marginLeft:"auto",marginRight:"auto"},preview:"font-family font-size"}],alignright:[{selector:"figure.image",collapsed:false,classes:"align-right",ceFalseOverride:true,preview:"font-family font-size"},{selector:"figure,p,h1,h2,h3,h4,h5,h6,td,th,tr,div,ul,ol,li",styles:{textAlign:"right"},inherit:false,preview:"font-family font-size",defaultBlock:"div"},{selector:"img,table,audio,video",collapsed:false,styles:{float:"right"},preview:"font-family font-size"}],alignjustify:[{selector:"figure,p,h1,h2,h3,h4,h5,h6,td,th,tr,div,ul,ol,li",styles:{textAlign:"justify"},inherit:false,defaultBlock:"div",preview:"font-family font-size"}],bold:[{inline:"strong",remove:"all",preserve_attributes:["class","style"]},{inline:"span",styles:{fontWeight:"bold"}},{inline:"b",remove:"all",preserve_attributes:["class","style"]}],italic:[{inline:"em",remove:"all",preserve_attributes:["class","style"]},{inline:"span",styles:{fontStyle:"italic"}},{inline:"i",remove:"all",preserve_attributes:["class","style"]}],underline:[{inline:"span",styles:{textDecoration:"underline"},exact:true},{inline:"u",remove:"all",preserve_attributes:["class","style"]}],strikethrough:[{inline:"span",styles:{textDecoration:"line-through"},exact:true},{inline:"strike",remove:"all",preserve_attributes:["class","style"]},{inline:"s",remove:"all",preserve_attributes:["class","style"]}],forecolor:{inline:"span",styles:{color:"%value"},links:true,remove_similar:true,clear_child_styles:true},hilitecolor:{inline:"span",styles:{backgroundColor:"%value"},links:true,remove_similar:true,clear_child_styles:true},fontname:{inline:"span",toggle:false,styles:{fontFamily:"%value"},clear_child_styles:true},fontsize:{inline:"span",toggle:false,styles:{fontSize:"%value"},clear_child_styles:true},lineheight:{selector:"h1,h2,h3,h4,h5,h6,p,li,td,th,div",defaultBlock:"p",styles:{lineHeight:"%value"}},fontsize_class:{inline:"span",attributes:{class:"%value"}},blockquote:{block:"blockquote",wrapper:true,remove:"all"},subscript:{inline:"sub"},superscript:{inline:"sup"},code:{inline:"code"},link:{inline:"a",selector:"a",remove:"all",split:true,deep:true,onmatch:function(e,t,r){return jn(e)&&e.hasAttribute("href")},onformat:function(t,r,n){dr.each(n,(function(r,n){e.setAttrib(t,n,r)}))}},removeformat:[{selector:"b,strong,em,i,font,u,strike,s,sub,sup,dfn,code,samp,kbd,var,cite,mark,q,del,ins,small",remove:"all",split:true,expand:false,block_expand:true,deep:true},{selector:"span",attributes:["style","class"],remove:"empty",split:true,expand:false,deep:true},{selector:"*",attributes:["style","class"],split:false,expand:false,deep:true}]}
dr.each("p h1 h2 h3 h4 h5 h6 div address pre dt dd samp".split(/\s/),(function(e){t[e]={block:e,remove:"all"}}))
return t}
var EA=function(e){var t={}
var r=function(e){return e?t[e]:t}
var n=function(e){return Oe(t,e)}
var a=function(e,r){if(e)if("string"!==typeof e)dr.each(e,(function(e,t){a(t,e)}))
else{C(r)||(r=[r])
dr.each(r,(function(e){"undefined"===typeof e.deep&&(e.deep=!e.selector)
"undefined"===typeof e.split&&(e.split=!e.selector||e.inline)
"undefined"===typeof e.remove&&e.selector&&!e.inline&&(e.remove="none")
if(e.selector&&e.inline){e.mixed=true
e.block_expand=true}"string"===typeof e.classes&&(e.classes=e.classes.split(/\s+/))}))
t[e]=r}}
var o=function(e){e&&t[e]&&delete t[e]
return t}
a(NA(e.dom))
a(Yd(e))
return{get:r,has:n,register:a,unregister:o}}
var _A=dr.each
var TA=Oc.DOM
var AA=function(e,t){var r,n,a
var o=t&&t.schema||pu({})
var i=function(e,t){t.classes.length&&TA.addClass(e,t.classes.join(" "))
TA.setAttribs(e,t.attrs)}
var u=function(e){n="string"===typeof e?{name:e,classes:[],attrs:{}}:e
var t=TA.create(n.name)
i(t,n)
return t}
var f=function(e,t){var r="string"!==typeof e?e.nodeName.toLowerCase():e
var n=o.getElementRule(r)
var a=n&&n.parentsRequired
return!(!a||!a.length)&&(t&&-1!==dr.inArray(a,t)?t:a[0])}
var c=function(e,t,r){var n,a
var o=t.length>0&&t[0]
var i=o&&o.name
var s=f(e,i)
if(s)if(i===s){a=t[0]
t=t.slice(1)}else a=s
else if(o){a=t[0]
t=t.slice(1)}else if(!r)return e
if(a){n=u(a)
n.appendChild(e)}if(r){if(!n){n=TA.create("div")
n.appendChild(e)}dr.each(r,(function(t){var r=u(t)
n.insertBefore(r,e)}))}return c(n,t,a&&a.siblings)}
if(e&&e.length){n=e[0]
r=u(n)
a=TA.create("div")
a.appendChild(c(r,e.slice(1),n.siblings))
return a}return""}
var RA=function(e){var t
var r={classes:[],attrs:{}}
e=r.selector=dr.trim(e)
"*"!==e&&(t=e.replace(/(?:([#\.]|::?)([\w\-]+)|(\[)([^\]]+)\]?)/g,(function(e,t,n,a,o){switch(t){case"#":r.attrs.id=n
break
case".":r.classes.push(n)
break
case":":-1!==dr.inArray("checked disabled enabled read-only required".split(" "),n)&&(r.attrs[n]=n)}if("["===a){var i=o.match(/([\w\-]+)(?:\=\"([^\"]+))?/)
i&&(r.attrs[i[1]]=i[2])}return""})))
r.name=t||"div"
return r}
var DA=function(e){if(!e||"string"!==typeof e)return[]
e=e.split(/\s*,\s*/)[0]
e=e.replace(/\s*(~\+|~|\+|>)\s*/g,"$1")
return dr.map(e.split(/(?:>|\s+(?![^\[\]]+\]))/),(function(e){var t=dr.map(e.split(/(?:~\+|~|\+)/),RA)
var r=t.pop()
t.length&&(r.siblings=t)
return r})).reverse()}
var OA=function(e,t){var r,n
var a,o=""
var i=Gd(e)
if(""===i)return""
var u=function(e){return e.replace(/%(\w+)/g,"")}
if("string"===typeof t){t=e.formatter.get(t)
if(!t)return
t=t[0]}if("preview"in t){var f=De(t,"preview")
if(f.is(false))return""
i=f.getOr(i)}r=t.block||t.inline||"span"
var c=DA(t.selector)
if(c.length){c[0].name||(c[0].name=r)
r=t.selector
n=AA(c,e)}else n=AA([r],e)
var s=TA.select(r,n)[0]||n.firstChild
_A(t.styles,(function(e,t){var r=u(e)
r&&TA.setStyle(s,t,r)}))
_A(t.attributes,(function(e,t){var r=u(e)
r&&TA.setAttrib(s,t,r)}))
_A(t.classes,(function(e){var t=u(e)
TA.hasClass(s,t)||TA.addClass(s,t)}))
e.fire("PreviewFormats")
TA.setStyles(n,{position:"absolute",left:-65535})
e.getBody().appendChild(n)
a=TA.getStyle(e.getBody(),"fontSize",true)
a=/px$/.test(a)?parseInt(a,10):0
_A(i.split(" "),(function(t){var r=TA.getStyle(s,t,true)
if("background-color"===t&&/transparent|rgba\s*\([^)]+,\s*0\)/.test(r)){r=TA.getStyle(e.getBody(),t,true)
if("#ffffff"===TA.toHex(r).toLowerCase())return}if("color"===t&&"#000000"===TA.toHex(r).toLowerCase())return
if("font-size"===t&&/em|%$/.test(r)){if(0===a)return
var n=parseFloat(r)/(/%$/.test(r)?100:1)
r=n*a+"px"}"border"===t&&r&&(o+="padding:0 2px;")
o+=t+":"+r+";"}))
e.fire("AfterPreviewFormats")
TA.remove(n)
return o}
var BA=function(e){e.addShortcut("meta+b","","Bold")
e.addShortcut("meta+i","","Italic")
e.addShortcut("meta+u","","Underline")
for(var t=1;t<=6;t++)e.addShortcut("access+"+t,"",["FormatBlock",false,"h"+t])
e.addShortcut("access+7","",["FormatBlock",false,"p"])
e.addShortcut("access+8","",["FormatBlock",false,"div"])
e.addShortcut("access+9","",["FormatBlock",false,"address"])}
var PA=function(e){var t=EA(e)
var r=jc(null)
BA(e)
IS(e)
return{get:t.get,has:t.has,register:t.register,unregister:t.unregister,apply:function(t,r,n){AE(e,t,r,n)},remove:function(t,r,n,a){RE(e,t,r,n,a)},toggle:function(t,r,n){DE(e,t,r,n)},match:function(t,r,n){return kE(e,t,r,n)},closest:function(t){return TE(e,t)},matchAll:function(t,r){return NE(e,t,r)},matchNode:function(t,r,n,a){return EE(e,t,r,n,a)},canApply:function(t){return _E(e,t)},formatChanged:function(t,n,a){return OE(e,r,t,n,a)},getCssText:B(OA,e)}}
var LA=function(e,t,r){var n=jc(false)
var a=function(e){qN(t,false,r)
t.add({},e)}
e.on("init",(function(){t.add()}))
e.on("BeforeExecCommand",(function(e){var n=e.command.toLowerCase()
if("undo"!==n&&"redo"!==n&&"mcerepaint"!==n){$N(t,r)
t.beforeChange()}}))
e.on("ExecCommand",(function(e){var t=e.command.toLowerCase()
"undo"!==t&&"redo"!==t&&"mcerepaint"!==t&&a(e)}))
e.on("ObjectResizeStart cut",(function(){t.beforeChange()}))
e.on("SaveContent ObjectResized blur",a)
e.on("dragend",a)
e.on("keyup",(function(r){var o=r.keyCode
if(r.isDefaultPrevented())return
if(o>=33&&o<=36||o>=37&&o<=40||45===o||r.ctrlKey){a()
e.nodeChanged()}46!==o&&8!==o||e.nodeChanged()
if(n.get()&&t.typing&&false===HN(IN(e),t.data[0])){if(false===e.isDirty()){e.setDirty(true)
e.fire("change",{level:t.data[0],lastLevel:null})}e.fire("TypingUndo")
n.set(false)
e.nodeChanged()}}))
e.on("keydown",(function(e){var o=e.keyCode
if(e.isDefaultPrevented())return
if(o>=33&&o<=36||o>=37&&o<=40||45===o){t.typing&&a(e)
return}var i=e.ctrlKey&&!e.altKey||e.metaKey
if((o<16||o>20)&&224!==o&&91!==o&&!t.typing&&!i){t.beforeChange()
qN(t,true,r)
t.add({},e)
n.set(true)}}))
e.on("mousedown",(function(e){t.typing&&a(e)}))
var o=function(e){return"insertReplacementText"===e.inputType}
var i=function(e){return"insertText"===e.inputType&&null===e.data}
var u=function(e){return"insertFromPaste"===e.inputType||"insertFromDrop"===e.inputType}
e.on("input",(function(e){e.inputType&&(o(e)||i(e)||u(e))&&a(e)}))
e.on("AddUndo Undo Redo ClearUndos",(function(t){t.isDefaultPrevented()||e.nodeChanged()}))}
var IA=function(e){e.addShortcut("meta+z","","Undo")
e.addShortcut("meta+y,meta+shift+z","","Redo")}
var MA=function(e){var t=jc(q.none())
var r=jc(0)
var n=jc(0)
var a={data:[],typing:false,beforeChange:function(){vE(e,r,t)},add:function(o,i){return mE(e,a,n,r,t,o,i)},undo:function(){return pE(e,a,r,n)},redo:function(){return gE(e,n,a.data)},clear:function(){hE(e,a,n)},reset:function(){yE(e,a)},hasUndo:function(){return bE(e,a,n)},hasRedo:function(){return CE(e,a,n)},transact:function(t){return wE(e,a,r,t)},ignore:function(t){xE(e,r,t)},extra:function(t,r){SE(e,a,n,t,r)}}
fE(e)||LA(e,a,r)
IA(e)
return a}
var FA=[9,27,jg.HOME,jg.END,19,20,44,144,145,33,34,45,16,17,18,91,92,93,jg.DOWN,jg.UP,jg.LEFT,jg.RIGHT].concat(Zt.browser.isFirefox()?[224]:[])
var UA="data-mce-placeholder"
var zA=function(e){return"keydown"===e.type||"keyup"===e.type}
var jA=function(e){var t=e.keyCode
return t===jg.BACKSPACE||t===jg.DELETE}
var HA=function(e){if(zA(e)){var t=e.keyCode
return!jA(e)&&(jg.metaKeyPressed(e)||e.altKey||t>=112&&t<=123||G(FA,t))}return false}
var VA=function(e){return zA(e)&&!(jA(e)||"keyup"===e.type&&229===e.keyCode)}
var qA=function(e,t,r){if(Oi(yr.fromDom(t),false)){var n=""===r
var a=t.firstElementChild
return!a||!e.getStyle(t.firstElementChild,"padding-left")&&!e.getStyle(t.firstElementChild,"padding-right")&&(n?!e.isBlock(a):r===a.nodeName.toLowerCase())}return false}
var $A=function(e){var t=e.dom
var r=vd(e)
var n=Vd(e)
var a=function(o,i){if(HA(o))return
var u=e.getBody()
var f=!VA(o)&&qA(t,u,r)
var c=""!==t.getAttrib(u,UA)
if(c!==f||i){t.setAttrib(u,UA,f?n:null)
t.setAttrib(u,"aria-placeholder",f?n:null)
Ug(e,f)
e.on(f?"keydown":"keyup",a)
e.off(f?"keyup":"keydown",a)}}
n&&e.on("init",(function(t){a(t,true)
e.on("change SetContent ExecCommand",a)
e.on("paste",(function(t){return lo.setEditorTimeout(e,(function(){return a(t)}))}))}))}
var WA=/[\u0591-\u07FF\uFB1D-\uFDFF\uFE70-\uFEFC]/
var KA=function(e){return WA.test(e)}
var XA=function(e,t){return _r(yr.fromDom(t),zd(e))}
var YA=function(e){return"rtl"===Oc.DOM.getStyle(e,"direction",true)||KA(e.textContent)}
var GA=function(e,t,r){return re(Oc.DOM.getParents(r.container(),"*",t),e)}
var JA=function(e,t,r){var n=GA(e,t,r)
return q.from(n[n.length-1])}
var QA=function(e,t,r){var n=Jv(t,e)
var a=Jv(r,e)
return n&&n===a}
var ZA=function(e){return Qo(e)||Zo(e)}
var eR=function(e,t){if(!t)return t
var r=t.container(),n=t.offset()
return e?Xo(r)?Jn(r.nextSibling)?xl(r.nextSibling,0):xl.after(r):Qo(t)?xl(r,n+1):t:Xo(r)?Jn(r.previousSibling)?xl(r.previousSibling,r.previousSibling.data.length):xl.before(r):Zo(t)?xl(r,n-1):t}
var tR=B(eR,true)
var rR=B(eR,false)
var nR=function(e){return function(t){return Dr(e,yr.fromDom(t.dom.parentNode))}}
var aR=function(e,t){return Pr(e,t)?Ga(t,(function(e){return Do(e)||Bo(e)}),nR(e)):q.none()}
var oR=function(e){var t=e.getBody()
var r=t.firstChild&&e.dom.isBlock(t.firstChild)?t.firstChild:t
e.selection.setCursorLocation(r,0)}
var iR=function(e){if(e.dom.isEmpty(e.getBody())){e.setContent("")
oR(e)}}
var uR=function(e,t,r){return Us(Um(r),zm(r),(function(n,a){var o=eR(true,n)
var i=eR(false,a)
var u=eR(false,t)
return e?Mm(r,u).exists((function(e){return e.isEqual(i)&&t.isEqual(o)})):Fm(r,u).exists((function(e){return e.isEqual(o)&&t.isEqual(i)}))})).getOr(true)}
var fR=function(e,t){return{block:e,position:t}}
var cR=function(e,t){return{from:e,to:t}}
var sR=function(e,t){var r=yr.fromDom(e)
var n=yr.fromDom(t.container())
return aR(r,n).map((function(e){return fR(e,t)}))}
var lR=function(e){return false===Dr(e.from.block,e.to.block)}
var dR=function(e){return Kr(e.from.block).bind((function(t){return Kr(e.to.block).filter((function(e){return Dr(t,e)}))})).isSome()}
var vR=function(e){return false===aa(e.from.block.dom)&&false===aa(e.to.block.dom)}
var mR=function(e,t,r){return ta(r.position.getNode())&&false===Oi(r.block)?Im(false,r.block.dom).bind((function(n){return n.isEqual(r.position)?Bm(t,e,n).bind((function(t){return sR(e,t)})):q.some(r)})).getOr(r):r}
var pR=function(e,t,r){var n=sR(e,xl.fromRangeStart(r))
var a=n.bind((function(r){return Bm(t,e,r.position).bind((function(r){return sR(e,r).map((function(r){return mR(e,t,r)}))}))}))
return Us(n,a,cR).filter((function(e){return lR(e)&&dR(e)&&vR(e)}))}
var gR=function(e,t,r){return r.collapsed?pR(e,t,r):q.none()}
var hR=function(e){var t=en(e)
return ue(t,_o).fold((function(){return t}),(function(e){return t.slice(0,e)}))}
var yR=function(e){var t=hR(e)
Z(t,kn)
return t}
var bR=function(e,t){var r=pC(t,e)
return ie(r.reverse(),(function(e){return Oi(e)})).each(kn)}
var CR=function(e){return 0===re(Qr(e),(function(e){return!Oi(e)})).length}
var wR=function(e,t,r,n){if(Oi(r)){sC(r)
return Um(r.dom)}CR(n)&&Oi(t)&&gn(n,yr.fromTag("br"))
var a=Fm(r.dom,xl.before(n.dom))
Z(yR(t),(function(e){gn(n,e)}))
bR(e,t)
return a}
var xR=function(e,t,r){if(Oi(r)){kn(r)
Oi(t)&&sC(t)
return Um(t.dom)}var n=zm(r.dom)
Z(yR(t),(function(e){bn(r,e)}))
bR(e,t)
return n}
var SR=function(e,t){var r=pC(t,e)
return q.from(r[r.length-1])}
var kR=function(e,t){return Pr(t,e)?SR(t,e):q.none()}
var NR=function(e,t){Im(e,t.dom).map((function(e){return e.getNode()})).map(yr.fromDom).filter(Ro).each(kn)}
var ER=function(e,t,r){NR(true,t)
NR(false,r)
return kR(t,r).fold(B(xR,e,t,r),B(wR,e,t,r))}
var _R=function(e,t,r,n){return t?ER(e,n,r):ER(e,r,n)}
var TR=function(e,t){var r=yr.fromDom(e.getBody())
var n=gR(r.dom,t,e.selection.getRng()).bind((function(e){return _R(r,t,e.from.block,e.to.block)}))
n.each((function(t){e.selection.setRng(t.toRange())}))
return n.isSome()}
var AR=function(e,t){var r=t.getRng()
return Us(aR(e,yr.fromDom(r.startContainer)),aR(e,yr.fromDom(r.endContainer)),(function(n,a){if(false===Dr(n,a)){r.deleteContents()
_R(e,true,n,a).each((function(e){t.setRng(e.toRange())}))
return true}return false})).getOr(false)}
var RR=function(e,t){var r=yr.fromDom(t)
var n=B(Dr,e)
return Ya(r,Lo,n).isSome()}
var DR=function(e,t){return RR(e,t.startContainer)||RR(e,t.endContainer)}
var OR=function(e,t){var r=Fm(e.dom,xl.fromRangeStart(t)).isNone()
var n=Mm(e.dom,xl.fromRangeEnd(t)).isNone()
return!DR(e,t)&&r&&n}
var BR=function(e){e.setContent("")
e.selection.setCursorLocation()
return true}
var PR=function(e){var t=yr.fromDom(e.getBody())
var r=e.selection.getRng()
return OR(t,r)?BR(e):AR(t,e.selection)}
var LR=function(e,t){return!e.selection.isCollapsed()&&PR(e)}
var IR=na
var MR=aa
var FR=function(e,t,r,n,a){return q.from(t._selectionOverrides.showCaret(e,r,n,a))}
var UR=function(e){var t=e.ownerDocument.createRange()
t.selectNode(e)
return t}
var zR=function(e,t){var r=e.fire("BeforeObjectSelected",{target:t})
if(r.isDefaultPrevented())return q.none()
return q.some(UR(t))}
var jR=function(e,t,r){var n=om(1,e.getBody(),t)
var a=xl.fromRangeStart(n)
var o=a.getNode()
if(Fv(o))return FR(1,e,o,!a.isAtEnd(),false)
var i=a.getNode(true)
if(Fv(i))return FR(1,e,i,false,false)
var u=e.dom.getParent(a.getNode(),(function(e){return MR(e)||IR(e)}))
if(Fv(u))return FR(1,e,u,false,r)
return q.none()}
var HR=function(e,t,r){return t.collapsed?jR(e,t,r).getOr(t):t}
var VR=function(e){return iC(e)||rC(e)}
var qR=function(e){return uC(e)||nC(e)}
var $R=function(e,t){Jn(t)&&0===t.data.length&&e.remove(t)}
var WR=function(e,t,r,n,a,o){FR(n,e,o.getNode(!a),a,true).each((function(r){if(t.collapsed){var n=t.cloneRange()
a?n.setEnd(r.startContainer,r.startOffset):n.setStart(r.endContainer,r.endOffset)
n.deleteContents()}else t.deleteContents()
e.selection.setRng(r)}))
$R(e.dom,r)
return true}
var KR=function(e,t){var r=e.selection.getRng()
if(!Jn(r.commonAncestorContainer))return false
var n=t?dm.Forwards:dm.Backwards
var a=Nm(e.getBody())
var o=B(sm,t?a.next:a.prev)
var i=t?VR:qR
var u=um(n,e.getBody(),r)
var f=eR(t,o(u))
if(!f||!lm(u,f))return false
if(i(f))return WR(e,r,u.getNode(),n,t,f)
var c=o(f)
if(c&&i(c)&&lm(f,c))return WR(e,r,u.getNode(),n,t,c)
return false}
var XR=function(e,t){return KR(e,t)}
var YR=function(e){return Lo(yr.fromDom(e))||Bo(yr.fromDom(e))}
var GR=Wa.generate([{remove:["element"]},{moveToElement:["element"]},{moveToPosition:["position"]}])
var JR=function(e,t){var r=t.getNode(false===e)
var n=e?"after":"before"
return jn(r)&&r.getAttribute("data-mce-caret")===n}
var QR=function(e,t,r,n){var a=function(t){return Ao(yr.fromDom(t))&&!Qv(r,n,e)}
return im(!t,r).fold((function(){return im(t,n).fold(F,a)}),a)}
var ZR=function(e,t,r,n){var a=n.getNode(false===t)
return aR(yr.fromDom(e),yr.fromDom(r.getNode())).map((function(e){return Oi(e)?GR.remove(e.dom):GR.moveToElement(a)})).orThunk((function(){return q.some(GR.moveToElement(a))}))}
var eD=function(e,t,r){return Bm(t,e,r).bind((function(n){return YR(n.getNode())||QR(e,t,r,n)?q.none():t&&aa(n.getNode())||false===t&&aa(n.getNode(true))?ZR(e,t,r,n):t&&uC(r)||false===t&&iC(r)?q.some(GR.moveToPosition(n)):q.none()}))}
var tD=function(e,t){return e&&aa(t.nextSibling)?q.some(GR.moveToElement(t.nextSibling)):false===e&&aa(t.previousSibling)?q.some(GR.moveToElement(t.previousSibling)):q.none()}
var rD=function(e,t,r){return r.fold((function(e){return q.some(GR.remove(e))}),(function(e){return q.some(GR.moveToElement(e))}),(function(r){return Qv(t,r,e)?q.none():q.some(GR.moveToPosition(r))}))}
var nD=function(e,t,r){return JR(t,r)?tD(t,r.getNode(false===t)).fold((function(){return eD(e,t,r)}),q.some):eD(e,t,r).bind((function(t){return rD(e,r,t)}))}
var aD=function(e,t,r){var n=om(t?1:-1,e,r)
var a=xl.fromRangeStart(n)
var o=yr.fromDom(e)
return false===t&&uC(a)?q.some(GR.remove(a.getNode(true))):t&&iC(a)?q.some(GR.remove(a.getNode())):false===t&&iC(a)&&_C(o,a)?TC(o,a).map((function(e){return GR.remove(e.getNode())})):t&&uC(a)&&EC(o,a)?AC(o,a).map((function(e){return GR.remove(e.getNode())})):nD(e,t,a)}
var oD=function(e,t){return function(r){e._selectionOverrides.hideFakeCaret()
ww(e,t,yr.fromDom(r))
return true}}
var iD=function(e,t){return function(r){var n=t?xl.before(r):xl.after(r)
e.selection.setRng(n.toRange())
return true}}
var uD=function(e){return function(t){e.selection.setRng(t.toRange())
return true}}
var fD=function(e,t){return q.from(_g(e.getBody(),t))}
var cD=function(e,t){var r=e.selection.getNode()
return fD(e,r).filter(aa).fold((function(){return aD(e.getBody(),t,e.selection.getRng()).exists((function(r){return r.fold(oD(e,t),iD(e,t),uD(e))}))}),U)}
var sD=function(e){Z(gs(e,".mce-offscreen-selection"),kn)}
var lD=function(e,t){var r=e.selection.getNode()
if(aa(r)){var n=fD(e,r.parentNode).filter(aa)
return n.fold((function(){sD(yr.fromDom(e.getBody()))
ww(e,t,yr.fromDom(e.selection.getNode()))
iR(e)
return true}),U)}return false}
var dD=function(e){var t=e.dom,r=e.selection
var n=_g(e.getBody(),r.getNode())
if(na(n)&&t.isBlock(n)&&t.isEmpty(n)){var a=t.create("br",{"data-mce-bogus":"1"})
t.setHTML(n,"")
n.appendChild(a)
r.setRng(xl.before(a).toRange())}return true}
var vD=function(e,t){return e.selection.isCollapsed()?cD(e,t):lD(e,t)}
var mD=function(e,t){var r=xl.fromRangeStart(e.selection.getRng())
return Bm(t,e.getBody(),r).filter((function(e){return t?eC(e):tC(e)})).bind((function(e){return q.from(Zv(t?0:-1,e))})).exists((function(t){e.selection.select(t)
return true}))}
var pD=function(e,t){return!!e.selection.isCollapsed()&&mD(e,t)}
var gD=Jn
var hD=function(e){return gD(e)&&e.data[0]===Ho}
var yD=function(e){return gD(e)&&e.data[e.data.length-1]===Ho}
var bD=function(e){return e.ownerDocument.createTextNode(Ho)}
var CD=function(e){if(gD(e.previousSibling)){if(yD(e.previousSibling))return e.previousSibling
e.previousSibling.appendData(Ho)
return e.previousSibling}if(gD(e)){if(hD(e))return e
e.insertData(0,Ho)
return e}var t=bD(e)
e.parentNode.insertBefore(t,e)
return t}
var wD=function(e){if(gD(e.nextSibling)){if(hD(e.nextSibling))return e.nextSibling
e.nextSibling.insertData(0,Ho)
return e.nextSibling}if(gD(e)){if(yD(e))return e
e.appendData(Ho)
return e}var t=bD(e)
e.nextSibling?e.parentNode.insertBefore(t,e.nextSibling):e.parentNode.appendChild(t)
return t}
var xD=function(e,t){return e?CD(t):wD(t)}
var SD=B(xD,true)
var kD=B(xD,false)
var ND=function(e,t){return Jn(e.container())?xD(t,e.container()):xD(t,e.getNode())}
var ED=function(e,t){var r=t.get()
return r&&e.container()===r&&Xo(r)}
var _D=function(e,t){return t.fold((function(t){Tv(e.get())
var r=SD(t)
e.set(r)
return q.some(xl(r,r.length-1))}),(function(t){return Um(t).map((function(t){if(ED(t,e))return xl(e.get(),1)
Tv(e.get())
var r=ND(t,true)
e.set(r)
return xl(r,1)}))}),(function(t){return zm(t).map((function(t){if(ED(t,e))return xl(e.get(),e.get().length-1)
Tv(e.get())
var r=ND(t,false)
e.set(r)
return xl(r,r.length-1)}))}),(function(t){Tv(e.get())
var r=kD(t)
e.set(r)
return q.some(xl(r,1))}))}
var TD=function(e,t){for(var r=0;r<e.length;r++){var n=e[r].apply(null,t)
if(n.isSome())return n}return q.none()}
var AD=Wa.generate([{before:["element"]},{start:["element"]},{end:["element"]},{after:["element"]}])
var RD=function(e,t){var r=Jv(t,e)
return r||e}
var DD=function(e,t,r){var n=tR(r)
var a=RD(t,n.container())
return JA(e,a,n).fold((function(){return Mm(a,n).bind(B(JA,e,a)).map((function(e){return AD.before(e)}))}),q.none)}
var OD=function(e,t){return null===Vm(e,t)}
var BD=function(e,t,r){return JA(e,t,r).filter(B(OD,t))}
var PD=function(e,t,r){var n=rR(r)
return BD(e,t,n).bind((function(e){var t=Fm(e,n)
return t.isNone()?q.some(AD.start(e)):q.none()}))}
var LD=function(e,t,r){var n=tR(r)
return BD(e,t,n).bind((function(e){var t=Mm(e,n)
return t.isNone()?q.some(AD.end(e)):q.none()}))}
var ID=function(e,t,r){var n=rR(r)
var a=RD(t,n.container())
return JA(e,a,n).fold((function(){return Fm(a,n).bind(B(JA,e,a)).map((function(e){return AD.after(e)}))}),q.none)}
var MD=function(e){return false===YA(UD(e))}
var FD=function(e,t,r){var n=TD([DD,PD,LD,ID],[e,t,r])
return n.filter(MD)}
var UD=function(e){return e.fold(O,O,O,O)}
var zD=function(e){return e.fold(D("before"),D("start"),D("end"),D("after"))}
var jD=function(e){return e.fold(AD.before,AD.before,AD.after,AD.after)}
var HD=function(e){return e.fold(AD.start,AD.start,AD.end,AD.end)}
var VD=function(e,t){return zD(e)===zD(t)&&UD(e)===UD(t)}
var qD=function(e,t,r,n,a,o){return Us(JA(t,r,n),JA(t,r,a),(function(t,n){return t!==n&&QA(r,t,n)?AD.after(e?t:n):o})).getOr(o)}
var $D=function(e,t){return e.fold(U,(function(e){return!VD(e,t)}))}
var WD=function(e,t,r,n,a){var o=eR(e,a)
var i=Bm(e,r,o).map(B(eR,e))
var u=i.fold((function(){return n.map(jD)}),(function(a){return FD(t,r,a).map(B(qD,e,t,r,o,a)).filter(B($D,n))}))
return u.filter(MD)}
var KD=function(e,t){return e?t.fold(A(q.some,AD.start),q.none,A(q.some,AD.after),q.none):t.fold(q.none,A(q.some,AD.before),q.none,A(q.some,AD.end))}
var XD=function(e,t,r,n){var a=eR(e,n)
var o=FD(t,r,a)
return FD(t,r,a).bind(B(KD,e)).orThunk((function(){return WD(e,t,r,o,n)}))}
B(XD,false)
B(XD,true)
var YD=function(e){return E(e.selection.getSel().modify)}
var GD=function(e,t,r){var n=e?1:-1
t.setRng(xl(r.container(),r.offset()+n).toRange())
t.getSel().modify("move",e?"forward":"backward","word")
return true}
var JD=function(e,t){var r=t.selection.getRng()
var n=e?xl.fromRangeEnd(r):xl.fromRangeStart(r)
return!!YD(t)&&(e&&Qo(n)?GD(true,t.selection,n):!(e||!Zo(n))&&GD(false,t.selection,n))}
var QD;(function(e){e[e["Br"]=0]="Br"
e[e["Block"]=1]="Block"
e[e["Wrap"]=2]="Wrap"
e[e["Eol"]=3]="Eol"})(QD||(QD={}))
var ZD=function(e,t){return e===dm.Backwards?le(t):t}
var eO=function(e,t,r){return e===dm.Forwards?t.next(r):t.prev(r)}
var tO=function(e,t,r,n){return ta(n.getNode(t===dm.Forwards))?QD.Br:false===Qv(r,n)?QD.Block:QD.Wrap}
var rO=function(e,t,r,n){var a=Nm(r)
var o,i=n
var u=[]
while(i){o=eO(t,a,i)
if(!o)break
if(ta(o.getNode(false)))return t===dm.Forwards?{positions:ZD(t,u).concat([o]),breakType:QD.Br,breakAt:q.some(o)}:{positions:ZD(t,u),breakType:QD.Br,breakAt:q.some(o)}
if(!o.isVisible()){i=o
continue}if(e(i,o)){var f=tO(r,t,i,o)
return{positions:ZD(t,u),breakType:f,breakAt:q.some(o)}}u.push(o)
i=o}return{positions:ZD(t,u),breakType:QD.Eol,breakAt:q.none()}}
var nO=function(e,t,r,n){return t(r,n).breakAt.map((function(n){var a=t(r,n).positions
return e===dm.Backwards?a.concat(n):[n].concat(a)})).getOr([])}
var aO=function(e,t){return ae(e,(function(e,r){return e.fold((function(){return q.some(r)}),(function(n){return Us(ge(n.getClientRects()),ge(r.getClientRects()),(function(e,a){var o=Math.abs(t-e.left)
var i=Math.abs(t-a.left)
return i<=o?r:n})).or(e)}))}),q.none())}
var oO=function(e,t){return ge(t.getClientRects()).bind((function(t){return aO(e,t.left)}))}
var iO=B(rO,xl.isAbove,-1)
var uO=B(rO,xl.isBelow,1)
var fO=function(e,t){return iO(e,t).breakAt.isNone()}
var cO=function(e,t){return uO(e,t).breakAt.isNone()}
var sO=B(nO,-1,iO)
var lO=B(nO,1,uO)
var dO=function(e){return Um(e).map((function(t){return[t].concat(uO(e,t).positions)})).getOr([])}
var vO=function(e){return zm(e).map((function(t){return iO(e,t).positions.concat(t)})).getOr([])}
var mO=function(e){var t=function(t){return Q(t,(function(t){t=Vs(t)
t.node=e
return t}))}
if(jn(e))return t(e.getClientRects())
if(Jn(e)){var r=e.ownerDocument.createRange()
r.setStart(e,0)
r.setEnd(e,e.data.length)
return t(r.getClientRects())}}
var pO=function(e){return ce(e,mO)}
var gO;(function(e){e[e["Up"]=-1]="Up"
e[e["Down"]=1]="Down"})(gO||(gO={}))
var hO=function(e,t,r,n){while(n=Gv(n,e,wi,t))if(r(n))return}
var yO=function(e,t,r,n,a,o){var i=0
var u=[]
var f=function(n){var o,f,s
s=pO([n]);-1===e&&(s=s.reverse())
for(o=0;o<s.length;o++){f=s[o]
if(r(f,c))continue
u.length>0&&t(f,Ve(u))&&i++
f.line=i
if(a(f))return true
u.push(f)}}
var c=Ve(o.getClientRects())
if(!c)return u
var s=o.getNode()
f(s)
hO(e,n,f,s)
return u}
var bO=function(e,t){return t.line>e}
var CO=function(e,t){return t.line===e}
var wO=B(yO,gO.Up,Ks,Xs)
var xO=B(yO,gO.Down,Xs,Ks)
var SO=function(e,t,r,n){var a=Nm(t)
var o,i,u,f
var c=[]
var s,l=0
var d=function(t){if(1===e)return Ve(t.getClientRects())
return Ve(t.getClientRects())}
if(1===e){o=a.next
i=Xs
u=Ks
f=xl.after(n)}else{o=a.prev
i=Ks
u=Xs
f=xl.before(n)}var v=d(f)
do{if(!f.isVisible())continue
s=d(f)
if(u(s,v))continue
c.length>0&&i(s,Ve(c))&&l++
s=Vs(s)
s.position=f
s.line=l
if(r(s))return c
c.push(s)}while(f=o(f))
return c}
var kO=function(e){return function(t){return bO(e,t)}}
var NO=function(e){return function(t){return CO(e,t)}}
var EO=aa
var _O=Gv
var TO=function(e,t){return Math.abs(e.left-t)}
var AO=function(e,t){return Math.abs(e.right-t)}
var RO=function(e,t){return e>=t.left&&e<=t.right}
var DO=function(e,t){return e>=t.top&&e<=t.bottom}
var OO=function(e,t){return je(e,(function(e,r){var n=Math.min(TO(e,t),AO(e,t))
var a=Math.min(TO(r,t),AO(r,t))
if(RO(t,r))return r
if(RO(t,e))return e
if(a===n&&EO(r.node))return r
if(a<n)return r
return e}))}
var BO=function(e,t,r,n,a){var o=_O(n,e,wi,t,!a)
do{if(!o||r(o))return}while(o=_O(o,e,wi,t))}
var PO=function(e,t,r){void 0===r&&(r=true)
var n=[]
var a=function(e,r){var a=re(pO([r]),(function(r){return!e(r,t)}))
n=n.concat(a)
return 0===a.length}
n.push(t)
BO(gO.Up,e,B(a,Ks),t.node,r)
BO(gO.Down,e,B(a,Xs),t.node,r)
return n}
var LO=function(e){return re(ye(e.getElementsByTagName("*")),Uv)}
var IO=function(e,t){return{node:e.node,before:TO(e,t)<AO(e,t)}}
var MO=function(e,t,r){var n=pO(LO(e))
var a=re(n,B(DO,r))
var o=OO(a,t)
if(o){var i=!Xn(o.node)&&!ia(o.node)
o=OO(PO(e,o,i),t)
if(o&&Uv(o.node))return IO(o,t)}return null}
var FO=function(e,t){e.selection.setRng(t)
jh(e,e.selection.getRng())}
var UO=function(e,t,r){return q.some(HR(e,t,r))}
var zO=function(e,t,r,n,a,o){var i=t===dm.Forwards
var u=Nm(e.getBody())
var f=B(sm,i?u.next:u.prev)
var c=i?n:a
if(!r.collapsed){var s=Gs(r)
if(o(s))return FR(t,e,s,t===dm.Backwards,false)}var l=um(t,e.getBody(),r)
if(c(l))return zR(e,l.getNode(!i))
var d=eR(i,f(l))
var v=ii(r)
if(!d)return v?q.some(r):q.none()
if(c(d))return FR(t,e,d.getNode(!i),i,false)
var m=f(d)
if(m&&c(m)&&lm(d,m))return FR(t,e,m.getNode(!i),i,false)
if(v)return UO(e,d.toRange(),false)
return q.none()}
var jO=function(e,t,r,n,a,o){var i=um(t,e.getBody(),r)
var u=Ve(i.getClientRects())
var f=t===gO.Down
if(!u)return q.none()
var c=f?xO:wO
var s=c(e.getBody(),kO(1),i)
var l=re(s,NO(1))
var d=u.left
var v=OO(l,d)
if(v&&o(v.node)){var m=Math.abs(d-v.left)
var p=Math.abs(d-v.right)
return FR(t,e,v.node,m<p,false)}var g
g=n(i)?i.getNode():a(i)?i.getNode(true):Gs(r)
if(g){var h=SO(t,e.getBody(),kO(1),g)
var y=OO(re(h,NO(1)),d)
if(y)return UO(e,y.position.toRange(),false)
y=Ve(re(h,NO(0)))
if(y)return UO(e,y.position.toRange(),false)}if(0===l.length)return HO(e,f).filter(f?a:n).map((function(t){return HR(e,t.toRange(),false)}))
return q.none()}
var HO=function(e,t){var r=e.selection.getRng()
var n=e.getBody()
if(t){var a=xl.fromRangeEnd(r)
var o=uO(n,a)
return he(o.positions)}a=xl.fromRangeStart(r)
o=iO(n,a)
return ge(o.positions)}
var VO=function(e,t,r){return HO(e,t).filter(r).exists((function(t){e.selection.setRng(t.toRange())
return true}))}
var qO=function(e,t){var r=e.dom.createRng()
r.setStart(t.container(),t.offset())
r.setEnd(t.container(),t.offset())
e.selection.setRng(r)}
var $O=function(e,t){e?t.setAttribute("data-mce-selected","inline-boundary"):t.removeAttribute("data-mce-selected")}
var WO=function(e,t,r){return _D(t,r).map((function(t){qO(e,t)
return r}))}
var KO=function(e,t,r){var n=e.getBody()
var a=xl.fromRangeStart(e.selection.getRng())
var o=B(XA,e)
var i=XD(r,o,n,a)
return i.bind((function(r){return WO(e,t,r)}))}
var XO=function(e,t,r){var n=Q(gs(yr.fromDom(t.getRoot()),'*[data-mce-selected="inline-boundary"]'),(function(e){return e.dom}))
var a=re(n,e)
var o=re(r,e)
Z(de(a,o),B($O,false))
Z(de(o,a),B($O,true))}
var YO=function(e,t){if(e.selection.isCollapsed()&&true!==e.composing&&t.get()){var r=xl.fromRangeStart(e.selection.getRng())
if(xl.isTextPosition(r)&&false===ZA(r)){qO(e,_v(t.get(),r))
t.set(null)}}}
var GO=function(e,t,r,n){if(t.selection.isCollapsed()){var a=re(n,e)
Z(a,(function(n){var a=xl.fromRangeStart(t.selection.getRng())
FD(e,t.getBody(),a).bind((function(e){return WO(t,r,e)}))}))}}
var JO=function(e,t,r){return!!Xd(e)&&KO(e,t,r).isSome()}
var QO=function(e,t,r){return!!Xd(t)&&JD(e,t)}
var ZO=function(e){var t=jc(null)
var r=B(XA,e)
e.on("NodeChange",(function(n){if(Xd(e)&&!(Zt.browser.isIE()&&n.initial)){XO(r,e.dom,n.parents)
YO(e,t)
GO(r,e,t,n.parents)}}))
return t}
var eB=B(QO,true)
var tB=B(QO,false)
var rB=function(e,t,r){if(Xd(e)){var n=HO(e,t).getOrThunk((function(){var r=e.selection.getRng()
return t?xl.fromRangeEnd(r):xl.fromRangeStart(r)}))
return FD(B(XA,e),e.getBody(),n).exists((function(t){var n=jD(t)
return _D(r,n).exists((function(t){qO(e,t)
return true}))}))}return false}
var nB=function(e,t){var r=document.createRange()
r.setStart(e.container(),e.offset())
r.setEnd(t.container(),t.offset())
return r}
var aB=function(e){return Us(Um(e),zm(e),(function(t,r){var n=eR(true,t)
var a=eR(false,r)
return Mm(e,n).forall((function(e){return e.isEqual(a)}))})).getOr(true)}
var oB=function(e,t){return function(r){return _D(t,r).exists((function(t){qO(e,t)
return true}))}}
var iB=function(e,t,r,n){var a=e.getBody()
var o=B(XA,e)
e.undoManager.ignore((function(){e.selection.setRng(nB(r,n))
e.execCommand("Delete")
FD(o,a,xl.fromRangeStart(e.selection.getRng())).map(HD).map(oB(e,t))}))
e.nodeChanged()}
var uB=function(e,t){var r=Jv(t,e)
return r||e}
var fB=function(e,t,r,n){var a=uB(e.getBody(),n.container())
var o=B(XA,e)
var i=FD(o,a,n)
return i.bind((function(e){return r?e.fold(D(q.some(HD(e))),q.none,D(q.some(jD(e))),q.none):e.fold(q.none,D(q.some(jD(e))),q.none,D(q.some(HD(e))))})).map(oB(e,t)).getOrThunk((function(){var u=Pm(r,a,n)
var f=u.bind((function(e){return FD(o,a,e)}))
return Us(i,f,(function(){return JA(o,a,n).exists((function(t){if(aB(t)){ww(e,r,yr.fromDom(t))
return true}return false}))})).orThunk((function(){return f.bind((function(a){return u.map((function(a){r?iB(e,t,n,a):iB(e,t,a,n)
return true}))}))})).getOr(false)}))}
var cB=function(e,t,r){if(e.selection.isCollapsed()&&Xd(e)){var n=xl.fromRangeStart(e.selection.getRng())
return fB(e,t,r,n)}return false}
var sB=function(e,t){var r=pC(t,e)
return ue(r,_o).fold(D(r),(function(e){return r.slice(0,e)}))}
var lB=function(e){return 1===en(e).length}
var dB=function(e,t,r,n){var a=B(FS,t)
var o=Q(re(n,a),(function(e){return e.dom}))
if(0===o.length)ww(t,e,r)
else{var i=MS(r.dom,o)
t.selection.setRng(i.toRange())}}
var vB=function(e,t){var r=yr.fromDom(e.getBody())
var n=yr.fromDom(e.selection.getStart())
var a=re(sB(r,n),lB)
return he(a).exists((function(r){var n=xl.fromRangeStart(e.selection.getRng())
if(uR(t,n,r.dom)&&!US(r)){dB(t,e,r,a)
return true}return false}))}
var mB=function(e,t){return!!e.selection.isCollapsed()&&vB(e,t)}
var pB=function(e,t,r){e._selectionOverrides.hideFakeCaret()
ww(e,t,yr.fromDom(r))
return true}
var gB=function(e,t){var r=t?rC:nC
var n=t?dm.Forwards:dm.Backwards
var a=um(n,e.getBody(),e.selection.getRng())
return r(a)?pB(e,t,a.getNode(!t)):q.from(eR(t,a)).filter((function(e){return r(e)&&lm(a,e)})).exists((function(r){return pB(e,t,r.getNode(!t))}))}
var hB=function(e,t){var r=e.selection.getNode()
return!!ia(r)&&pB(e,t,r)}
var yB=function(e,t){return e.selection.isCollapsed()?gB(e,t):hB(e,t)}
var bB=function(e){return Ga(e,(function(e){return na(e.dom)||aa(e.dom)})).exists((function(e){return na(e.dom)}))}
var CB=function(e){var t=parseInt(e,10)
return isNaN(t)?0:t}
var wB=function(e,t){var r=e||To(t)?"margin":"padding"
var n="rtl"===ya(t,"direction")?"-right":"-left"
return r+n}
var xB=function(e,t,r,n,a,o){var i=wB(r,yr.fromDom(o))
if("outdent"===t){var u=Math.max(0,CB(o.style[i])-n)
e.setStyle(o,i,u?u+a:"")}else{u=CB(o.style[i])+n+a
e.setStyle(o,i,u)}}
var SB=function(e,t){return se(t,(function(t){var r=wB(Ld(e),t)
var n=Ca(t,r).map(CB).getOr(0)
var a=e.dom.getContentEditable(t.dom)
return"false"!==a&&n>0}))}
var kB=function(e){var t=_B(e)
return!e.mode.isReadOnly()&&(t.length>1||SB(e,t))}
var NB=function(e){return Oo(e)||Bo(e)}
var EB=function(e){return Kr(e).map(NB).getOr(false)}
var _B=function(e){return re(Q(e.selection.getSelectedBlocks(),yr.fromDom),(function(e){return!NB(e)&&!EB(e)&&bB(e)}))}
var TB=function(e,t){var r=e.dom,n=e.selection,a=e.formatter
var o=Id(e)
var i=/[a-z%]+$/i.exec(o)[0]
var u=parseInt(o,10)
var f=Ld(e)
var c=vd(e)
e.queryCommandState("InsertUnorderedList")||e.queryCommandState("InsertOrderedList")||""!==c||r.getParent(n.getNode(),r.isBlock)||a.apply("div")
Z(_B(e),(function(e){xB(r,t,f,u,i,e.dom)}))}
var AB=function(e,t){if(e.selection.isCollapsed()&&kB(e)){var r=e.dom
var n=e.selection.getRng()
var a=xl.fromRangeStart(n)
var o=r.getParent(n.startContainer,r.isBlock)
if(null!==o&&CC(yr.fromDom(o),a)){TB(e,"outdent")
return true}}return false}
var RB=function(e,t){e.getDoc().execCommand(t,false,null)}
var DB=function(e,t){if(AB(e))return
if(vD(e,false))return
if(XR(e,false))return
if(cB(e,t,false))return
if(TR(e,false))return
if(sx(e))return
if(pD(e,false))return
if(yB(e,false))return
if(LR(e))return
if(mB(e,false))return
RB(e,"Delete")
iR(e)}
var OB=function(e,t){if(vD(e,true))return
if(XR(e,true))return
if(cB(e,t,true))return
if(TR(e,true))return
if(sx(e))return
if(pD(e,true))return
if(yB(e,true))return
if(LR(e))return
if(mB(e,true))return
RB(e,"ForwardDelete")}
var BB=function(e,t){e.addCommand("delete",(function(){DB(e,t)}))
e.addCommand("forwardDelete",(function(){OB(e,t)}))}
var PB=5
var LB=400
var IB=function(e){if(void 0===e.touches||1!==e.touches.length)return q.none()
return q.some(e.touches[0])}
var MB=function(e,t){var r=Math.abs(e.clientX-t.x)
var n=Math.abs(e.clientY-t.y)
return r>PB||n>PB}
var FB=function(e){var t=jc(q.none())
var r=jc(false)
var n=ns((function(t){e.fire("longpress",qe(qe({},t),{type:"longpress"}))
r.set(true)}),LB)
e.on("touchstart",(function(e){IB(e).each((function(a){n.cancel()
var o={x:a.clientX,y:a.clientY,target:e.target}
n.throttle(e)
r.set(false)
t.set(q.some(o))}))}),true)
e.on("touchmove",(function(a){n.cancel()
IB(a).each((function(n){t.get().each((function(a){if(MB(n,a)){t.set(q.none())
r.set(false)
e.fire("longpresscancel")}}))}))}),true)
e.on("touchend touchcancel",(function(a){n.cancel()
if("touchcancel"===a.type)return
t.get().filter((function(e){return e.target.isEqualNode(a.target)})).each((function(){r.get()?a.preventDefault():e.fire("tap",qe(qe({},a),{type:"tap"}))}))}),true)}
var UB=function(e,t){return e.hasOwnProperty(t.nodeName)}
var zB=function(e,t){return!!Jn(t)||!!jn(t)&&(!UB(e,t)&&!sp(t))}
var jB=function(e,t,r){return J(mC(yr.fromDom(r),yr.fromDom(t)),(function(t){return UB(e,t.dom)}))}
var HB=function(e,t){if(Jn(t)){if(0===t.nodeValue.length)return true
if(/^\s+$/.test(t.nodeValue)&&(!t.nextSibling||UB(e,t.nextSibling)))return true}return false}
var VB=function(e){var t=e.dom,r=e.selection
var n=e.schema,a=n.getBlockElements()
var o=r.getStart()
var i=e.getBody()
var u,f,c
var s=vd(e)
if(!o||!jn(o)||!s)return
var l=i.nodeName.toLowerCase()
if(!n.isValidChild(l,s.toLowerCase())||jB(a,i,o))return
var d=r.getRng()
var v=d.startContainer
var m=d.startOffset
var p=d.endContainer
var g=d.endOffset
var h=Qy(e)
o=i.firstChild
while(o)if(zB(a,o)){if(HB(a,o)){f=o
o=o.nextSibling
t.remove(f)
continue}if(!u){u=t.create(s,md(e))
o.parentNode.insertBefore(u,o)
c=true}f=o
o=o.nextSibling
u.appendChild(f)}else{u=null
o=o.nextSibling}if(c&&h){d.setStart(v,m)
d.setEnd(p,g)
r.setRng(d)
e.nodeChanged()}}
var qB=function(e){vd(e)&&e.on("NodeChange",B(VB,e))}
var $B=function(e){return eo(yr.fromDom(e.getBody()),"*[data-mce-caret]").fold(D(null),(function(e){return e.dom}))}
var WB=function(e){e.selection.setRng(e.selection.getRng())}
var KB=function(e,t){if(t.hasAttribute("data-mce-caret")){oi(t)
WB(e)
e.selection.scrollIntoView(t)}}
var XB=function(e,t){var r=$B(e)
if(!r)return
if("compositionstart"===t.type){t.preventDefault()
t.stopPropagation()
KB(e,r)
return}if(Go(r)){KB(e,r)
e.undoManager.add()}}
var YB=function(e){e.on("keyup compositionstart",B(XB,e))}
var GB=aa
var JB=function(e,t,r){return zO(t,e,r,iC,uC,GB)}
var QB=function(e,t,r){var n=function(e){return iC(e)||aC(e)}
var a=function(e){return uC(e)||oC(e)}
return jO(t,e,r,n,a,GB)}
var ZB=function(e){var t=e.dom.create(vd(e));(!Zt.ie||Zt.ie>=11)&&(t.innerHTML='<br data-mce-bogus="1">')
return t}
var eP=function(e,t,r){var n=Nm(e.getBody())
var a=B(sm,1===t?n.next:n.prev)
if(r.collapsed&&iv(e)){var o=e.dom.getParent(r.startContainer,"PRE")
if(!o)return
var i=a(xl.fromRangeStart(r))
if(!i){var u=ZB(e)
1===t?e.$(o).after(u):e.$(o).before(u)
e.selection.select(u,true)
e.selection.collapse()}}}
var tP=function(e,t){var r=t?dm.Forwards:dm.Backwards
var n=e.selection.getRng()
return JB(r,e,n).orThunk((function(){eP(e,r,n)
return q.none()}))}
var rP=function(e,t){var r=t?1:-1
var n=e.selection.getRng()
return QB(r,e,n).orThunk((function(){eP(e,r,n)
return q.none()}))}
var nP=function(e,t){return tP(e,t).exists((function(t){FO(e,t)
return true}))}
var aP=function(e,t){return rP(e,t).exists((function(t){FO(e,t)
return true}))}
var oP=function(e,t){var r=t?uC:iC
return VO(e,t,r)}
var iP=function(e){return G(["figcaption"],Lr(e))}
var uP=function(e){var t=document.createRange()
t.setStartBefore(e.dom)
t.setEndBefore(e.dom)
return t}
var fP=function(e,t,r){r?bn(e,t):yn(e,t)}
var cP=function(e,t){var r=yr.fromTag("br")
fP(e,r,t)
return uP(r)}
var sP=function(e,t,r,n){var a=yr.fromTag(r)
var o=yr.fromTag("br")
sa(a,n)
bn(a,o)
fP(e,a,t)
return uP(o)}
var lP=function(e,t,r,n){return""===t?cP(e,n):sP(e,n,t,r)}
var dP=function(e,t){var r=B(Dr,t)
return Ga(yr.fromDom(e.container()),_o,r).filter(iP)}
var vP=function(e,t,r){return t?cO(e.dom,r):fO(e.dom,r)}
var mP=function(e,t){var r=yr.fromDom(e.getBody())
var n=xl.fromRangeStart(e.selection.getRng())
var a=vd(e)
var o=md(e)
return dP(n,r).exists((function(){if(vP(r,t,n)){var i=lP(r,a,o,t)
e.selection.setRng(i)
return true}return false}))}
var pP=function(e,t){return!!e.selection.isCollapsed()&&mP(e,t)}
var gP=function(e){return Q(e,(function(e){return qe({shiftKey:false,altKey:false,ctrlKey:false,metaKey:false,keyCode:0,action:T},e)}))}
var hP=function(e,t){return t.keyCode===e.keyCode&&t.shiftKey===e.shiftKey&&t.altKey===e.altKey&&t.ctrlKey===e.ctrlKey&&t.metaKey===e.metaKey}
var yP=function(e,t){return ce(gP(e),(function(e){return hP(e,t)?[e]:[]}))}
var bP=function(e){var t=[]
for(var r=1;r<arguments.length;r++)t[r-1]=arguments[r]
return function(){return e.apply(null,t)}}
var CP=function(e,t){return ie(yP(e,t),(function(e){return e.action()}))}
var wP=function(e,t){var r=t?dm.Forwards:dm.Backwards
var n=e.selection.getRng()
return zO(e,r,n,rC,nC,ia).exists((function(t){FO(e,t)
return true}))}
var xP=function(e,t){var r=t?1:-1
var n=e.selection.getRng()
return jO(e,r,n,rC,nC,ia).exists((function(t){FO(e,t)
return true}))}
var SP=function(e,t){var r=t?nC:rC
return VO(e,t,r)}
var kP=function(e,t){return{left:e.left-t,top:e.top-t,right:e.right+2*t,bottom:e.bottom+2*t,width:e.width+t,height:e.height+t}}
var NP=function(e,t){return ce(t,(function(t){var r=kP(Vs(t.getBoundingClientRect()),-1)
return[{x:r.left,y:e(r),cell:t},{x:r.right,y:e(r),cell:t}]}))}
var EP=function(e,t,r){return ae(e,(function(e,n){return e.fold((function(){return q.some(n)}),(function(e){var a=Math.sqrt(Math.abs(e.x-t)+Math.abs(e.y-r))
var o=Math.sqrt(Math.abs(n.x-t)+Math.abs(n.y-r))
return q.some(o<a?n:e)}))}),q.none())}
var _P=function(e,t,r,n,a){var o=gs(yr.fromDom(r),"td,th,caption").map((function(e){return e.dom}))
var i=re(NP(e,o),(function(e){return t(e,a)}))
return EP(i,n,a).map((function(e){return e.cell}))}
var TP=function(e){return e.bottom}
var AP=function(e){return e.top}
var RP=function(e,t){return e.y<t}
var DP=function(e,t){return e.y>t}
var OP=B(_P,TP,RP)
var BP=B(_P,AP,DP)
var PP=function(e,t){return ge(t.getClientRects()).bind((function(t){return OP(e,t.left,t.top)})).bind((function(e){return oO(vO(e),t)}))}
var LP=function(e,t){return he(t.getClientRects()).bind((function(t){return BP(e,t.left,t.top)})).bind((function(e){return oO(dO(e),t)}))}
var IP=function(e,t,r){return r.breakAt.exists((function(r){return e(t,r).breakAt.isSome()}))}
var MP=function(e){return e.breakType===QD.Wrap&&0===e.positions.length}
var FP=function(e){return e.breakType===QD.Br&&1===e.positions.length}
var UP=function(e,t,r){var n=e(t,r)
return MP(n)||!ta(r.getNode())&&FP(n)?!IP(e,t,n):n.breakAt.isNone()}
var zP=B(UP,iO)
var jP=B(UP,uO)
var HP=function(e,t,r){var n=xl.fromRangeStart(t)
return Im(!e,r).exists((function(e){return e.isEqual(n)}))}
var VP=function(e,t,r,n){var a=e.selection.getRng()
var o=t?1:-1
if(Mv()&&HP(t,a,r)){FR(o,e,r,!t,false).each((function(t){FO(e,t)}))
return true}return false}
var qP=function(e,t,r){return PP(t,r).orThunk((function(){return ge(r.getClientRects()).bind((function(r){return aO(sO(e,xl.before(t)),r.left)}))})).getOr(xl.before(t))}
var $P=function(e,t,r){return LP(t,r).orThunk((function(){return ge(r.getClientRects()).bind((function(r){return aO(lO(e,xl.after(t)),r.left)}))})).getOr(xl.after(t))}
var WP=function(e,t){var r=t.getNode(e)
return jn(r)&&"TABLE"===r.nodeName?q.some(r):q.none()}
var KP=function(e,t,r,n){var a=vd(t)
a?t.undoManager.transact((function(){var n=yr.fromTag(a)
sa(n,md(t))
bn(n,yr.fromTag("br"))
e?hn(yr.fromDom(r),n):gn(yr.fromDom(r),n)
var o=t.dom.createRng()
o.setStart(n.dom,0)
o.setEnd(n.dom,0)
FO(t,o)})):FO(t,n.toRange())}
var XP=function(e,t,r){var n=WP(!!t,r)
var a=false===t
n.fold((function(){return FO(e,r.toRange())}),(function(n){return Im(a,e.getBody()).filter((function(e){return e.isEqual(r)})).fold((function(){return FO(e,r.toRange())}),(function(a){return KP(t,e,n,r)}))}))}
var YP=function(e,t,r,n){var a=e.selection.getRng()
var o=xl.fromRangeStart(a)
var i=e.getBody()
if(!t&&zP(n,o)){var u=qP(i,r,o)
XP(e,t,u)
return true}if(t&&jP(n,o)){u=$P(i,r,o)
XP(e,t,u)
return true}return false}
var GP=function(e,t,r){return q.from(e.dom.getParent(e.selection.getNode(),"td,th")).bind((function(n){return q.from(e.dom.getParent(n,"table")).map((function(a){return r(e,t,a,n)}))})).getOr(false)}
var JP=function(e,t){return GP(e,t,VP)}
var QP=function(e,t){return GP(e,t,YP)}
var ZP=function(e,t,r){var n=qt().os
CP([{keyCode:jg.RIGHT,action:bP(nP,e,true)},{keyCode:jg.LEFT,action:bP(nP,e,false)},{keyCode:jg.UP,action:bP(aP,e,false)},{keyCode:jg.DOWN,action:bP(aP,e,true)},{keyCode:jg.RIGHT,action:bP(JP,e,true)},{keyCode:jg.LEFT,action:bP(JP,e,false)},{keyCode:jg.UP,action:bP(QP,e,false)},{keyCode:jg.DOWN,action:bP(QP,e,true)},{keyCode:jg.RIGHT,action:bP(wP,e,true)},{keyCode:jg.LEFT,action:bP(wP,e,false)},{keyCode:jg.UP,action:bP(xP,e,false)},{keyCode:jg.DOWN,action:bP(xP,e,true)},{keyCode:jg.RIGHT,action:bP(JO,e,t,true)},{keyCode:jg.LEFT,action:bP(JO,e,t,false)},{keyCode:jg.RIGHT,ctrlKey:!n.isOSX(),altKey:n.isOSX(),action:bP(eB,e,t)},{keyCode:jg.LEFT,ctrlKey:!n.isOSX(),altKey:n.isOSX(),action:bP(tB,e,t)},{keyCode:jg.UP,action:bP(pP,e,false)},{keyCode:jg.DOWN,action:bP(pP,e,true)}],r).each((function(e){r.preventDefault()}))}
var eL=function(e,t){e.on("keydown",(function(r){false===r.isDefaultPrevented()&&ZP(e,t,r)}))}
var tL=function(e,t,r){CP([{keyCode:jg.BACKSPACE,action:bP(AB,e,false)},{keyCode:jg.BACKSPACE,action:bP(vD,e,false)},{keyCode:jg.DELETE,action:bP(vD,e,true)},{keyCode:jg.BACKSPACE,action:bP(XR,e,false)},{keyCode:jg.DELETE,action:bP(XR,e,true)},{keyCode:jg.BACKSPACE,action:bP(cB,e,t,false)},{keyCode:jg.DELETE,action:bP(cB,e,t,true)},{keyCode:jg.BACKSPACE,action:bP(sx,e,false)},{keyCode:jg.DELETE,action:bP(sx,e,true)},{keyCode:jg.BACKSPACE,action:bP(pD,e,false)},{keyCode:jg.DELETE,action:bP(pD,e,true)},{keyCode:jg.BACKSPACE,action:bP(yB,e,false)},{keyCode:jg.DELETE,action:bP(yB,e,true)},{keyCode:jg.BACKSPACE,action:bP(LR,e,false)},{keyCode:jg.DELETE,action:bP(LR,e,true)},{keyCode:jg.BACKSPACE,action:bP(TR,e,false)},{keyCode:jg.DELETE,action:bP(TR,e,true)},{keyCode:jg.BACKSPACE,action:bP(mB,e,false)},{keyCode:jg.DELETE,action:bP(mB,e,true)}],r).each((function(e){r.preventDefault()}))}
var rL=function(e,t){CP([{keyCode:jg.BACKSPACE,action:bP(dD,e)},{keyCode:jg.DELETE,action:bP(dD,e)}],t)}
var nL=function(e,t){e.on("keydown",(function(r){false===r.isDefaultPrevented()&&tL(e,t,r)}))
e.on("keyup",(function(t){false===t.isDefaultPrevented()&&rL(e,t)}))}
var aL=function(e){while(e){if(1===e.nodeType||3===e.nodeType&&e.data&&/[\r\n\s]/.test(e.data))return e
e=e.nextSibling}}
var oL=function(e,t){var r,n=t
var a=e.dom
var o=e.schema.getMoveCaretBeforeOnEnterElements()
if(!t)return
if(/^(LI|DT|DD)$/.test(t.nodeName)){var i=aL(t.firstChild)
i&&/^(UL|OL|DL)$/.test(i.nodeName)&&t.insertBefore(a.doc.createTextNode(Uo),t.firstChild)}var u=a.createRng()
t.normalize()
if(t.hasChildNodes()){var f=new go(t,t)
while(r=f.current()){if(Jn(r)){u.setStart(r,0)
u.setEnd(r,0)
break}if(o[r.nodeName.toLowerCase()]){u.setStartBefore(r)
u.setEndBefore(r)
break}n=r
r=f.next()}if(!r){u.setStart(n,0)
u.setEnd(n,0)}}else if(ta(t))if(t.nextSibling&&a.isBlock(t.nextSibling)){u.setStartBefore(t)
u.setEndBefore(t)}else{u.setStartAfter(t)
u.setEndAfter(t)}else{u.setStart(t,0)
u.setEnd(t,0)}e.selection.setRng(u)
jh(e,u)}
var iL=function(e,t){var r=e.getRoot()
var n,a
n=t
while(n!==r&&"false"!==e.getContentEditable(n)){"true"===e.getContentEditable(n)&&(a=n)
n=n.parentNode}return n!==r?a:r}
var uL=function(e){return q.from(e.dom.getParent(e.selection.getStart(true),e.dom.isBlock))}
var fL=function(e){return uL(e).fold(D(""),(function(e){return e.nodeName.toUpperCase()}))}
var cL=function(e){return uL(e).filter((function(e){return Bo(yr.fromDom(e))})).isSome()}
var sL=function(e,t){return e.firstChild&&e.firstChild.nodeName===t}
var lL=function(e){var t
return(null===(t=e.parentNode)||void 0===t?void 0:t.firstChild)===e}
var dL=function(e,t){return e&&e.parentNode&&e.parentNode.nodeName===t}
var vL=function(e){return e&&/^(OL|UL|LI)$/.test(e.nodeName)}
var mL=function(e){return vL(e)&&vL(e.parentNode)}
var pL=function(e){var t=e.parentNode
if(/^(LI|DT|DD)$/.test(t.nodeName))return t
return e}
var gL=function(e,t,r){var n=e[r?"firstChild":"lastChild"]
while(n){if(jn(n))break
n=n[r?"nextSibling":"previousSibling"]}return n===t}
var hL=function(e,t,r,n,a){var o=e.dom
var i=e.selection.getRng()
if(r===e.getBody())return
mL(r)&&(a="LI")
var u=a?t(a):o.create("BR")
if(gL(r,n,true)&&gL(r,n,false))if(dL(r,"LI")){var f=pL(r)
o.insertAfter(u,f)
lL(r)?o.remove(f):o.remove(r)}else o.replace(u,r)
else if(gL(r,n,true)){if(dL(r,"LI")){o.insertAfter(u,pL(r))
u.appendChild(o.doc.createTextNode(" "))
u.appendChild(r)}else r.parentNode.insertBefore(u,r)
o.remove(n)}else if(gL(r,n,false)){o.insertAfter(u,pL(r))
o.remove(n)}else{r=pL(r)
var c=i.cloneRange()
c.setStartAfter(n)
c.setEndAfter(r)
var s=c.extractContents()
if("LI"===a&&sL(s,"LI")){u=s.firstChild
o.insertAfter(s,r)}else{o.insertAfter(s,r)
o.insertAfter(u,r)}o.remove(n)}oL(e,u)}
var yL=function(e){Z(ps(yr.fromDom(e),zr),(function(e){var t=e.dom
t.nodeValue=qo(t.nodeValue)}))}
var bL=function(e,t){return t&&"A"===t.nodeName&&e.isEmpty(t)}
var CL=function(e){return e&&/^(TD|TH|CAPTION)$/.test(e.nodeName)}
var wL=function(e){e.innerHTML='<br data-mce-bogus="1">'}
var xL=function(e,t){return e.nodeName===t||e.previousSibling&&e.previousSibling.nodeName===t}
var SL=function(e,t){return t&&e.isBlock(t)&&!/^(TD|TH|CAPTION|FORM)$/.test(t.nodeName)&&!/^(fixed|absolute)/i.test(t.style.position)&&"true"!==e.getContentEditable(t)}
var kL=function(e,t,r){var n=r
var a=[]
var o
if(!n)return
while(n=n.firstChild){if(e.isBlock(n))return
jn(n)&&!t[n.nodeName.toLowerCase()]&&a.push(n)}o=a.length
while(o--){n=a[o];(!n.hasChildNodes()||n.firstChild===n.lastChild&&""===n.firstChild.nodeValue||bL(e,n))&&e.remove(n)}}
var NL=function(e,t,r){return false===Jn(t)?r:e?1===r&&t.data.charAt(r-1)===Ho?0:r:r===t.data.length-1&&t.data.charAt(r)===Ho?t.data.length:r}
var EL=function(e){var t=e.cloneRange()
t.setStart(e.startContainer,NL(true,e.startContainer,e.startOffset))
t.setEnd(e.endContainer,NL(false,e.endContainer,e.endOffset))
return t}
var _L=function(e){do{Jn(e)&&(e.nodeValue=e.nodeValue.replace(/^[\r\n]+/,""))
e=e.firstChild}while(e)}
var TL=function(e,t){var r=e.getRoot()
var n,a
n=t
while(n!==r&&"false"!==e.getContentEditable(n)){"true"===e.getContentEditable(n)&&(a=n)
n=n.parentNode}return n!==r?a:r}
var AL=function(e,t,r){var n=e.dom
q.from(r.style).map(n.parseStyle).each((function(e){var r=wa(yr.fromDom(t))
var a=qe(qe({},r),e)
n.setStyles(t,a)}))
var a=q.from(r.class).map((function(e){return e.split(/\s+/)}))
var o=q.from(t.className).map((function(e){return re(e.split(/\s+/),(function(e){return""!==e}))}))
Us(a,o,(function(e,r){var a=re(r,(function(t){return!G(e,t)}))
var o=We(e,a)
n.setAttrib(t,"class",o.join(" "))}))
var i=["style","class"]
var u=Te(r,(function(e,t){return!G(i,t)}))
n.setAttribs(t,u)}
var RL=function(e,t){var r=vd(e)
if(r&&r.toLowerCase()===t.tagName.toLowerCase()){var n=md(e)
AL(e,t,n)}}
var DL=function(e,t,r,n,a){var o,i,u,f,c,s
var l=t||"P"
var d=e.dom,v=TL(d,n)
i=d.getParent(n,d.isBlock)
if(!i||!SL(d,i)){i=i||v
s=i===e.getBody()||CL(i)?i.nodeName.toLowerCase():i.parentNode.nodeName.toLowerCase()
if(!i.hasChildNodes()){o=d.create(l)
RL(e,o)
i.appendChild(o)
r.setStart(o,0)
r.setEnd(o,0)
return o}f=n
while(f.parentNode!==i)f=f.parentNode
while(f&&!d.isBlock(f)){u=f
f=f.previousSibling}if(u&&e.schema.isValidChild(s,l.toLowerCase())){o=d.create(l)
RL(e,o)
u.parentNode.insertBefore(o,u)
f=u
while(f&&!d.isBlock(f)){c=f.nextSibling
o.appendChild(f)
f=c}r.setStart(n,a)
r.setEnd(n,a)}}return n}
var OL=function(e,t){t.normalize()
var r=t.lastChild
r&&!/^(left|right)$/gi.test(e.getStyle(r,"float",true))||e.add(t,"br")}
var BL=function(e,t){var r,n,a,o
var i,u,f,c,s,l
var d=e.dom
var v=e.schema,m=v.getNonEmptyElements()
var p=e.selection.getRng()
var g=function(t){var r,a,i,u=n
var f=v.getTextInlineElements()
r=t||"TABLE"===c||"HR"===c?d.create(t||s):o.cloneNode(false)
i=r
if(false===hd(e)){d.setAttrib(r,"style",null)
d.setAttrib(r,"class",null)}else do{if(f[u.nodeName]){if(Hm(u)||sp(u))continue
a=u.cloneNode(false)
d.setAttrib(a,"id","")
if(r.hasChildNodes()){a.appendChild(r.firstChild)
r.appendChild(a)}else{i=a
r.appendChild(a)}}}while((u=u.parentNode)&&u!==w)
RL(e,r)
wL(i)
return r}
var h=function(e){var t,r
var i=NL(e,n,a)
if(Jn(n)&&(e?i>0:i<n.nodeValue.length))return false
if(n.parentNode===o&&l&&!e)return true
if(e&&jn(n)&&n===o.firstChild)return true
if(xL(n,"TABLE")||xL(n,"HR"))return l&&!e||!l&&e
var u=new go(n,o)
Jn(n)&&(e&&0===i?u.prev():e||i!==n.nodeValue.length||u.next())
while(t=u.current()){if(jn(t)){if(!t.getAttribute("data-mce-bogus")){r=t.nodeName.toLowerCase()
if(m[r]&&"br"!==r)return false}}else if(Jn(t)&&!Si(t.nodeValue))return false
e?u.prev():u.next()}return true}
var y=function(){i=/^(H[1-6]|PRE|FIGURE)$/.test(c)&&"HGROUP"!==x?g(s):g()
yd(e)&&SL(d,f)&&d.isEmpty(o)?i=d.split(f,o):d.insertAfter(i,o)
oL(e,i)}
uh(d,p).each((function(e){p.setStart(e.startContainer,e.startOffset)
p.setEnd(e.endContainer,e.endOffset)}))
n=p.startContainer
a=p.startOffset
s=vd(e)
var b=!!(t&&t.shiftKey)
var C=!!(t&&t.ctrlKey)
if(jn(n)&&n.hasChildNodes()){l=a>n.childNodes.length-1
n=n.childNodes[Math.min(a,n.childNodes.length-1)]||n
a=l&&Jn(n)?n.nodeValue.length:0}var w=TL(d,n)
if(!w)return;(s&&!b||!s&&b)&&(n=DL(e,s,p,n,a))
o=d.getParent(n,d.isBlock)
f=o?d.getParent(o.parentNode,d.isBlock):null
c=o?o.nodeName.toUpperCase():""
var x=f?f.nodeName.toUpperCase():""
if("LI"===x&&!C){o=f
f=f.parentNode
c=x}if(/^(LI|DT|DD)$/.test(c)&&d.isEmpty(o)){hL(e,g,f,o,s)
return}if(s&&o===e.getBody())return
s=s||"P"
if(Ko(o)){i=oi(o)
d.isEmpty(o)&&wL(o)
RL(e,i)
oL(e,i)}else if(h())y()
else if(h(true)){i=o.parentNode.insertBefore(g(),o)
oL(e,xL(o,"HR")?i:o)}else{r=EL(p).cloneRange()
r.setEndAfter(o)
u=r.extractContents()
yL(u)
_L(u)
i=u.firstChild
d.insertAfter(u,o)
kL(d,m,i)
OL(d,o)
d.isEmpty(o)&&wL(o)
i.normalize()
if(d.isEmpty(i)){d.remove(i)
y()}else{RL(e,i)
oL(e,i)}}d.setAttrib(i,"id","")
e.fire("NewBlock",{newBlock:i})}
var PL=function(e,t,r){var n=new go(t,r)
var a
var o=e.getNonEmptyElements()
while(a=n.next())if(o[a.nodeName.toLowerCase()]||a.length>0)return true}
var LL=function(e,t,r){var n=e.dom.createRng()
if(r){n.setStartBefore(t)
n.setEndBefore(t)}else{n.setStartAfter(t)
n.setEndAfter(t)}e.selection.setRng(n)
jh(e,n)}
var IL=function(e,t){var r=e.selection
var n=e.dom
var a=r.getRng()
var o
var i
uh(n,a).each((function(e){a.setStart(e.startContainer,e.startOffset)
a.setEnd(e.endContainer,e.endOffset)}))
var u=a.startOffset
var f=a.startContainer
if(1===f.nodeType&&f.hasChildNodes()){var c=u>f.childNodes.length-1
f=f.childNodes[Math.min(u,f.childNodes.length-1)]||f
u=c&&3===f.nodeType?f.nodeValue.length:0}var s=n.getParent(f,n.isBlock)
var l=s?n.getParent(s.parentNode,n.isBlock):null
var d=l?l.nodeName.toUpperCase():""
var v=!!(t&&t.ctrlKey)
"LI"!==d||v||(s=l)
if(f&&3===f.nodeType&&u>=f.nodeValue.length&&!PL(e.schema,f,s)){o=n.create("br")
a.insertNode(o)
a.setStartAfter(o)
a.setEndAfter(o)
i=true}o=n.create("br")
El(n,a,o)
LL(e,o,i)
e.undoManager.add()}
var ML=function(e,t){var r=yr.fromTag("br")
gn(yr.fromDom(t),r)
e.undoManager.add()}
var FL=function(e,t){zL(e.getBody(),t)||hn(yr.fromDom(t),yr.fromTag("br"))
var r=yr.fromTag("br")
hn(yr.fromDom(t),r)
LL(e,r.dom,false)
e.undoManager.add()}
var UL=function(e){return ta(e.getNode())}
var zL=function(e,t){return!!UL(xl.after(t))||Mm(e,xl.after(t)).map((function(e){return ta(e.getNode())})).getOr(false)}
var jL=function(e){return e&&"A"===e.nodeName&&"href"in e}
var HL=function(e){return e.fold(F,jL,jL,F)}
var VL=function(e){var t=B(XA,e)
var r=xl.fromRangeStart(e.selection.getRng())
return FD(t,e.getBody(),r).filter(HL)}
var qL=function(e,t){t.fold(T,B(ML,e),B(FL,e),T)}
var $L=function(e,t){var r=VL(e)
r.isSome()?r.each(B(qL,e)):IL(e,t)}
var WL=function(e,t){return uL(e).filter((function(e){return t.length>0&&_r(yr.fromDom(e),t)})).isSome()}
var KL=function(e){return WL(e,pd(e))}
var XL=function(e){return WL(e,gd(e))}
var YL=Wa.generate([{br:[]},{block:[]},{none:[]}])
var GL=function(e,t){return XL(e)}
var JL=function(e){return function(t,r){var n=""===vd(t)
return n===e}}
var QL=function(e){return function(t,r){return cL(t)===e}}
var ZL=function(e,t){return function(r,n){var a=fL(r)===e.toUpperCase()
return a===t}}
var eI=function(e){return ZL("pre",e)}
var tI=function(){return ZL("summary",true)}
var rI=function(e){return function(t,r){return dd(t)===e}}
var nI=function(e,t){return KL(e)}
var aI=function(e,t){return t}
var oI=function(e){var t=vd(e)
var r=iL(e.dom,e.selection.getStart())
return r&&e.schema.isValidChild(r.nodeName,t||"P")}
var iI=function(e,t){return function(r,n){var a=ae(e,(function(e,t){return e&&t(r,n)}),true)
return a?q.some(t):q.none()}}
var uI=function(e,t){return TD([iI([GL],YL.none()),iI([tI()],YL.br()),iI([eI(true),rI(false),aI],YL.br()),iI([eI(true),rI(false)],YL.block()),iI([eI(true),rI(true),aI],YL.block()),iI([eI(true),rI(true)],YL.br()),iI([QL(true),aI],YL.br()),iI([QL(true)],YL.block()),iI([JL(true),aI,oI],YL.block()),iI([JL(true)],YL.br()),iI([nI],YL.br()),iI([JL(false),aI],YL.br()),iI([oI],YL.block())],[e,!!(t&&t.shiftKey)]).getOr(YL.none())}
var fI=function(e,t){uI(e,t).fold((function(){$L(e,t)}),(function(){BL(e,t)}),T)}
var cI=function(e,t){if(t.isDefaultPrevented())return
t.preventDefault()
WN(e.undoManager)
e.undoManager.transact((function(){false===e.selection.isCollapsed()&&e.execCommand("Delete")
fI(e,t)}))}
var sI=function(e){e.on("keydown",(function(t){t.keyCode===jg.ENTER&&cI(e,t)}))}
var lI=function(e,t,r){CP([{keyCode:jg.END,action:bP(oP,e,true)},{keyCode:jg.HOME,action:bP(oP,e,false)},{keyCode:jg.END,action:bP(SP,e,true)},{keyCode:jg.HOME,action:bP(SP,e,false)},{keyCode:jg.END,action:bP(rB,e,true,t)},{keyCode:jg.HOME,action:bP(rB,e,false,t)}],r).each((function(e){r.preventDefault()}))}
var dI=function(e,t){e.on("keydown",(function(r){false===r.isDefaultPrevented()&&lI(e,t,r)}))}
var vI=qt().browser
var mI=function(e){var t=rs((function(){e.composing||JC(e)}),0)
if(vI.isIE()){e.on("keypress",(function(e){t.throttle()}))
e.on("remove",(function(e){t.cancel()}))}}
var pI=function(e){mI(e)
e.on("input",(function(t){false===t.isComposing&&JC(e)}))}
var gI=qt()
var hI=function(e,t,r){CP([{keyCode:jg.PAGE_UP,action:bP(rB,e,false,t)},{keyCode:jg.PAGE_DOWN,action:bP(rB,e,true,t)}],r)}
var yI=function(e){return e.stopImmediatePropagation()}
var bI=function(e){return e.keyCode===jg.PAGE_UP||e.keyCode===jg.PAGE_DOWN}
var CI=function(e,t,r){r&&!e.get()?t.on("NodeChange",yI,true):!r&&e.get()&&t.off("NodeChange",yI)
e.set(r)}
var wI=function(e,t){if(gI.os.isOSX())return
var r=jc(false)
e.on("keydown",(function(t){bI(t)&&CI(r,e,true)}))
e.on("keyup",(function(n){false===n.isDefaultPrevented()&&hI(e,t,n)
if(bI(n)&&r.get()){CI(r,e,false)
e.nodeChanged()}}))}
var xI=function(e,t){var r=t.container()
var n=t.offset()
if(Jn(r)){r.insertData(n,e)
return q.some(xl(r,n+e.length))}return fm(t).map((function(r){var n=yr.fromText(e)
t.isAtEnd()?hn(r,n):gn(r,n)
return xl(n.dom,e.length)}))}
var SI=B(xI,Uo)
var kI=B(xI," ")
var NI=function(e){return function(t){return t.fold((function(t){return Fm(e.dom,xl.before(t))}),(function(e){return Um(e)}),(function(e){return zm(e)}),(function(t){return Mm(e.dom,xl.after(t))}))}}
var EI=function(e,t){return function(r){return UC(e,r)?SI(t):kI(t)}}
var _I=function(e){return function(t){e.selection.setRng(t.toRange())
e.nodeChanged()
return true}}
var TI=function(e){var t=xl.fromRangeStart(e.selection.getRng())
var r=yr.fromDom(e.getBody())
if(e.selection.isCollapsed()){var n=B(XA,e)
var a=xl.fromRangeStart(e.selection.getRng())
return FD(n,e.getBody(),a).bind(NI(r)).bind(EI(r,t)).exists(_I(e))}return false}
var AI=function(e,t){CP([{keyCode:jg.SPACEBAR,action:bP(TI,e)}],t).each((function(e){t.preventDefault()}))}
var RI=function(e){e.on("keydown",(function(t){false===t.isDefaultPrevented()&&AI(e,t)}))}
var DI=function(e){var t=ZO(e)
YB(e)
eL(e,t)
nL(e,t)
sI(e)
RI(e)
pI(e)
dI(e,t)
wI(e,t)
return t}
var OI=function(e){return fE(e)?jc(null):DI(e)}
var BI=function(){function e(e){this.lastPath=[]
this.editor=e
var t
var r=this
"onselectionchange"in e.getDoc()||e.on("NodeChange click mouseup keyup focus",(function(r){var n=e.selection.getRng()
var a={startContainer:n.startContainer,startOffset:n.startOffset,endContainer:n.endContainer,endOffset:n.endOffset}
"nodechange"!==r.type&&Yg(a,t)||e.fire("SelectionChange")
t=a}))
e.on("contextmenu",(function(){e.fire("SelectionChange")}))
e.on("SelectionChange",(function(){var t=e.selection.getStart(true)
if(!t||!Zt.range&&e.selection.isCollapsed())return
vg(e)&&!r.isSameElementPath(t)&&e.dom.isChildOf(t,e.getBody())&&e.nodeChanged({selectionChange:true})}))
e.on("mouseup",(function(t){!t.isDefaultPrevented()&&vg(e)&&("IMG"===e.selection.getNode().nodeName?lo.setEditorTimeout(e,(function(){e.nodeChanged()})):e.nodeChanged())}))}e.prototype.nodeChanged=function(e){var t=this.editor.selection
var r,n,a
if(this.editor.initialized&&t&&!fv(this.editor)&&!this.editor.mode.isReadOnly()){a=this.editor.getBody()
r=t.getStart(true)||a
r.ownerDocument===this.editor.getDoc()&&this.editor.dom.isChildOf(r,a)||(r=a)
n=[]
this.editor.dom.getParent(r,(function(e){if(e===a)return true
n.push(e)}))
e=e||{}
e.element=r
e.parents=n
this.editor.fire("NodeChange",e)}}
e.prototype.isSameElementPath=function(e){var t
var r=this.editor.$(e).parentsUntil(this.editor.getBody()).add(e)
if(r.length===this.lastPath.length){for(t=r.length;t>=0;t--)if(r[t]!==this.lastPath[t])break
if(-1===t){this.lastPath=r
return true}}this.lastPath=r
return false}
return e}()
var PI=function(e){e.on("click",(function(t){e.dom.getParent(t.target,"details")&&t.preventDefault()}))}
var LI=function(e){e.parser.addNodeFilter("details",(function(e){Z(e,(function(e){e.attr("data-mce-open",e.attr("open"))
e.attr("open","open")}))}))
e.serializer.addNodeFilter("details",(function(e){Z(e,(function(e){var t=e.attr("data-mce-open")
e.attr("open",y(t)?t:null)
e.attr("data-mce-open",null)}))}))}
var II=function(e){PI(e)
LI(e)}
var MI=function(e){return jn(e)&&Do(yr.fromDom(e))}
var FI=function(e){var t=e.selection.getRng()
var r=xl.fromRangeStart(t)
var n=xl.fromRangeEnd(t)
if(xl.isElementPosition(r)){var a=r.container()
MI(a)&&Um(a).each((function(e){return t.setStart(e.container(),e.offset())}))}if(xl.isElementPosition(n)){a=r.container()
MI(a)&&zm(a).each((function(e){return t.setEnd(e.container(),e.offset())}))}e.selection.setRng(vx(t))}
var UI=function(e){e.on("click",(function(t){t.detail>=3&&FI(e)}))}
var zI=function(){var e=jc(q.none())
var t=function(){return e.set(q.none())}
var r=function(t){return e.set(q.some(t))}
var n=function(){return e.get().isSome()}
var a=function(t){return e.get().each(t)}
return{clear:t,set:r,isSet:n,on:a}}
var jI=function(e){var t=e.getBoundingClientRect()
var r=e.ownerDocument
var n=r.documentElement
var a=r.defaultView
return{top:t.top+a.pageYOffset-n.clientTop,left:t.left+a.pageXOffset-n.clientLeft}}
var HI=function(e){return e.inline?jI(e.getBody()):{left:0,top:0}}
var VI=function(e){var t=e.getBody()
return e.inline?{left:t.scrollLeft,top:t.scrollTop}:{left:0,top:0}}
var qI=function(e){var t=e.getBody(),r=e.getDoc().documentElement
var n={left:t.scrollLeft,top:t.scrollTop}
var a={left:t.scrollLeft||r.scrollLeft,top:t.scrollTop||r.scrollTop}
return e.inline?n:a}
var $I=function(e,t){if(t.target.ownerDocument!==e.getDoc()){var r=jI(e.getContentAreaContainer())
var n=qI(e)
return{left:t.pageX-r.left+n.left,top:t.pageY-r.top+n.top}}return{left:t.pageX,top:t.pageY}}
var WI=function(e,t,r){return{pageX:r.left-e.left+t.left,pageY:r.top-e.top+t.top}}
var KI=function(e,t){return WI(HI(e),VI(e),$I(e,t))}
var XI=aa,YI=na
var GI=function(e,t){return XI(t)&&t!==e}
var JI=function(e,t,r){if(t===r||e.dom.isChildOf(t,r))return false
return!XI(t)}
var QI=function(e){var t=e.cloneNode(true)
t.removeAttribute("data-mce-selected")
return t}
var ZI=function(e,t,r,n){var a=e.dom
var o=t.cloneNode(true)
a.setStyles(o,{width:r,height:n})
a.setAttrib(o,"data-mce-selected",null)
var i=a.create("div",{class:"mce-drag-container","data-mce-bogus":"all",unselectable:"on",contenteditable:"false"})
a.setStyles(i,{position:"absolute",opacity:.5,overflow:"hidden",border:0,padding:0,margin:0,width:r,height:n})
a.setStyles(o,{margin:0,boxSizing:"border-box"})
i.appendChild(o)
return i}
var eM=function(e,t){e.parentNode!==t&&t.appendChild(e)}
var tM=function(e,t,r,n,a,o){var i=0,u=0
e.style.left=t.pageX+"px"
e.style.top=t.pageY+"px"
t.pageX+r>a&&(i=t.pageX+r-a)
t.pageY+n>o&&(u=t.pageY+n-o)
e.style.width=r-i+"px"
e.style.height=n-u+"px"}
var rM=function(e){e&&e.parentNode&&e.parentNode.removeChild(e)}
var nM=function(e){return 0===e.button}
var aM=function(e,t){return{pageX:t.pageX-e.relX,pageY:t.pageY+5}}
var oM=function(e,t){return function(r){if(nM(r)){var n=ie(t.dom.getParents(r.target),el(XI,YI)).getOr(null)
if(GI(t.getBody(),n)){var a=t.dom.getPos(n)
var o=t.getBody()
var i=t.getDoc().documentElement
e.set({element:n,dragging:false,screenX:r.screenX,screenY:r.screenY,maxX:(t.inline?o.scrollWidth:i.offsetWidth)-2,maxY:(t.inline?o.scrollHeight:i.offsetHeight)-2,relX:r.pageX-a.x,relY:r.pageY-a.y,width:n.offsetWidth,height:n.offsetHeight,ghost:ZI(t,n,n.offsetWidth,n.offsetHeight)})}}}}
var iM=function(e,t){var r=lo.throttle((function(e,r){t._selectionOverrides.hideFakeCaret()
t.selection.placeCaretAt(e,r)}),0)
t.on("remove",r.stop)
return function(n){return e.on((function(e){var a=Math.max(Math.abs(n.screenX-e.screenX),Math.abs(n.screenY-e.screenY))
if(!e.dragging&&a>10){var o=t.fire("dragstart",{target:e.element})
if(o.isDefaultPrevented())return
e.dragging=true
t.focus()}if(e.dragging){var i=aM(e,KI(t,n))
eM(e.ghost,t.getBody())
tM(e.ghost,i,e.width,e.height,e.maxX,e.maxY)
r(n.clientX,n.clientY)}}))}}
var uM=function(e){var t=e.getSel().getRangeAt(0)
var r=t.startContainer
return 3===r.nodeType?r.parentNode:r}
var fM=function(e,t){return function(r){e.on((function(e){if(e.dragging&&JI(t,uM(t.selection),e.element)){var n=QI(e.element)
var a=t.fire("drop",{clientX:r.clientX,clientY:r.clientY})
a.isDefaultPrevented()||t.undoManager.transact((function(){rM(e.element)
t.insertContent(t.dom.getOuterHTML(n))
t._selectionOverrides.hideFakeCaret()}))}}))
sM(e)}}
var cM=function(e,t){return function(){e.on((function(e){e.dragging&&t.fire("dragend")}))
sM(e)}}
var sM=function(e){e.on((function(e){rM(e.ghost)}))
e.clear()}
var lM=function(e){var t=zI()
var r=Oc.DOM
var n=document
var a=oM(t,e)
var o=iM(t,e)
var i=fM(t,e)
var u=cM(t,e)
e.on("mousedown",a)
e.on("mousemove",o)
e.on("mouseup",i)
r.bind(n,"mousemove",o)
r.bind(n,"mouseup",u)
e.on("remove",(function(){r.unbind(n,"mousemove",o)
r.unbind(n,"mouseup",u)}))}
var dM=function(e){e.on("drop",(function(t){var r="undefined"!==typeof t.clientX?e.getDoc().elementFromPoint(t.clientX,t.clientY):null;(XI(r)||"false"===e.dom.getContentEditableParent(r))&&t.preventDefault()}))}
var vM=function(e){var t=function(t){if(!t.isDefaultPrevented()){var r=t.dataTransfer
if(r&&(G(r.types,"Files")||r.files.length>0)){t.preventDefault()
"drop"===t.type&&eA(e,"Dropped file type is not supported")}}}
var r=function(r){Fy(e,r.target)&&t(r)}
var n=function(){var n=Oc.DOM
var a=e.dom
var o=document
var i=e.inline?e.getBody():e.getDoc()
var u=["drop","dragover"]
Z(u,(function(e){n.bind(o,e,r)
a.bind(i,e,t)}))
e.on("remove",(function(){Z(u,(function(e){n.unbind(o,e,r)
a.unbind(i,e,t)}))}))}
e.on("init",(function(){lo.setEditorTimeout(e,n,0)}))}
var mM=function(e){lM(e)
dM(e)
vv(e)&&vM(e)}
var pM=function(e){var t=rs((function(){if(!e.removed&&e.getBody().contains(document.activeElement)){var t=e.selection.getRng()
if(t.collapsed){var r=HR(e,t,false)
e.selection.setRng(r)}}}),0)
e.on("focus",(function(){t.throttle()}))
e.on("blur",(function(){t.cancel()}))}
var gM=function(e){e.on("init",(function(){e.on("focusin",(function(t){var r=t.target
if(ia(r)){var n=_g(e.getBody(),r)
var a=aa(n)?n:r
e.selection.getNode()!==a&&zR(e,a).each((function(t){return e.selection.setRng(t)}))}}))}))}
var hM=na
var yM=aa
var bM=function(e,t){return _g(e.getBody(),t)}
var CM=function(e){var t=e.selection,r=e.dom
var n=r.isBlock
var a=e.getBody()
var o=Iv(e,a,n,(function(){return Qy(e)}))
var i="sel-"+r.uniqueId()
var u="data-mce-selected"
var f
var c=function(e){return r.hasClass(e,"mce-offscreen-selection")}
var s=function(e){return e!==a&&(yM(e)||ia(e))&&r.isChildOf(e,a)}
var l=function(e){return iC(e)||uC(e)||rC(e)||nC(e)}
var d=function(){var e=r.get(i)
return e?e.getElementsByTagName("*")[0]:e}
var v=function(e){e&&t.setRng(e)}
var m=t.getRng
var p=function(r,n,a,i){void 0===i&&(i=true)
var u=e.fire("ShowCaret",{target:n,direction:r,before:a})
if(u.isDefaultPrevented())return null
i&&t.scrollIntoView(n,-1===r)
return o.show(a,n)}
var g=function(e){if(e.hasAttribute("data-mce-caret")){oi(e)
v(m())
t.scrollIntoView(e)}}
var h=function(){e.on("mouseup",(function(t){var r=m()
r.collapsed&&qT(e,t.clientX,t.clientY)&&jR(e,r,false).each(v)}))
e.on("click",(function(n){var a=bM(e,n.target)
if(a){if(yM(a)){n.preventDefault()
e.focus()}hM(a)&&r.isChildOf(a,t.getNode())&&k()}}))
e.on("blur NewBlock",k)
e.on("ResizeWindow FullscreenStateChanged",o.reposition)
var i=function(e){var t=Nm(e)
if(!e.firstChild)return false
var r=xl.before(e.firstChild)
var n=t.next(r)
return n&&!l(n)}
var u=function(e,t){var a=r.getParent(e,n)
var o=r.getParent(t,n)
return a===o}
var g=function(t,a){var o=r.getParent(t,n)
var f=r.getParent(a,n)
if(o&&t!==f&&r.isChildOf(o,f)&&false===yM(bM(e,o)))return true
return o&&!u(o,f)&&i(o)}
e.on("tap",(function(t){var r=t.target
var n=bM(e,r)
if(yM(n)){t.preventDefault()
zR(e,n).each(S)}else s(r)&&zR(e,r).each(S)}),true)
e.on("mousedown",(function(n){var o=n.target
if(o!==a&&"HTML"!==o.nodeName&&!r.isChildOf(o,a))return
if(false===qT(e,n.clientX,n.clientY))return
var i=bM(e,o)
if(i)if(yM(i)){n.preventDefault()
zR(e,i).each(S)}else{k()
if(!(hM(i)&&n.shiftKey)&&!Tg(n.clientX,n.clientY,t.getRng())){E()
t.placeCaretAt(n.clientX,n.clientY)}}else if(s(o))zR(e,o).each(S)
else if(false===Uv(o)){k()
E()
var u=MO(a,n.clientX,n.clientY)
if(u&&!g(o,u.node)){n.preventDefault()
var f=p(1,u.node,u.before,false)
e.getBody().focus()
v(f)}}}))
e.on("keypress",(function(e){if(jg.modifierPressed(e))return
yM(t.getNode())&&e.preventDefault()}))
e.on("GetSelectionRange",(function(e){var t=e.range
if(f){if(!f.parentNode){f=null
return}t=t.cloneRange()
t.selectNode(f)
e.range=t}}))
e.on("SetSelectionRange",(function(e){e.range=C(e.range)
var t=S(e.range,e.forward)
t&&(e.range=t)}))
var h=function(e){return"mcepastebin"===e.id}
e.on("AfterSetSelectionRange",(function(e){var t=e.range
var r=t.startContainer.parentNode
b(t)||h(r)||E()
c(r)||k()}))
e.on("copy",(function(e){var t=e.clipboardData
if(!e.isDefaultPrevented()&&e.clipboardData&&!Zt.ie){var r=d()
if(r){e.preventDefault()
t.clearData()
t.setData("text/html",r.outerHTML)
t.setData("text/plain",r.outerText||r.innerText)}}}))
mM(e)
pM(e)
gM(e)}
var y=function(e){return Yo(e)||ri(e)||ni(e)}
var b=function(e){return y(e.startContainer)||y(e.endContainer)}
var C=function(t){var n=e.schema.getShortEndedElements()
var a=r.createRng()
var o=t.startContainer
var i=t.startOffset
var u=t.endContainer
var f=t.endOffset
Oe(n,o.nodeName.toLowerCase())?0===i?a.setStartBefore(o):a.setStartAfter(o):a.setStart(o,i)
Oe(n,u.nodeName.toLowerCase())?0===f?a.setEndBefore(u):a.setEndAfter(u):a.setEnd(u,f)
return a}
var w=function(n,a,o){var u=e.$
var f=eo(yr.fromDom(e.getBody()),"#"+i).fold((function(){return u([])}),(function(e){return u([e.dom])}))
if(0===f.length){f=u('<div data-mce-bogus="all" class="mce-offscreen-selection"></div>').attr("id",i)
f.appendTo(e.getBody())}var c=r.createRng()
if(a===o&&Zt.ie){f.empty().append('<p style="font-size: 0" data-mce-bogus="all"> </p>').append(a)
c.setStartAfter(f[0].firstChild.firstChild)
c.setEndAfter(a)}else{f.empty().append(Uo).append(a).append(Uo)
c.setStart(f[0].firstChild,1)
c.setEnd(f[0].lastChild,0)}f.css({top:r.getPos(n,e.getBody()).y})
f[0].focus()
var s=t.getSel()
s.removeAllRanges()
s.addRange(c)
return c}
var x=function(t){var n=t.cloneNode(true)
var a=e.fire("ObjectSelected",{target:t,targetClone:n})
if(a.isDefaultPrevented())return null
var o=w(t,a.targetClone,n)
var i=yr.fromDom(t)
Z(gs(yr.fromDom(e.getBody()),"*[data-mce-selected]"),(function(e){Dr(i,e)||ma(e,u)}))
r.getAttrib(t,u)||t.setAttribute(u,"1")
f=t
E()
return o}
var S=function(e,t){if(!e)return null
if(e.collapsed){if(!b(e)){var n=t?1:-1
var o=um(n,a,e)
var i=o.getNode(!t)
if(Uv(i))return p(n,i,!!t&&!o.isAtEnd(),false)
var u=o.getNode(t)
if(Uv(u))return p(n,u,!t&&!o.isAtEnd(),false)}return null}var f=e.startContainer
var c=e.startOffset
var l=e.endOffset
if(3===f.nodeType&&0===c&&yM(f.parentNode)){f=f.parentNode
c=r.nodeIndex(f)
f=f.parentNode}if(1!==f.nodeType)return null
if(l===c+1&&f===e.endContainer){var d=f.childNodes[c]
if(s(d))return x(d)}return null}
var k=function(){f&&f.removeAttribute(u)
eo(yr.fromDom(e.getBody()),"#"+i).each(kn)
f=null}
var N=function(){o.destroy()
f=null}
var E=function(){o.hide()}
Zt.ceFalse&&!fE(e)&&h()
return{showCaret:p,showBlockCaretContainer:g,hideFakeCaret:E,destroy:N}}
var wM=function(e){var t=dr.each
var r=jg.BACKSPACE,n=jg.DELETE,a=e.dom,o=e.selection,i=e.parser
var u=Zt.gecko,f=Zt.ie,c=Zt.webkit
var s="data:text/mce-internal,"
var l=f?"Text":"URL"
var d=function(t,r){try{e.getDoc().execCommand(t,false,r)}catch(e){}}
var v=function(e){return e.isDefaultPrevented()}
var m=function(t){var r,n
if(t.dataTransfer){e.selection.isCollapsed()&&"IMG"===t.target.tagName&&o.select(t.target)
r=e.selection.getContent()
if(r.length>0){n=s+escape(e.id)+","+escape(r)
t.dataTransfer.setData(l,n)}}}
var p=function(e){var t
if(e.dataTransfer){t=e.dataTransfer.getData(l)
if(t&&t.indexOf(s)>=0){t=t.substr(s.length).split(",")
return{id:unescape(t[0]),html:unescape(t[1])}}}return null}
var g=function(t,r){e.queryCommandSupported("mceInsertClipboardContent")?e.execCommand("mceInsertClipboardContent",false,{content:t,internal:r}):e.execCommand("mceInsertContent",false,t)}
var h=function(){var t=function(e){var t=a.create("body")
var r=e.cloneContents()
t.appendChild(r)
return o.serializer.serialize(t,{format:"html"})}
var i=function(r){var n=t(r)
var o=a.createRng()
o.selectNode(e.getBody())
var i=t(o)
return n===i}
e.on("keydown",(function(t){var o=t.keyCode
var u,f
if(!v(t)&&(o===n||o===r)){u=e.selection.isCollapsed()
f=e.getBody()
if(u&&!a.isEmpty(f))return
if(!u&&!i(e.selection.getRng()))return
t.preventDefault()
e.setContent("")
f.firstChild&&a.isBlock(f.firstChild)?e.selection.setCursorLocation(f.firstChild,0):e.selection.setCursorLocation(f,0)
e.nodeChanged()}}))}
var y=function(){e.shortcuts.add("meta+a",null,"SelectAll")}
var b=function(){e.inline||a.bind(e.getDoc(),"mousedown mouseup",(function(t){var r
if(t.target===e.getDoc().documentElement){r=o.getRng()
e.getBody().focus()
if("mousedown"===t.type){if(Yo(r.startContainer))return
o.placeCaretAt(t.clientX,t.clientY)}else o.setRng(r)}}))}
var C=function(){e.on("keydown",(function(t){if(!v(t)&&t.keyCode===r){if(!e.getBody().getElementsByTagName("hr").length)return
if(o.isCollapsed()&&0===o.getRng().startOffset){var n=o.getNode()
var i=n.previousSibling
if("HR"===n.nodeName){a.remove(n)
t.preventDefault()
return}if(i&&i.nodeName&&"hr"===i.nodeName.toLowerCase()){a.remove(i)
t.preventDefault()}}}}))}
var w=function(){Range.prototype.getClientRects||e.on("mousedown",(function(t){if(!v(t)&&"HTML"===t.target.nodeName){var r=e.getBody()
r.blur()
lo.setEditorTimeout(e,(function(){r.focus()}))}}))}
var x=function(){e.on("click",(function(t){var r=t.target
if(/^(IMG|HR)$/.test(r.nodeName)&&"false"!==a.getContentEditableParent(r)){t.preventDefault()
e.selection.select(r)
e.nodeChanged()}if("A"===r.nodeName&&a.hasClass(r,"mce-item-anchor")){t.preventDefault()
o.select(r)}}))}
var S=function(){var r=function(){var r=a.getAttribs(o.getStart().cloneNode(false))
return function(){var n=o.getStart()
if(n!==e.getBody()){a.setAttrib(n,"style",null)
t(r,(function(e){n.setAttributeNode(e.cloneNode(true))}))}}}
var n=function(){return!o.isCollapsed()&&a.getParent(o.getStart(),a.isBlock)!==a.getParent(o.getEnd(),a.isBlock)}
e.on("keypress",(function(t){var a
if(!v(t)&&(8===t.keyCode||46===t.keyCode)&&n()){a=r()
e.getDoc().execCommand("delete",false,null)
a()
t.preventDefault()
return false}}))
a.bind(e.getDoc(),"cut",(function(t){var a
if(!v(t)&&n()){a=r()
lo.setEditorTimeout(e,(function(){a()}))}}))}
var k=function(){e.on("keydown",(function(e){if(!v(e)&&e.keyCode===r&&o.isCollapsed()&&0===o.getRng().startOffset){var t=o.getNode().previousSibling
if(t&&t.nodeName&&"table"===t.nodeName.toLowerCase()){e.preventDefault()
return false}}}))}
var N=function(){e.on("keydown",(function(t){var r,n
if(v(t)||t.keyCode!==jg.BACKSPACE)return
r=o.getRng()
var i=r.startContainer
var u=r.startOffset
var f=a.getRoot()
n=i
if(!r.collapsed||0!==u)return
while(n&&n.parentNode&&n.parentNode.firstChild===n&&n.parentNode!==f)n=n.parentNode
if("BLOCKQUOTE"===n.tagName){e.formatter.toggle("blockquote",null,n)
r=a.createRng()
r.setStart(i,0)
r.setEnd(i,0)
o.setRng(r)}}))}
var E=function(){var t=function(){d("StyleWithCSS",false)
d("enableInlineTableEditing",false)
jd(e)||d("enableObjectResizing",false)}
cv(e)||e.on("BeforeExecCommand mousedown",t)}
var _=function(){var r=function(){t(a.select("a"),(function(e){var t=e.parentNode
var r=a.getRoot()
if(t.lastChild===e){while(t&&!a.isBlock(t)){if(t.parentNode.lastChild!==t||t===r)return
t=t.parentNode}a.add(t,"br",{"data-mce-bogus":1})}}))}
e.on("SetContent ExecCommand",(function(e){"setcontent"!==e.type&&"mceInsertLink"!==e.command||r()}))}
var A=function(){vd(e)&&e.on("init",(function(){d("DefaultParagraphSeparator",vd(e))}))}
var R=function(){e.on("keyup focusin mouseup",(function(e){jg.modifierPressed(e)||o.normalize()}),true)}
var D=function(){e.contentStyles.push("img:-moz-broken {-moz-force-broken-image-icon:1;min-width:24px;min-height:24px}")}
var O=function(){e.inline||e.on("keydown",(function(){document.activeElement===document.body&&e.getWin().focus()}))}
var B=function(){if(!e.inline){e.contentStyles.push("body {min-height: 150px}")
e.on("click",(function(t){var r
if("HTML"===t.target.nodeName){if(Zt.ie>11){e.getBody().focus()
return}r=e.selection.getRng()
e.getBody().focus()
e.selection.setRng(r)
e.selection.normalize()
e.nodeChanged()}}))}}
var P=function(){Zt.mac&&e.on("keydown",(function(t){if(jg.metaKeyPressed(t)&&!t.shiftKey&&(37===t.keyCode||39===t.keyCode)){t.preventDefault()
var r=e.selection.getSel()
r.modify("move",37===t.keyCode?"backward":"forward","lineboundary")}}))}
var L=function(){d("AutoUrlDetect",false)}
var I=function(){e.on("click",(function(e){var t=e.target
do{if("A"===t.tagName){e.preventDefault()
return}}while(t=t.parentNode)}))
e.contentStyles.push(".mce-content-body {-webkit-touch-callout: none}")}
var M=function(){e.on("init",(function(){e.dom.bind(e.getBody(),"submit",(function(e){e.preventDefault()}))}))}
var F=function(){i.addNodeFilter("br",(function(e){var t=e.length
while(t--)"Apple-interchange-newline"===e[t].attr("class")&&e[t].remove()}))}
var U=function(){e.on("dragstart",(function(e){m(e)}))
e.on("drop",(function(t){if(!v(t)){var r=p(t)
if(r&&r.id!==e.id){t.preventDefault()
var n=Xg(t.x,t.y,e.getDoc())
o.setRng(n)
g(r.html,true)}}}))}
var z=T
var j=function(){if(!u||e.removed)return false
var t=e.selection.getSel()
return!t||!t.rangeCount||0===t.rangeCount}
var H=function(){if(c){x()
M()
y()
if(Zt.iOS){O()
B()
I()}}if(u){w()
E()
D()
P()}}
var V=function(){N()
h()
Zt.windowsPhone||R()
if(c){b()
x()
A()
M()
k()
F()
if(Zt.iOS){O()
B()
I()}else y()}if(Zt.ie>=11){B()
k()}if(Zt.ie){y()
L()
U()}if(u){C()
w()
S()
E()
_()
D()
P()
k()}}
fE(e)?H():V()
return{refreshContentEditable:z,isHidden:j}}
var xM=Oc.DOM
var SM=function(e,t){var r=yr.fromDom(e.getBody())
var n=ln(sn(r))
var a=yr.fromTag("style")
ca(a,"type","text/css")
bn(a,yr.fromText(t))
bn(n,a)
e.on("remove",(function(){kn(a)}))}
var kM=function(e){return e.inline?e.getElement().nodeName.toLowerCase():void 0}
var NM=function(e){return Te(e,(function(e){return false===S(e)}))}
var EM=function(e){var t=e.settings
var r=e.editorUpload.blobCache
return NM({allow_conditional_comments:t.allow_conditional_comments,allow_html_data_urls:t.allow_html_data_urls,allow_svg_data_urls:t.allow_svg_data_urls,allow_html_in_named_anchor:t.allow_html_in_named_anchor,allow_script_urls:t.allow_script_urls,allow_unsafe_link_target:t.allow_unsafe_link_target,convert_fonts_to_spans:t.convert_fonts_to_spans,fix_list_elements:t.fix_list_elements,font_size_legacy_values:t.font_size_legacy_values,forced_root_block:t.forced_root_block,forced_root_block_attrs:t.forced_root_block_attrs,padd_empty_with_br:t.padd_empty_with_br,preserve_cdata:t.preserve_cdata,remove_trailing_brs:t.remove_trailing_brs,inline_styles:t.inline_styles,root_name:kM(e),validate:true,blob_cache:r,images_dataimg_filter:t.images_dataimg_filter})}
var _M=function(e){var t=e.settings
return qe(qe({},EM(e)),NM({url_converter:t.url_converter,url_converter_scope:t.url_converter_scope,element_format:t.element_format,entities:t.entities,entity_encoding:t.entity_encoding,indent:t.indent,indent_after:t.indent_after,indent_before:t.indent_before,block_elements:t.block_elements,boolean_attributes:t.boolean_attributes,custom_elements:t.custom_elements,extended_valid_elements:t.extended_valid_elements,invalid_elements:t.invalid_elements,invalid_styles:t.invalid_styles,move_caret_before_on_enter_elements:t.move_caret_before_on_enter_elements,non_empty_elements:t.non_empty_elements,schema:t.schema,self_closing_elements:t.self_closing_elements,short_ended_elements:t.short_ended_elements,special:t.special,text_block_elements:t.text_block_elements,text_inline_elements:t.text_inline_elements,valid_children:t.valid_children,valid_classes:t.valid_classes,valid_elements:t.valid_elements,valid_styles:t.valid_styles,verify_html:t.verify_html,whitespace_elements:t.whitespace_elements}))}
var TM=function(e){var t=D_(EM(e),e.schema)
t.addAttributeFilter("src,href,style,tabindex",(function(t,r){var n,a,o=t.length
var i=e.dom
var u="data-mce-"+r
while(o--){n=t[o]
a=n.attr(r)
if(a&&!n.attr(u)){if(0===a.indexOf("data:")||0===a.indexOf("blob:"))continue
if("style"===r){a=i.serializeStyle(i.parseStyle(a),n.name)
a.length||(a=null)
n.attr(u,a)
n.attr(r,a)}else if("tabindex"===r){n.attr(u,a)
n.attr(r,null)}else n.attr(u,e.convertURL(a,r,n.name))}}}))
t.addNodeFilter("script",(function(e){var t=e.length
while(t--){var r=e[t]
var n=r.attr("type")||"no/type"
0!==n.indexOf("mce-")&&r.attr("type","mce-"+n)}}))
e.settings.preserve_cdata&&t.addNodeFilter("#cdata",(function(t){var r=t.length
while(r--){var n=t[r]
n.type=8
n.name="#comment"
n.value="[CDATA["+e.dom.encode(n.value)+"]]"}}))
t.addNodeFilter("p,h1,h2,h3,h4,h5,h6,div",(function(t){var r=t.length
var n=e.schema.getNonEmptyElements()
while(r--){var a=t[r]
a.isEmpty(n)&&0===a.getAll("br").length&&(a.append(new pb("br",1)).shortEnded=true)}}))
return t}
var AM=function(e){e.settings.auto_focus&&lo.setEditorTimeout(e,(function(){var t
t=true===e.settings.auto_focus?e:e.editorManager.get(e.settings.auto_focus)
t.destroyed||t.focus()}),100)}
var RM=function(e){var t=e.dom.getRoot()
e.inline||vg(e)&&e.selection.getStart(true)!==t||Um(t).each((function(t){var r=t.getNode()
var n=Xn(r)?Um(r).getOr(t):t
Zt.browser.isIE()?Sy(e,n.toRange()):e.selection.setRng(n.toRange())}))}
var DM=function(e){e.bindPendingEventDelegates()
e.initialized=true
Fg(e)
e.focus(true)
RM(e)
e.nodeChanged({initial:true})
e.execCallback("init_instance_callback",e)
AM(e)}
var OM=function(e){return e.inline?e.ui.styleSheetLoader:e.dom.styleSheetLoader}
var BM=function(e,t,r){var n=[new no((function(r,n){return OM(e).loadAll(t,r,n)}))]
return e.inline?n:n.concat([new no((function(t,n){return e.ui.styleSheetLoader.loadAll(r,t,n)}))])}
var PM=function(e,t){var r=OM(e)
var n=Fd(e)
var a=function(){r.unloadAll(t)
e.inline||e.ui.styleSheetLoader.unloadAll(n)}
var o=function(){if(e.removed)a()
else{e.on("remove",a)
DM(e)}}
no.all(BM(e,t,n)).then(o).catch(o)}
var LM=function(e){var t=e.settings,r=e.getDoc(),n=e.getBody()
if(!t.browser_spellcheck&&!t.gecko_spellcheck){r.body.spellcheck=false
xM.setAttrib(n,"spellcheck","false")}e.quirks=wM(e)
Mg(e)
var a=Ud(e)
void 0!==a&&(n.dir=a)
t.protect&&e.on("BeforeSetContent",(function(e){dr.each(t.protect,(function(t){e.content=e.content.replace(t,(function(e){return"\x3c!--mce:protected "+escape(e)+"--\x3e"}))}))}))
e.on("SetContent",(function(){e.addVisual(e.getBody())}))
fE(e)||e.load({initial:true,format:"html"})
e.startContent=e.getContent({format:"raw"})
e.on("compositionstart compositionend",(function(t){e.composing="compositionstart"===t.type}))
if(e.contentStyles.length>0){var o=""
dr.each(e.contentStyles,(function(e){o+=e+"\r\n"}))
e.dom.addStyle(o)}PM(e,e.contentCSS)
t.content_style&&SM(e,t.content_style)}
var IM=function(e,t){var r=e.settings
var n=e.getElement()
var a=e.getDoc()
r.inline||(e.getElement().style.visibility=e.orgVisibility)
if(!t&&!e.inline){a.open()
a.write(e.iframeHTML)
a.close()}if(e.inline){xM.addClass(n,"mce-content-body")
e.contentDocument=a=document
e.contentWindow=window
e.bodyElement=n
e.contentAreaContainer=n}var o=e.getBody()
o.disabled=true
e.readonly=!!r.readonly
if(!e.readonly){e.inline&&"static"===xM.getStyle(o,"position",true)&&(o.style.position="relative")
o.contentEditable=e.getParam("content_editable_state",true)}o.disabled=false
e.editorUpload=kA(e)
e.schema=pu(r)
e.dom=Oc(a,{keep_values:true,url_converter:e.convertURL,url_converter_scope:e,hex_colors:r.force_hex_style_colors,update_styles:true,root_element:e.inline?e.getBody():null,collect:function(){return e.inline},schema:e.schema,contentCssCors:Dd(e),referrerPolicy:Od(e),onSetAttrib:function(t){e.fire("SetAttrib",t)}})
e.parser=TM(e)
e.serializer=q_(_M(e),e)
e.selection=ZE(e.dom,e.getWin(),e.serializer,e)
e.annotator=Ng(e)
e.formatter=PA(e)
e.undoManager=MA(e)
e._nodeChangeDispatcher=new BI(e)
e._selectionOverrides=CM(e)
FB(e)
II(e)
fE(e)||UI(e)
var i=OI(e)
BB(e,i)
qB(e)
$A(e)
Ig(e)
sE(e).fold((function(){LM(e)}),(function(t){e.setProgressState(true)
t.then((function(t){e.setProgressState(false)
LM(e)}),(function(t){e.notificationManager.open({type:"error",text:String(t)})
LM(e)}))}))}
var MM=Oc.DOM
var FM=function(e,t){if(document.domain!==window.location.hostname&&Zt.browser.isIE()){var r=hA("mce")
e[r]=function(){IM(e)}
var n='javascript:(function(){document.open();document.domain="'+document.domain+'";var ed = window.parent.tinymce.get("'+e.id+'");document.write(ed.iframeHTML);document.close();ed.'+r+"(true);})()"
MM.setAttrib(t,"src",n)
return true}return false}
var UM=function(e,t,r,n){var a=yr.fromTag("iframe")
sa(a,n)
sa(a,{id:e+"_ifr",frameBorder:"0",allowTransparency:"true",title:t})
ls(a,"tox-edit-area__iframe")
return a}
var zM=function(e){var t=ud(e)+"<html><head>"
fd(e)!==e.documentBaseUrl&&(t+='<base href="'+e.documentBaseURI.getURI()+'" />')
t+='<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />'
var r=cd(e)
var n=sd(e)
ld(e)&&(t+='<meta http-equiv="Content-Security-Policy" content="'+ld(e)+'" />')
t+='</head><body id="'+r+'" class="mce-content-body '+n+'" data-id="'+e.id+'"><br></body></html>'
return t}
var jM=function(e,t){var r=e.editorManager.translate("Rich Text Area. Press ALT-0 for help.")
var n=UM(e.id,r,t.height,id(e)).dom
n.onload=function(){n.onload=null
e.fire("load")}
var a=FM(e,n)
e.contentAreaContainer=t.iframeContainer
e.iframeElement=n
e.iframeHTML=zM(e)
MM.add(t.iframeContainer,n)
return a}
var HM=function(e,t){var r=jM(e,t)
if(t.editorContainer){MM.get(t.editorContainer).style.display=e.orgDisplay
e.hidden=MM.isHidden(t.editorContainer)}e.getElement().style.display="none"
MM.setAttrib(e.id,"aria-hidden","true")
r||IM(e)}
var VM=Oc.DOM
var qM=function(e,t,r){var n=YT.get(r)
var a=YT.urls[r]||e.documentBaseUrl.replace(/\/$/,"")
r=dr.trim(r)
if(n&&-1===dr.inArray(t,r)){dr.each(YT.dependencies(r),(function(r){qM(e,t,r)}))
if(e.plugins[r])return
try{var o=new n(e,a,e.$)
e.plugins[r]=o
if(o.init){o.init(e,a)
t.push(r)}}catch(t){uA(e,r,t)}}}
var $M=function(e){return e.replace(/^\-/,"")}
var WM=function(e){var t=[]
dr.each(lv(e).split(/[ ,]/),(function(r){qM(e,t,$M(r))}))}
var KM=function(e){var t=dr.trim(Nd(e))
var r=e.ui.registry.getAll().icons
var n=qe(qe({},PT.get("default").icons),PT.get(t).icons)
xe(n,(function(t,n){Oe(r,n)||e.ui.registry.addIcon(n,t)}))}
var XM=function(e){var t=Wd(e)
if(y(t)){e.settings.theme=$M(t)
var r=GT.get(t)
e.theme=new r(e,GT.urls[t])
e.theme.init&&e.theme.init(e,GT.urls[t]||e.documentBaseUrl.replace(/\/$/,""),e.$)}else e.theme={}}
var YM=function(e){return e.theme.renderUI()}
var GM=function(e){var t=e.getElement()
var r=Wd(e)
var n=r(e,t)
n.editorContainer.nodeType&&(n.editorContainer.id=n.editorContainer.id||e.id+"_parent")
n.iframeContainer&&n.iframeContainer.nodeType&&(n.iframeContainer.id=n.iframeContainer.id||e.id+"_iframecontainer")
n.height=n.iframeHeight?n.iframeHeight:t.offsetHeight
return n}
var JM=function(e){return{editorContainer:e,iframeContainer:e,api:{}}}
var QM=function(e){var t=VM.create("div")
VM.insertAfter(t,e)
return JM(t)}
var ZM=function(e){var t=e.getElement()
return e.inline?JM(null):QM(t)}
var eF=function(e){var t=e.getElement()
e.orgDisplay=t.style.display
return y(Wd(e))?YM(e):E(Wd(e))?GM(e):ZM(e)}
var tF=function(e,t){var r={show:q.from(t.show).getOr(T),hide:q.from(t.hide).getOr(T),disable:q.from(t.disable).getOr(T),isDisabled:q.from(t.isDisabled).getOr(F),enable:function(){e.mode.isReadOnly()||q.from(t.enable).map(M)}}
e.ui=qe(qe({},e.ui),r)}
var rF=function(e){e.fire("ScriptsLoaded")
KM(e)
XM(e)
WM(e)
var t=eF(e)
tF(e,q.from(t.api).getOr({}))
var r={editorContainer:t.editorContainer,iframeContainer:t.iframeContainer}
e.editorContainer=r.editorContainer?r.editorContainer:null
vA(e)
return e.inline?IM(e):HM(e,r)}
var nF=Oc.DOM
var aF=function(e){return"-"===e.charAt(0)}
var oF=function(e,t){var r=Bd(t)
var n=Pd(t)
if(false===es.hasCode(r)&&"en"!==r){var a=""!==n?n:t.editorManager.baseURL+"/langs/"+r+".js"
e.add(a,T,void 0,(function(){iA(t,a,r)}))}}
var iF=function(e,t,r,n){var a=Wd(t)
if(y(a)){if(!aF(a)&&!GT.urls.hasOwnProperty(a)){var o=Zd(t)
o?GT.load(a,t.documentBaseURI.toAbsolute(o)):GT.load(a,"themes/"+a+"/theme"+r+".js")}e.loadQueue((function(){GT.waitFor(a,n)}))}else n()}
var uF=function(e){return q.from(Ed(e)).filter((function(e){return e.length>0})).map((function(e){return{url:e,name:q.none()}}))}
var fF=function(e,t,r){return q.from(t).filter((function(e){return e.length>0&&!PT.has(e)})).map((function(t){return{url:e.editorManager.baseURL+"/icons/"+t+"/icons"+r+".js",name:q.some(t)}}))}
var cF=function(e,t,r){var n=fF(t,"default",r)
var a=uF(t).orThunk((function(){return fF(t,Nd(t),"")}))
Z(Fs([n,a]),(function(r){e.add(r.url,T,void 0,(function(){oA(t,r.url,r.name.getOrUndefined())}))}))}
var sF=function(e,t){dr.each(dv(e),(function(t,r){YT.load(r,t,T,void 0,(function(){aA(e,t,r)}))
e.settings.plugins+=" "+r}))
dr.each(lv(e).split(/[ ,]/),(function(r){r=dr.trim(r)
if(r&&!YT.urls[r])if(aF(r)){r=r.substr(1,r.length)
var n=YT.dependencies(r)
dr.each(n,(function(r){var n={prefix:"plugins/",resource:r,suffix:"/plugin"+t+".js"}
var a=YT.createUrl(n,r)
YT.load(a.resource,a,T,void 0,(function(){aA(e,a.prefix+a.resource+a.suffix,a.resource)}))}))}else{var a={prefix:"plugins/",resource:r,suffix:"/plugin"+t+".js"}
YT.load(r,a,T,void 0,(function(){aA(e,a.prefix+a.resource+a.suffix,r)}))}}))}
var lF=function(e,t){var r=zc.ScriptLoader
iF(r,e,t,(function(){oF(r,e)
cF(r,e,t)
sF(e,t)
r.loadQueue((function(){e.removed||rF(e)}),e,(function(){e.removed||rF(e)}))}))}
var dF=function(e,t){return po.forElement(e,{contentCssCors:sv(t),referrerPolicy:Od(t)})}
var vF=function(e){var t=e.id
es.setCode(Bd(e))
var r=function(){nF.unbind(window,"ready",r)
e.render()}
if(!Au.Event.domLoaded){nF.bind(window,"ready",r)
return}if(!e.getElement())return
if(!Zt.contentEditable)return
var n=yr.fromDom(e.getElement())
var a=pa(n)
e.on("remove",(function(){ee(n.dom.attributes,(function(e){return ma(n,e.name)}))
sa(n,a)}))
e.ui.styleSheetLoader=dF(n,e)
if(ev(e))e.inline=true
else{e.orgVisibility=e.getElement().style.visibility
e.getElement().style.visibility="hidden"}var o=e.getElement().form||nF.getParent(t,"form")
if(o){e.formElement=o
if(tv(e)&&!Gn(e.getElement())){nF.insertAfter(nF.create("input",{type:"hidden",name:t}),t)
e.hasHiddenInput=true}e.formEventDelegate=function(t){e.fire(t.type,t)}
nF.bind(o,"submit reset",e.formEventDelegate)
e.on("reset",(function(){e.resetContent()}))
if(rv(e)&&!o.submit.nodeType&&!o.submit.length&&!o._mceOldSubmit){o._mceOldSubmit=o.submit
o.submit=function(){e.editorManager.triggerSave()
e.setDirty(false)
return o._mceOldSubmit(o)}}}e.windowManager=QT(e)
e.notificationManager=XT(e)
nv(e)&&e.on("GetContent",(function(e){e.save&&(e.content=nF.encode(e.content))}))
av(e)&&e.on("submit",(function(){e.initialized&&e.save()}))
if(ov(e)){e._beforeUnload=function(){!e.initialized||e.destroyed||e.isHidden()||e.save({format:"raw",no_events:true,set_dirty:false})}
e.editorManager.on("BeforeUnload",e._beforeUnload)}e.editorManager.add(e)
lF(e,e.suffix)}
var mF=function(e,t){return ME(e,t)}
var pF={"font-size":"size","font-family":"face"}
var gF=function(e,t,r){var n=function(t){return Ca(t,e).orThunk((function(){return"font"===Lr(t)?De(pF,e).bind((function(e){return da(t,e)})):q.none()}))}
var a=function(e){return Dr(yr.fromDom(t),e)}
return uS(yr.fromDom(r),(function(e){return n(e)}),a)}
var hF=function(e){return e.replace(/[\'\"\\]/g,"").replace(/,\s+/g,",")}
var yF=function(e,t){return q.from(Oc.DOM.getStyle(t,e,true))}
var bF=function(e){return function(t,r){return q.from(r).map(yr.fromDom).filter(Ur).bind((function(r){return gF(e,t,r.dom).or(yF(e,r.dom))})).getOr("")}}
var CF=bF("font-size")
var wF=A(hF,bF("font-family"))
var xF=function(e){return Um(e.getBody()).map((function(e){var t=e.container()
return Jn(t)?t.parentNode:t}))}
var SF=function(e){return q.from(e.selection.getRng()).bind((function(t){var r=e.getBody()
var n=t.startContainer===r&&0===t.startOffset
return n?q.none():q.from(e.selection.getStart(true))}))}
var kF=function(e,t){return SF(e).orThunk(B(xF,e)).map(yr.fromDom).filter(Ur).map(t)}
var NF=function(e,t){if(/^[0-9.]+$/.test(t)){var r=parseInt(t,10)
if(r>=1&&r<=7){var n=bd(e)
var a=Cd(e)
return a?a[r-1]||t:n[r-1]||t}return t}return t}
var EF=function(e){var t=e.split(/\s*,\s*/)
return Q(t,(function(e){return-1===e.indexOf(" ")||ct(e,'"')||ct(e,"'")?e:"'"+e+"'"})).join(",")}
var _F=function(e,t){var r=NF(e,t)
e.formatter.toggle("fontname",{value:EF(r)})
e.nodeChanged()}
var TF=function(e){return kF(e,(function(t){return wF(e.getBody(),t.dom)})).getOr("")}
var AF=function(e,t){e.formatter.toggle("fontsize",{value:NF(e,t)})
e.nodeChanged()}
var RF=function(e){return kF(e,(function(t){return CF(e.getBody(),t.dom)})).getOr("")}
var DF=function(e){return kF(e,(function(t){var r=yr.fromDom(e.getBody())
var n=uS(t,(function(e){return Ca(e,"line-height")}),B(Dr,r))
var a=function(){var e=parseFloat(ya(t,"line-height"))
var r=parseFloat(ya(t,"font-size"))
return String(e/r)}
return n.getOrThunk(a)})).getOr("")}
var OF=function(e,t){e.formatter.toggle("lineheight",{value:String(t)})
e.nodeChanged()}
var BF=function(e){var t
if("string"!==typeof e){t=dr.extend({paste:e.paste,data:{paste:e.paste}},e)
return{content:e.content,details:t}}return{content:e,details:{}}}
var PF=function(e,t){var r=BF(t)
LE(e,r.content,r.details)}
var LF=dr.each
var IF=dr.map,MF=dr.inArray
var FF=function(){function e(e){this.commands={state:{},exec:{},value:{}}
this.editor=e
this.setupCommands(e)}e.prototype.execCommand=function(e,t,r,n){var a,o=false
var i=this
if(i.editor.removed)return;/^(mceAddUndoLevel|mceEndUndoLevel|mceBeginUndoLevel|mceRepaint)$/.test(e)||n&&n.skip_focus?Ny(i.editor):i.editor.focus()
n=i.editor.fire("BeforeExecCommand",{command:e,ui:t,value:r})
if(n.isDefaultPrevented())return false
var u=e.toLowerCase()
if(a=i.commands.exec[u]){a(u,t,r)
i.editor.fire("ExecCommand",{command:e,ui:t,value:r})
return true}LF(this.editor.plugins,(function(n){if(n.execCommand&&n.execCommand(e,t,r)){i.editor.fire("ExecCommand",{command:e,ui:t,value:r})
o=true
return false}}))
if(o)return o
if(i.editor.theme&&i.editor.theme.execCommand&&i.editor.theme.execCommand(e,t,r)){i.editor.fire("ExecCommand",{command:e,ui:t,value:r})
return true}try{o=i.editor.getDoc().execCommand(e,t,r)}catch(e){}if(o){i.editor.fire("ExecCommand",{command:e,ui:t,value:r})
return true}return false}
e.prototype.queryCommandState=function(e){var t
if(this.editor.quirks.isHidden()||this.editor.removed)return
e=e.toLowerCase()
if(t=this.commands.state[e])return t(e)
try{return this.editor.getDoc().queryCommandState(e)}catch(e){}return false}
e.prototype.queryCommandValue=function(e){var t
if(this.editor.quirks.isHidden()||this.editor.removed)return
e=e.toLowerCase()
if(t=this.commands.value[e])return t(e)
try{return this.editor.getDoc().queryCommandValue(e)}catch(e){}}
e.prototype.addCommands=function(e,t){void 0===t&&(t="exec")
var r=this
LF(e,(function(e,n){LF(n.toLowerCase().split(","),(function(n){r.commands[t][n]=e}))}))}
e.prototype.addCommand=function(e,t,r){var n=this
e=e.toLowerCase()
this.commands.exec[e]=function(e,a,o,i){return t.call(r||n.editor,a,o,i)}}
e.prototype.queryCommandSupported=function(e){e=e.toLowerCase()
if(this.commands.exec[e])return true
try{return this.editor.getDoc().queryCommandSupported(e)}catch(e){}return false}
e.prototype.addQueryStateHandler=function(e,t,r){var n=this
e=e.toLowerCase()
this.commands.state[e]=function(){return t.call(r||n.editor)}}
e.prototype.addQueryValueHandler=function(e,t,r){var n=this
e=e.toLowerCase()
this.commands.value[e]=function(){return t.call(r||n.editor)}}
e.prototype.hasCustomCommand=function(e){e=e.toLowerCase()
return!!this.commands.exec[e]}
e.prototype.execNativeCommand=function(e,t,r){void 0===t&&(t=false)
void 0===r&&(r=null)
return this.editor.getDoc().execCommand(e,t,r)}
e.prototype.isFormatMatch=function(e){return this.editor.formatter.match(e)}
e.prototype.toggleFormat=function(e,t){this.editor.formatter.toggle(e,t?{value:t}:void 0)
this.editor.nodeChanged()}
e.prototype.storeSelection=function(e){this.selectionBookmark=this.editor.selection.getBookmark(e)}
e.prototype.restoreSelection=function(){this.editor.selection.moveToBookmark(this.selectionBookmark)}
e.prototype.setupCommands=function(e){var t=this
this.addCommands({"mceResetDesignMode,mceBeginUndoLevel":T,"mceEndUndoLevel,mceAddUndoLevel":function(){e.undoManager.add()},"Cut,Copy,Paste":function(r){var n=e.getDoc()
var a
try{t.execNativeCommand(r)}catch(e){a=true}"paste"!==r||n.queryCommandEnabled(r)||(a=true)
if(a||!n.queryCommandSupported(r)){var o=e.translate("Your browser doesn't support direct access to the clipboard. Please use the Ctrl+X/C/V keyboard shortcuts instead.")
Zt.mac&&(o=o.replace(/Ctrl\+/g,"⌘+"))
e.notificationManager.open({text:o,type:"error"})}},unlink:function(){if(e.selection.isCollapsed()){var t=e.dom.getParent(e.selection.getStart(),"a")
t&&e.dom.remove(t,true)
return}e.formatter.remove("link")},"JustifyLeft,JustifyCenter,JustifyRight,JustifyFull,JustifyNone":function(r){var n=r.substring(7)
"full"===n&&(n="justify")
LF("left,center,right,justify".split(","),(function(t){n!==t&&e.formatter.remove("align"+t)}))
"none"!==n&&t.toggleFormat("align"+n)},"InsertUnorderedList,InsertOrderedList":function(r){var n
t.execNativeCommand(r)
var a=e.dom.getParent(e.selection.getNode(),"ol,ul")
if(a){n=a.parentNode
if(/^(H[1-6]|P|ADDRESS|PRE)$/.test(n.nodeName)){t.storeSelection()
e.dom.split(n,a)
t.restoreSelection()}}},"Bold,Italic,Underline,Strikethrough,Superscript,Subscript":function(e){t.toggleFormat(e)},"ForeColor,HiliteColor":function(e,r,n){t.toggleFormat(e,n)},FontName:function(t,r,n){_F(e,n)},FontSize:function(t,r,n){AF(e,n)},LineHeight:function(t,r,n){OF(e,n)},RemoveFormat:function(t){e.formatter.remove(t)},mceBlockQuote:function(){t.toggleFormat("blockquote")},FormatBlock:function(e,r,n){return t.toggleFormat(n||"p")},mceCleanup:function(){var t=e.selection.getBookmark()
e.setContent(e.getContent())
e.selection.moveToBookmark(t)},mceRemoveNode:function(r,n,a){var o=a||e.selection.getNode()
if(o!==e.getBody()){t.storeSelection()
e.dom.remove(o,true)
t.restoreSelection()}},mceSelectNodeDepth:function(t,r,n){var a=0
e.dom.getParent(e.selection.getNode(),(function(t){if(1===t.nodeType&&a++===n){e.selection.select(t)
return false}}),e.getBody())},mceSelectNode:function(t,r,n){e.selection.select(n)},mceInsertContent:function(t,r,n){PF(e,n)},mceInsertRawHTML:function(t,r,n){e.selection.setContent("tiny_mce_marker")
var a=e.getContent()
e.setContent(a.replace(/tiny_mce_marker/g,(function(){return n})))},mceInsertNewLine:function(t,r,n){fI(e,n)},mceToggleFormat:function(e,r,n){t.toggleFormat(n)},mceSetContent:function(t,r,n){e.setContent(n)},"Indent,Outdent":function(t){TB(e,t)},mceRepaint:T,InsertHorizontalRule:function(){e.execCommand("mceInsertContent",false,"<hr />")},mceToggleVisualAid:function(){e.hasVisual=!e.hasVisual
e.addVisual()},mceReplaceContent:function(t,r,n){e.execCommand("mceInsertContent",false,n.replace(/\{\$selection\}/g,e.selection.getContent({format:"text"})))},mceInsertLink:function(t,r,n){"string"===typeof n&&(n={href:n})
var a=e.dom.getParent(e.selection.getNode(),"a")
n.href=n.href.replace(/ /g,"%20")
a&&n.href||e.formatter.remove("link")
n.href&&e.formatter.apply("link",n,a)},selectAll:function(){var t=e.dom.getParent(e.selection.getStart(),na)
if(t){var r=e.dom.createRng()
r.selectNodeContents(t)
e.selection.setRng(r)}},mceNewDocument:function(){e.setContent("")},InsertLineBreak:function(t,r,n){$L(e,n)
return true}})
var r=function(t){return function(){var r=e.selection
var n=r.isCollapsed()?[e.dom.getParent(r.getNode(),e.dom.isBlock)]:r.getSelectedBlocks()
var a=IF(n,(function(r){return!!e.formatter.matchNode(r,t)}))
return-1!==MF(a,true)}}
t.addCommands({JustifyLeft:r("alignleft"),JustifyCenter:r("aligncenter"),JustifyRight:r("alignright"),JustifyFull:r("alignjustify"),"Bold,Italic,Underline,Strikethrough,Superscript,Subscript":function(e){return t.isFormatMatch(e)},mceBlockQuote:function(){return t.isFormatMatch("blockquote")},Outdent:function(){return kB(e)},"InsertUnorderedList,InsertOrderedList":function(t){var r=e.dom.getParent(e.selection.getNode(),"ul,ol")
return r&&("insertunorderedlist"===t&&"UL"===r.tagName||"insertorderedlist"===t&&"OL"===r.tagName)}},"state")
t.addCommands({Undo:function(){e.undoManager.undo()},Redo:function(){e.undoManager.redo()}})
t.addQueryValueHandler("FontName",(function(){return TF(e)}),this)
t.addQueryValueHandler("FontSize",(function(){return RF(e)}),this)
t.addQueryValueHandler("LineHeight",(function(){return DF(e)}),this)}
return e}()
var UF="data-mce-contenteditable"
var zF=function(e,t,r){ms(e,t)&&false===r?vs(e,t):r&&ls(e,t)}
var jF=function(e,t,r){try{e.getDoc().execCommand(t,false,String(r))}catch(e){}}
var HF=function(e,t){e.dom.contentEditable=t?"true":"false"}
var VF=function(e){Z(gs(e,'*[contenteditable="true"]'),(function(e){ca(e,UF,"true")
HF(e,false)}))}
var qF=function(e){Z(gs(e,"*["+UF+'="true"]'),(function(e){ma(e,UF)
HF(e,true)}))}
var $F=function(e){q.from(e.selection.getNode()).each((function(e){e.removeAttribute("data-mce-selected")}))}
var WF=function(e){e.selection.setRng(e.selection.getRng())}
var KF=function(e,t){var r=yr.fromDom(e.getBody())
zF(r,"mce-content-readonly",t)
if(t){e.selection.controlSelection.hideResizeRect()
e._selectionOverrides.hideFakeCaret()
$F(e)
e.readonly=true
HF(r,false)
VF(r)}else{e.readonly=false
HF(r,true)
qF(r)
jF(e,"StyleWithCSS",false)
jF(e,"enableInlineTableEditing",false)
jF(e,"enableObjectResizing",false)
Zy(e)&&e.focus()
WF(e)
e.nodeChanged()}}
var XF=function(e){return e.readonly}
var YF=function(e){e.parser.addAttributeFilter("contenteditable",(function(t){XF(e)&&Z(t,(function(e){e.attr(UF,e.attr("contenteditable"))
e.attr("contenteditable","false")}))}))
e.serializer.addAttributeFilter(UF,(function(t){XF(e)&&Z(t,(function(e){e.attr("contenteditable",e.attr(UF))}))}))
e.serializer.addTempAttr(UF)}
var GF=function(e){e.serializer?YF(e):e.on("PreInit",(function(){YF(e)}))}
var JF=function(e){return"click"===e.type}
var QF=function(e,t){var r=function(t){return Dr(t,yr.fromDom(e.getBody()))}
return to(t,"a",r).bind((function(e){return da(e,"href")}))}
var ZF=function(e,t){if(JF(t)&&!jg.metaKeyPressed(t)){var r=yr.fromDom(t.target)
QF(e,r).each((function(r){t.preventDefault()
if(/^#/.test(r)){var n=e.dom.select(r+',[name="'+ut(r,"#")+'"]')
n.length&&e.selection.scrollIntoView(n[0],true)}else window.open(r,"_blank","rel=noopener noreferrer,menubar=yes,toolbar=yes,location=yes,status=yes,resizable=yes,scrollbars=yes")}))}}
var eU=function(e){e.on("ShowCaret",(function(t){XF(e)&&t.preventDefault()}))
e.on("ObjectSelected",(function(t){XF(e)&&t.preventDefault()}))}
var tU=dr.makeMap("focus blur focusin focusout click dblclick mousedown mouseup mousemove mouseover beforepaste paste cut copy selectionchange mouseout mouseenter mouseleave wheel keydown keypress keyup input beforeinput contextmenu dragstart dragend dragover draggesture dragdrop drop drag submit compositionstart compositionend compositionupdate touchstart touchmove touchend touchcancel"," ")
var rU=function(){function e(e){this.bindings={}
this.settings=e||{}
this.scope=this.settings.scope||this
this.toggleEvent=this.settings.toggleEvent||F}e.isNative=function(e){return!!tU[e.toLowerCase()]}
e.prototype.fire=function(e,t){var r=e.toLowerCase()
var n=t||{}
n.type=r
n.target||(n.target=this.scope)
if(!n.preventDefault){n.preventDefault=function(){n.isDefaultPrevented=U}
n.stopPropagation=function(){n.isPropagationStopped=U}
n.stopImmediatePropagation=function(){n.isImmediatePropagationStopped=U}
n.isDefaultPrevented=F
n.isPropagationStopped=F
n.isImmediatePropagationStopped=F}this.settings.beforeFire&&this.settings.beforeFire(n)
var a=this.bindings[r]
if(a)for(var o=0,i=a.length;o<i;o++){var u=a[o]
u.once&&this.off(r,u.func)
if(n.isImmediatePropagationStopped()){n.stopPropagation()
return n}if(false===u.func.call(this.scope,n)){n.preventDefault()
return n}}return n}
e.prototype.on=function(e,t,r,n){false===t&&(t=F)
if(t){var a={func:t}
n&&dr.extend(a,n)
var o=e.toLowerCase().split(" ")
var i=o.length
while(i--){var u=o[i]
var f=this.bindings[u]
if(!f){f=this.bindings[u]=[]
this.toggleEvent(u,true)}r?f.unshift(a):f.push(a)}}return this}
e.prototype.off=function(e,t){var r=this
if(e){var n=e.toLowerCase().split(" ")
var a=n.length
while(a--){var o=n[a]
var i=this.bindings[o]
if(!o){xe(this.bindings,(function(e,t){r.toggleEvent(t,false)
delete r.bindings[t]}))
return this}if(i){if(t){var u=i.length
while(u--)if(i[u].func===t){i=i.slice(0,u).concat(i.slice(u+1))
this.bindings[o]=i}}else i.length=0
if(!i.length){this.toggleEvent(e,false)
delete this.bindings[o]}}}}else{xe(this.bindings,(function(e,t){r.toggleEvent(t,false)}))
this.bindings={}}return this}
e.prototype.once=function(e,t,r){return this.on(e,t,r,{once:true})}
e.prototype.has=function(e){e=e.toLowerCase()
return!(!this.bindings[e]||0===this.bindings[e].length)}
return e}()
var nU=function(e){e._eventDispatcher||(e._eventDispatcher=new rU({scope:e,toggleEvent:function(t,r){rU.isNative(t)&&e.toggleNativeEvent&&e.toggleNativeEvent(t,r)}}))
return e._eventDispatcher}
var aU={fire:function(e,t,r){var n=this
if(n.removed&&"remove"!==e&&"detach"!==e)return t
var a=nU(n).fire(e,t)
if(false!==r&&n.parent){var o=n.parent()
while(o&&!a.isPropagationStopped()){o.fire(e,a,false)
o=o.parent()}}return a},on:function(e,t,r){return nU(this).on(e,t,r)},off:function(e,t){return nU(this).off(e,t)},once:function(e,t){return nU(this).once(e,t)},hasEventListeners:function(e){return nU(this).has(e)}}
var oU=Oc.DOM
var iU
var uU=function(e,t){if("selectionchange"===t)return e.getDoc()
if(!e.inline&&/^mouse|touch|click|contextmenu|drop|dragover|dragend/.test(t))return e.getDoc().documentElement
var r=qd(e)
if(r){e.eventRoot||(e.eventRoot=oU.select(r)[0])
return e.eventRoot}return e.getBody()}
var fU=function(e){return!e.hidden&&!XF(e)}
var cU=function(e,t,r){fU(e)?e.fire(t,r):XF(e)&&ZF(e,r)}
var sU=function(e,t){var r
e.delegates||(e.delegates={})
if(e.delegates[t]||e.removed)return
var n=uU(e,t)
if(qd(e)){if(!iU){iU={}
e.editorManager.on("removeEditor",(function(){if(!e.editorManager.activeEditor&&iU){xe(iU,(function(t,r){e.dom.unbind(uU(e,r))}))
iU=null}}))}if(iU[t])return
r=function(r){var n=r.target
var a=e.editorManager.get()
var o=a.length
while(o--){var i=a[o].getBody();(i===n||oU.isChildOf(n,i))&&cU(a[o],t,r)}}
iU[t]=r
oU.bind(n,t,r)}else{r=function(r){cU(e,t,r)}
oU.bind(n,t,r)
e.delegates[t]=r}}
var lU=qe(qe({},aU),{bindPendingEventDelegates:function(){var e=this
dr.each(e._pendingNativeEvents,(function(t){sU(e,t)}))},toggleNativeEvent:function(e,t){var r=this
if("focus"===e||"blur"===e)return
if(t)r.initialized?sU(r,e):r._pendingNativeEvents?r._pendingNativeEvents.push(e):r._pendingNativeEvents=[e]
else if(r.initialized){r.dom.unbind(uU(r,e),e,r.delegates[e])
delete r.delegates[e]}},unbindAllNativeEvents:function(){var e=this
var t=e.getBody()
var r=e.dom
if(e.delegates){xe(e.delegates,(function(t,r){e.dom.unbind(uU(e,r),r,t)}))
delete e.delegates}if(!e.inline&&t&&r){t.onload=null
r.unbind(e.getWin())
r.unbind(e.getDoc())}if(r){r.unbind(t)
r.unbind(e.getContainer())}}})
var dU=["design","readonly"]
var vU=function(e,t,r,n){var a=r[t.get()]
var o=r[n]
try{o.activate()}catch(e){console.error("problem while activating editor mode "+n+":",e)
return}a.deactivate()
a.editorReadOnly!==o.editorReadOnly&&KF(e,o.editorReadOnly)
t.set(n)
Bg(e,n)}
var mU=function(e,t,r,n){if(n===r.get())return
if(!Oe(t,n))throw new Error("Editor mode '"+n+"' is invalid")
e.initialized?vU(e,r,t,n):e.on("init",(function(){return vU(e,r,t,n)}))}
var pU=function(e,t,r){var n
if(G(dU,t))throw new Error("Cannot override default mode "+t)
return qe(qe({},e),(n={},n[t]=qe(qe({},r),{deactivate:function(){try{r.deactivate()}catch(e){console.error("problem while deactivating editor mode "+t+":",e)}}}),n))}
var gU=function(e){var t=jc("design")
var r=jc({design:{activate:T,deactivate:T,editorReadOnly:false},readonly:{activate:T,deactivate:T,editorReadOnly:true}})
GF(e)
eU(e)
return{isReadOnly:function(){return XF(e)},set:function(n){return mU(e,r.get(),t,n)},get:function(){return t.get()},register:function(e,t){r.set(pU(r.get(),e,t))}}}
var hU=dr.each,yU=dr.explode
var bU={f1:112,f2:113,f3:114,f4:115,f5:116,f6:117,f7:118,f8:119,f9:120,f10:121,f11:122,f12:123}
var CU=dr.makeMap("alt,ctrl,shift,meta,access")
var wU=function(e){var t
var r={}
hU(yU(e.toLowerCase(),"+"),(function(e){if(e in CU)r[e]=true
else if(/^[0-9]{2,}$/.test(e))r.keyCode=parseInt(e,10)
else{r.charCode=e.charCodeAt(0)
r.keyCode=bU[e]||e.toUpperCase().charCodeAt(0)}}))
var n=[r.keyCode]
for(t in CU)r[t]?n.push(t):r[t]=false
r.id=n.join(",")
if(r.access){r.alt=true
Zt.mac?r.ctrl=true:r.shift=true}if(r.meta)if(Zt.mac)r.meta=true
else{r.ctrl=true
r.meta=false}return r}
var xU=function(){function e(e){this.shortcuts={}
this.pendingPatterns=[]
this.editor=e
var t=this
e.on("keyup keypress keydown",(function(e){if((t.hasModifier(e)||t.isFunctionKey(e))&&!e.isDefaultPrevented()){hU(t.shortcuts,(function(r){if(t.matchShortcut(e,r)){t.pendingPatterns=r.subpatterns.slice(0)
"keydown"===e.type&&t.executeShortcutAction(r)
return true}}))
if(t.matchShortcut(e,t.pendingPatterns[0])){1===t.pendingPatterns.length&&"keydown"===e.type&&t.executeShortcutAction(t.pendingPatterns[0])
t.pendingPatterns.shift()}}}))}e.prototype.add=function(e,t,r,n){var a=this
var o=a.normalizeCommandFunc(r)
hU(yU(dr.trim(e)),(function(e){var r=a.createShortcut(e,t,o,n)
a.shortcuts[r.id]=r}))
return true}
e.prototype.remove=function(e){var t=this.createShortcut(e)
if(this.shortcuts[t.id]){delete this.shortcuts[t.id]
return true}return false}
e.prototype.normalizeCommandFunc=function(e){var t=this
var r=e
return"string"===typeof r?function(){t.editor.execCommand(r,false,null)}:dr.isArray(r)?function(){t.editor.execCommand(r[0],r[1],r[2])}:r}
e.prototype.createShortcut=function(e,t,r,n){var a=dr.map(yU(e,">"),wU)
a[a.length-1]=dr.extend(a[a.length-1],{func:r,scope:n||this.editor})
return dr.extend(a[0],{desc:this.editor.translate(t),subpatterns:a.slice(1)})}
e.prototype.hasModifier=function(e){return e.altKey||e.ctrlKey||e.metaKey}
e.prototype.isFunctionKey=function(e){return"keydown"===e.type&&e.keyCode>=112&&e.keyCode<=123}
e.prototype.matchShortcut=function(e,t){if(!t)return false
if(t.ctrl!==e.ctrlKey||t.meta!==e.metaKey)return false
if(t.alt!==e.altKey||t.shift!==e.shiftKey)return false
if(e.keyCode===t.keyCode||e.charCode&&e.charCode===t.charCode){e.preventDefault()
return true}return false}
e.prototype.executeShortcutAction=function(e){return e.func?e.func.call(e.scope):null}
return e}()
var SU=function(){var e={}
var t={}
var r={}
var n={}
var a={}
var o={}
var i={}
var u=function(e,t){return function(r,n){return e[r.toLowerCase()]=qe(qe({},n),{type:t})}}
var f=function(e,t){return n[e.toLowerCase()]=t}
return{addButton:u(e,"button"),addGroupToolbarButton:u(e,"grouptoolbarbutton"),addToggleButton:u(e,"togglebutton"),addMenuButton:u(e,"menubutton"),addSplitButton:u(e,"splitbutton"),addMenuItem:u(t,"menuitem"),addNestedMenuItem:u(t,"nestedmenuitem"),addToggleMenuItem:u(t,"togglemenuitem"),addAutocompleter:u(r,"autocompleter"),addContextMenu:u(a,"contextmenu"),addContextToolbar:u(o,"contexttoolbar"),addContextForm:u(o,"contextform"),addSidebar:u(i,"sidebar"),addIcon:f,getAll:function(){return{buttons:e,menuItems:t,icons:n,popups:r,contextMenus:a,contextToolbars:o,sidebars:i}}}}
var kU=function(){var e=SU()
return{addAutocompleter:e.addAutocompleter,addButton:e.addButton,addContextForm:e.addContextForm,addContextMenu:e.addContextMenu,addContextToolbar:e.addContextToolbar,addIcon:e.addIcon,addMenuButton:e.addMenuButton,addMenuItem:e.addMenuItem,addNestedMenuItem:e.addNestedMenuItem,addSidebar:e.addSidebar,addSplitButton:e.addSplitButton,addToggleButton:e.addToggleButton,addGroupToolbarButton:e.addGroupToolbarButton,addToggleMenuItem:e.addToggleMenuItem,getAll:e.getAll}}
var NU=dr.each,EU=dr.trim
var _U="source protocol authority userInfo user password host port relative path directory file query anchor".split(" ")
var TU={ftp:21,http:80,https:443,mailto:25}
var AU=function(){function e(t,r){t=EU(t)
this.settings=r||{}
var n=this.settings.base_uri
var a=this
if(/^([\w\-]+):([^\/]{2})/i.test(t)||/^\s*#/.test(t)){a.source=t
return}var o=0===t.indexOf("//")
0!==t.indexOf("/")||o||(t=(n&&n.protocol||"http")+"://mce_host"+t)
if(!/^[\w\-]*:?\/\//.test(t)){var i=this.settings.base_uri?this.settings.base_uri.path:new e(document.location.href).directory
if(this.settings.base_uri&&""==this.settings.base_uri.protocol)t="//mce_host"+a.toAbsPath(i,t)
else{var u=/([^#?]*)([#?]?.*)/.exec(t)
t=(n&&n.protocol||"http")+"://mce_host"+a.toAbsPath(i,u[1])+u[2]}}t=t.replace(/@@/g,"(mce_at)")
var f=/^(?:(?![^:@]+:[^:@\/]*@)([^:\/?#.]+):)?(?:\/\/)?((?:(([^:@\/]*):?([^:@\/]*))?@)?(\[[a-zA-Z0-9:.%]+\]|[^:\/?#]*)(?::(\d*))?)(((\/(?:[^?#](?![^?#\/]*\.[^?#\/.]+(?:[?#]|$)))*\/?)?([^?#\/]*))(?:\?([^#]*))?(?:#(.*))?)/.exec(t)
NU(_U,(function(e,t){var r=f[t]
r&&(r=r.replace(/\(mce_at\)/g,"@@"))
a[e]=r}))
if(n){a.protocol||(a.protocol=n.protocol)
a.userInfo||(a.userInfo=n.userInfo)
a.port||"mce_host"!==a.host||(a.port=n.port)
a.host&&"mce_host"!==a.host||(a.host=n.host)
a.source=""}o&&(a.protocol="")}e.parseDataUri=function(e){var t
var r=decodeURIComponent(e).split(",")
var n=/data:([^;]+)/.exec(r[0])
n&&(t=n[1])
return{type:t,data:r[1]}}
e.getDocumentBaseUrl=function(e){var t
t=0!==e.protocol.indexOf("http")&&"file:"!==e.protocol?e.href:e.protocol+"//"+e.host+e.pathname
if(/^[^:]+:\/\/\/?[^\/]+\//.test(t)){t=t.replace(/[\?#].*$/,"").replace(/[\/\\][^\/]+$/,"");/[\/\\]$/.test(t)||(t+="/")}return t}
e.prototype.setPath=function(e){var t=/^(.*?)\/?(\w+)?$/.exec(e)
this.path=t[0]
this.directory=t[1]
this.file=t[2]
this.source=""
this.getURI()}
e.prototype.toRelative=function(t){var r
if("./"===t)return t
var n=new e(t,{base_uri:this})
if("mce_host"!==n.host&&this.host!==n.host&&n.host||this.port!==n.port||this.protocol!==n.protocol&&""!==n.protocol)return n.getURI()
var a=this.getURI(),o=n.getURI()
if(a===o||"/"===a.charAt(a.length-1)&&a.substr(0,a.length-1)===o)return a
r=this.toRelPath(this.path,n.path)
n.query&&(r+="?"+n.query)
n.anchor&&(r+="#"+n.anchor)
return r}
e.prototype.toAbsolute=function(t,r){var n=new e(t,{base_uri:this})
return n.getURI(r&&this.isSameOrigin(n))}
e.prototype.isSameOrigin=function(e){if(this.host==e.host&&this.protocol==e.protocol){if(this.port==e.port)return true
var t=TU[this.protocol]
if(t&&(this.port||t)==(e.port||t))return true}return false}
e.prototype.toRelPath=function(e,t){var r,n,a=0,o=""
var i=e.substring(0,e.lastIndexOf("/")).split("/")
var u=t.split("/")
if(i.length>=u.length)for(r=0,n=i.length;r<n;r++)if(r>=u.length||i[r]!==u[r]){a=r+1
break}if(i.length<u.length)for(r=0,n=u.length;r<n;r++)if(r>=i.length||i[r]!==u[r]){a=r+1
break}if(1===a)return t
for(r=0,n=i.length-(a-1);r<n;r++)o+="../"
for(r=a-1,n=u.length;r<n;r++)o+=r!==a-1?"/"+u[r]:u[r]
return o}
e.prototype.toAbsPath=function(e,t){var r,n,a=0,o=[]
var i=/\/$/.test(t)?"/":""
var u=e.split("/")
var f=t.split("/")
NU(u,(function(e){e&&o.push(e)}))
u=o
for(r=f.length-1,o=[];r>=0;r--){if(0===f[r].length||"."===f[r])continue
if(".."===f[r]){a++
continue}if(a>0){a--
continue}o.push(f[r])}r=u.length-a
n=r<=0?le(o).join("/"):u.slice(0,r).join("/")+"/"+le(o).join("/")
0!==n.indexOf("/")&&(n="/"+n)
i&&n.lastIndexOf("/")!==n.length-1&&(n+=i)
return n}
e.prototype.getURI=function(e){void 0===e&&(e=false)
var t
if(!this.source||e){t=""
if(!e){this.protocol?t+=this.protocol+"://":t+="//"
this.userInfo&&(t+=this.userInfo+"@")
this.host&&(t+=this.host)
this.port&&(t+=":"+this.port)}this.path&&(t+=this.path)
this.query&&(t+="?"+this.query)
this.anchor&&(t+="#"+this.anchor)
this.source=t}return this.source}
return e}()
var RU=Oc.DOM
var DU=dr.extend,OU=dr.each
var BU=dr.resolve
var PU=Zt.ie
var LU=function(){function e(e,t,r){var n=this
this.plugins={}
this.contentCSS=[]
this.contentStyles=[]
this.loadedCSS={}
this.isNotDirty=false
this.editorManager=r
this.documentBaseUrl=r.documentBaseURL
DU(this,lU)
this.settings=TT(this,e,this.documentBaseUrl,r.defaultSettings,t)
this.settings.suffix&&(r.suffix=this.settings.suffix)
this.suffix=r.suffix
this.settings.base_url&&r._setBaseUrl(this.settings.base_url)
this.baseUri=r.baseURI
if(this.settings.referrer_policy){zc.ScriptLoader._setReferrerPolicy(this.settings.referrer_policy)
Oc.DOM.styleSheetLoader._setReferrerPolicy(this.settings.referrer_policy)}ts.languageLoad=this.settings.language_load
ts.baseURL=r.baseURL
this.id=e
this.setDirty(false)
this.documentBaseURI=new AU(this.settings.document_base_url,{base_uri:this.baseUri})
this.baseURI=this.baseUri
this.inline=!!this.settings.inline
this.shortcuts=new xU(this)
this.editorCommands=new FF(this)
this.settings.cache_suffix&&(Zt.cacheSuffix=this.settings.cache_suffix.replace(/^[\?\&]+/,""))
this.ui={registry:kU(),styleSheetLoader:void 0,show:T,hide:T,enable:T,disable:T,isDisabled:F}
var a=this
var o=gU(a)
this.mode=o
this.setMode=o.set
r.fire("SetupEditor",{editor:this})
this.execCallback("setup",this)
this.$=kc.overrideDefaults((function(){return{context:n.inline?n.getBody():n.getDoc(),element:n.getBody()}}))}e.prototype.render=function(){vF(this)}
e.prototype.focus=function(e){rb(this,e)}
e.prototype.hasFocus=function(){return Qy(this)}
e.prototype.execCallback=function(e){var t=[]
for(var r=1;r<arguments.length;r++)t[r-1]=arguments[r]
var n=this
var a,o=n.settings[e]
if(!o)return
if(n.callbackLookup&&(a=n.callbackLookup[e])){o=a.func
a=a.scope}if("string"===typeof o){a=o.replace(/\.\w+$/,"")
a=a?BU(a):0
o=BU(o)
n.callbackLookup=n.callbackLookup||{}
n.callbackLookup[e]={func:o,scope:a}}return o.apply(a||n,t)}
e.prototype.translate=function(e){return es.translate(e)}
e.prototype.getParam=function(e,t,r){return OT(this,e,t,r)}
e.prototype.hasPlugin=function(e,t){var r=G(lv(this).split(/[ ,]/),e)
return!!r&&(!t||void 0!==YT.get(e))}
e.prototype.nodeChanged=function(e){this._nodeChangeDispatcher.nodeChanged(e)}
e.prototype.addCommand=function(e,t,r){this.editorCommands.addCommand(e,t,r)}
e.prototype.addQueryStateHandler=function(e,t,r){this.editorCommands.addQueryStateHandler(e,t,r)}
e.prototype.addQueryValueHandler=function(e,t,r){this.editorCommands.addQueryValueHandler(e,t,r)}
e.prototype.addShortcut=function(e,t,r,n){this.shortcuts.add(e,t,r,n)}
e.prototype.execCommand=function(e,t,r,n){return this.editorCommands.execCommand(e,t,r,n)}
e.prototype.queryCommandState=function(e){return this.editorCommands.queryCommandState(e)}
e.prototype.queryCommandValue=function(e){return this.editorCommands.queryCommandValue(e)}
e.prototype.queryCommandSupported=function(e){return this.editorCommands.queryCommandSupported(e)}
e.prototype.show=function(){var e=this
if(e.hidden){e.hidden=false
if(e.inline)e.getBody().contentEditable="true"
else{RU.show(e.getContainer())
RU.hide(e.id)}e.load()
e.fire("show")}}
e.prototype.hide=function(){var e=this,t=e.getDoc()
if(!e.hidden){PU&&t&&!e.inline&&t.execCommand("SelectAll")
e.save()
if(e.inline){e.getBody().contentEditable="false"
e===e.editorManager.focusedEditor&&(e.editorManager.focusedEditor=null)}else{RU.hide(e.getContainer())
RU.setStyle(e.id,"display",e.orgDisplay)}e.hidden=true
e.fire("hide")}}
e.prototype.isHidden=function(){return!!this.hidden}
e.prototype.setProgressState=function(e,t){this.fire("ProgressState",{state:e,time:t})}
e.prototype.load=function(e){var t=this
var r,n=t.getElement()
if(t.removed)return""
if(n){e=e||{}
e.load=true
var a=Gn(n)?n.value:n.innerHTML
r=t.setContent(a,e)
e.element=n
e.no_events||t.fire("LoadContent",e)
e.element=n=null
return r}}
e.prototype.save=function(e){var t=this
var r,n,a=t.getElement()
if(!a||!t.initialized||t.removed)return
e=e||{}
e.save=true
e.element=a
r=e.content=t.getContent(e)
e.no_events||t.fire("SaveContent",e)
"raw"===e.format&&t.fire("RawSaveContent",e)
r=e.content
if(Gn(a))a.value=r
else{!e.is_removing&&t.inline||(a.innerHTML=r);(n=RU.getParent(t.id,"form"))&&OU(n.elements,(function(e){if(e.name===t.id){e.value=r
return false}}))}e.element=a=null
false!==e.set_dirty&&t.setDirty(false)
return r}
e.prototype.setContent=function(e,t){return K_(this,e,t)}
e.prototype.getContent=function(e){return W_(this,e)}
e.prototype.insertContent=function(e,t){t&&(e=DU({content:e},t))
this.execCommand("mceInsertContent",false,e)}
e.prototype.resetContent=function(e){void 0===e?K_(this,this.startContent,{format:"raw"}):K_(this,e)
this.undoManager.reset()
this.setDirty(false)
this.nodeChanged()}
e.prototype.isDirty=function(){return!this.isNotDirty}
e.prototype.setDirty=function(e){var t=!this.isNotDirty
this.isNotDirty=!e
e&&e!==t&&this.fire("dirty")}
e.prototype.getContainer=function(){var e=this
e.container||(e.container=RU.get(e.editorContainer||e.id+"_parent"))
return e.container}
e.prototype.getContentAreaContainer=function(){return this.contentAreaContainer}
e.prototype.getElement=function(){this.targetElm||(this.targetElm=RU.get(this.id))
return this.targetElm}
e.prototype.getWin=function(){var e=this
var t
if(!e.contentWindow){t=e.iframeElement
t&&(e.contentWindow=t.contentWindow)}return e.contentWindow}
e.prototype.getDoc=function(){var e=this
var t
if(!e.contentDocument){t=e.getWin()
t&&(e.contentDocument=t.document)}return e.contentDocument}
e.prototype.getBody=function(){var e=this.getDoc()
return this.bodyElement||(e?e.body:null)}
e.prototype.convertURL=function(e,t,r){var n=this,a=n.settings
if(a.urlconverter_callback)return n.execCallback("urlconverter_callback",e,r,true,t)
if(!a.convert_urls||r&&"LINK"===r.nodeName||0===e.indexOf("file:")||0===e.length)return e
if(a.relative_urls)return n.documentBaseURI.toRelative(e)
e=n.documentBaseURI.toAbsolute(e,a.remove_script_host)
return e}
e.prototype.addVisual=function(e){mF(this,e)}
e.prototype.remove=function(){Z_(this)}
e.prototype.destroy=function(e){eT(this,e)}
e.prototype.uploadImages=function(e){return this.editorUpload.uploadImages(e)}
e.prototype._scanForImages=function(){return this.editorUpload.scanForImages()}
e.prototype.addButton=function(){throw new Error("editor.addButton has been removed in tinymce 5x, use editor.ui.registry.addButton or editor.ui.registry.addToggleButton or editor.ui.registry.addSplitButton instead")}
e.prototype.addSidebar=function(){throw new Error("editor.addSidebar has been removed in tinymce 5x, use editor.ui.registry.addSidebar instead")}
e.prototype.addMenuItem=function(){throw new Error("editor.addMenuItem has been removed in tinymce 5x, use editor.ui.registry.addMenuItem instead")}
e.prototype.addContextToolbar=function(){throw new Error("editor.addContextToolbar has been removed in tinymce 5x, use editor.ui.registry.addContextToolbar instead")}
return e}()
var IU=Oc.DOM
var MU=dr.explode,FU=dr.each,UU=dr.extend
var zU=0,jU=false
var HU
var VU=[]
var qU=[]
var $U=function(e){return"length"!==e}
var WU=function(e){var t=e.type
FU(JU.get(),(function(r){switch(t){case"scroll":r.fire("ScrollWindow",e)
break
case"resize":r.fire("ResizeWindow",e)}}))}
var KU=function(e){if(e!==jU){e?kc(window).on("resize scroll",WU):kc(window).off("resize scroll",WU)
jU=e}}
var XU=function(e){var t=qU
delete VU[e.id]
for(var r=0;r<VU.length;r++)if(VU[r]===e){VU.splice(r,1)
break}qU=re(qU,(function(t){return e!==t}))
JU.activeEditor===e&&(JU.activeEditor=qU.length>0?qU[0]:null)
JU.focusedEditor===e&&(JU.focusedEditor=null)
return t.length!==qU.length}
var YU=function(e){if(e&&e.initialized&&!(e.getContainer()||e.getBody()).parentNode){XU(e)
e.unbindAllNativeEvents()
e.destroy(true)
e.removed=true
e=null}return e}
var GU="CSS1Compat"!==document.compatMode
var JU=qe(qe({},aU),{baseURI:null,baseURL:null,defaultSettings:{},documentBaseURL:null,suffix:null,$:kc,majorVersion:"5",minorVersion:"8.1",releaseDate:"2021-05-20",editors:VU,i18n:es,activeEditor:null,focusedEditor:null,settings:{},setup:function(){var e=this
var t,r,n=""
r=AU.getDocumentBaseUrl(document.location)
if(/^[^:]+:\/\/\/?[^\/]+\//.test(r)){r=r.replace(/[\?#].*$/,"").replace(/[\/\\][^\/]+$/,"");/[\/\\]$/.test(r)||(r+="/")}var a=window.tinymce||window.tinyMCEPreInit
if(a){t=a.base||a.baseURL
n=a.suffix}else{var o=document.getElementsByTagName("script")
for(var i=0;i<o.length;i++){var u=o[i].src||""
if(""===u)continue
var f=u.substring(u.lastIndexOf("/"))
if(/tinymce(\.full|\.jquery|)(\.min|\.dev|)\.js/.test(u)){-1!==f.indexOf(".min")&&(n=".min")
t=u.substring(0,u.lastIndexOf("/"))
break}}if(!t&&document.currentScript){u=document.currentScript.src;-1!==u.indexOf(".min")&&(n=".min")
t=u.substring(0,u.lastIndexOf("/"))}}e.baseURL=new AU(r).toAbsolute(t)
e.documentBaseURL=r
e.baseURI=new AU(e.baseURL)
e.suffix=n
Hy(e)},overrideDefaults:function(e){var t=e.base_url
t&&this._setBaseUrl(t)
var r=e.suffix
e.suffix&&(this.suffix=r)
this.defaultSettings=e
var n=e.plugin_base_urls
void 0!==n&&xe(n,(function(e,t){ts.PluginManager.urls[t]=e}))},init:function(e){var t=this
var r
var n=dr.makeMap("area base basefont br col frame hr img input isindex link meta param embed source wbr track colgroup option table tbody tfoot thead tr th td script noscript style textarea video audio iframe object menu"," ")
var a=function(e,t){return e.inline&&t.tagName.toLowerCase()in n}
var o=function(e){var t=e.id
if(!t){t=De(e,"name").filter((function(e){return!IU.get(e)})).getOrThunk(IU.uniqueId)
e.setAttribute("id",t)}return t}
var i=function(r){var n=e[r]
if(!n)return
return n.apply(t,[])}
var u=function(e,t){return t.constructor===RegExp?t.test(e.className):IU.hasClass(e,t)}
var f=function(e){var t=[]
if(Zt.browser.isIE()&&Zt.browser.version.major<11){fA("TinyMCE does not support the browser you are using. For a list of supported browsers please see: https://www.tinymce.com/docs/get-started/system-requirements/")
return[]}if(GU){fA("Failed to initialize the editor as the document is not in standards mode. TinyMCE requires standards mode.")
return[]}if(e.types){FU(e.types,(function(e){t=t.concat(IU.select(e.selector))}))
return t}if(e.selector)return IU.select(e.selector)
if(e.target)return[e.target]
switch(e.mode){case"exact":var r=e.elements||""
r.length>0&&FU(MU(r),(function(e){var r=IU.get(e)
r?t.push(r):FU(document.forms,(function(r){FU(r.elements,(function(r){if(r.name===e){e="mce_editor_"+zU++
IU.setAttrib(r,"id",e)
t.push(r)}}))}))}))
break
case"textareas":case"specific_textareas":FU(IU.select("textarea"),(function(r){if(e.editor_deselector&&u(r,e.editor_deselector))return
e.editor_selector&&!u(r,e.editor_selector)||t.push(r)}))}return t}
var c=function(e){r=e}
var s=function(){var r=0
var n=[]
var u
var l=function(e,a,o){var i=new LU(e,a,t)
n.push(i)
i.on("init",(function(){++r===u.length&&c(n)}))
i.targetElm=i.targetElm||o
i.render()}
IU.unbind(window,"ready",s)
i("onpageload")
u=kc.unique(f(e))
if(e.types){FU(e.types,(function(t){dr.each(u,(function(r){if(IU.is(r,t.selector)){l(o(r),UU({},e,t),r)
return false}return true}))}))
return}dr.each(u,(function(e){YU(t.get(e.id))}))
u=dr.grep(u,(function(e){return!t.get(e.id)}))
0===u.length?c([]):FU(u,(function(t){a(e,t)?fA("Could not initialize inline editor on invalid inline target element",t):l(o(t),e,t)}))}
t.settings=e
IU.bind(window,"ready",s)
return new no((function(e){r?e(r):c=function(t){e(t)}}))},get:function(e){return 0===arguments.length?qU.slice(0):y(e)?ie(qU,(function(t){return t.id===e})).getOr(null):_(e)&&qU[e]?qU[e]:null},add:function(e){var t=this
var r=VU[e.id]
if(r===e)return e
if(null===t.get(e.id)){$U(e.id)&&(VU[e.id]=e)
VU.push(e)
qU.push(e)}KU(true)
t.activeEditor=e
t.fire("AddEditor",{editor:e})
if(!HU){HU=function(e){var r=t.fire("BeforeUnload")
if(r.returnValue){e.preventDefault()
e.returnValue=r.returnValue
return r.returnValue}}
window.addEventListener("beforeunload",HU)}return e},createEditor:function(e,t){return this.add(new LU(e,t,this))},remove:function(e){var t=this
var r,n
if(!e){for(r=qU.length-1;r>=0;r--)t.remove(qU[r])
return}if(y(e)){FU(IU.select(e),(function(e){n=t.get(e.id)
n&&t.remove(n)}))
return}n=e
if(w(t.get(n.id)))return null
XU(n)&&t.fire("RemoveEditor",{editor:n})
0===qU.length&&window.removeEventListener("beforeunload",HU)
n.remove()
KU(qU.length>0)
return n},execCommand:function(e,t,r){var n=this,a=n.get(r)
switch(e){case"mceAddEditor":n.get(r)||new LU(r,n.settings,n).render()
return true
case"mceRemoveEditor":a&&a.remove()
return true
case"mceToggleEditor":if(!a){n.execCommand("mceAddEditor",false,r)
return true}a.isHidden()?a.show():a.hide()
return true}if(n.activeEditor)return n.activeEditor.execCommand(e,t,r)
return false},triggerSave:function(){FU(qU,(function(e){e.save()}))},addI18n:function(e,t){es.add(e,t)},translate:function(e){return es.translate(e)},setActive:function(e){var t=this.activeEditor
if(this.activeEditor!==e){t&&t.fire("deactivate",{relatedTarget:e})
e.fire("activate",{relatedTarget:t})}this.activeEditor=e},_setBaseUrl:function(e){this.baseURL=new AU(this.documentBaseURL).toAbsolute(e.replace(/\/+$/,""))
this.baseURI=new AU(this.baseURL)}})
JU.setup()
var QU=Math.min,ZU=Math.max,ez=Math.round
var tz=function(e,t,r){var n=t.x
var a=t.y
var o=e.w
var i=e.h
var u=t.w
var f=t.h
var c=(r||"").split("")
"b"===c[0]&&(a+=f)
"r"===c[1]&&(n+=u)
"c"===c[0]&&(a+=ez(f/2))
"c"===c[1]&&(n+=ez(u/2))
"b"===c[3]&&(a-=i)
"r"===c[4]&&(n-=o)
"c"===c[3]&&(a-=ez(i/2))
"c"===c[4]&&(n-=ez(o/2))
return iz(n,a,o,i)}
var rz=function(e,t,r,n){var a,o
for(o=0;o<n.length;o++){a=tz(e,t,n[o])
if(a.x>=r.x&&a.x+a.w<=r.w+r.x&&a.y>=r.y&&a.y+a.h<=r.h+r.y)return n[o]}return null}
var nz=function(e,t,r){return iz(e.x-t,e.y-r,e.w+2*t,e.h+2*r)}
var az=function(e,t){var r=ZU(e.x,t.x)
var n=ZU(e.y,t.y)
var a=QU(e.x+e.w,t.x+t.w)
var o=QU(e.y+e.h,t.y+t.h)
if(a-r<0||o-n<0)return null
return iz(r,n,a-r,o-n)}
var oz=function(e,t,r){var n=e.x
var a=e.y
var o=e.x+e.w
var i=e.y+e.h
var u=t.x+t.w
var f=t.y+t.h
var c=ZU(0,t.x-n)
var s=ZU(0,t.y-a)
var l=ZU(0,o-u)
var d=ZU(0,i-f)
n+=c
a+=s
if(r){o+=c
i+=s
n-=l
a-=d}o-=l
i-=d
return iz(n,a,o-n,i-a)}
var iz=function(e,t,r,n){return{x:e,y:t,w:r,h:n}}
var uz=function(e){return iz(e.left,e.top,e.width,e.height)}
var fz={inflate:nz,relativePosition:tz,findBestRelativePosition:rz,intersect:az,clamp:oz,create:iz,fromClientRect:uz}
var cz=function(e,t,r){void 0===r&&(r=1e3)
var n=false
var a=null
var o=function(e){return function(){var t=[]
for(var r=0;r<arguments.length;r++)t[r]=arguments[r]
if(!n){n=true
if(null!==a){clearTimeout(a)
a=null}e.apply(null,t)}}}
var i=o(e)
var u=o(t)
var f=function(){var e=[]
for(var t=0;t<arguments.length;t++)e[t]=arguments[t]
n||null!==a||(a=setTimeout((function(){return u.apply(null,e)}),r))}
return{start:f,resolve:i,reject:u}}
var sz=function(){var e={}
var t={}
var r=function(r,n){var a='Script at URL "'+n+'" failed to load'
var o='Script at URL "'+n+"\" did not call `tinymce.Resource.add('"+r+"', data)` within 1 second"
if(void 0!==e[r])return e[r]
var i=new no((function(e,i){var u=cz(e,i)
t[r]=u.resolve
zc.ScriptLoader.loadScript(n,(function(){return u.start(o)}),(function(){return u.reject(a)}))}))
e[r]=i
return i}
var n=function(r,n){if(void 0!==t[r]){t[r](n)
delete t[r]}e[r]=no.resolve(n)}
return{load:r,add:n}}
var lz=sz()
var dz=dr.each,vz=dr.extend
var mz,pz
var gz=function(){}
gz.extend=mz=function(e){var t=this
var r=t.prototype
var n=function(){var e,t,r
var n=this
if(!pz){n.init&&n.init.apply(n,arguments)
t=n.Mixins
if(t){e=t.length
while(e--){r=t[e]
r.init&&r.init.apply(n,arguments)}}}}
var a=function(){return this}
var o=function(e,t){return function(){var n=this
var a=n._super
n._super=r[e]
var o=t.apply(n,arguments)
n._super=a
return o}}
pz=true
var i=new t
pz=false
if(e.Mixins){dz(e.Mixins,(function(t){for(var r in t)"init"!==r&&(e[r]=t[r])}))
r.Mixins&&(e.Mixins=r.Mixins.concat(e.Mixins))}e.Methods&&dz(e.Methods.split(","),(function(t){e[t]=a}))
e.Properties&&dz(e.Properties.split(","),(function(t){var r="_"+t
e[t]=function(e){var t=this
if(void 0!==e){t[r]=e
return t}return t[r]}}))
e.Statics&&dz(e.Statics,(function(e,t){n[t]=e}))
e.Defaults&&r.Defaults&&(e.Defaults=vz({},r.Defaults,e.Defaults))
xe(e,(function(e,t){"function"===typeof e&&r[t]?i[t]=o(t,e):i[t]=e}))
n.prototype=i
n.constructor=n
n.extend=mz
return n}
var hz=Math.min,yz=Math.max,bz=Math.round
var Cz=function(e){var t={}
var r=0,n=0,a=0
var o=function(e,t,r){var n,a,o
n=0
a=0
o=0
e/=255
t/=255
r/=255
var i=hz(e,hz(t,r))
var u=yz(e,yz(t,r))
if(i===u){o=i
return{h:0,s:0,v:100*o}}var f=e===i?t-r:r===i?e-t:r-e
n=e===i?3:r===i?1:5
n=60*(n-f/(u-i))
a=(u-i)/u
o=u
return{h:bz(n),s:bz(100*a),v:bz(100*o)}}
var i=function(e,t,o){e=(parseInt(e,10)||0)%360
t=parseInt(t,10)/100
o=parseInt(o,10)/100
t=yz(0,hz(t,1))
o=yz(0,hz(o,1))
if(0===t){r=n=a=bz(255*o)
return}var i=e/60
var u=o*t
var f=u*(1-Math.abs(i%2-1))
var c=o-u
switch(Math.floor(i)){case 0:r=u
n=f
a=0
break
case 1:r=f
n=u
a=0
break
case 2:r=0
n=u
a=f
break
case 3:r=0
n=f
a=u
break
case 4:r=f
n=0
a=u
break
case 5:r=u
n=0
a=f
break
default:r=n=a=0}r=bz(255*(r+c))
n=bz(255*(n+c))
a=bz(255*(a+c))}
var u=function(){var e=function(e){e=parseInt(e,10).toString(16)
return e.length>1?e:"0"+e}
return"#"+e(r)+e(n)+e(a)}
var f=function(){return{r:r,g:n,b:a}}
var c=function(){return o(r,n,a)}
var s=function(e){var o
if("object"===typeof e)if("r"in e){r=e.r
n=e.g
a=e.b}else"v"in e&&i(e.h,e.s,e.v)
else if(o=/rgb\s*\(\s*([0-9]+)\s*,\s*([0-9]+)\s*,\s*([0-9]+)[^\)]*\)/gi.exec(e)){r=parseInt(o[1],10)
n=parseInt(o[2],10)
a=parseInt(o[3],10)}else if(o=/#([0-F]{2})([0-F]{2})([0-F]{2})/gi.exec(e)){r=parseInt(o[1],16)
n=parseInt(o[2],16)
a=parseInt(o[3],16)}else if(o=/#([0-F])([0-F])([0-F])/gi.exec(e)){r=parseInt(o[1]+o[1],16)
n=parseInt(o[2]+o[2],16)
a=parseInt(o[3]+o[3],16)}r=r<0?0:r>255?255:r
n=n<0?0:n>255?255:n
a=a<0?0:a>255?255:a
return t}
e&&s(e)
t.toRgb=f
t.toHsv=c
t.toHex=u
t.parse=s
return t}
var wz=function(e){var t=JSON.stringify(e)
if(!y(t))return t
return t.replace(/[\u0080-\uFFFF]/g,(function(e){var t=e.charCodeAt(0).toString(16)
return"\\u"+"0000".substring(t.length)+t}))}
var xz={serialize:wz,parse:function(e){try{return JSON.parse(e)}catch(e){}}}
var Sz={callbacks:{},count:0,send:function(e){var t=this,r=Oc.DOM,n=void 0!==e.count?e.count:t.count
var a="tinymce_jsonp_"+n
t.callbacks[n]=function(o){r.remove(a)
delete t.callbacks[n]
e.callback(o)}
r.add(r.doc.body,"script",{id:a,src:e.url,type:"text/javascript"})
t.count++}}
var kz=qe(qe({},aU),{send:function(e){var t,r=0
var n=function(){if(!e.async||4===t.readyState||r++>1e4){e.success&&r<1e4&&200===t.status?e.success.call(e.success_scope,""+t.responseText,t,e):e.error&&e.error.call(e.error_scope,r>1e4?"TIMED_OUT":"GENERAL",t,e)
t=null}else lo.setTimeout(n,10)}
e.scope=e.scope||this
e.success_scope=e.success_scope||e.scope
e.error_scope=e.error_scope||e.scope
e.async=false!==e.async
e.data=e.data||""
kz.fire("beforeInitialize",{settings:e})
t=new XMLHttpRequest
t.overrideMimeType&&t.overrideMimeType(e.content_type)
t.open(e.type||(e.data?"POST":"GET"),e.url,e.async)
e.crossDomain&&(t.withCredentials=true)
e.content_type&&t.setRequestHeader("Content-Type",e.content_type)
e.requestheaders&&dr.each(e.requestheaders,(function(e){t.setRequestHeader(e.key,e.value)}))
t.setRequestHeader("X-Requested-With","XMLHttpRequest")
t=kz.fire("beforeSend",{xhr:t,settings:e}).xhr
t.send(e.data)
if(!e.async)return n()
lo.setTimeout(n,10)}})
var Nz=dr.extend
var Ez=function(){function e(e){this.settings=Nz({},e)
this.count=0}e.sendRPC=function(t){return(new e).send(t)}
e.prototype.send=function(e){var t=e.error,r=e.success
var n=Nz(this.settings,e)
n.success=function(e,a){e=xz.parse(e)
"undefined"===typeof e&&(e={error:"JSON Parse error."})
e.error?t.call(n.error_scope||n.scope,e.error,a):r.call(n.success_scope||n.scope,e.result)}
n.error=function(e,r){t&&t.call(n.error_scope||n.scope,e,r)}
n.data=xz.serialize({id:e.id||"c"+this.count++,method:e.method,params:e.params})
n.content_type="application/json"
kz.send(n)}
return e}()
var _z=function(){return function(){var e={}
var t=[]
var r={getItem:function(t){var r=e[t]
return r||null},setItem:function(r,n){t.push(r)
e[r]=String(n)},key:function(e){return t[e]},removeItem:function(r){t=t.filter((function(e){return e===r}))
delete e[r]},clear:function(){t=[]
e={}},length:0}
Object.defineProperty(r,"length",{get:function(){return t.length},configurable:false,enumerable:false})
return r}()}
var Tz
try{var Az="__storage_test__"
Tz=window.localStorage
Tz.setItem(Az,Az)
Tz.removeItem(Az)}catch(e){Tz=_z()}var Rz=Tz
var Dz={geom:{Rect:fz},util:{Promise:no,Delay:lo,Tools:dr,VK:jg,URI:AU,Class:gz,EventDispatcher:rU,Observable:aU,I18n:es,XHR:kz,JSON:xz,JSONRequest:Ez,JSONP:Sz,LocalStorage:Rz,Color:Cz,ImageUploader:xA},dom:{EventUtils:Au,Sizzle:Of,DomQuery:kc,TreeWalker:go,TextSeeker:Ms,DOMUtils:Oc,ScriptLoader:zc,RangeUtils:sh,Serializer:q_,StyleSheetLoader:vo,ControlSelection:Vg,BookmarkManager:Eg,Selection:ZE,Event:Au.Event},html:{Styles:hu,Entities:au,Node:pb,Schema:pu,SaxParser:_b,DomParser:D_,Writer:Mb,Serializer:Fb},Env:Zt,AddOnManager:ts,Annotator:Ng,Formatter:PA,UndoManager:MA,EditorCommands:FF,WindowManager:QT,NotificationManager:XT,EditorObservable:lU,Shortcuts:xU,Editor:LU,FocusManager:_y,EditorManager:JU,DOM:Oc.DOM,ScriptLoader:zc.ScriptLoader,PluginManager:YT,ThemeManager:GT,IconManager:PT,Resource:lz,trim:dr.trim,isArray:dr.isArray,is:dr.is,toArray:dr.toArray,makeMap:dr.makeMap,each:dr.each,map:dr.map,grep:dr.grep,inArray:dr.inArray,extend:dr.extend,create:dr.create,walk:dr.walk,createNS:dr.createNS,resolve:dr.resolve,explode:dr.explode,_addCacheSuffix:dr._addCacheSuffix,isOpera:Zt.opera,isWebKit:Zt.webkit,isIE:Zt.ie,isGecko:Zt.gecko,isMac:Zt.mac}
var Oz=dr.extend(JU,Dz)
var Bz=function(t){try{e.exports=t}catch(e){}}
var Pz=function(e){window.tinymce=e
window.tinyMCE=e}
Pz(Oz)
Bz(Oz)})()}).call(this,r("yLpj"),r("URgk").setImmediate)},URgk:function(e,t,r){(function(e){var n="undefined"!==typeof e&&e||"undefined"!==typeof self&&self||window
var a=Function.prototype.apply
t.setTimeout=function(){return new o(a.call(setTimeout,n,arguments),clearTimeout)}
t.setInterval=function(){return new o(a.call(setInterval,n,arguments),clearInterval)}
t.clearTimeout=t.clearInterval=function(e){e&&e.close()}
function o(e,t){this._id=e
this._clearFn=t}o.prototype.unref=o.prototype.ref=function(){}
o.prototype.close=function(){this._clearFn.call(n,this._id)}
t.enroll=function(e,t){clearTimeout(e._idleTimeoutId)
e._idleTimeout=t}
t.unenroll=function(e){clearTimeout(e._idleTimeoutId)
e._idleTimeout=-1}
t._unrefActive=t.active=function(e){clearTimeout(e._idleTimeoutId)
var t=e._idleTimeout
t>=0&&(e._idleTimeoutId=setTimeout((function(){e._onTimeout&&e._onTimeout()}),t))}
r("YBdB")
t.setImmediate="undefined"!==typeof self&&self.setImmediate||"undefined"!==typeof e&&e.setImmediate||this&&this.setImmediate
t.clearImmediate="undefined"!==typeof self&&self.clearImmediate||"undefined"!==typeof e&&e.clearImmediate||this&&this.clearImmediate}).call(this,r("yLpj"))},YBdB:function(e,t,r){(function(e,t){(function(e,r){"use strict"
if(e.setImmediate)return
var n=1
var a={}
var o=false
var i=e.document
var u
function f(e){"function"!==typeof e&&(e=new Function(""+e))
var t=new Array(arguments.length-1)
for(var r=0;r<t.length;r++)t[r]=arguments[r+1]
var o={callback:e,args:t}
a[n]=o
u(n)
return n++}function c(e){delete a[e]}function s(e){var t=e.callback
var n=e.args
switch(n.length){case 0:t()
break
case 1:t(n[0])
break
case 2:t(n[0],n[1])
break
case 3:t(n[0],n[1],n[2])
break
default:t.apply(r,n)}}function l(e){if(o)setTimeout(l,0,e)
else{var t=a[e]
if(t){o=true
try{s(t)}finally{c(e)
o=false}}}}function d(){u=function(e){t.nextTick((function(){l(e)}))}}function v(){if(e.postMessage&&!e.importScripts){var t=true
var r=e.onmessage
e.onmessage=function(){t=false}
e.postMessage("","*")
e.onmessage=r
return t}}function m(){var t="setImmediate$"+Math.random()+"$"
var r=function(r){r.source===e&&"string"===typeof r.data&&0===r.data.indexOf(t)&&l(+r.data.slice(t.length))}
e.addEventListener?e.addEventListener("message",r,false):e.attachEvent("onmessage",r)
u=function(r){e.postMessage(t+r,"*")}}function p(){var e=new MessageChannel
e.port1.onmessage=function(e){var t=e.data
l(t)}
u=function(t){e.port2.postMessage(t)}}function g(){var e=i.documentElement
u=function(t){var r=i.createElement("script")
r.onreadystatechange=function(){l(t)
r.onreadystatechange=null
e.removeChild(r)
r=null}
e.appendChild(r)}}function h(){u=function(e){setTimeout(l,0,e)}}var y=Object.getPrototypeOf&&Object.getPrototypeOf(e)
y=y&&y.setTimeout?y:e
"[object process]"==={}.toString.call(e.process)?d():v()?m():e.MessageChannel?p():i&&"onreadystatechange"in i.createElement("script")?g():h()
y.setImmediate=f
y.clearImmediate=c})("undefined"===typeof self?"undefined"===typeof e?this:e:self)}).call(this,r("yLpj"),r("8oxB"))}}])

//# sourceMappingURL=27-c-e5ac77ea7a.js.map