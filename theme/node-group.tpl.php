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
          
      <div class="group-graphical-content float-right">
        <?php if ($node->content['find_people_group_locations_node_content_2']['#value']) : ?>
          <div class="group-map">
            <?php
              print $node->content['find_people_group_locations_node_content_2']['#value'];
              
              
            ?>
          </div> <!-- /group-map -->
        <?php endif;?>
      </div> <!-- /group-graphical-content float-right -->
      
      <div class="address">
        <div class="address-line-1">
          <?php
            if ($node->field_group_address_line_1['0']['value']) {
              print $node->field_group_address_line_1['0']['value'];
            }
          ?>
        </div> <!-- /address-line-1 -->
        <div class="address-line-2">
          <?php
            if ($node->field_group_address_line_2['0']['value']) {
              print $node->field_group_address_line_2['0']['value'];
            }
          ?>
        </div> <!-- /address-line-2 -->
        <div class="street-address">
          <?php
            if ($node->field_group_street_address['0']['value']) {
              print $node->field_group_street_address['0']['value'];
            }
          ?>
        </div> <!-- /street-address -->
        <div class="city-state-zip">
          <?php
            $var = '';
            if ($node->field_group_city['0']['value']) {
              $var .= $node->field_group_city['0']['value'];
            }         
            if ($node->field_group_state['0']['value']) {
              $var .= ', ' . $node->field_group_state['0']['value'];
            }
            if ($node->field_group_zip_code['0']['value']) {
              $var .= ' ' . $node->field_group_zip_code['0']['value'];
            }
            print $var;
          ?>
        </div> <!-- /city-state-zip -->
        <div class="driving-directions">
          <?php              
            $urltoken = str_replace(' ', '+', $node->field_group_street_address['0']['value']) . ',+' . str_replace(' ', '+', $node->field_group_city['0']['value']) . '+' . $node->field_group_state['0']['value'] . '+' . $node->field_group_zip_code['0']['value'];
            print '<a href="http://maps.google.com/maps?daddr=' . $urltoken . '">Get Driving Directions</a>';
          ?>
        </div> <!-- /driving-directions -->
      </div> <!-- /address -->
      
      <div class="business-hours">
        <?php
          if ($node->field_group_business_hours['0']['value']) {
            print '<span class="business-hours-label label">Business hours: </span>' . $node->field_group_business_hours['0']['value'];
          }
        ?>
      </div> <!-- /business-hours -->
      
      <div class="contact-info">
        <div class="phone">
          <?php
            if ($node->field_group_phone['0']['value']) {
              print '<span class="phone-label label">tel: </span>' . $node->field_group_phone['0']['value'];
            }
          ?>
        </div> <!-- /phone -->
        <div class="fax">
          <?php
            if ($node->field_group_fax['0']['value']) {
              print '<span class="fax-label label">fax: </span>' . $node->field_group_fax['0']['value'];
            }
          ?>
        </div> <!-- /fax -->
      </div> <!-- /contact-info -->
      
      <div class="website">
        <?php
          if ($node->field_group_website['0']['url']) {
            print '<a href="' . $node->field_group_website['0']['url'] . '">Visit the ' . check_plain($node->title) . ' website</a>';
          }
        ?>
      </div> <!-- /website -->
      
      <div class="group-employees">
        <?php
          if ($node->content['find_people_group_locations_node_content_1']['#value']) {
            print '<h2 class="bio-label title">Meet our faculty and staff</h2>';
            print $node->content['find_people_group_locations_node_content_1']['#value'];
          }
        ?>
      </div> <!-- /group-employees -->

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
