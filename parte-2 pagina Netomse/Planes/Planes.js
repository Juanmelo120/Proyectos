let planSelec = null;

function selecPlan(planId) {
    document.querySelectorAll('.Planes fieldset').forEach(plan => {
        plan.style.border = "none"; 
        plan.classList.remove("seleccionado");
    });

    planSelec = planId;
    let seleccionado = document.getElementById(planId).closest("fieldset"); 
    seleccionado.style.border = "3px solid orange";
    seleccionado.classList.add("seleccionado");
}

function Opt() {
    if (!planSelec) {
        alert("Por favor, selecciona un plan antes de continuar.");
        return;
    }

    const opcion = confirm("¿Ya tienes una cuenta? Elige 'Aceptar' para logearte o 'Cancelar' para registrarte.");
    if (opcion) {
        window.location.href = "/Login/Login.html";
    } else {
        window.location.href = "/Registrate/Registrate.html";
    }
}

document.addEventListener("DOMContentLoaded", function() {
    document.getElementById('btnSiguiente').addEventListener('click', Opt);

    document.querySelectorAll('.Planes').forEach(plan => {
        plan.addEventListener('click', function() {
            let planId = this.querySelector(".container-plan").id; 
            selecPlan(planId);
        });
    });
});
