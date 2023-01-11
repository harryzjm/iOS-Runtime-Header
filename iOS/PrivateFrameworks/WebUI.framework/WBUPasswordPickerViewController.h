//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSString, _WBUPasswordPicker;

@interface WBUPasswordPickerViewController : UINavigationController
{
    NSString *_prompt;
    long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;
    CDUnknownBlockType _completionHandler;
    _WBUPasswordPicker *_picker;
    _Bool _shouldDismissOnCompletion;
    _Bool _shouldShowIcons;
    _Bool _forUserNamesOnly;
    NSArray *_hintStrings;
    NSArray *_serviceNameHintStrings;
    NSArray *_domainHintStrings;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
+ (struct CGSize)preferredIconSize;
@property(readonly, nonatomic) _Bool forUserNamesOnly; // @synthesize forUserNamesOnly=_forUserNamesOnly;
@property(readonly, nonatomic) _Bool shouldShowIcons; // @synthesize shouldShowIcons=_shouldShowIcons;
@property(nonatomic) _Bool shouldDismissOnCompletion; // @synthesize shouldDismissOnCompletion=_shouldDismissOnCompletion;
@property(readonly, nonatomic) long long minimumNumberOfCredentialsToShowLikelyMatchesSection; // @synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property(readonly, copy, nonatomic) NSArray *domainHintStrings; // @synthesize domainHintStrings=_domainHintStrings;
@property(readonly, copy, nonatomic) NSArray *serviceNameHintStrings; // @synthesize serviceNameHintStrings=_serviceNameHintStrings;
@property(readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, copy, nonatomic) NSArray *hintStrings; // @synthesize hintStrings=_hintStrings;
- (void).cxx_destruct;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_pickSavedPassword:(id)arg1;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (void)_cancel;
- (void)dealloc;
- (void)iconDidUpdateForDomain:(id)arg1;
- (id)backgroundColorForDomain:(id)arg1;
- (id)iconForDomain:(id)arg1;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(_Bool)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(_Bool)arg8 shouldShowIcons:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(_Bool)arg2 appName:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(_Bool)arg8 shouldShowIcons:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(_Bool)arg2 hintStrings:(id)arg3 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg4 shouldDismissOnCompletion:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

