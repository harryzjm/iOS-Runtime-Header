//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class SUKeybagInterface;

@protocol SUKeybagInterfaceObserver <NSObject>

@optional
- (void)keybagInterface:(SUKeybagInterface *)arg1 passcodeLockedStateDidChange:(_Bool)arg2;
- (void)keybagInterface:(SUKeybagInterface *)arg1 hasPasscodeSetDidChange:(_Bool)arg2;
@end

