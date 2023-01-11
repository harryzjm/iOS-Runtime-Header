//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMTimingCollection : NSObject
{
    NSMutableDictionary *_timings;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (_Bool)hasKey:(id)arg1;
- (id)description;
- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)init;

@end
