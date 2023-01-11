//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSgPTPClock;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject
{
    unsigned int _connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
    unsigned long long _systemDomainClockIdentifier;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1;
+ (id)sharedgPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long systemDomainClockIdentifier; // @synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier;
- (void)dealloc;
- (_Bool)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)addDomain:(unsigned long long *)arg1 error:(id *)arg2;
@property(readonly, retain, nonatomic) TSgPTPClock *systemDomain; // @dynamic systemDomain;
- (id)init;

@end

