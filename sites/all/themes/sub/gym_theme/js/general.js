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

    $('#block-views-client-fitness-block-block .view-content .views-field').matchHeight({ byRow: false});

    $('#block-views-client-fitness-block-block .view-content .views-row').slick({
      arrows: true,
      slidesToShow:3,
      slidesToScroll: 1,
      dots:false,
      infinite: false,
    });
  });
})(jQuery);
