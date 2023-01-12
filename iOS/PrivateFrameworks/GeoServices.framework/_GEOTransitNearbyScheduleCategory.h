//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitNearbyScheduleCategory : NSObject
{
    NSString *_displayName;
    NSArray *_groups;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithTransitScheduleCategory:(id)arg1 nearbyScheduleGroups:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

