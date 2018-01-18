(function ($) {
  Drupal.behaviors.notification = {
    attach: function (context, settings) {
      $(document).ready(function () {
        $(".coach-notifications").on("click", function () {
          $("#notification-modal").load("/notifications");
        });
      });
    }
  }
})(jQuery);
