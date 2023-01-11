//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCUIProfile;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController
{
    _Bool _installComplete;
    _Bool _profileOffersReenroll;
    _Bool _profileRemovable;
    MCUIProfile *_UIProfile;
    long long _profileViewMode;
    unsigned long long _installProfileSource;
    id <MCProfileViewControllerDelegate> _profileViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool profileRemovable; // @synthesize profileRemovable=_profileRemovable;
@property(nonatomic) _Bool profileOffersReenroll; // @synthesize profileOffersReenroll=_profileOffersReenroll;
@property(nonatomic) __weak id <MCProfileViewControllerDelegate> profileViewControllerDelegate; // @synthesize profileViewControllerDelegate=_profileViewControllerDelegate;
@property(nonatomic) _Bool installComplete; // @synthesize installComplete=_installComplete;
@property(nonatomic) unsigned long long installProfileSource; // @synthesize installProfileSource=_installProfileSource;
@property(nonatomic) long long profileViewMode; // @synthesize profileViewMode=_profileViewMode;
@property(readonly, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
- (void)_profileChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_delegateCanUpdate;
- (_Bool)_delegateCanRemove;
- (void)_updateProfile;
- (void)_removeProfile;
- (_Bool)_shouldShowRemoveButton;
- (_Bool)_shouldShowUpdateButton;
- (_Bool)_showManagedPayloads;
- (void)setProfile:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3;
- (id)initWithStyle:(long long)arg1;

@end
