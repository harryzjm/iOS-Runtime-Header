//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMSettingIntegerValue
{
    long long _integerValue;
}

@property(readonly) long long integerValue; // @synthesize integerValue=_integerValue;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithProtoPayload:(id)arg1;
- (id)protoPayload;
- (id)initWithPayload:(id)arg1;
- (id)payloadCopy;
- (id)initWithIntegerValue:(long long)arg1;

@end
