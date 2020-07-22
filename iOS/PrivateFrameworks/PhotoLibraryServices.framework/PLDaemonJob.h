//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, PLXPCTransaction;
@protocol OS_xpc_object;

@interface PLDaemonJob : NSObject
{
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
    NSObject<OS_xpc_object> *_connection;
}

+ (void)runDaemonSideWithXPCEvent:(id)arg1 connection:(id)arg2;
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) NSObject<OS_xpc_object> *xpcReply;
- (void)run;
- (void)dealloc;
- (_Bool)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
@property(readonly, retain, nonatomic) NSError *replyError;
@property(readonly, nonatomic) _Bool replyIsError;
@property(readonly, nonatomic) _Bool clientWantsReply;
- (void)runDaemonSide;
- (void)handleReply;
- (void)sendToAssetsdWithReply;
- (void)sendToAssetsd;
- (long long)daemonOperation;

@end

