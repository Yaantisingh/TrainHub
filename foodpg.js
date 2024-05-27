function orderplaced() {
    const foodItem = document.getElementById('foodItem').value;
    const quantity = document.getElementById('quantity').value;
    
    const cartItems = document.getElementById('cartItems');
    const li = document.createElement('li');
    li.textContent = `${quantity} ${foodItem}(s)`;
    cartItems.appendChild(li);
  }
  