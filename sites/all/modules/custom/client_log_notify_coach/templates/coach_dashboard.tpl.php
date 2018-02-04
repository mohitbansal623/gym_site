<?php
  // Coach Dashboard data
  $client_info = $coach_dashboard;
?>

  <h1 class="page-header">Client Information</h1>
  <?php if (isset($client_info['no-data'])) :?>
    <?php echo $client_info['no-data']; ?>
  <?php else :?>
  <div class="row">
    <div id="accordion" class="panel-group coach-accordion">
      <?php foreach ($client_info as $key => $value): ?>
        <div class="panel panel-default col-sm-4 col-xs-12">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a data-toggle="collapse" data-parent="#accordion" href="#<?php echo $key; ?>"><?php echo $value['full_name']; ?></a>
              <p class="diet-adherence"><strong>Diet Adherence:</strong> <?php echo $value['diet_adherence']; ?></p>
            </h4>
          </div>
          <div id="<?php echo $key; ?>" class="panel-collapse collapse">
            <div class="panel-body">
              <p><strong>Goal:</strong> <?php echo $value['goal']; ?></p>
              <p><strong>Remaining Days:</strong> <?php echo $value['remaining_days']; ?></p>
              <p><strong>Body Fat Loss:</strong> <?php echo $value['bodyfat_lost']; ?></p>
              <p><strong>Diet Adherence:</strong> <?php echo $value['diet_adherence']; ?></p>
              <p><strong>CM Loss:</strong> <?php echo $value['cm_loss']; ?></p>
              <p><strong>MM Loss:</strong> <?php echo $value['mm_loss']; ?></p>
              <p><strong>Average Daily Activity:</strong> <?php echo $value['avg_daily_activity']; ?></p>
              <p><strong>Average Training Sessions:</strong> <?php echo $value['avg_training_sessions']; ?></p>
              <p><a href="<?php echo $value['link']; ?>">Click to see profile.</a></p>
            </div>
          </div>
        </div>
      <?php endforeach; ?>
    </div>
  </div>

<?php endif; ?>
