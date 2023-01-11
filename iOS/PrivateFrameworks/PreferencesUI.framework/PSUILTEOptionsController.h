//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

#import <PreferencesUI/UIAlertViewDelegate-Protocol.h>

@class NSString;

@interface PSUILTEOptionsController : PSListItemsController <UIAlertViewDelegate>
{
}

+ (_Bool)isOnCallOfSubType:(struct __CFString *)arg1;
+ (void)setVoice:(id)arg1 enabled:(_Bool)arg2;
+ (_Bool)shouldShowVoiceOptions:(id)arg1;
+ (_Bool)isProvisioning:(id)arg1;
+ (unsigned long long)voiceAvailability:(id)arg1;
+ (_Bool)isVoiceEnabled:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)presentOnCallAlertIfNeededForService:(unsigned long long)arg1 okayCompletion:(CDUnknownBlockType)arg2;
- (void)presentCallCarrierAlert:(id)arg1;
- (void)updateProvisioning;
- (void)listItemSelected:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

