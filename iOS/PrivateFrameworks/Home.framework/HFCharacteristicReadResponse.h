//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HMCharacteristic, NSError, NSSet, NSString;

@interface HFCharacteristicReadResponse : NSObject <NAIdentifiable>
{
    HMCharacteristic *_characteristic;
    NSSet *_readTraits;
    id _value;
    NSError *_error;
}

+ (id)na_identity;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSSet *readTraits; // @synthesize readTraits=_readTraits;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)valueWithExpectedClass:(Class)arg1;
- (id)initWithHomeKitResponse:(id)arg1 value:(id)arg2 readTraits:(id)arg3;
- (id)initWithCharacteristic:(id)arg1 readTraits:(id)arg2 value:(id)arg3 error:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

