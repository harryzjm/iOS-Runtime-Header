//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSEndpointConnection;
@protocol OS_dispatch_queue;

@interface CLSUtilityService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CLSEndpointConnection *_endpointConnection;
}

+ (id)sharedInstance;
+ (Class)endpointClass;
@property(retain, nonatomic) CLSEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void).cxx_destruct;
- (void)authorizationStatusForContextAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncPushWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncStatsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDevModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)databasePathWithCompletion:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)initWithEndpoint:(id)arg1;

@end

