//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableAttributeDefaultValueProviding-Protocol.h>

@class NSOrderedSet, NSString, NSUnit;

@interface INCodableMeasurementAttributeMetadata <INCodableAttributeDefaultValueProviding>
{
    _Bool _supportsNegativeNumbers;
    NSUnit *_unit;
    NSOrderedSet *_defaultUnits;
    double _defaultValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportsNegativeNumbers; // @synthesize supportsNegativeNumbers=_supportsNegativeNumbers;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSOrderedSet *defaultUnits; // @synthesize defaultUnits=_defaultUnits;
@property(retain, nonatomic) NSUnit *unit; // @synthesize unit=_unit;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_defaultUnitWithNames:(id)arg1;
- (id)_unitWithUnitName:(id)arg1;
- (Class)_unitClass;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
