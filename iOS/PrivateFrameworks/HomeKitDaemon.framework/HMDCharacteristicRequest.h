//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristic;

@interface HMDCharacteristicRequest : HMFObject
{
    HMDCharacteristic *_characteristic;
    id _previousValue;
}

+ (id)requestWithCharacteristic:(id)arg1;
@property(readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCharacteristic:(id)arg1;

@end

