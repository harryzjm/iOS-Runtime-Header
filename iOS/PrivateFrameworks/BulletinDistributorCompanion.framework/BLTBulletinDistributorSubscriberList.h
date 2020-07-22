//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTBulletinDistributorSubscriberDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate>
{
    NSMutableArray *_subscribers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *subscribers; // @synthesize subscribers=_subscribers;
- (void).cxx_destruct;
- (void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2;
- (void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2;
- (_Bool)hasSubscribersForSectionID:(id)arg1;
- (id)subscribedSectionIDs;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)removeSubscriber:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

