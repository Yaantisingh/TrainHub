function register() {
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;

    // Basic validation
    if (!username ||!password) {
      alert("Please fill in all fields.");
      return;
    }
    alert("Registration successful!\nUsername: " + username);
  }