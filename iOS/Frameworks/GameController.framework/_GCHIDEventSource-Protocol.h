//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class _GCCControllerHIDServiceInfo;

@protocol _GCHIDEventSource <NSObject>
- (id)observeHIDEvents:(void (^)(struct __IOHIDEvent *))arg1;
- (id)observeHIDEvents:(void (^)(struct __IOHIDEvent *))arg1 forService:(_GCCControllerHIDServiceInfo *)arg2;
@end
