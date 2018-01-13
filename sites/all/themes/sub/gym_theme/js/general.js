(function($) {
  $(document).ready(function(){
    $('#block-views-view-banner-block-1 .view-content').slick({
      arrows: false,
      slidesToShow:1,
      slidesToScroll: 1,
      autoplay: true,
      autoplaySpeed: 10000,
      dots:true,
      pauseOnHover: true,
      pauseOnFocus: false
    });
  });
})(jQuery);
