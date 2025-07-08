<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $usuario = $_POST['usuario'];
    $contraseña1 = $_POST['contraseña1'];
    $contraseña2 = $_POST['contraseña2'];

    if ($contraseña1 !== $contraseña2) {
        echo "<script>
                alert('Error: Las contraseñas no coinciden.');
                window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Registrate/Registrate.html';
              </script>";
        exit();
    }

    if (strlen($contraseña1) < 8) {
        echo "<script>
                alert('Error: La contraseña debe tener al menos 8 caracteres.');
                window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Registrate/Registrate.html';
              </script>";
        exit();
    }

    $servername = "localhost";
    $username = "root"; 
    $password = ""; 
    $dbname = "netomse";

    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("<script>
                alert('Error de conexión: " . $conn->connect_error . "');
                window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Registrate/Registrate.html';
            </script>");
    }

    $sql_check = $conn->prepare("SELECT * FROM usuarios WHERE usuario = ?");
    $sql_check->bind_param("s", $usuario);
    $sql_check->execute();
    $result = $sql_check->get_result();

    if ($result->num_rows > 0) {
        echo "<script>
                alert('Error: El nombre de usuario ya está en uso.');
                window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Login/Login.html';
              </script>";
        exit();
    }

    $contraseña_cifrada = password_hash($contraseña1, PASSWORD_DEFAULT);
    $sql = $conn->prepare("INSERT INTO usuarios (usuario, contraseña) VALUES (?, ?)");
    $sql->bind_param("ss", $usuario, $contraseña_cifrada);

    if ($sql->execute()) {
        echo "<script>
                alert('Registro exitoso. ¡Bienvenido, $usuario!');
                window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Planes/Planes.html';
              </script>";
    } else {
        echo "<script>
                alert('Error al registrar: " . $sql->error . "');
                window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Registrate/Registrate.html';
              </script>";
    }

    $sql->close();
    $sql_check->close();
    $conn->close();
} else {
    echo "<script>
            alert('Error: Método de solicitud no permitido.');
            window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Registrate/Registrate.html';
          </script>";
}

?>
