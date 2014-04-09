<?php if($posts_to_fill): ?>
<div id="volunteer-station-list">
<?php foreach($posts_to_fill as $i => $post): ?>
  <dl class="clearfix" id="volunteer-station-list-item-<?php print $i ?>">
    <dt class="label-<?php print $post['title'] ?>"><?php print $post['title'] ?></dt>
    <dd>
      <div><?php print (isset($existing[$i]) ? $existing[$i]['data'] : t('Vælg en tilforordnet')) ?></div>
      <a href="/ajax/volunteers/station/list/<?php print $party_id ?>/<?php print $station_id ?>/<?php print $i ?>/<?php print $post['title'] . '-' . $post['party_id'] ?>" class="add<?php print (isset($existing[$i]) ? '' : '') ?>">Vælg</a>
    <?php if(isset($existing[$i])): ?>
      <a href="/node/<?php print $existing[$i]['nid'] ?>/edit?destination=<?php print(implode('/', arg())) ?>" class="edit">Ret</a>
      <a href="/ajax/volunteers/station/remove/<?php print $existing[$i]['nid'] ?>/<?php print $i ?>" class="remove">X</a>
    <?php endif; ?>
    </dd>
  </dl>
<?php endforeach; ?>
<?php if (!empty($extra)): ?>
  <div class="volunteer-station-list-extra-wrapper">
    <h2> Extra</h2>
    <?php foreach($extra as $i => $post): ?>
      <dl class="clearfix" id="volunteer-station-list-extra-<?php print $i ?>">
        <dt class="label-<?php print $post['title'] ?>"><?php print $post['title'] ?></dt>
        <dd class="list-extra">
          <div><?php print (isset($extra[$i]) ? $extra[$i]['data'] : "") ?></div>
          <?php if(isset($extra[$i])): ?>
            <a href="/node/<?php print $extra[$i]['nid'] ?>/edit?destination=<?php print(implode('/', arg())) ?>" class="edit">Ret</a>
            <a href="/ajax/volunteers/station/remove/<?php print $extra[$i]['nid'] ?>/<?php print $i ?>" class="remove">X</a>
          <?php endif; ?>
        </dd>
      </dl>
    <?php endforeach; ?>
  </div>
<?php endif;?>
</div>
<?php endif;?>
