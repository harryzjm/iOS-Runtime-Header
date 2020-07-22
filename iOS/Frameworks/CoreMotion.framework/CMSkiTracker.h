//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject
{
    CMSkiTrackerInternal *_internal;
}

+ (_Bool)isAvailable;
@property(readonly, nonatomic) CMSkiTrackerInternal *_internal; // @synthesize _internal;
- (void)querySkiUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

