console.log("starting the code!");
// process.stdin.on("data", (input)=>{
//     var decimalInteger = input.toString().trim()
//     var position = decimalInteger.indexOf('.');
//     console.log(position)
// })

// LAST DIGIT
// process.stdin.on("data", (input) =>{
//     let a = input.toString().trim();
//     let last = a.charAt(a.length - 1);
//     console.log(last);
// })

// SWAPPING NUMBERS
// process.stdin.on("data", (input) =>{
// let [a,b] = input.toString().trim().split(" ");
// let temp = b;
// b = a;
// a =temp;
// [a,b] =[b,a];
// console.log("After Swapping : "+a+" "+b);
// })

// swapping without third element

// LEFT AND RIGHT SHIFT
// process.stdin.on("data", (input) =>{
//     var a = input.toString();
//     let num = parseInt(a)
//     const leftShift = num >>1;
//     const rightShift = num <<1;
//     console.log(leftShift)
//     console.log(rightShift)
// })

// ODD OR EVEN PROGRAM
// process.stdin.on("data", (input) =>{
//     var a = input.toString();
//     let num = parseInt(a);
//     if(num%2==0){
//         console.log("even");
//     }
//     else{
//         console.log("odd");
//     }
// })

// PERIMETER AND AREA OF CIRCLE
// process.stdin.on("data", (input)=>{
//     const pi = Math.PI;
//     let a = input.toString().trim();
//     let radius = parseInt(a);
//     let perimeter = pi*2*radius;
//     let area = pi*radius*radius;
//     console.log("Perimeter : " + perimeter.toFixed(4))
//     console.log("area : "+ area.toFixed(4))
// })

// ASCII EQUIVALENT
// process.stdin.on("data", (input)=>{
//     let a = input.toString().trim();
//     let ans = a.charCodeAt(0);
//     console.log("ASCII equivalent : " +ans);
// })

// ELEGIBLE AGE
// process.stdin.on("data", (input)=>{
//     let a = input.toString().trim()
//     let n = parseInt(a);
//     if(n<18){console.log("not Elegible")}
//     else{console.log("elegible")}
// })

// NUMBER GREATER THAN 100
// process.stdin.on("data", (input)=>{
//     let a = input.toString().trim();
//     let num = parseInt(a);
//     if(num<100){
//         console.log("false");
//     }
//     else{
//         console.log("true");
//     }
// })

// CHECK VOWEL OR NOT
// process.stdin.on("data", (input)=>{
//     let a = input.toString().trim();
//     if(a == "a" || a=="e"||a=="i" || a=="o" ||a=="u"){
//         console.log("True");
//     }
//     else{
//         console.log("false");
//     }
// })

// POSITIVE, NEGATIVE, OR NON ZERO
// process.stdin.on("data", (input) =>{
//     let a = input.toString().trim();
//     let n = parseInt(a);
//     if(n>0){
//         console.log("positive");
//     }
//     else if(n==0){
//         console.log("neither positive nor negative");
//     }
//     else{
//         console.log("negative");
//     }
// })

// DIVISIBLE BY 3 AND 5 BOTH
// process.stdin.on("data", (input) =>{
//     let a = input.toString().trim();
//     let num = parseInt(a);
//     if(num%15==0){
//         console.log("divivsible")
//     }
//     else{
//         console.log("not divisible")
//     }
// })

// CHECKING FIRST AND LASR LETTER ARE VOWEL OR NOT
// process.stdin.on("data", (input) =>{
//     let a = input.toString().trim();
//     let first = a.charAt(0);
//     let second = a.charAt(a.length -1);
//     console.log(first, second)
// })

// QUADRATIC EQUATION
// process.stdin.on("data", (input) =>{
//     let [a,b,c] = input.toString().trim().split(" ");
//     let [n1, n2, n3]= [parseInt(a), parseInt(b), parseInt(c)];
//     if(n1 ==0){
//         console.log("Invalid number");
//         return;
//     }
//     let d = ((n2*n2)-4*n1*n3)**1/2;
//     if(d==0) console.log("real and equal");
//     if(d>0) console.log("real and distinct");
//     if(d<0) console.log("imaginary roots");
// })

// Greatest of three numbers
// process.stdin.on("data",(input)=>{
//     let [a,b,c,d] = input.toString().trim().split('\n');
//     let[n1, n2, n3, n4] = [parseInt(a), parseInt(b), parseInt(c), parseInt(d)];
//     let great = Math.max(n1, n2, n3, n4);
//     console.log(great);
// })

// DAYS OF THE WEEK
// process.stdin.on("data", (input) =>{
//     let a = input.toString().trim()
//     let num = parseInt(a);
//     var days = ["monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"];
//     console.log(days[num-1]);
// })

