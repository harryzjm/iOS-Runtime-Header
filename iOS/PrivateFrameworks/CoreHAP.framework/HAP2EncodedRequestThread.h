//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAP2AccessoryServerEncodingThreadBTLERequest, NSString;

__attribute__((visibility("hidden")))
@interface HAP2EncodedRequestThread : HAP2LoggingObject
{
    _Bool _enforcePDUBodyLength;
    HAP2AccessoryServerEncodingThreadBTLERequest *_btleRequest;
}

+ (unsigned long long)hap2RequestTypeFromBTLERequestType:(unsigned char)arg1;
+ (unsigned char)btleRequestTypeFromHAP2RequestType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HAP2AccessoryServerEncodingThreadBTLERequest *btleRequest; // @synthesize btleRequest=_btleRequest;
- (id)serialize;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)initWithBTLERequest:(id)arg1 enforcePDUBodyLength:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

