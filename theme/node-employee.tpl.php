<?php
// $Id: node.tpl.php,v 1.1.2.2 2009/11/11 05:26:25 sociotech Exp $
?>

<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">
  <div class="inner">
    <?php print $picture ?>
  
    <?php if ($page == 0): ?>
    <h2 class="title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    <?php endif; ?>
  
    <?php if ($submitted): ?>
    <div class="meta">
      <span class="submitted"><?php print $submitted ?></span>
    </div>
    <?php endif; ?>
  
    <?php if ($node_top && !$teaser): ?>
    <div id="node-top" class="node-top row nested">
      <div id="node-top-inner" class="node-top-inner inner">
        <?php print $node_top; ?>
      </div><!-- /node-top-inner -->
    </div><!-- /node-top -->
    <?php endif; ?>

    <div class="content clearfix">
        
      <div class="employee-graphical-content float-right">
        <?php if ($node->content['find_people_employee_locations_node_content_2']['#value']) : ?>
          <div class="employee-map">
            <?php
              print $node->content['find_people_employee_locations_node_content_2']['#value'];
            ?>
          </div> <!-- /employee-map -->
        <?php endif;?>
        <?php if ($node->field_employee_photo['0']['fid']) : ?>
          <div class="photo">
            <?php
              print $node->field_employee_photo['0']['view'];
            ?>
          </div> <!-- /photo -->
        <?php endif; ?>
      </div> <!-- /employee-graphical-content float-right -->
      
      <div class="employee-titles">
        <?php
          $positionflag = 0;
          foreach ($node->field_employee_titles as $item) {
            if ($positionflag == 0) {
              $employeeposition = $item['view'];
            } else {
              $employeeposition .= ', ' . $item['view'];
            }
            $positionflag = 1;
          }
          unset($item);
          unset($positionflag);
          print $employeeposition;
        ?>
      </div> <!-- /employee-titles -->

      <div class="contact-info">
        <div class="office-phone">
          <?php
            if ($node->field_employee_office_phone['0']['value']) {
              print '<span class="office-phone-label label">tel: </span>' . $node->field_employee_office_phone['0']['value'];
            }
          ?>
        </div>
        <div class="mobile-phone">
          <?php
            if ($node->field_employee_mobile_phone['0']['value']) {
              print '<span class="mobile-phone-label label">cell: </span>' . $node->field_employee_mobile_phone['0']['value'];
            }
          ?>
        </div>
        <div class="fax">
          <?php
            if ($node->content['find_people_employee_locations_node_content_4']['#value']) {
              print $node->content['find_people_employee_locations_node_content_4']['#value'];
            }
          ?>
        </div>
        <div class="email">
          <?php
            if ($node->field_employee_email['0']['email']) {
              print '<a href="#email-form">email ' . check_plain($node->title) . '</a>';
            }
          ?>
        </div>
      </div> <!-- /contact-info -->
      <div class="websites">
        <?php
          if ($node->field_employee_website['0']['url']) {
            $count = 1;
            foreach ($node->field_employee_website as $item) {
              print '<div class="website-' . $count . '">';
              if ($item['title']) {
                print $item['view'];
              } else {
                print '<a href="' . $item['url'] . '">website</a>';
              }
              print '</div>';
              $count ++;
            }
            unset($item);
            unset($count);
          }
        ?>
      </div> <!-- /websites -->
      <div class="employee-locations">
        <?php
          if ($node->content['find_people_employee_locations_node_content_1']['#value']){
            print '<div class="primary_location_label label">Primary Location</div>' . $node->content['find_people_employee_locations_node_content_1']['#value'];
          }
          if ($node->content['find_people_employee_locations_node_content_3']['#value']){
            print '<div class="secondary_locations_label label">Secondary Location(s)</div>' . $node->content['find_people_employee_locations_node_content_3']['#value'];
          }
        ?>
      </div> <!-- /employee-locations -->
      
      <div class="employee-bio">
        <?php
          if ($node->field_employee_biography['0']['value']) {
            print '<h2 class="bio-label title">Bio</h2>' . $node->field_employee_biography['0']['view'];
          }
        ?>
      </div> <!-- /employee-bio -->
    
      <?php
        //checks that email module is enabled
        if (module_exists('email')) {
          // Setup required variables
          $field_name = 'field_contact_email';
          $show_form  = TRUE;
          // Taken from email_mail_page(), but modified.
          if (module_exists('content_permissions')) {
            if (!user_access('view '. $field_name)) $show_form = FALSE;
          }
          $field = $node->field_employee_email; //sets the email cck field
          $email = $field[0]['email'];
          if (empty($email)) $show_form = FALSE;   
          if ($show_form) {
            if (!flood_is_allowed('email', variable_get('email_hourly_threshold', 3))) {
              print t("You cannot send more than %number messages per hour. Please try again later.", array('%number' => variable_get('email_hourly_threshold', 3)));
            }
            else {
              print '<div class="dotted-line"></div><div class="email-contact-form-wrapper"><div class="email-form-label heading"><a name="email-form"></a><h2 class="title">Email ' . check_plain($node->title) . '</h2></div><div class="email-contact-form">';
              print drupal_get_form('email_mail_page_form', $node, $field_name, $email);
              print '</div></div>';
            }
          }
        }
      ?>
      
      <?php 
        $request_url = $_SERVER['SERVER_NAME'] . $_SERVER['REQUEST_URI'];
        $update_link = 'http://extension.oregonstate.edu/node/4823?update_type=employee&request_url=' . $request_url;
        print '<div class="update-link">Incorrect or outdated information? <a href="' . $update_link . '">Let us know</a>. </div>';
      ?>

    </div> <!-- /content clearfix -->
  
    <?php if ($terms): ?>
    <div class="terms">
      <?php // print $terms; ?>
    </div>
    <?php endif;?>
    
    <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
    <?php endif; ?>
  </div><!-- /inner -->

  <?php if ($node_bottom && !$teaser): ?>
  <div id="node-bottom" class="node-bottom row nested">
    <div id="node-bottom-inner" class="node-bottom-inner inner">
      <?php print $node_bottom; ?>
    </div><!-- /node-bottom-inner -->
  </div><!-- /node-bottom -->
  <?php endif; ?>
</div><!-- /node-<?php print $node->nid; ?> -->
