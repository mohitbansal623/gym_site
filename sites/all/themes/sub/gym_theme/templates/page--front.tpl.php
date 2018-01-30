<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
global $user;
?>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="<?php print $container_class; ?>">
    <?php if ($user->uid != 0): ?>
      <div class="notification"><i class="fa fa-bell-o" aria-hidden="true"></i></div>
      <div class="notification-box">
        <div class="heading"><h2>NOTIFICATIONS</h2><a class="close" href="#" >&times;</a></div>
        <div class="content">

        </div>
      </div>
    <?php endif; ?>
    <div class="navbar-header">
      <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      <?php endif; ?>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse" id="navbar-collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
  </div>
</header>

<div id="homepage">
  <div class="section intro-section">
    <div class="description">
      <p>REDEFINE</p>
      <p>YOURSELF</p>
    </div>
  </div>
  <div class="section about-section text-section">
    <div class="section-heading">
      <h3>ABOUT US</h3>
    </div>
    <div class="description">
      <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam odio augue, consectetur sed tortor sed, auctor pellentesque felis. Morbi blandit nisl in vehicula malesuada. Nam quis ornare dolor, id convallis eros. Curabitur dignissim porttitor massa, nec venenatis dolor aliquam eu. Morbi sapien turpis, tincidunt vitae rutrum feugiat, efficitur id sapien. Pellentesque sollicitudin nibh ut posuere lobortis. Vivamus ligula erat, volutpat posuere nunc id, condimentum tristique purus. Integer elementum magna a mi sodales, a lobortis sem lacinia.</p>
      <div class="read-more"><a class="read-more-btn" href="/about-us">KNOW MORE</a></div>
    </div>
  </div>
<!--   <div class="section services-section">
    <div class="section-heading">
      <h3>WE PROVIDE</h3>
    </div>
    <div class="services-container">
      <div class="service service1 wow fadeInLeftBig" data-wow-delay="0.15s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service2 wow fadeInUpBig" data-wow-delay="0.3s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service3 wow fadeInDownBig" data-wow-delay="0.45s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service4 wow fadeInRightBig" data-wow-delay="0.6s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service5 wow fadeInLeftBig" data-wow-delay="0.75s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service6 wow fadeInDownBig" data-wow-delay="0.9s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service7 wow fadeInUpBig" data-wow-delay="1.05s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
      <div class="service service8 wow fadeInRightBig" data-wow-delay="1.2s">
          <a href="">
            <div class="overlay"></div>
            <div class="square">
              <div class="service-name">SERVICE NAME</div>
            </div>
          </a>
      </div>
    </div>
  </div> -->

  <div class="section text-section excellence-section">
    <p>Join us on the pursuit of self-excellence.</p>
  </div>
</div>

<?php if (!empty($page['footer'])): ?>
  <div class="site-footer">
    <footer class="footer <?php print $container_class; ?>">
      <?php print render($page['footer']); ?>
    </footer>
  </div>
<?php endif; ?>

<!-- <div class="footer-inner row">
  <div class="location col-sm-4 col-xs-6">
    <div class="footer-title">LOCATION</div>
    <div class="footer-block">
      <p>12, Lorium Ipsum</p>
      <p>Lorium Ipsum</p>
      <p>Lorium Ipsum</p>
    </div>
  </div>
  <div class="social  col-sm-4 col-xs-6">
    <div class="footer-title">STAY CONNECTED</div>
    <div class="footer-block">
      <div class="social-icons">
        <a href=""><i class="fa fa-twitter" aria-hidden="true"></i></a><a href=""><i class="fa fa-facebook" aria-hidden="true"></i></a><a href=""><i class="fa fa-instagram" aria-hidden="true"></i></a><a href=""><i class="fa fa-google-plus" aria-hidden="true"></i></a>
      </div>
      <div class="email">Email: xyz@gmail.com</div>
      <div class="phone">Phone: 9876543210</div>
    </div>
  </div>
  <div class="timings  col-sm-4 col-xs-6">
    <div class="footer-title">HOURS</div>
    <div class="footer-block">
      <p>Lorium Ipsum</p>
      <p>Lorium Ipsum</p>
      <p>Lorium Ipsum</p>
    </div>
  </div>
</div> -->
