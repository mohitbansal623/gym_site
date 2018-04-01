<?php
/**
 * @file
 * Template to display a column
 *
 * - $item: The item to render within a td element.
 */
$id = (isset($item['id'])) ? 'id="' . $item['id'] . '" ' : '';
$date = (isset($item['date'])) ? ' data-date="' . $item['date'] . '" ' : '';
$day = (isset($item['day_of_month'])) ? ' data-day-of-month="' . $item['day_of_month'] . '" ' : '';
$headers = (isset($item['header_id'])) ? ' headers="'. $item['header_id'] .'" ' : '';

//adding the following vars to print a data-label on each day's cell. I will take that data-label and
//print it :before the cell via css to create a header with each day's date (whether it is empty or not). I printed this new $data_label var below.
$responsive_date = (isset($item['date'])) ?  date("l, F j, Y", strtotime($item['date'])) : '';
$data_label = (isset($responsive_date)) ? ' data-label="' . $responsive_date . '" ' : '';
?>
<td <?php print $id?>class="<?php print $item['class'] ?>" colspan="<?php print $item['colspan'] ?>" rowspan="<?php print $item['rowspan'] ?>"<?php print $date . $headers . $day; ?> <?php print $data_label ?>>
  <div class="inner">
    <?php print $item['entry'] ?>
  </div>
</td>
