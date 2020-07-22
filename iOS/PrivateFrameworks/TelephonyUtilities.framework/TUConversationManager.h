//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationManagerDataSourceDelegate-Protocol.h>

@class NSMapTable, NSSet, NSString;
@protocol OS_dispatch_queue, TUConversationManagerDataSource;

@interface TUConversationManager : NSObject <TUConversationManagerDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUConversationManagerDataSource> _dataSource;
    NSMapTable *_delegateToQueue;
}

@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) id <TUConversationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)conversationsChangedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)conversationWithGroupUUID:(id)arg1;
- (id)activeConversationWithGroupUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *activeConversations;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

