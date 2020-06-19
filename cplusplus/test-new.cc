void expand_all_functions () {
        graph* g = build_callgraph ();
        ipa_perform_analysis (g);
        function* cfun;
        FOR_EACH_FUNCTION (g, cfun) {
                cfun->expand_ipa ();
                cfun->expand_gimple ();
                cfun->expand_rtl ();
        }
}
