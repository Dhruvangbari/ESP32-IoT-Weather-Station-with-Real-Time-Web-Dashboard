async function updateData(){

let response = await fetch('/data');
let data = await response.json();

document.getElementById("temp").innerText = data.temperature;
document.getElementById("hum").innerText = data.humidity;

}

setInterval(updateData,2000);
