<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_POST['mensaje'])) {
        $servername = "localhost";
        $username = "root"; 
        $password = ""; 
        $dbname = "netomse";

        $conn = new mysqli($servername, $username, $password, $dbname);

        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }

        $mensaje = $conn->real_escape_string($_POST['mensaje']);

        $sql = "INSERT INTO mensajes (mensaje) VALUES ('$mensaje')";

        if ($conn->query($sql) === TRUE) {
            $id_mensaje = $conn->insert_id;
            echo "<script>
                    alert('Mensaje enviado con éxito. Tu número de ID es: " . $id_mensaje . "');
                    window.location.href = '/PROYECTO_PAGINA_SUSCRIPCION/Contacto/Contacto.html';
                  </script>";
        } else {
            echo "Error: " . $sql . "<br>" . $conn->error;
        }

        $conn->close();
    } else {
        echo "Error: El campo 'mensaje' no está definido.";
    }
} else {
    echo "Error: Método de solicitud no permitido.";
}

?>