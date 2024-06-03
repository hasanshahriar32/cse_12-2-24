const arr = [4, 6, 8, 9, 10, 12, 14, 16, 18, 20];
const count = arr.length;
let sum = 0;
function make_avg(arr, count) {
  for (i = 0; i < count; i++) {
    sum = sum + arr[i];
  }
  return sum;
}
console.log(make_avg(arr, count));
