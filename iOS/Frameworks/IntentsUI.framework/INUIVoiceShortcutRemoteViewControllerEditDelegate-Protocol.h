//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUI/NSObject-Protocol.h>

@class NSError, NSUUID, VCVoiceShortcut;

@protocol INUIVoiceShortcutRemoteViewControllerEditDelegate <NSObject>
- (void)remoteViewControllerEditDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(NSUUID *)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(VCVoiceShortcut *)arg1 error:(NSError *)arg2;
@end

