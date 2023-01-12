//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NPKIDVRemoteDeviceServiceContext : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_eventsToServiceNames;
    NSString *_remoteDeviceID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *remoteDeviceID; // @synthesize remoteDeviceID=_remoteDeviceID;
- (id)description;
- (unsigned long long)_registeredEventsForServiceName:(id)arg1;
- (void)_setServiceNames:(id)arg1 forEventString:(id)arg2;
- (id)_serviceNamesForEventString:(id)arg1;
- (id)serviceNamesForEvent:(unsigned long long)arg1;
- (unsigned long long)unregisterEvents:(unsigned long long)arg1 forServiceName:(id)arg2;
- (unsigned long long)registerEvents:(unsigned long long)arg1 forServiceName:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
