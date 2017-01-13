/**
 * Custom form logic for FAQ Item Node Add form
 *
 * ASSUMES THIS SCRIPT WILL ONLY BE LOADED ON FAQ ITEM NODE EDIT FORM
 *  Will interact dangerously with any other forms containing OG Vocabulary Elements
 *
 * @file
 * Custom scripts for viu_simple_faq module.
 *
 */
(function ($){
    //Register plugin to toggle FAQ form block elements
    //Run plugin on child elements of the "target" selector we want (or the element itself if no target is specified)
    //to either action= "hide", "show", or toggle (blank)
    $.fn.viu_simple_faqToggleFormElement = function( target, action ) {
        if (target) {
            if ( action == "show" ) {
                $( this ).closest(target).show();
            } else if ( action == "hide" ) {
                $( this ).closest(target).hide();
            } else {
                $( this ).closest(target).toggle();
            }
        } else {
            if ( action == "show" ) {
                $( this ).show();
            } else if ( action == "hide" ) {
                $( this ).hide();
            } else {
                $( this ).toggle();
            }
        }
        //TODO could use higher-order function to simplify the above code
        return this;
    };

    //Reset the form
    function resetForm(){
        //Default selections for radio buttons (no value)
        $( "input[name*='og_vocabulary'][value='_none']" ).prop('checked', true);

        //Hide all N/A value options
        $( "input[name*='og_vocabulary'][value='_none']" ).viu_simple_faqToggleFormElement( "label", "hide" );

        var currentSectionID = $("#edit-oa-section-ref-und").val();

        //TODO the current two selectors could be optimized so that the second one is a subquery of the first
        var current = $('input[data-section="' + currentSectionID + '"]');
        var notCurrent = $('input:not([data-section="' + currentSectionID + '"])');
        notCurrent.viu_simple_faqToggleFormElement(".form-group", "hide");
        current.viu_simple_faqToggleFormElement(".form-group", "show");

        console.log(current);


        //TODO button logic for default selections
    }

    $(document).ready(function(){
        resetForm();

        //register an event handler on the section dropdown
        //$("#edit-oa-section-ref-und").change(function () {console.log("poo")});
        $("#edit-oa-section-ref-und").change(resetForm);
    });
})(jQuery);
