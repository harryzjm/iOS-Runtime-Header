//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUI/NSObject-Protocol.h>

@class VCUICreateVoiceShortcutViewController, VCVoiceShortcut;

@protocol VCUICreateVoiceShortcutViewControllerDelegate <NSObject>
- (void)createVoiceShortcutViewController:(VCUICreateVoiceShortcutViewController *)arg1 didCreateVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(VCUICreateVoiceShortcutViewController *)arg1;

@optional
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUICreateVoiceShortcutViewController *)arg1;
@end
