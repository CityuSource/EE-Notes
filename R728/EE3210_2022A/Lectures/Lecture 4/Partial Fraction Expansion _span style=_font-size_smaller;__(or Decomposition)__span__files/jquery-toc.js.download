/**
 * jQuery Table of Contents
 * @author Chris Bracco
 * @url http://github.com/cbracco/jquery-toc
 */

(function ($) {
    var methods = {
        init: function (options) {
            // Define some default settings that can be overridden
            settings = $.extend({
                // Only look for headings inside this element
                scope: "body",
                // Build the table of contents from these headings
                heading_tags: ["h2", "h3", "h4", "h5"],
                // Should the table of contents be ordered or unordered?
                list_type: "ul",
                // Exclude elements with the `.toc-exclude` class
                exclude: [".toc-exclude"]
            }, options);

            // Set variables
            var el = $(this), // Cache this
                id = 1, // Doubles as a counter
                depth = 1, // Keeps track of heading depth
                text = "", // Contains the table of contents
                all_headings = settings.heading_tags.join(", "),
                exclusions = settings.exclude.join(", "),
                $headings = $(settings.scope).find(all_headings).not(exclusions);

            // Find all of the qualified heading tags
            $headings.each(function () {

                // Set variables for this heading, its tag, and its level
                var heading = $(this),
                    heading_tag = this.tagName,
                    heading_id = this.id,
                    heading_level = heading_tag.substr(1, 1);

                if (this.id == "") { // eac add
                    this.id = '#section' + id;
                }

                /** Check the current depth and heading level first */

                // If the current depth is less than the heading level,
                // begin a new list
                while (depth < heading_level) {
                    text += "<" + settings.list_type + ">";
                    depth = depth + 1;
                    //console.log(depth+"yyy"+heading_level);
                }
                while (depth > heading_level) {
                    text += "</" + settings.list_type + "></li>";
                    depth = depth - 1;
                    //console.log(depth+"zzz"+heading_level);
                }
                if (depth == heading_level) {
                    text += "</li>";
                    //console.log(depth+"aaa"+heading_level);
                }

                // Set the current depth equal to this heading level
                //console.log(depth+"xxx"+heading_level);
                //depth = heading_level;

                // Build the text for this item in the table of contents
                // and leave the list item open
                //text += '<li><a href="#section' + id + '">' + heading.text() + '</a>';
                if (heading.text().toLowerCase() != 'contents') { // eac add
                    text += '<li><a href="#' + this.id + '">' + heading.text() + '</a>';
                }

                // Add section id and `.section-heading` class to this heading tag
                heading.addClass('section-heading');

                // Increment the section id
                id++;
            }); // end each()

            // Append the list to the table of contents
            el.append($(text));

            // Return the table of contents
            return el;
        } // end init
    }; // end methods

    $.fn.toc = function (method) {
        // Method calling logic
        if (methods[method]) {
            return methods[method].apply(this, Array.prototype.slice.call(arguments, 1));
        } else if (typeof method === "object" || undefined == method) {
            return methods.init.apply(this, arguments);
        } else {
            $.error("Method " + method + " does not exist on jQuery.toc");
        }
    }
})(jQuery);
