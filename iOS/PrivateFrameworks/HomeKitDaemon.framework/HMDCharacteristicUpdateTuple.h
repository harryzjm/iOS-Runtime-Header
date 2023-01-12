//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristic;

@interface HMDCharacteristicUpdateTuple : HMFObject
{
    _Bool _broadcast;
    HMDCharacteristic *_characteristic;
    id _updatedValue;
}

+ (id)characteristicUpdateTuplesWithCharacteristics:(id)arg1 isBroadcast:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isBroadcast) _Bool broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, nonatomic) id updatedValue; // @synthesize updatedValue=_updatedValue;
@property(readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)initWithCharacteristic:(id)arg1 updatedValue:(id)arg2 isBroadcast:(_Bool)arg3;

@end