// PRINT DAY IN MONTH
// process.stdin.on("data", (input) => {
//   let a = input.toString().trim();
//   let num = parseInt(a);
//   var large = [1, 3, 5, 7, 8, 10, 12];
//   if (num > 12 || num < 1) {
//     console.log("Invalid Number");
//     return;
//   }
//   if (num == 2) {
//     console.log("28");
//     return;
//   }
//   var isLarge = false;
//   for (i = 0; i < 7; i++) {
//     if (large[i] == num) {
//       isLarge = true;
//       console.log("31");
//     }
//   }
//   if (isLarge == false) console.log("30");
// });

// MOVIE CHARGE CALCULATOR

// process.stdin.on("data", (input) =>{
//     let [a,b] = input.toString().trim().split(" ");
//     var [n1, n2] = [parseInt(a), parseInt(b)];
//     var sum =0;
//     if(n1<12) sum = sum+5;
//     else if(n1>60) sum =sum+6;
//     else if(n1>12 && n1 <60) sum = sum+10;
//     else console.log("Invalid Age");
//     if(n2 <12) sum = sum-2;
//     else if(n2 > 18) sum = sum+1;
//     console.log(sum);

// })

// VALID TRIANGLE
// process.stdin.on("data", (input) =>{
//     var [a,b,c] = input.toString().trim().split(" ");
//     var[ag1, ag2, ag3] = [parseInt(a), parseInt(b), parseInt(c)];
//     if(ag1+ag2+ag3 ==180) console.log("Triangle")
//     else console.log("Not Vlid Triangle")
// })

// ROOTS IF QUADRATIC EQUATION
// process.stdin.on("data", (input) =>{
//     var [a,b,c] = input.toString().trim().split(" ");
//     var[n1, n2, n3] = [parseInt(a), parseInt(b), parseInt(c)];
//     var d = ((n2*n2)-(4*n1*n3));
//     var r1 = (-n2-Math.sqrt(d))/2*n1;
//     var r2 = (-n2-Math.sqrt(d))/2*n1;
//     console.log("Root 1 :", r1, " ", "Root 2: "+ r2);
// })

// PRINITING FIRST N NATURAL NUMBERS
// process.stdin.on("data", (input) =>{
//     var a = input.toString().trim();
//     var n = parseInt(a);
//     var output ="";
//     for( i =0;i<=n;i++){
//         output+=i;
//         output+=" ";
//     }
//     console.log(output)
// })

// PRINTING VOWELS OF A WORD
// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var output ="";
//     for(i=0;i<a.length;i++){
//         if(a[i] == 'a' ||a[i] == 'e' ||a[i] == 'i' ||a[i] == 'o' ||a[i] == 'u' ||a[i] == 'A' ||a[i] == 'E' ||a[i] == 'I' ||a[i] == 'O' ||a[i] == 'U'){
//             output+=a[i];
//             output+=" ";
//         }
//     }
//     console.log(output);
// })


// PROGRAM TO PRINT FACTORIAL OF A NUMBER
// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var n = parseInt(a);
//     var prod = 1;
//     if (n ===0) {
//         console.log("1");
//         return;
//     }
//     while(n>0){
//         prod *= n;
//         n--;
//     }
//     console.log(prod);
// })


// FINDING THE TARGET ELEMENT IN THE ARRAY
// process.stdin.on("data", (input)=>{
//     var [a,b,c] = input.toString().trim().split('\n');
//     var[n1, n2] = [parseInt(a), parseInt(c)];
//     // var arr = b.split(" ");
//     console.log(n1, n2, b);
// })


// Checking if ALPHABET or not
// process.stdin.on("data",(input)=>{
//     var a = input.toString().trim();
//     var index = a.charCodeAt(0);
//     if(index >=65 && index <=122){
//         console.log("Alpha")
//     }
//     else{
//         console.log("not Alpha")
//     }
// })

// EQUAL NO OF ZERO ONE AND TWO
// process.stdin.on("data",(input)=>{
//     var a = input.toString().trim();
//     var z=0,o=0,t=0;
//     for(i=0;i<a.length;i++){
//         if(a[i]==='0'){
//             z+=1;
//         }
//         else if(a[i]==='1'){
//             o+=1;
//         }
//         else{
//             t+=1;
//         }
//     }
//     if(o==z && z==t){
//         console.log("yes")
//     }
//     else{
//         console.log("no")
//     }
// })

// NUMBER OF PRIME IN ARR
// process.stdin.on("data",(input)=>{
//     var a = input.toString().trim();
//     var arr = a.split(" ");
//     var count=0;
//     for(i=0;i<arr.length;i++){
//         var num = parseInt(arr[i]);
//         var fac=0;
//         for(j=0;j<=num;j++){
//             if(num%j==0){
//                 fac++;
//             }
//         }
//         if(fac==2){
//             count++;
//         }
//     }
//     console.log(count);
// })
// /[^\w\s]/gi

// REMOVING SPECIAL CHAR
// process.stdin.on("data",(input)=>{
//     var a = input.toString().trim();
//     var output = a.replace(/[^\w\s]/gi, '');
//     console.log(output);
// })

