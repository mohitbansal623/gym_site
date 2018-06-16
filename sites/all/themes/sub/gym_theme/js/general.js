(function($) {
  $(document).ready(function(){

    if ($("#daily-log-node-form .field-name-field-was-today-on-plan").length) {
      if ($("#daily-log-node-form .field-name-field-was-today-on-plan input").is(":checked")) {
        $("#daily-log-node-form .field-name-field-was-today-on-plan").addClass("checked-checkbox");
      }
      $("#daily-log-node-form .field-name-field-was-today-on-plan input").change(function(){
        if ($(this).is(":checked")) {
          $("#daily-log-node-form .field-name-field-was-today-on-plan").addClass("checked-checkbox");
        }
        else {
          $("#daily-log-node-form .field-name-field-was-today-on-plan").removeClass("checked-checkbox");
        }
      });
    }
    if ($("#daily-log-node-form .field-name-field-did-you-train-today").length) {
      if ($("#daily-log-node-form .field-name-field-did-you-train-today input").is(":checked")) {
        $("#daily-log-node-form .field-name-field-did-you-train-today").addClass("checked-checkbox");
      }
      $("#daily-log-node-form .field-name-field-did-you-train-today input").change(function(){
        if ($(this).is(":checked")) {
          $("#daily-log-node-form .field-name-field-did-you-train-today").addClass("checked-checkbox");
        }
        else {
          $("#daily-log-node-form .field-name-field-did-you-train-today").removeClass("checked-checkbox");
        }
      });
    }

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

    // Client dashboard, path to fitness section
    $('#block-views-client-fitness-block-block .view-content .views-row').slick({
      arrows: true,
      slidesToShow:3,
      slidesToScroll: 1,
      dots:false,
      infinite: false,
      responsive: [
        {
          breakpoint: 992,
          settings: {
            slidesToShow: 2,
          }
        },
        {
          breakpoint: 500,
          settings: {
            slidesToShow: 1,
          }
        }
      ]
    });

    $(".coach-notifications").on("click", function () {
      $("#notification-modal").load("/notifications");
    });

    $('body').on("click", '.modal-content .modal-body .user-notifications .btn', function () {
      var id = $(this).parent().attr('id');
      $(this).parent().remove();
      $.ajax({
        type: 'POST',
        url: '/clear-notification',
        data: {
          id: id,
        },
        success: (function () {
          $("#notification-modal").load("/notifications");
          // get_notification();
        })
      });
    });

    // For total CM
    $(".page-node-add-check-in .group-circumference-measures input").focusout(function () {
      var total = 0;
      $(".page-node-add-check-in .group-circumference-measures input").each(function() {
        var value = $(this).val();
        if (value == '') {
          value = 0;
        }
        total = parseFloat(total) + parseFloat(value);
       });

      $(".form-item-field-total-cm-und-0-value #edit-field-total-cm-und-0-value").val(total);
    });

    // For total MM
    $(".page-node-add-check-in .group-skinfolds input").focusout(function () {
      var total = 0;
      $(".page-node-add-check-in .group-skinfolds input").each(function() {
        var value = $(this).val();
        if (value == '') {
          value = 0;
        }
        total = parseFloat(total) + parseFloat(value);
       });

      $(".form-item-field-total-calipers-und-0-value #edit-field-total-calipers-und-0-value").val(total);
    });

    // Disabled Total CM and Total MM field
    $('.form-item-field-total-cm-und-0-value #edit-field-total-cm-und-0-value').prop("disabled", true);

    $('.form-item-field-total-calipers-und-0-value #edit-field-total-calipers-und-0-value').prop("disabled", true);

    $('.form-item-field-goal-und-0-value #edit-field-goal-und-0-value').prop("disabled", true);

    $(".page-calendar .view-calendar .calendar-calendar .month.day").click(function() {
      window.location.href = "/node/add/daily-log";
    });
  });
})(jQuery);
