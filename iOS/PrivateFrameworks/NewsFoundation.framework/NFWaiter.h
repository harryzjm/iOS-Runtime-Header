//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NFWaiter : NSObject
{
    double _interval;
    double _timeout;
}

+ (id)error;
+ (void)waitUntil:(CDUnknownBlockType)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)waitFor:(CDUnknownBlockType)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)waitWithTimeout:(double)arg1 conditionProvider:(CDUnknownBlockType)arg2;
+ (id)waitWithTimeout:(double)arg1 valueProvider:(CDUnknownBlockType)arg2;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(CDUnknownBlockType)arg3 condition:(CDUnknownBlockType)arg4;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 conditionProvider:(CDUnknownBlockType)arg3;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;

@end
