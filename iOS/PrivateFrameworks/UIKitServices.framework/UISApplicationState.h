//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, UISApplicationStateClient;

@interface UISApplicationState : NSObject
{
    UISApplicationStateClient *_client;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setNextWakeDate:) NSDate *_nextWakeDate;
- (void)_setMinimumBackgroundFetchInterval:(double)arg1;
@property(nonatomic, setter=_setUsesBackgroundNetwork:) _Bool _usesBackgroundNetwork;
@property(copy, nonatomic) id badgeValue;
- (void)dealloc;
- (id)initForCurrentApplication;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

@end
