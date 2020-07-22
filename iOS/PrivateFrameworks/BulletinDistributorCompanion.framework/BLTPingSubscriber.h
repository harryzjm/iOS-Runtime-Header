//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingSubscribing-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BLTPingService;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing>
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_pingHandlers;
    id <BLTPingService> _service;
}

@property(retain, nonatomic) id <BLTPingService> service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *pingHandlers; // @synthesize pingHandlers=_pingHandlers;
- (void).cxx_destruct;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingAckHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingHandler:(CDUnknownBlockType)arg2;
- (void)_subscribeToSectionID:(id)arg1 withPingHandler:(id)arg2 withAck:(_Bool)arg3 forFullBulletins:(_Bool)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;
- (id)subscriptionInfos;
- (id)sectionIDsForBulletins;
- (id)sectionIDs;
- (void)pingSubscriberDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

