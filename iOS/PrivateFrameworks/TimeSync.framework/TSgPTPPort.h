//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOKInterestNotification, IOKNotificationPort, IOKService;
@protocol OS_dispatch_queue;

@interface TSgPTPPort : NSObject
{
    IOKService *_service;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    IOKInterestNotification *_terminationNotification;
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
    unsigned short _portNumber;
    int _portRole;
    unsigned long long _clockIdentifier;
    NSObject<OS_dispatch_queue> *_propertyUpdateQueue;
}

+ (id)diagnosticInfoForService:(id)arg1;
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;
+ (id)gPTPPortWithService:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // @synthesize propertyUpdateQueue=_propertyUpdateQueue;
@property(nonatomic) unsigned long long clockIdentifier; // @synthesize clockIdentifier=_clockIdentifier;
@property(nonatomic) int portRole; // @synthesize portRole=_portRole;
@property(nonatomic) unsigned short portNumber; // @synthesize portNumber=_portNumber;
- (void)dealloc;
- (id)_notificationPort;
- (id)_notificationQueue;
@property(readonly, nonatomic) int portType; // @dynamic portType;
- (unsigned long long)_clockIdentifier;
- (int)_portRole;
- (unsigned short)_portNumber;
- (void)serviceTerminated;
- (_Bool)stopAutomaticPropertyUpdates;
- (_Bool)startAutomaticPropertyUpdates;
- (void)updateProperties;
@property(readonly, nonatomic) IOKService *service;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(id)arg1;
- (_Bool)_commonInitWithService:(id)arg1;
- (id)init;

@end
