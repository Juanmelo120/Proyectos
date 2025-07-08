<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_POST['usuario']) && isset($_POST['contraseña'])) {
        $usuario = $_POST['usuario'];
        $contraseña = $_POST['contraseña'];

        $servername = "localhost";
        $username = "root"; 
        $password = ""; 
        $dbname = "netomse";

        $conn = new mysqli($servername, $username, $password, $dbname);

        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }

        $sql = "SELECT * FROM usuarios WHERE usuario = '$usuario'";
        $result = $conn->query($sql);

        if ($result->num_rows > 0) {
            $row = $result->fetch_assoc();
            $contraseña_cifrada = $row['contraseña'];

            if (password_verify($contraseña, $contraseña_cifrada)) {
                echo "<script>
                    localStorage.setItem('usuario', '$usuario');
                    window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/pagina-principal/pagina-principal.html';
                </script>";
                exit();
            } else {
                echo "<script>alert('Error: Contraseña Incorrecta')</script>";
                echo "<script>
                    window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Login/Login.html';
                </script>";
                exit();
            }
        } else {
            echo "<script>alert('Error: Usuario no encontrado.')</script>";
            echo "<script>
                    window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Registrate/Registrate.html';
                </script>";
            

        }

        $conn->close();
    } else {
        echo "Error: Todos los campos son obligatorios.";
    }
} else {
    echo "Error: Método de solicitud no permitido.";
}

echo '<br><br><a href="/PROYECTO_PAGINA_SUSCRIPCION/Login/Login.html"><button>Volver al Login</button></a>';
?>
