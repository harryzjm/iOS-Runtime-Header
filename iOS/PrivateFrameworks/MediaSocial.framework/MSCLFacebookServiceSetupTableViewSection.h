//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSCLFacebookServiceSetupTableViewSection
{
    long long _displayState;
}

- (void)_updateDisplayStateForce:(_Bool)arg1;
- (void)_openFacebookSettingsTitleKey:(id)arg1 messageKey:(id)arg2 parentViewController:(id)arg3;
- (long long)_cellTypeForIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerReusableCellsWithTableView:(id)arg1;
- (id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2;
- (id)initWithService:(id)arg1 accountStore:(id)arg2;

@end

