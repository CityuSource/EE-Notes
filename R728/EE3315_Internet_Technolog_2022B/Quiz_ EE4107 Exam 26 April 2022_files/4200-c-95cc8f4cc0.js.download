(window["canvasWebpackJsonp"]=window["canvasWebpackJsonp"]||[]).push([[4200],{TMMl:function(t,e,n){"use strict"
n.d(e,"a",(function(){return g}))
n.d(e,"b",(function(){return v}))
var o=n("Y/W1")
var i=n.n(o)
var a=n("ouhR")
var s=n.n(a)
var r=n("HGxv")
const c=Object(r["useScope"])("subnav_menu_toggle")
const d={hide:{get default(){return c.t("Hide Navigation Menu")},get account(){return c.t("Hide Account Navigation Menu")},get admin(){return c.t("Hide Admin Navigation Menu")},get courses(){return c.t("Hide Courses Navigation Menu")},get groups(){return c.t("Hide Groups Navigation Menu")}},show:{get default(){return c.t("Show Navigation Menu")},get account(){return c.t("Show Account Navigation Menu")},get admin(){return c.t("Show Admin Navigation Menu")},get courses(){return c.t("Show Courses Navigation Menu")},get groups(){return c.t("Show Groups Navigation Menu")}}}
const l=function(t=window.location.pathname){const e=document.body.classList.contains("course-menu-expanded")
const n=e?"hide":"show"
let o=d[n].default
t.match(/^\/profile/)?o=d[n].account:t.match(/^\/accounts/)?o=d[n].admin:t.match(/^\/courses/)?o=d[n].courses:t.match(/^\/groups/)&&(o=d[n].groups)
const i=document.getElementById("courseMenuToggle")
i.setAttribute("aria-label",o)
i.setAttribute("title",o)}
var u=l
const h=1200
const m=()=>{const t=s()("#section-tabs li a")
if(t.length){const e=s()("body").hasClass("course-menu-expanded")||s()(document).width()>=h-15?0:-1
t.attr("tabIndex",e)}}
const f=()=>{const t=s()("#left-side #sticky-container")
const e=parseInt(t.css("padding-bottom"),10)
const n=parseInt(t.css("padding-top"),10)
const o=t.get(0).scrollHeight-e-n
o>t.height()?t.addClass("has-scrollbar"):t.removeClass("has-scrollbar")}
const p=()=>{const t=s()("body").hasClass("course-menu-expanded")
s.a.ajaxJSON("/api/v1/users/self/settings","PUT",{collapse_course_nav:!t})}
const g=()=>{const t=s()("#left-side #sticky-container").get(0)
if(t){s()(f)
s()(window).on("resize",i.a.debounce(f,20))}s()(m)
s()(window).on("resize",i.a.debounce(m,50))
s()("body").on("click","#courseMenuToggle",t?()=>{v()
f()
p()}:()=>{v()
p()})}
const v=()=>{s()("body").toggleClass("course-menu-expanded")
u()
s()("#left-side").css({display:s()("body").hasClass("course-menu-expanded")?"block":"none"})
m()}},bh89:function(t,e,n){"use strict"
n.r(e)
var o=n("ouhR")
var i=n.n(o)
var a=n("qqwe")
n("Dh7j")
n("oa+I")
n("aq8L")
i()(document).ready((function(){i()("#floating_reminders").draggable()
i()(".show_reminders_link").click((function(t){t.preventDefault()
i()(this).blur()
const e=i()("#floating_reminders")
const n=e.clone()
n.children().css("visibility","hidden")
const o=i()("#reminders_icon").offset()
const a=i()("#floating_reminders").offset().top
e.after(n)
n.css({width:20,height:20,left:o.left,top:o.top-a,opacity:0})
e.css("visibility","hidden").css("left","")
n.animate({top:e.css("top"),left:e.css("left"),width:e.width(),height:e.height(),opacity:1},"slow",(function(){i()(this).remove()
e.css("visibility","visible")
e.find("a:not(.hide_reminders_link):visible:first").focus()
i()("#reminders_icon").hide()}))
e.find(".update_session_url").attr("href")}))
i()(".hide_reminders_link").click((function(t){t.preventDefault()
const e=i()(this).parents("#floating_reminders")
const n=e.clone()
e.after(n).css("left",-2e3)
n.children().css("visibility","hidden")
const o=i()("#reminders_icon").show().offset()
const a=n.offset().top
n.animate({width:20,height:20,left:o.left,top:o.top-a,opacity:0},"slow",(function(){i()(this).remove()}))
e.find(".update_session_url").attr("href")}))
i()(".drop_held_context_link").click((function(t){t.preventDefault()
const e=i()(this).parents(".reminder")
e.confirmDelete({url:i()(this).attr("href"),message:"Are you sure you want to drop this "+e.find(".item_type").text()+"?",success(t){i()(this).fadeOut("fast",(function(){i()(this).remove()
0===i()("#floating_reminders .reminder").length&&i()("#floating_reminders").fadeOut("fast",(function(){i()(this).remove()
i()("#reminders_icon").remove()}))}))}})}))}))
n("cFkJ")
var s=n("gI0r")
function r(t){t.data("handled",true)
const e=t.data("url")||t.attr("href")
const n=t.data("method")
const o=t.attr("target")
const a=i()(`<form method="post" action="${Object(s["a"])(e)}"></form>`)
const r=`\n    <input name="_method" value="${Object(s["a"])(n)}" type="hidden" />\n    <input name="authenticity_token" type="hidden" />\n  `
o&&a.attr("target",o)
a.hide().append(r).appendTo("body").submit()}function c(t){const e=t.data("confirm")
if(!e)return true
return confirm(e)}i()(document).delegate("a[data-confirm], a[data-method], a[data-remove]","click",(function(t){const e=i()(this)
if(e.data("handled")||!c(e))return false
if(e.data("remove")){d(e)
return false}if(e.data("method")){r(e)
return false}}))
function d(t){const e=t.data("remove")
let n=t
const o=t.data("url")
const a=t.closest(":ui-popup").popup("option","trigger").data("KyleMenu")
a&&a.opts.appendMenuTo&&(n=a.$placeholder)
const s=n.closest(e)
s.bind({beforeremove(){s.hide()},remove(){s.remove()}})
s.trigger("beforeremove")
const r=()=>s.trigger("remove")
const c=()=>s.show()
o?i.a.ajaxJSON(o,"DELETE",{},r,c):r()}var l=n("Nx6n")
i()(document).on("mousedown click keydown",".al-trigger",(function(t){const e=i()(this)
if(e.data("kyleMenu"))return
let n=i.a.extend({noButton:true},e.data("kyleMenuOptions"))
e.data("append-to-body")&&(n.appendMenuTo="body")
n=i.a.extend(n,{popupOpts:{position:{my:e.data("popup-my"),at:e.data("popup-at"),within:e.data("popup-within")}}})
new l["a"](e,n)
e.trigger(t)}))
n("897F")
function u(t){return function(){let e
const n=i()(this)
if(!(e=n.data("textWhileTarget"+t)))return
const o="textWhileTarget"+("Hidden"===t?"Shown":"Hidden")
const a=n.data(o)
a||n.data(o,n.text())
n.text(e)}}function h(t,e,n){let o
null==e&&(e=t.is(":ui-dialog:hidden")||"true"!==t.attr("aria-expanded"))
const a=i()(`[aria-controls*=${t.attr("id")}]`)
a.filter((function(){return i()(this).data("hideWhileTargetShown")})).toggle(!e)
if(n&&void 0!==n.attr("aria-expanded")){n.attr("aria-expanded",!("true"===n.attr("aria-expanded")))
t.toggle("true"===n.attr("aria-expanded"))}else t.attr("aria-expanded",""+e).toggle(e)
if(t.is(":ui-dialog")||(o=t.data("turnIntoDialog"))){if(o&&e){o=i.a.extend({autoOpen:false,close(){h(t,false)}},o)
t.dialog(o).fixDialogButtons()}if(e){if(t.dialog("option").responsive){const e=t.dialog("option").width
if(e&&e>320&&!window.matchMedia(`(min-width: ${e}px)`).matches){t.dialog("option","width",320)
t.removeClass("form-horizontal")}}t.dialog("open")
t.data("read-on-open")&&t.dialog("widget").attr("aria-live","assertive").attr("aria-atomic","true")}else t.dialog("isOpen")&&t.dialog("close")}a.each(u(e?"Shown":"Hidden"))}const m={bind(){i()(document).on("click change keyclick",".element_toggler[aria-controls]",(function(t){let e
const n=i()(this)
if(n.is('input[type="checkbox"]')){if("click"===t.type)return
e=n.prop("checked")}"click"===t.type&&t.preventDefault()
let o=n.closest(".user_content")
o.length||(o=i()(document.body))
const a=o.find("#"+n.attr("aria-controls").replace(/\s/g,", #"))
a.length&&h(a,e,n)
const s=n.find('i[class*="icon-mini-arrow"].auto_rotate')
if(s.length){s.toggleClass("icon-mini-arrow-down")
s.toggleClass("icon-mini-arrow-right")}}))}}
m.bind()
const f=13
i()(document).on("keydown",".ic-Super-toggle__input",t=>{t.which===f&&i()(t.target).click()})
var p=n("HGxv")
var g=n("M+ds")
n("4fRt")
const v=Object(p["useScope"])("instructure_inline_media_comment")
const b={buildMinimizerLink:()=>i()(`<a href="#" style="font-size: 0.8em;">\n      ${Object(s["a"])(v.t("links.minimize_embedded_kaltura_content","Minimize embedded content"))}\n    </a>`),buildCommentHolder:t=>i()('<div><div class="innerholder" tabindex="-1" style="margin-bottom: 15px;"></div></div>'),getMediaCommentId(t){let e
let n=t.data("media_comment_id")||t.find(".media_comment_id:first").text()
n||(e=t.attr("id"))
e&&e.match(/^media_comment_/)&&(n=e.substring(14))
return n},collapseComment(t){O(t.find("video,audio").data("mediaelementplayer"),t=>t.pause())
t.remove()
Object(g["a"])("hide_embedded_content","hide_media")}}
const _=t=>{i()(t.target).find("div.mejs-audio").focus()}
const w=300
const y=t=>{const e=t.closest("td")
return e.length>0}
const k=t=>{const e=t.closest("td").css("width").replace("px","")
return e<w}
const x=t=>y(t)&&k(t)
const M=t=>{const e=t.closest("td")
const n=e.css("width")
e.data("orig-width",n)
e.css("width",w+"px")}
i()(document).on("click","a.instructure_inline_media_comment",Object(a["a"])((function(){if(!INST.kalturaSettings){alert(v.t("alerts.kaltura_disabled","Kaltura has been disabled for this Canvas site"))
return}const t=i()(this)
let e="video"
const n=b.getMediaCommentId(t)
const o=b.buildCommentHolder(t)
x(t)&&M(t)
t.after(o)
t.hide();("audio"===t.data("media_comment_type")||t.is(".audio_playback, .audio_comment, .instructure_audio_link"))&&(e="audio")
o.children("div").mediaComment("show_inline",n,e,t.data("download")||t.attr("href"))
const s=b.buildMinimizerLink()
s.appendTo(o).click(Object(a["a"])(()=>{const e=t.closest("td")
t.show().focus()
e.css("width",e.data("orig-width"))
b.collapseComment(o)}))
Object(g["a"])("show_embedded_content","show_media")
o.find(".innerholder").css("outline","none")
o.find(".innerholder").on("focus",_)})))
function O(t,e){return"undefined"!==typeof t&&null!==t?e(t):void 0}if(ENV.ping_url){const t=setInterval(()=>{document.hidden||i.a.post(ENV.ping_url).fail(e=>{401===e.status&&clearInterval(t)})},18e4)}var S=n("3lLS")
var C=n.n(S)
const N=Object(p["useScope"])("broken_images")
function j(t){t.addEventListener("error",t=>{const e=t.currentTarget
const n=()=>e.classList.add("broken-image")
e.src?fetch(e.src).then(t=>{if(403===t.status){e.src="/images/svg-icons/icon_lock.svg"
e.alt=N.t("Locked image")
e.width=100
e.height=100}else n()},n):n()})}function H(){Array.from(document.querySelectorAll('img:not([src=""])')).forEach(j)}C()(H)
const T=".lti-thumbnail-launch"
function I(t){t.preventDefault()
A.launch(i()(t.target).closest(T))}class E{constructor(){i()(document.body).delegate(T,"click",I)}launch(t){const e=JSON.parse(t.attr("target"))
const n=i()("<iframe/>",{src:t.attr("href"),allowfullscreen:"",width:e.displayWidth||500,height:e.displayHeight||500})
t.replaceWith(n)}}const A=new E(T)
function L(){document.querySelectorAll(".user_content").forEach(t=>t.querySelectorAll("*").forEach(t=>{const e=getComputedStyle(t)
"fixed"===e.position&&(t.style.position="relative")}))}const D=new MutationObserver((function(t){t.find(t=>t.addedNodes.length>0)&&L()}))
const z=document.getElementById("content")
z&&D.observe(z,{childList:true,subtree:true})
const W=document.getElementById("right-side")
W&&D.observe(W,{childList:true,subtree:true})
C()(()=>{L()})
var q=n("TMMl")
Object(q["a"])()
ENV.page_view_update_url&&n.e(4262).then(n.bind(null,"4HNs"))
i()("#skip_navigation_link").on("click",Object(a["a"])((function(){i()(i()(this).attr("href")).attr("tabindex",-1).focus()})))}}])

//# sourceMappingURL=4200-c-95cc8f4cc0.js.map