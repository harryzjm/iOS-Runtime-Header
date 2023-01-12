//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CHDMonotonicTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)activateWithTime:(unsigned long long)arg1 repeat:(long long)arg2 block:(CDUnknownBlockType)arg3;

@end
