//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BKSHIDEventDeferringToken, FBProcess, FBProcessManager;

@protocol FBProcessManagerKeyboardFocusDelegate <NSObject>
- (void)processManager:(FBProcessManager *)arg1 didSelectKeyboardFocusProcess:(FBProcess *)arg2 deferringToken:(BKSHIDEventDeferringToken *)arg3;
@end
