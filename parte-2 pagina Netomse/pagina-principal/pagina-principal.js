document.addEventListener("DOMContentLoaded", function () {
    const nombreUsuario = localStorage.getItem('usuario');

    if (nombreUsuario && nombreUsuario.trim() !== "") {
        document.querySelector('.perfil p').textContent = nombreUsuario;
    } 
});
