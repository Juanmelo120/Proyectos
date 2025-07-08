<?php
session_start(); 

if ($usuarioValido) {
    $_SESSION['usuario'] = $nombreUsuario; 
    echo "<script>
        localStorage.setItem('usuario', '" . $nombreUsuario . "');
        window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/pagina-principal/pagina-principal.html';
    </script>";
} else {
    echo "Error: Credenciales incorrectas.";
}
?>
