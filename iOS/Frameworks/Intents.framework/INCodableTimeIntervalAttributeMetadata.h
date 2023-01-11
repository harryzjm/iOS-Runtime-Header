//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface INCodableTimeIntervalAttributeMetadata
{
    long long _defaultUnit;
    long long _minimumUnit;
    long long _maximumUnit;
    NSNumber *_defaultValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long maximumUnit; // @synthesize maximumUnit=_maximumUnit;
@property(nonatomic) long long minimumUnit; // @synthesize minimumUnit=_minimumUnit;
@property(nonatomic) long long defaultUnit; // @synthesize defaultUnit=_defaultUnit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
