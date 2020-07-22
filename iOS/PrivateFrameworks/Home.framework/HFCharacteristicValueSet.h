//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface HFCharacteristicValueSet : NSObject
{
    NSMutableSet *_allCharacteristics;
    NSMutableDictionary *_valuesByCharacteristicUUID;
}

@property(readonly, nonatomic) NSSet *allCharacteristics; // @synthesize allCharacteristics=_allCharacteristics;
- (void).cxx_destruct;
- (void)removeValueForCharacteristic:(id)arg1;
- (void)setValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)valueForCharacteristic:(id)arg1;
- (id)init;

@end

