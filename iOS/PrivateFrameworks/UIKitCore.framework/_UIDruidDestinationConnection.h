//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol _DUIServerSessionDestination;

__attribute__((visibility("hidden")))
@interface _UIDruidDestinationConnection : NSObject
{
    id <_DUIServerSessionDestination> _serverSession;
    NSXPCConnection *_connection;
    _Bool _systemPolicy;
    unsigned int _sessionIdentifier;
    CDUnknownBlockType _connectionBlock;
    CDUnknownBlockType _dragEndBlock;
    CDUnknownBlockType _dropPerformBlock;
    CDUnknownBlockType _handOffDroppedItemsBlock;
    CDUnknownBlockType _dragPreviewProviderBlock;
    CDUnknownBlockType _itemsAddedBlock;
    long long _state;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSystemPolicy) _Bool systemPolicy; // @synthesize systemPolicy=_systemPolicy;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType itemsAddedBlock; // @synthesize itemsAddedBlock=_itemsAddedBlock;
@property(copy, nonatomic) CDUnknownBlockType dragPreviewProviderBlock; // @synthesize dragPreviewProviderBlock=_dragPreviewProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType handOffDroppedItemsBlock; // @synthesize handOffDroppedItemsBlock=_handOffDroppedItemsBlock;
@property(copy, nonatomic) CDUnknownBlockType dropPerformBlock; // @synthesize dropPerformBlock=_dropPerformBlock;
@property(copy, nonatomic) CDUnknownBlockType dragEndBlock; // @synthesize dragEndBlock=_dragEndBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionBlock; // @synthesize connectionBlock=_connectionBlock;
@property(readonly, nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (oneway void)dragEnded;
- (oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;
- (oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)addedItemCollection:(id)arg1;
- (oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestVisibleItems:(CDUnknownBlockType)arg1;
- (void)enableKeyboardIfNeeded;
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (void)takePotentialDrop:(id)arg1;
- (void)sawDragEndEvent;
- (void)dirtyItems:(id)arg1;
- (void)connect;
- (id)initWithSessionIdentifier:(unsigned int)arg1 systemPolicy:(_Bool)arg2;
- (id)serverDestinationProxyWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

