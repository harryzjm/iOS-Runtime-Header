//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBObserverClientInterface-Protocol.h>
#import <BulletinBoard/BBObserverServerInterface-Protocol.h>

@class BBServer, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface>
{
    NSXPCConnection *_connection;
    BBServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_bulletinIDsToTransaction;
    NSString *_clientBundleIdentifier;
}

+ (id)xpcInterface;
@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(retain, nonatomic) NSMutableDictionary *bulletinIDsToTransaction; // @synthesize bulletinIDsToTransaction=_bulletinIDsToTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak BBServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getBulletinsWithHandler:(CDUnknownBlockType)arg1;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPrivilegedSenderTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionOrderRuleWithHandler:(CDUnknownBlockType)arg1;
- (void)getActiveAlertBehaviorOverridesWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)handleResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)getObserverDebugInfo:(CDUnknownBlockType)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)removeSection:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateBulletin:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)incrementedTransactionIDForBulletinID:(id)arg1;
- (id)currentTransactionForBulletinID:(id)arg1;
- (id)transactionBulletinIDs;
- (void)removeTransaction:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithServer:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4;
- (id)initWithServer:(id)arg1 connection:(id)arg2 calloutQueue:(id)arg3;

@end

