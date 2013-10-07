<?php if($posts_to_fill): ?>
<div id="volunteer-station-list">
<?php foreach($posts_to_fill as $i => $post): ?>
  <dl class="clearfix" id="volunteer-station-list-item-<?php print $i ?>">
    <dt class="label-<?php print $post ?>"><?php print $post ?></dt>
    <dd>
      <div><?php print (isset($existing[$i]) ? $existing[$i]['data'] : t('Vælg en tilforordnet')) ?></div>
      <a href="/ajax/volunteers/station/list/<?php print $party_id ?>/<?php print $station_id ?>/<?php print $i ?>/<?php print $post ?>" class="add<?php print (isset($existing[$i]) ? '' : '') ?>">Vælg</a>
    <?php if(isset($existing[$i])): ?>
      <a href="/node/<?php print $existing[$i]['nid'] ?>/edit?destination=<?php print(implode('/', arg())) ?>" class="edit">Ret</a>
      <a href="/ajax/volunteers/station/remove/<?php print $existing[$i]['nid'] ?>/<?php print $i ?>" class="remove">X</a>
    <?php endif; ?>
    </dd>
  </dl>
<?php endforeach; ?>
</div>
<?php endif;?>
