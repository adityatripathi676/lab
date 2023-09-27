document.addEventListener("DOMContentLoaded", function () {
    const navbarNav = document.querySelector(".navbar-nav");
    const navbarNavHidden = document.querySelector(".navbar-nav-hidden");
    const showMoreBtn = document.querySelector(".show-more-btn");

    // Get the total width of the navigation items
    const totalNavItemsWidth = navbarNav.scrollWidth;

    // Get the width of the visible area of the navbar
    const navbarWidth = navbarNav.clientWidth;

    // Check if the total width of the navigation items exceeds the navbar width
    if (totalNavItemsWidth > navbarWidth) {
        // Hide the additional nav items
        navbarNavHidden.style.display = "block";

        // Show the "show more" button
        showMoreBtn.style.display = "block";
    }

    // Show or hide the additional nav items when the "show more" button is clicked
    showMoreBtn.addEventListener("click", function () {
        if (navbarNavHidden.style.display === "block") {
            navbarNavHidden.style.display = "none";
        } else {
            navbarNavHidden.style.display = "block";
        }
    });
});

let lastScrollTop = 0;
const scrollDelay = 1000; // Set the delay time in milliseconds (1000ms = 1 second)

window.addEventListener('scroll', () => {
  const now = Date.now();
  const currentScrollTop = window.scrollY;

  if (currentScrollTop > lastScrollTop) {
    // Scrolling down
    if (now - lastScrollTimestamp < scrollDelay) {
      // Prevent fast scrolling
      window.scrollTo(0, lastScrollTop);
      return;
    }
  } else {
    // Scrolling up
    if (now - lastScrollTimestamp < scrollDelay) {
      // Prevent fast scrolling
      window.scrollTo(0, lastScrollTop);
      return;
    }
  }

  lastScrollTop = currentScrollTop;
  lastScrollTimestamp = now;
});
