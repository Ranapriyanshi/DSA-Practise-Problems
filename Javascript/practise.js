// let arr =[100,20,5,71,32];
// arr.sort(function (a,b){
//    return a-b
// });
// console.log(arr)

const skills= 108;
const income = {
    monthly (){
        return this.skills * 2
    },
    yearly : ()=>{
        return this.skills * 2
    }
}
console.log(skills);
console.log(this)
console.log(income.monthly());
console.log(income.yearly());