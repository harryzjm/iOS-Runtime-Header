//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSupport/_PASZonedObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSSet, NSString, PPNamedEntityRecord;

@interface PPNamedEntity : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider>
{
    NSString *_name;
    unsigned long long _category;
    NSString *_dynamicCategory;
    NSString *_bestLanguage;
    NSString *_clusterIdentifier;
}

+ (id)clusterIdentifierFromName:(id)arg1;
+ (unsigned long long)categoryForDescription:(id)arg1;
+ (id)describeCategory:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *clusterIdentifier; // @synthesize clusterIdentifier=_clusterIdentifier;
@property(readonly, nonatomic) NSString *bestLanguage; // @synthesize bestLanguage=_bestLanguage;
@property(readonly, nonatomic) NSString *dynamicCategory; // @synthesize dynamicCategory=_dynamicCategory;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
@property(readonly, nonatomic) double sentimentScore;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNamedEntity:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) PPNamedEntityRecord *mostRelevantRecord;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4 mostRelevantRecord:(id)arg5;

@end
