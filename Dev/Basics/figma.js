
const header = document.querySelector('.header');

window.addEventListener('scroll', () => {
  if (window.scrollY > 50) {
    header.style.boxShadow = '0 4px 12px rgba(0,0,0,0.08)';
  } else {
    header.style.boxShadow = 'none';
  }
});
document.querySelectorAll('a[href^="#"]').forEach(link => {
  link.addEventListener('click', e => {
    e.preventDefault();
    const target = document.querySelector(link.getAttribute('href'));
    if (target) {
      target.scrollIntoView({ behavior: 'smooth' });
    }
  });
});

document.querySelectorAll('.btn').forEach(button => {
  button.addEventListener('click', e => {
    const ripple = document.createElement('span');
    ripple.classList.add('ripple');

    const rect = button.getBoundingClientRect();
    ripple.style.left = `${e.clientX - rect.left}px`;
    ripple.style.top = `${e.clientY - rect.top}px`;

    button.appendChild(ripple);

    setTimeout(() => ripple.remove(), 600);
  });
});

let cartCount = 0;
const cartIcon = document.querySelector('.nav-icons a:last-child');

document.querySelectorAll('.product-card .btn').forEach(btn => {
  btn.addEventListener('click', () => {
    cartCount++;
    cartIcon.textContent = `🛒 ${cartCount}`;
  });
});

const images = document.querySelectorAll('img');

const observer = new IntersectionObserver(entries => {
  entries.forEach(entry => {
    if (entry.isIntersecting) {
      entry.target.style.filter = 'none';
      observer.unobserve(entry.target);
    }
  });
});

images.forEach(img => {
  img.style.filter = 'blur(4px)';
  observer.observe(img);
});

const emailInput = document.querySelector('footer input');

if (emailInput) {
  emailInput.addEventListener('keydown', e => {
    if (e.key === 'Enter') {
      alert('Thanks for subscribing! ✨');
      emailInput.value = '';
    }
  });
}
