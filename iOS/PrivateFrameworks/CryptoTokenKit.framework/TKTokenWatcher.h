//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolTokenWatcher-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSXPCConnection;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher>
{
    NSXPCConnection *_connection;
    NSMutableArray *_tokenIDs;
    NSMutableDictionary *_removalHandlers;
    CDUnknownBlockType _insertionHandler;
}

- (void).cxx_destruct;
@property(readonly) NSArray *tokenIDs;
- (void)removedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)insertedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addRemovalHandler:(CDUnknownBlockType)arg1 forTokenID:(id)arg2;
- (void)setInsertionHandler:(CDUnknownBlockType)arg1;
- (void)setup;
- (id)initWithInsertionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
