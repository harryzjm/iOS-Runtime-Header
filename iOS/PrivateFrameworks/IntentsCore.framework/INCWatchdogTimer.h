//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface INCWatchdogTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
}

- (void).cxx_destruct;
- (_Bool)cancelIfNotAlreadyCanceled;
- (void)cancel;
- (void)start;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;

@end

