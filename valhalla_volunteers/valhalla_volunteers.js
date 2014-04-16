/*
 * @copyright bellcom open source aps
 * @author ulrik nielsen <un@bellcom.dk>
 */
var polling_station = polling_station || {};

jQuery(function(){

  var $dialog = jQuery('<div id="dialog-add"></div>');

  var load_dialog = function(){
    $dialog.load('/ajax/volunteers/station/list', function() {
      $dialog.dialog({title:"Vælg en tilforordnet", draggable:false, width: '850px'});
      jQuery('.ui-dialog').hide();
    });
  }

  load_dialog();

  jQuery("#volunteer-station-list dd a").live('click', function(event) {
    event.preventDefault();

    jQuery('body').append('<div id="loading-gif"></div>');
    if (jQuery(this).hasClass('remove')) {
      load_dialog();
      var element = this;
      jQuery.post(this.href, function(data) {
        jQuery('#volunteer-station-list-item-' + data.id + ' dd div').html(data.html);
        jQuery('#volunteer-station-list-extra-' + data.id).remove();
        jQuery('#volunteer-station-list-item-' + data.id + ' dd a.add').show();
        jQuery('#volunteer-station-list-item-' + data.id + ' dd a.edit').remove();

        setTimeout(function(){
          if(jQuery('[id*=volunteer-station-list-extra]').length == 0){
            jQuery('.volunteer-station-list-extra-wrapper').remove();
          }
        }, 300);

        jQuery(element).remove();
        jQuery('#loading-gif').remove();
      });
    }
    else if (jQuery(this).hasClass('add')) {
      jQuery('#loading-gif').remove();
      var href_split = this.href.split('/');
      polling_station.seat_number = href_split[(href_split.length - 2)];
      polling_station.party_id = href_split[(href_split.length - 4)];
      polling_station.polling_station_id = href_split[(href_split.length - 3)];
      polling_station.post = href_split[(href_split.length -1)];
      jQuery('.ui-dialog').show();

    }
    else if (jQuery(this).hasClass('edit')) {
      jQuery('#loading-gif').remove();
      window.location.href = this.href;
    }
  });

  // handle dialog ajax
  jQuery(".ui-dialog-content .views-field-nid a").live("click", function(event) {
    event.preventDefault();

    load_dialog();

    jQuery('body').append('<div id="loading-gif"></div>');

    var href_split = this.href.split('/');

    href_split[(href_split.length -1)] = polling_station.post;
    href_split[(href_split.length -2)] = polling_station.seat_number;
    href_split[(href_split.length -3)] = polling_station.polling_station_id;

    this.href = href_split.join('/');

    jQuery.post(this.href, function(data) {
      if (data.status) {
        jQuery('#volunteer-station-list-item-' + data.id + ' dd div').html(data.html);
        jQuery('#volunteer-station-list-item-' + data.id + ' dd a.remove').remove();
        jQuery('#volunteer-station-list-item-' + data.id + ' dd a.add').hide();
        jQuery('#volunteer-station-list-item-' + data.id + ' dd').append('<a href="/node/' + data.nid + '/edit?destination=' + valhalla_destination_path +'" class="edit">Ret</a>');
        jQuery('#volunteer-station-list-item-' + data.id + ' dd').append('<a href="/ajax/volunteers/station/remove/' + data.nid + '/' + data.id + '" class="remove">X</a>');
      }
      jQuery('#loading-gif').remove();
    }, "json");
    $dialog.dialog("close");
  });

  // handle dialog ajax pagination
  jQuery('#dialog-add .pager a').live('click', function(event) {
    event.preventDefault();
    jQuery('#dialog-add').load(this.href);
  });

  // handle dialog ajax filters
  jQuery('#dialog-add .view-volunteers form').live('submit', function(event) {
    event.preventDefault();
    var loc = this.action.replace('available-volunteers', 'ajax/volunteers/station/list');
    jQuery('#dialog-add').append('<div id="loading-gif"></div>');
    jQuery('#dialog-add').load(loc, jQuery(this).serialize());
  });

  jQuery('.volunteer').hover(function(){
    jQuery(this).find('.rsvp-message').show();
  },
  function(){
    jQuery(this).find('.rsvp-message').hide();
  });
});
