//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>
#import <CoreDuet/_DKKnowledgeSynchronizing-Protocol.h>

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>
{
    NSXPCConnection *_connection;
}

+ (id)XPCUserKnowledgeStore;
+ (id)XPCKnowledgeStore;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)confirmConnectionWithError:(id *)arg1;
- (id)sourceDeviceIdentityWithError:(id *)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;
- (_Bool)deleteRemoteState:(id *)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;
- (_Bool)synchronizeWithError:(id *)arg1;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (id)executeQuery:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)deleteObjects:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)saveObjects:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)init;

@end

