//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>

@class MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint, NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <NSCopying>
{
    _Bool _optional;
    NSString *_name;
    long long _type;
    NSDictionary *_valueConstraints;
    MLMultiArrayConstraint *_multiArrayConstraintCached;
    MLImageConstraint *_imageConstraintCached;
    MLDictionaryConstraint *_dictionaryConstraintCached;
    MLSequenceConstraint *_sequenceConstraintCached;
}

+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 constraints:(id)arg4;
@property(readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached; // @synthesize sequenceConstraintCached=_sequenceConstraintCached;
@property(readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached; // @synthesize dictionaryConstraintCached=_dictionaryConstraintCached;
@property(readonly, nonatomic) MLImageConstraint *imageConstraintCached; // @synthesize imageConstraintCached=_imageConstraintCached;
@property(readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached; // @synthesize multiArrayConstraintCached=_multiArrayConstraintCached;
@property(retain) NSDictionary *valueConstraints; // @synthesize valueConstraints=_valueConstraints;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)allowsValuesWithDescription:(id)arg1;
- (id)sequenceConstraint;
- (id)dictionaryConstraint;
- (id)imageConstraint;
- (id)multiArrayConstraint;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (_Bool)isAllowedValue:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 contraints:(id)arg4;
- (id)debugQuickLookObject;

@end

