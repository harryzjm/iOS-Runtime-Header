//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

#import <SafariServices/_SFTranslationTargetLocaleAlertControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, WBSTranslationContext;
@protocol _SFTranslationTargetLocaleAlertControllerDelegate;

@interface _SFTranslationTargetLocaleAlertController : UIAlertController <_SFTranslationTargetLocaleAlertControllerDelegate>
{
    WBSTranslationContext *_translationContext;
    id <_SFTranslationTargetLocaleAlertControllerDelegate> _delegate;
    NSMutableDictionary *_localeIdentifierToAlertActionMap;
}

+ (id)translationAlertControllerWithDelegate:(id)arg1 localeIdentifiers:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *localeIdentifierToAlertActionMap; // @synthesize localeIdentifierToAlertActionMap=_localeIdentifierToAlertActionMap;
@property(nonatomic) __weak id <_SFTranslationTargetLocaleAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)translationAlertController:(id)arg1 validateTargetLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)translationAlertController:(id)arg1 didSelectLocale:(id)arg2;
- (void)_translationAvailabilityDidChange:(id)arg1;
- (void)translationAvailabilityDidChange;
- (void)configurePopoverWithSourceInfo:(id)arg1;
- (id)initWithTranslationContext:(id)arg1;
- (void)_setUpWithLocaleIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
