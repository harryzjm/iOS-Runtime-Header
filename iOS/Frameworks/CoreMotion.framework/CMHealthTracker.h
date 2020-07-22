//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject
{
    CMHealthTrackerInternal *_internal;
}

+ (long long)isAuthorizedForVO2MaxData;
+ (_Bool)isVO2MaxDataAvailable;
+ (long long)isAuthorizedForMetMinutes;
+ (_Bool)isMetMinutesAvailable;
@property(readonly, nonatomic) CMHealthTrackerInternal *_internal; // @synthesize _internal;
- (void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
