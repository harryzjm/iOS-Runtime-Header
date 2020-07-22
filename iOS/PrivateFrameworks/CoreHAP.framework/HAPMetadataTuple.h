//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataTuple : HMFObject
{
    NSString *_characteristicType;
    NSString *_serviceType;
    NSString *_index;
}

@property(readonly, nonatomic) NSString *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2;

@end