// FIZZ BUZZ PROGRAM
// process.stdin.on("data", (input)=>{
//     var a = input.toString();
//     var i = parseInt(a);
//     var output="";
//     for(n=1;n<=i;n++){
//         if(n%15==0){
//             output+="FizzBuzz";
//             output+=" ";
//         }
//         else if(n%3==0 && n%5!=0){
//             output+="Fizz";
//             output+=" ";
//         }
//         else if(n%5==0 && n%3!=0){
//             output+="Buzz";
//             output+=" ";
//         }
//         else{
//             output+=n;
//             output+=" ";

//         }
//     }
//     console.log(output)
// })

// FIBONACCI SERIES
// function fibonacci(num) {
//     if(num==1){
//         return 0;
//     }
//     else if(num==2){
//         return 1;
//     }
//     else{
//         return (fibonacci(num-1)+fibonacci(num-2));
//     }
// }
// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var n = parseInt(a);
//     console.log("Fibonacci(5): " + fibonacci(n));
    
// })


// PALINDROME NUMBER
// process.stdin.on("data", (input)=>{
//     var a= input.toString().trim();
//     var output="";
//     for(i=0;i<a.length;i++){
//         output+=a[a.length-i-1];
//     }
//     console.log( a===output);
// })

// ARMSTRONG NUMBER
// process.stdin.on("data", (input)=>{
//     var a= input.toString().trim();
//     let n = a.length;
//     var sum=0;
//     for(i=0;i<n;i++){
//         var num = parseInt(a[i]);
//         sum+=num**n;
//     }
//     console.log(sum==a);
// })


// PATTERN PRINTING
// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var n = parseInt(a);
//     for(i =0;i<n;i++){
//         var output="";
//         for(j=0;j<=n-i-1;j++){
//             output+=n-i;
//         }
//         console.log(output);
//     }
// })

// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var b= parseInt(a);
//     for(i =0;i<b;i++){
//         output="";
//         for(j=0;j<=i;j++){
//             output+=j+1;
//         }
//         console.log(output)
//     }
// })

// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var b = parseInt(a);
//     var sum=0;
//     for(i=0;i<b;i++){
//         var output="";
//         for(j=0;j<=i;j++){
//             sum++;
//             output+=sum;
//             output+=" ";
//         }
//         console.log(output);
//     }
// })


// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim();
//     var b = parseInt(a);
//     var output="";
//     for(i=0;i<b;i++){
//         for(j=b-i-1;j>=i;j--){
//             output+="$";
//         }
//         for(j=0;j<=i;j++){
//             output+="*";
//         }
//         console.log(output);
//     }
// })


// MATRIX INPUT
// process.stdin.on("data", (input)=>{
//     var data = input.toString().trim().split('/n');
//     var def = data[0];
//     var[a,b] = [parseInt(def[0]), parseInt(def[1])];
//     console.log(a,b)

// }
// )

// process.stdin.on("data", (input)=>{
//     var data = input.toString().trim().split('\n');
//     var def = data[0].split(" ");
//     var row = parseInt(def[0])
//     var col = parseInt(def[1])
//     matrix1=[];
//     matrix2 = [];
//     for(i =1;i<row+1;i++){
//         var rd = data[i].split("");
//         matrix1.push(rd);
//     }
//     for(i =row;i<data.lengthg;i++){
//         var rd = data[i].split("");
//         matrix1.push(rd);
//     }

// }
// )


// Mtrix Subtraction
// process.stdin.on("data", (input)=>{
//     var a  = input.toString().trim();
//     var demen = a[0].split(" ");
//     var [r,c] = [parseInt(demen[0]), demen[1]];
//     var count =0;
//     for(i=1;i<a.length;i++){
//         var arr = a[i];
//         var arr2 = a[r+i];
//         if(arr==arr2){
//             count+=1;
//         }
//     }
//     console.log(count ==r);
// })

// CREATING DUPLICATE ARRAY 
// process.stdin.on("data",(input)=>{
//     var a = input.toString().trim().split('\n');
//     var n = a[0];
//     var arr = a[1].split(" ");
//     map= [];
//     for(i=0;i<n;i++){
//         map.push(arr[i]);
//     }
//     console.log(map) ;
//     console.log("done")
// })


// SUBARRAYS
// process.stdin.on("data", (input)=>{
//     var a = input.toString().trim().split('/n');
//     var n= parseInt(a[0]);
//     var arr = a[1].split(" ");
//     ans =[];
//     for(start =0; start <n;start ++){
//         for(end = start;end<n;end++){
//             map =[];
//             for(i =start;i<=end;i++){
//                 map.push(arr[i]);
//             }
//             console.log(map)
//             console.log('\n');
//         }
//     }
// })


// PRINITING ROATTED MATRIX
// process.stdin.on("data", (input)=>{
//     var a = input.toString().
// })

// let i=5;
// while(i>0){ 
//     console.log("hello");
//     i--;
// }
// if(true) console.log("anc")

