(function ($) {

/**
 * Attach new behavior for the machine name target field
 */
Drupal.behaviors.safewordMachineNameTarget = {
  /**
   * Attaches the behavior.
   *
   * @param settings.machineName
   *   A list of elements to process, keyed by the HTML ID of the form element
   *   containing the human-readable value. Each element is an object defining
   *   the following properties:
   *   - target: The HTML ID of the machine name form element.
   *   - suffix: The HTML ID of a container to show the machine name preview in
   *     (usually a field suffix after the human-readable name form element).
   *   - label: The label to show for the machine name preview.
   *   - replace_pattern: A regular expression (without modifiers) matching
   *     disallowed characters in the machine name; e.g., '[^a-z0-9]+'.
   *   - replace: A character to replace disallowed characters with; e.g., '_'
   *     or '-'.
   *   - standalone: Whether the preview should stay in its own element rather
   *     than the suffix of the source element.
   *   - field_prefix: The #field_prefix of the form element.
   *   - field_suffix: The #field_suffix of the form element.
   */
  attach: function (context, settings) {
    var self = this;

    $.each(settings.machineName, function (source_id, options) {

      var $target = $(options.target, context);

      // We need to figure out which human field this machine name relates to.
      var $humanElement = context;

      // if the human field is the title field
      if (options.source[0] == 'title') {
        $humanElement = $('.form-item-title', context);
      }
      else {

        var $targetID = $target.attr('id');

        if (typeof $targetID != 'string') {
          return;
        }

        if ($targetID.indexOf('-machine') + 8 == $targetID.length) {

          var $humanID = $targetID.substr(0, $targetID.indexOf('-machine')) + '-human';
          $humanElement = $('#' + $humanID, context).closest('.form-item');
        }
      }

      // Now we can get the appropriate field suffix and preview text
      var $suffix = $('.field-suffix', $humanElement);
      var $preview = $('.machine-name-value', $humanElement);

      // Overwrite the default behaviour for the Edit button - don't hide the
      // machine name label
      $suffix.find('.admin-link a').click(function(e) {

        // Prevent any other click handlers from firing
        e.preventDefault();
        e.stopImmediatePropagation();

        $(this).parent().remove();
        $target.closest('.form-item').show();
      });

      // Preview the machine name in realtime when the human-readable name
      // changes, but only if there is no machine name yet; i.e., only upon
      // initial creation, not when editing.
      $target.bind('keyup.machineName change.machineName input.machineName', function () {
        var machine = self.transliterate($(this).val(), options);
        // Set the machine name to the transliterated value.
        if (machine != '') {
          if (machine != options.replace) {
         //   $target.val(machine);
            $preview.html(options.field_prefix + Drupal.checkPlain(machine) + options.field_suffix);
          }
          $suffix.show();
        }
        else {
          $suffix.hide();
          $target.val(machine);
          $preview.empty();
        }
      });

    });
  },

  transliterate: function (source, settings) {



    var rx = new RegExp(settings.replace_pattern, 'g');
    return source.toLowerCase().replace(rx, settings.replace).substr(0, settings.maxlength);
  }
};

})(jQuery);
