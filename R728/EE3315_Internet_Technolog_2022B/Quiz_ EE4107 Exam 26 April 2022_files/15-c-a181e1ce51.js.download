(window["canvasWebpackJsonp"]=window["canvasWebpackJsonp"]||[]).push([[15],{"/MKj":function(t,r,e){"use strict"
e.d(r,"a",(function(){return f}))
e.d(r,"b",(function(){return rt}))
var n=e("dI71")
var o=e("q1tI")
var i=e.n(o)
var u=e("17x9")
var s=e.n(u)
var a=s.a.shape({trySubscribe:s.a.func.isRequired,tryUnsubscribe:s.a.func.isRequired,notifyNestedSubs:s.a.func.isRequired,isSubscribed:s.a.func.isRequired})
var c=s.a.shape({subscribe:s.a.func.isRequired,dispatch:s.a.func.isRequired,getState:s.a.func.isRequired})
i.a.forwardRef
function p(t){var r
void 0===t&&(t="store")
var e=t+"Subscription"
var i=function(r){Object(n["a"])(u,r)
var i=u.prototype
i.getChildContext=function(){var r
return r={},r[t]=this[t],r[e]=null,r}
function u(e,n){var o
o=r.call(this,e,n)||this
o[t]=e.store
return o}i.render=function(){return o["Children"].only(this.props.children)}
return u}(o["Component"])
i.propTypes={store:c.isRequired,children:s.a.element.isRequired}
i.childContextTypes=(r={},r[t]=c.isRequired,r[e]=a,r)
return i}var f=p()
var d=e("JX7q")
var l=e("wx14")
var v=e("zLVn")
var h=e("2mql")
var b=e.n(h)
var y=e("QLaP")
var m=e.n(y)
var w=e("TOwV")
var O=null
var P={notify:function(){}}
function S(){var t=[]
var r=[]
return{clear:function(){r=O
t=O},notify:function(){var e=t=r
for(var n=0;n<e.length;n++)e[n]()},get:function(){return r},subscribe:function(e){var n=true
r===t&&(r=t.slice())
r.push(e)
return function(){if(!n||t===O)return
n=false
r===t&&(r=t.slice())
r.splice(r.indexOf(e),1)}}}}var g=function(){function t(t,r,e){this.store=t
this.parentSub=r
this.onStateChange=e
this.unsubscribe=null
this.listeners=P}var r=t.prototype
r.addNestedSub=function(t){this.trySubscribe()
return this.listeners.subscribe(t)}
r.notifyNestedSubs=function(){this.listeners.notify()}
r.isSubscribed=function(){return Boolean(this.unsubscribe)}
r.trySubscribe=function(){if(!this.unsubscribe){this.unsubscribe=this.parentSub?this.parentSub.addNestedSub(this.onStateChange):this.store.subscribe(this.onStateChange)
this.listeners=S()}}
r.tryUnsubscribe=function(){if(this.unsubscribe){this.unsubscribe()
this.unsubscribe=null
this.listeners.clear()
this.listeners=P}}
return t}()
var E="undefined"!==typeof i.a.forwardRef
var C=0
var N={}
function j(){}function T(t,r){var e={run:function(n){try{var o=t(r.getState(),n)
if(o!==e.props||e.error){e.shouldComponentUpdate=true
e.props=o
e.error=null}}catch(t){e.shouldComponentUpdate=true
e.error=t}}}
return e}function q(t,r){var e,i
void 0===r&&(r={})
var u=r,s=u.getDisplayName,p=void 0===s?function(t){return"ConnectAdvanced("+t+")"}:s,f=u.methodName,h=void 0===f?"connectAdvanced":f,y=u.renderCountProp,O=void 0===y?void 0:y,P=u.shouldHandleStateChanges,S=void 0===P||P,q=u.storeKey,R=void 0===q?"store":q,x=u.withRef,I=void 0!==x&&x,M=Object(v["a"])(u,["getDisplayName","methodName","renderCountProp","shouldHandleStateChanges","storeKey","withRef"])
var U=R+"Subscription"
var A=C++
var W=(e={},e[R]=c,e[U]=a,e)
var D=(i={},i[U]=a,i)
return function(r){m()(Object(w["isValidElementType"])(r),"You must pass a component to the function returned by "+h+". Instead received "+JSON.stringify(r))
var e=r.displayName||r.name||"Component"
var i=p(e)
var u=Object(l["a"])({},M,{getDisplayName:p,methodName:h,renderCountProp:O,shouldHandleStateChanges:S,storeKey:R,withRef:I,displayName:i,wrappedComponentName:e,WrappedComponent:r})
var s=function(e){Object(n["a"])(s,e)
function s(t,r){var n
n=e.call(this,t,r)||this
n.version=A
n.state={}
n.renderCount=0
n.store=t[R]||r[R]
n.propsMode=Boolean(t[R])
n.setWrappedInstance=n.setWrappedInstance.bind(Object(d["a"])(Object(d["a"])(n)))
m()(n.store,'Could not find "'+R+'" in either the context or props of "'+i+'". Either wrap the root component in a <Provider>, or explicitly pass "'+R+'" as a prop to "'+i+'".')
n.initSelector()
n.initSubscription()
return n}var a=s.prototype
a.getChildContext=function(){var t
var r=this.propsMode?null:this.subscription
return t={},t[U]=r||this.context[U],t}
a.componentDidMount=function(){if(!S)return
this.subscription.trySubscribe()
this.selector.run(this.props)
this.selector.shouldComponentUpdate&&this.forceUpdate()}
a.componentWillReceiveProps=function(t){this.selector.run(t)}
a.shouldComponentUpdate=function(){return this.selector.shouldComponentUpdate}
a.componentWillUnmount=function(){this.subscription&&this.subscription.tryUnsubscribe()
this.subscription=null
this.notifyNestedSubs=j
this.store=null
this.selector.run=j
this.selector.shouldComponentUpdate=false}
a.getWrappedInstance=function(){m()(I,"To access the wrapped instance, you need to specify { withRef: true } in the options argument of the "+h+"() call.")
return this.wrappedInstance}
a.setWrappedInstance=function(t){this.wrappedInstance=t}
a.initSelector=function(){var r=t(this.store.dispatch,u)
this.selector=T(r,this.store)
this.selector.run(this.props)}
a.initSubscription=function(){if(!S)return
var t=(this.propsMode?this.props:this.context)[U]
this.subscription=new g(this.store,t,this.onStateChange.bind(this))
this.notifyNestedSubs=this.subscription.notifyNestedSubs.bind(this.subscription)}
a.onStateChange=function(){this.selector.run(this.props)
if(this.selector.shouldComponentUpdate){this.componentDidUpdate=this.notifyNestedSubsOnComponentDidUpdate
this.setState(N)}else this.notifyNestedSubs()}
a.notifyNestedSubsOnComponentDidUpdate=function(){this.componentDidUpdate=void 0
this.notifyNestedSubs()}
a.isSubscribed=function(){return Boolean(this.subscription)&&this.subscription.isSubscribed()}
a.addExtraProps=function(t){if(!I&&!O&&!(this.propsMode&&this.subscription))return t
var r=Object(l["a"])({},t)
I&&(r.ref=this.setWrappedInstance)
O&&(r[O]=this.renderCount++)
this.propsMode&&this.subscription&&(r[U]=this.subscription)
return r}
a.render=function(){var t=this.selector
t.shouldComponentUpdate=false
if(t.error)throw t.error
return Object(o["createElement"])(r,this.addExtraProps(t.props))}
return s}(o["Component"])
if(E){s.prototype.UNSAFE_componentWillReceiveProps=s.prototype.componentWillReceiveProps
delete s.prototype.componentWillReceiveProps}s.WrappedComponent=r
s.displayName=i
s.childContextTypes=D
s.contextTypes=W
s.propTypes=W
return b()(s,r)}}var R=Object.prototype.hasOwnProperty
function x(t,r){return t===r?0!==t||0!==r||1/t===1/r:t!==t&&r!==r}function I(t,r){if(x(t,r))return true
if("object"!==typeof t||null===t||"object"!==typeof r||null===r)return false
var e=Object.keys(t)
var n=Object.keys(r)
if(e.length!==n.length)return false
for(var o=0;o<e.length;o++)if(!R.call(r,e[o])||!x(t[e[o]],r[e[o]]))return false
return true}var M=e("ANjH")
function U(t){return function(r,e){var n=t(r,e)
function o(){return n}o.dependsOnOwnProps=false
return o}}function A(t){return null!==t.dependsOnOwnProps&&void 0!==t.dependsOnOwnProps?Boolean(t.dependsOnOwnProps):1!==t.length}function W(t,r){return function(r,e){e.displayName
var n=function(t,r){return n.dependsOnOwnProps?n.mapToProps(t,r):n.mapToProps(t)}
n.dependsOnOwnProps=true
n.mapToProps=function(r,e){n.mapToProps=t
n.dependsOnOwnProps=A(t)
var o=n(r,e)
if("function"===typeof o){n.mapToProps=o
n.dependsOnOwnProps=A(o)
o=n(r,e)}false
return o}
return n}}function D(t){return"function"===typeof t?W(t,"mapDispatchToProps"):void 0}function _(t){return t?void 0:U((function(t){return{dispatch:t}}))}function B(t){return t&&"object"===typeof t?U((function(r){return Object(M["bindActionCreators"])(t,r)})):void 0}var k=[D,_,B]
function H(t){return"function"===typeof t?W(t,"mapStateToProps"):void 0}function K(t){return t?void 0:U((function(){return{}}))}var F=[H,K]
function J(t,r,e){return Object(l["a"])({},e,t,r)}function L(t){return function(r,e){e.displayName
var n=e.pure,o=e.areMergedPropsEqual
var i=false
var u
return function(r,e,s){var a=t(r,e,s)
if(i)n&&o(a,u)||(u=a)
else{i=true
u=a
false}return u}}}function V(t){return"function"===typeof t?L(t):void 0}function z(t){return t?void 0:function(){return J}}var Q=[V,z]
function X(t,r,e,n){return function(o,i){return e(t(o,i),r(n,i),i)}}function Y(t,r,e,n,o){var i=o.areStatesEqual,u=o.areOwnPropsEqual,s=o.areStatePropsEqual
var a=false
var c
var p
var f
var d
var l
function v(o,i){c=o
p=i
f=t(c,p)
d=r(n,p)
l=e(f,d,p)
a=true
return l}function h(){f=t(c,p)
r.dependsOnOwnProps&&(d=r(n,p))
l=e(f,d,p)
return l}function b(){t.dependsOnOwnProps&&(f=t(c,p))
r.dependsOnOwnProps&&(d=r(n,p))
l=e(f,d,p)
return l}function y(){var r=t(c,p)
var n=!s(r,f)
f=r
n&&(l=e(f,d,p))
return l}function m(t,r){var e=!u(r,p)
var n=!i(t,c)
c=t
p=r
if(e&&n)return h()
if(e)return b()
if(n)return y()
return l}return function(t,r){return a?m(t,r):v(t,r)}}function G(t,r){var e=r.initMapStateToProps,n=r.initMapDispatchToProps,o=r.initMergeProps,i=Object(v["a"])(r,["initMapStateToProps","initMapDispatchToProps","initMergeProps"])
var u=e(t,i)
var s=n(t,i)
var a=o(t,i)
false
var c=i.pure?Y:X
return c(u,s,a,t,i)}function Z(t,r,e){for(var n=r.length-1;n>=0;n--){var o=r[n](t)
if(o)return o}return function(r,n){throw new Error("Invalid value of type "+typeof t+" for "+e+" argument when connecting component "+n.wrappedComponentName+".")}}function $(t,r){return t===r}function tt(t){var r=void 0===t?{}:t,e=r.connectHOC,n=void 0===e?q:e,o=r.mapStateToPropsFactories,i=void 0===o?F:o,u=r.mapDispatchToPropsFactories,s=void 0===u?k:u,a=r.mergePropsFactories,c=void 0===a?Q:a,p=r.selectorFactory,f=void 0===p?G:p
return function(t,r,e,o){void 0===o&&(o={})
var u=o,a=u.pure,p=void 0===a||a,d=u.areStatesEqual,h=void 0===d?$:d,b=u.areOwnPropsEqual,y=void 0===b?I:b,m=u.areStatePropsEqual,w=void 0===m?I:m,O=u.areMergedPropsEqual,P=void 0===O?I:O,S=Object(v["a"])(u,["pure","areStatesEqual","areOwnPropsEqual","areStatePropsEqual","areMergedPropsEqual"])
var g=Z(t,i,"mapStateToProps")
var E=Z(r,s,"mapDispatchToProps")
var C=Z(e,c,"mergeProps")
return n(f,Object(l["a"])({methodName:"connect",getDisplayName:function(t){return"Connect("+t+")"},shouldHandleStateChanges:Boolean(t),initMapStateToProps:g,initMapDispatchToProps:E,initMergeProps:C,pure:p,areStatesEqual:h,areOwnPropsEqual:y,areStatePropsEqual:w,areMergedPropsEqual:P},S))}}var rt=tt()},ANjH:function(t,r,e){"use strict"
e.r(r)
e.d(r,"__DO_NOT_USE__ActionTypes",(function(){return s}))
e.d(r,"applyMiddleware",(function(){return h}))
e.d(r,"bindActionCreators",(function(){return l}))
e.d(r,"combineReducers",(function(){return f}))
e.d(r,"compose",(function(){return v}))
e.d(r,"createStore",(function(){return c}))
var n=e("VTBJ")
function o(t){return"Minified Redux error #"+t+"; visit https://redux.js.org/Errors?code="+t+" for the full message or use the non-minified dev environment for full errors. "}var i="function"===typeof Symbol&&Symbol.observable||"@@observable"
var u=function(){return Math.random().toString(36).substring(7).split("").join(".")}
var s={INIT:"@@redux/INIT"+u(),REPLACE:"@@redux/REPLACE"+u(),PROBE_UNKNOWN_ACTION:function(){return"@@redux/PROBE_UNKNOWN_ACTION"+u()}}
function a(t){if("object"!==typeof t||null===t)return false
var r=t
while(null!==Object.getPrototypeOf(r))r=Object.getPrototypeOf(r)
return Object.getPrototypeOf(t)===r}function c(t,r,e){var n
if("function"===typeof r&&"function"===typeof e||"function"===typeof e&&"function"===typeof arguments[3])throw new Error(o(0))
if("function"===typeof r&&"undefined"===typeof e){e=r
r=void 0}if("undefined"!==typeof e){if("function"!==typeof e)throw new Error(o(1))
return e(c)(t,r)}if("function"!==typeof t)throw new Error(o(2))
var u=t
var p=r
var f=[]
var d=f
var l=false
function v(){d===f&&(d=f.slice())}function h(){if(l)throw new Error(o(3))
return p}function b(t){if("function"!==typeof t)throw new Error(o(4))
if(l)throw new Error(o(5))
var r=true
v()
d.push(t)
return function(){if(!r)return
if(l)throw new Error(o(6))
r=false
v()
var e=d.indexOf(t)
d.splice(e,1)
f=null}}function y(t){if(!a(t))throw new Error(o(7))
if("undefined"===typeof t.type)throw new Error(o(8))
if(l)throw new Error(o(9))
try{l=true
p=u(p,t)}finally{l=false}var r=f=d
for(var e=0;e<r.length;e++){var n=r[e]
n()}return t}function m(t){if("function"!==typeof t)throw new Error(o(10))
u=t
y({type:s.REPLACE})}function w(){var t
var r=b
return t={subscribe:function(t){if("object"!==typeof t||null===t)throw new Error(o(11))
function e(){t.next&&t.next(h())}e()
var n=r(e)
return{unsubscribe:n}}},t[i]=function(){return this},t}y({type:s.INIT})
return n={dispatch:y,subscribe:b,getState:h,replaceReducer:m},n[i]=w,n}function p(t){Object.keys(t).forEach((function(r){var e=t[r]
var n=e(void 0,{type:s.INIT})
if("undefined"===typeof n)throw new Error(o(12))
if("undefined"===typeof e(void 0,{type:s.PROBE_UNKNOWN_ACTION()}))throw new Error(o(13))}))}function f(t){var r=Object.keys(t)
var e={}
for(var n=0;n<r.length;n++){var i=r[n]
false
"function"===typeof t[i]&&(e[i]=t[i])}var u=Object.keys(e)
false
var s
try{p(e)}catch(t){s=t}return function(t,r){void 0===t&&(t={})
if(s)throw s
var n=false
var i={}
for(var a=0;a<u.length;a++){var c=u[a]
var p=e[c]
var f=t[c]
var d=p(f,r)
if("undefined"===typeof d){r&&r.type
throw new Error(o(14))}i[c]=d
n=n||d!==f}n=n||u.length!==Object.keys(t).length
return n?i:t}}function d(t,r){return function(){return r(t.apply(this,arguments))}}function l(t,r){if("function"===typeof t)return d(t,r)
if("object"!==typeof t||null===t)throw new Error(o(16))
var e={}
for(var n in t){var i=t[n]
"function"===typeof i&&(e[n]=d(i,r))}return e}function v(){for(var t=arguments.length,r=new Array(t),e=0;e<t;e++)r[e]=arguments[e]
if(0===r.length)return function(t){return t}
if(1===r.length)return r[0]
return r.reduce((function(t,r){return function(){return t(r.apply(void 0,arguments))}}))}function h(){for(var t=arguments.length,r=new Array(t),e=0;e<t;e++)r[e]=arguments[e]
return function(t){return function(){var e=t.apply(void 0,arguments)
var i=function(){throw new Error(o(15))}
var u={getState:e.getState,dispatch:function(){return i.apply(void 0,arguments)}}
var s=r.map((function(t){return t(u)}))
i=v.apply(void 0,s)(e.dispatch)
return Object(n["a"])(Object(n["a"])({},e),{},{dispatch:i})}}}false},sINF:function(t,r,e){"use strict"
function n(t){return function(r){var e=r.dispatch,n=r.getState
return function(r){return function(o){if("function"===typeof o)return o(e,n,t)
return r(o)}}}}var o=n()
o.withExtraArgument=n
r["a"]=o}}])

//# sourceMappingURL=15-c-a181e1ce51.js.map