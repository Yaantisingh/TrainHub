function makePayment() {
    const cardNumber = document.getElementById('cardNumber').value;
    const expiryDate = document.getElementById('expiryDate').value;
    const cvv = document.getElementById('cvv').value;
  
    // Simulate a simple payment verification
    const isPaymentSuccessful = Math.random() < 0.8; // 80% success rate
  
    const statusInfo = document.getElementById('statusInfo');
    if (isPaymentSuccessful) {
      statusInfo.textContent = 'Payment successful! Thank you for your purchase.';
    } else {
      statusInfo.textContent = 'Payment failed. Please check your card details and try again.';
    }
  }
  