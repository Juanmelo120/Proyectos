
document.getElementById("display-username").textContent =
  localStorage.getItem("carbonUsername") || "Usuario";


document.getElementById("transport").addEventListener("input", function () {
  document.getElementById("transport-value").textContent = `${this.value} km`;
});

document.getElementById("energy").addEventListener("input", function () {
  document.getElementById("energy-value").textContent = `${this.value} kWh`;
});

document.getElementById("food").addEventListener("input", function () {
  document.getElementById("food-value").textContent = `${this.value} veces`;
});

document.getElementById("car-usage").addEventListener("input", function () {
  document.getElementById("car-usage-value").textContent = `${this.value} veces`;
});

document.getElementById("car-efficiency").addEventListener("input", function () {
  document.getElementById("car-efficiency-value").textContent = `${this.value} veces`;
});

document.getElementById("public-transport").addEventListener("input", function () {
  document.getElementById("public-transport-value").textContent = `${this.value} veces`;
});

document.getElementById("calculate-btn").addEventListener("click", function () {

  const transport = parseInt(document.getElementById("transport").value);
  const energy = parseInt(document.getElementById("energy").value);
  const food = parseInt(document.getElementById("food").value);
  const carKm = parseFloat(document.getElementById('car-usage').value);
  const carEfficiency = parseFloat(document.getElementById('car-efficiency').value);
  const publicTransportKm = parseFloat(document.getElementById('public-transport').value);


  const transportFootprint = transport * 0.2 * 52; // 0.2 kg CO2 por km, 52 semanas
  const energyFootprint = energy * 0.5 * 12; // 0.5 kg CO2 por kWh, 12 meses
  const foodFootprint = food * 2 * 52; // 2 kg CO2 por comida con carne, 52 semanas
  const cars = carKm * carEfficiency * 2.31 * 52 // Gasolina emite ~2.31 kg CO2 por litro
  const public = publicTransportKm * 0.1 * 52 // Transporte público emite ~0.1 kg CO2 por km

  const totalFootprint = Math.round(
    transportFootprint + energyFootprint + foodFootprint + cars + public
  );


  document.getElementById("carbon-footprint").textContent = totalFootprint;

 
  let ratingText = "";
  let ratingColor = "";

  if (totalFootprint <= 3000) {
    ratingText = "Excelente! Tu huella de carbono es muy baja.";
    ratingColor = "#2e7d32";
  } else if (totalFootprint > 3000 && totalFootprint <= 6000) {
    ratingText = "Buena. Estás por debajo del promedio.";
    ratingColor = "#7cb342";
  } else if (totalFootprint > 6000 && totalFootprint <= 10000) {
    ratingText = "Promedio. Hay espacio para mejorar.";
    ratingColor = "#fbc02d";
  } else if(totalFootprint > 15000) {
    ratingText = "Alta. Considera hacer cambios para reducir tu impacto.";
    ratingColor = "#d32f2f";
  }

  document.getElementById(
    "rating"
  ).innerHTML = `<p style="color: ${ratingColor}; font-weight: bold;">${ratingText}</p>`;


  const tipsList = document.getElementById("tips");
  tipsList.innerHTML = "";

  if (transport > 200) {
    tipsList.innerHTML +=
      "<li>Considera usar transporte público, bicicleta o compartir auto para reducir tus emisiones por transporte.</li>";
  }

  if (energy > 500) {
    tipsList.innerHTML +=
      "<li>Apaga los electrodomésticos cuando no los uses y considera cambiar a bombillas LED para reducir tu consumo de energía.</li>";
  }

  if (food > 10) {
    tipsList.innerHTML +=
      "<li>Reducir tu consumo de carne, especialmente carne roja, puede disminuir significativamente tu huella de carbono.</li>";
  }

  if (carKm > 300) {
    tipsList.innerHTML += 
      '<li><strong>Transporte:</strong> Considera usar transporte público, bicicleta o compartir auto. Cada 50 km menos que conduces a la semana reduces ~500 kg CO2 al año.</li>';
  }


  tipsList.innerHTML +=
    "<li>Planta árboles o apoya iniciativas de reforestación para compensar parte de tus emisiones.</li>";
  tipsList.innerHTML +=
    "<li>Reduce, reusa y recicla para minimizar tu generación de residuos.</li>";


  document.getElementById("result-container").classList.remove("hidden");
});


document.getElementById("logout-btn").addEventListener("click", function () {
  // Eliminar el nombre de usuario
  localStorage.removeItem("carbonUsername");

  // Redirigir al login
  window.location.href = "login.html";
});
