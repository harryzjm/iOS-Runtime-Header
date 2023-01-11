//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMTimingCollection : NSObject
{
    NSMutableDictionary *_timings;
    NSObject<OS_dispatch_queue> *_queue;
}

- (_Bool)hasKey:(id)arg1;
- (id)description;
- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

