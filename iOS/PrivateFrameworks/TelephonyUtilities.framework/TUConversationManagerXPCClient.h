//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUConversationManagerXPCClient-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUConversationManagerDataSourceDelegate;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource>
{
    _Bool _hasRequestedInitialState;
    int _token;
    id <TUConversationManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_conversationsByGroupUUID;
}

+ (id)conversationManagerServerXPCInterface;
+ (id)conversationManagerClientXPCInterface;
+ (id)conversationManagerAllowedClasses;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
@property(copy, nonatomic) NSDictionary *conversationsByGroupUUID; // @synthesize conversationsByGroupUUID=_conversationsByGroupUUID;
@property(nonatomic) _Bool hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)updateConversationsByGroupUUID:(id)arg1;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_invokeCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)invalidate;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

