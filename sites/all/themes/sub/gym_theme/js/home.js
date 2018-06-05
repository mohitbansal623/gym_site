(function($) {
  $(document).ready(function(){
    $('#home-page-banner-block .banner-container').slick({
      arrows: false,
      slidesToShow:1,
      slidesToScroll: 1,
      autoplay: true,
      autoplaySpeed: 10000,
      dots:true,
      pauseOnHover: true,
      pauseOnFocus: false
    });
    // if ($('#homepage').length) {
    //   $('#homepage').fullpage({
    //     parallax: true,
    //   });
    // }
  });

})(jQuery);
