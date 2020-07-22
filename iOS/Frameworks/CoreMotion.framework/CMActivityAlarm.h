//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMActivityAlarm : NSObject
{
    _Bool fIsValid;
    struct __CFRunLoop *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    CDUnknownBlockType fHandler;
    unsigned int _trigger;
    double _duration;
}

+ (id)activityAlarmInfo;
+ (_Bool)activityAlarmAvailable;
@property(nonatomic) unsigned int trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)fire;
- (_Bool)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

