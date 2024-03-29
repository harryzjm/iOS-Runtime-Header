//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSEngagementObserverInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_underlyingPlacements;
    NSMutableSet *_underlyingServiceTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *underlyingServiceTypes; // @synthesize underlyingServiceTypes=_underlyingServiceTypes;
@property(retain, nonatomic) NSMutableSet *underlyingPlacements; // @synthesize underlyingPlacements=_underlyingPlacements;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)removeServiceType:(id)arg1;
- (void)addServiceType:(id)arg1;
- (void)removePlacement:(id)arg1;
- (void)addPlacements:(id)arg1;
@property(readonly, nonatomic) NSSet *serviceTypes;
@property(readonly, nonatomic) NSSet *placements;
- (id)initWithQueue:(id)arg1;

@end

