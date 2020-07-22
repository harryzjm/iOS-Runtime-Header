//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSourceAvailabilityEntry-Protocol.h>

@class NSSNewsAvailabilityMonitor, NSString;
@protocol OS_dispatch_queue;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>
{
    _Bool _available;
    CDUnknownBlockType _availabilityChangedNotificationBlock;
    NSSNewsAvailabilityMonitor *_NewsAvailabilityMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSSNewsAvailabilityMonitor *NewsAvailabilityMonitor; // @synthesize NewsAvailabilityMonitor=_NewsAvailabilityMonitor;
- (void).cxx_destruct;
- (void)_updateAvailability;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) Class headlineResultsFetchDescriptorClass;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock; // @synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock;
- (id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
