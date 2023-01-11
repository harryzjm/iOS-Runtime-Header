//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSString, NSUnit;

@interface INCodableMeasurementAttributeMetadata
{
    NSString *_unitString;
    NSString *_defaultUnitsString;
    _Bool _supportsNegativeNumbers;
    NSUnit *_unit;
    NSOrderedSet *_defaultUnits;
    double _defaultValue;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsNegativeNumbers; // @synthesize supportsNegativeNumbers=_supportsNegativeNumbers;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSOrderedSet *defaultUnits; // @synthesize defaultUnits=_defaultUnits;
@property(retain, nonatomic) NSUnit *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_defaultUnitWithNames:(id)arg1;
- (id)_unitWithUnitName:(id)arg1;
- (Class)_unitClass;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
