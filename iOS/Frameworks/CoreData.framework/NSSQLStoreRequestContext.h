//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSException, NSManagedObjectContext, NSNumber, NSPersistentStoreRequest, NSQueryGenerationToken, NSSQLCore, NSSQLRowCache, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface NSSQLStoreRequestContext : NSObject
{
    NSSQLCore *_sqlCore;
    NSPersistentStoreRequest *_persistentStoreRequest;
    NSSQLiteConnection *_connection;
    NSManagedObjectContext *_context;
    NSError *_error;
    NSException *_exception;
    id _result;
    NSQueryGenerationToken *_queryGeneration;
    NSNumber *_transactionID;
    _Bool _useColoredLogging;
    _Bool _useConcurrentFetching;
    _Bool _hasHistoryTracking;
    _Bool _storeIsInMemory;
}

@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest; // @synthesize persistentStoreRequest=_persistentStoreRequest;
- (void)executeEpilogue;
- (_Bool)executeRequestUsingConnection:(id)arg1;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
@property(readonly, nonatomic) _Bool isWritingRequest;
@property(readonly, nonatomic) NSSQLRowCache *rowCache;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

