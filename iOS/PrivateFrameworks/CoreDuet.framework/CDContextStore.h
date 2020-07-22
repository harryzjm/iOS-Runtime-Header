//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CDContextStore : NSObject
{
    NSXPCConnection *_connection;
    _Bool _interrupted;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_waitForeverQueue;
    NSMutableDictionary *_registeredPredicates;
}

+ (id)contextStore;
- (void).cxx_destruct;
- (_Bool)cancelWaitForeverForPredicteString:(id)arg1;
- (void)waitForeverForPredicteString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)cancelWaitForeverForPredicateString:(id)arg1 withOptions:(id)arg2;
- (_Bool)cancelWaitForeverForPredicateString:(id)arg1;
- (void)waitForeverForPredicateString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)deregisterHandlerForPredicateString:(id)arg1 withClientId:(id)arg2;
- (void)deregisterHandlerForPredicateString:(id)arg1 withOptions:(id)arg2;
- (void)deregisterHandlerForPredicateString:(id)arg1;
- (void)deregisterHandlerForPredicateId:(unsigned long long)arg1;
- (void)enableHandlerForPredicateId:(unsigned long long)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)clientIdentifierFromOptions:(id)arg1;
- (id)stateForAllKeys;
- (id)stateForKeys:(id)arg1;
- (id)stateForKeysTreatingNilAsAll:(id)arg1;
- (id)stateForKey:(id)arg1;
- (long long)integerValueForKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;
- (_Bool)setIntegerValue:(long long)arg1 forKey:(id)arg2 withMetaData:(id)arg3;
- (_Bool)setStringValue:(id)arg1 forKey:(id)arg2 withMetaData:(id)arg3;
- (id)settingsForKey:(id)arg1;
- (_Bool)registerKey:(id)arg1 withSettings:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)initConnection;
- (void)set_invalidated:(_Bool)arg1;
- (void)set_interrupted:(_Bool)arg1;

@end

