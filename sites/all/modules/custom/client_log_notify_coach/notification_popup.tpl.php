    <div class="modal-dialog">

      <!-- Modal content-->
      <div class="modal-content">
        <div class="modal-header">
          <h5 class="modal-title">Notifications</h5>
        </div>
        <div class="modal-body clearfix">
          <?php $messages = $coach_messages['popup_messages'];
                $i = 0;
          ?>

         <?php foreach($messages as $key => $value): ?>
          <?php $i++; ?>
          <?php if ($value['id'] != "nomsg"): ?>
            <div id="<?php echo $value['id']; ?>" class="user-notifications close-message-<?php echo $i; ?>">
            <?php if(is_numeric($value['id'])): ?>
                <div class="notification-message"><?php echo $value['message']; ?>
                </div>
            <?php endif; ?>
              <a class="btn" href="#" >&times;</a>
            </div>
           <?php else: ?>
            <div class="user-notifications notification-message"><?php echo $value['message']; ?></div>
           <?php endif; ?>
         <?php endforeach; ?>
        </div>
      </div>
    </div>
