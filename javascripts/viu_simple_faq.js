/**
 * @file
 * Custom scripts for viu_simple_faq module.
 *
 */
(function ($){
    //Register plugin to hide a FAQ category block
    $.fn.viu_simple_faqHideFormGroup = function() {
        console.log($( this ).closest(".form-group"));
        return this;
    };

    //If none section nid == _none, then display all

    //Define event handler for onchange of the OG Vocabs form

    $(document).ready(function(){
        console.log("hello");

        //Hide all N/A value options

        //Grab the current section name first from the dropdown list
        var currentSectionID = $("#edit-oa-section-ref-und option:selected").val();

        //hide all form groups except for the one that's selected:
        //Get all elements where data-section does not equal currentSectionID
        //Consider corner case (where no FAQ section is selected at the start
        var notCurrent = $("input:data(section)")
                            .filter(function() {
                                return $(this).data("section") == currentSectionID;
                            });

        console.log(notCurrent);

        //$("");

        //register an event handler on the section dropdown (see above)
        //when the dropdown is changed, hide all form groups except for the one that's selected
    });
})(jQuery);
