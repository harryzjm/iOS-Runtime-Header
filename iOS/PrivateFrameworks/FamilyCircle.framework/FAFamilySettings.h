//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircle/FAFamilySetupPrompterDelegate-Protocol.h>

@class FAFamilySetupPrompter, NSString, SSAccount, UIViewController;

@interface FAFamilySettings <FAFamilySetupPrompterDelegate>
{
    FAFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
    _Bool _isFirstRun;
    UIViewController *_presentingViewController;
    SSAccount *_iTunesAccount;
}

@property _Bool isFirstRun; // @synthesize isFirstRun=_isFirstRun;
@property(retain) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (void)_launchPrefsUsingDaemon;
- (void)launchiCloudFamilySettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

