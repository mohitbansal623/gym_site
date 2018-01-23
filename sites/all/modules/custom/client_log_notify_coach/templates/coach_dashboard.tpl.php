<?php
  // Coach Dashboard data
  $client_info = $coach_dashboard;
?>

<?php if (isset($client_info['no-data'])) :?>
  <?php echo $client_info['no-data']; ?>

<?php else :?>
  <h1 class="page-header">Client Information</h1>
  <?php foreach ($client_info as $key => $value): ?>
    <div>
      <h3>Full Name</h3>
      <h4><?php echo $value['full_name']; ?></h4>
    </div>

     <div>
      <h3> Goal</h3>
      <h4> <?php echo $value['goal']; ?></h4>
    </div>

     <div>
      <h3> Remaining Days</h3>
      <h4> <?php echo $value['remaining_days']; ?></h4>
    </div>

     <div>
      <h3> Body fat Loss</h3>
      <h4> <?php echo $value['bodyfat_lost']; ?></h4>
    </div>

     <div>
      <h3> Diet Adherence</h3>
      <h4> <?php echo $value['diet_adherence']; ?></h4>
    </div>

     <div>
      <h3> CM Loss</h3>
      <h4> <?php echo $value['cm_loss']; ?></h4>
    </div>

     <div>
      <h3> MM Loss</h3>
      <h4> <?php echo $value['mm_loss']; ?></h4>
    </div>

  <?php endforeach; ?>

<?php endif; ?>
