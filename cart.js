// cart.js
function getCart() {
    return JSON.parse(localStorage.getItem("cart")) || [];
  }
  
  function setCart(cart) {
    localStorage.setItem("cart", JSON.stringify(cart));
  }
  
  function addToCart(name, price) {
    const cart = getCart();
    cart.push({ name, price });
    setCart(cart);
    renderCart();
  }
  
  function clearCart() {
    localStorage.removeItem("cart");
    renderCart();
  }
  
  function renderCart() {
    const cartItems = getCart();
    const cartList = document.getElementById("cart-items");
    const totalSpan = document.getElementById("total");
  
    cartList.innerHTML = "";
    let total = 0;
  
    cartItems.forEach(item => {
      const li = document.createElement("li");
      li.textContent = `${item.name} - ₹${item.price}`;
      cartList.appendChild(li);
      total += item.price;
    });
  
    totalSpan.textContent = total;
  }
  
  function checkout() {
    const total = getCart().reduce((sum, item) => sum + item.price, 0);
    if (total > 0) {
      alert("Thank you for your order! Total Bill: ₹" + total);
      clearCart();
    } else {
      alert("Your cart is empty.");
    }
  }
  