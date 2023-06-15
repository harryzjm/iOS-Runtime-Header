//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientStatusIdentifier : NSObject
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;
    NSData *_macAddress;
    HMDNetworkRouterIPAddress *_ipAddress;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

