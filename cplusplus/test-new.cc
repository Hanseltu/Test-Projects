void expand_all_functions () {
    graph* g = build_callgraph ();
    ipa_perform_analysis (g);
    function* cfun;
    working_set ws;

    FOR_EACH_FUNCTION (g, cfun) {
        cfun->expand_ipa ();
    }

    ws.spawn_threads (expand_gimple):

    FOR_EACH_FUNCTION (g, cfun) {
        ws.insert_work (cfun);
    }
    ws.join()

    FOR_EACH_FUNCTION (g, cfun) {
        cfun->expand_rtl ();
    }
}
