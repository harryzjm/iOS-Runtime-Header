//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSString;

__attribute__((visibility("hidden")))
@interface HAPCharacteristicTuple : HMFObject
{
    HAPCharacteristic *_hapCharacteristic;
    NSString *_serverIdentifier;
    long long _linkType;
}

- (void).cxx_destruct;
@property long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) HAPCharacteristic *hapCharacteristic; // @synthesize hapCharacteristic=_hapCharacteristic;
- (id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;

@end

