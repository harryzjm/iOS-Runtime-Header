//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AXUIServiceEntitlementChecker : NSObject
{
    Class _serviceClass;
    NSMutableArray *_clientConnections;
    NSMutableArray *_entitlementsCaches;
}

@property(retain, nonatomic) NSMutableArray *entitlementsCaches; // @synthesize entitlementsCaches=_entitlementsCaches;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(nonatomic) Class serviceClass; // @synthesize serviceClass=_serviceClass;
- (void).cxx_destruct;
- (id)_possibleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1;
- (id)_singleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1;
- (_Bool)_clientProcessWithAuditToken:(CDStruct_6ad76789 *)arg1 hasEntitlement:(id)arg2;
- (unsigned long long)_indexOfClientConnection:(id)arg1;
- (void)clientConnectionWillBeTerminated:(id)arg1;
- (_Bool)serviceCanProcessMessageWithIdentifier:(unsigned long long)arg1 fromClientWithConnection:(id)arg2 possibleRequiredEntitlements:(id *)arg3;
- (void)dealloc;
- (id)initWithServiceClass:(Class)arg1;

@end

