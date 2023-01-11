//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAPerson;

@interface SADPDeviceDetail <SAAceSerializable>
{
}

+ (id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deviceDetail;
@property(nonatomic) _Bool thisDevice;
@property(copy, nonatomic) NSString *productName;
@property(retain, nonatomic) SAPerson *owner;
@property(nonatomic) _Bool foundNearby;
@property(copy, nonatomic) NSString *deviceName;
@property(copy, nonatomic) NSString *deviceLocality;
@property(copy, nonatomic) NSString *deviceId;
@property(copy, nonatomic) NSString *deviceClass;
@property(nonatomic) _Bool canPlaySound;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
