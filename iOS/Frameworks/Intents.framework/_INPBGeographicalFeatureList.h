//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGeographicalFeatureList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBGeographicalFeatureList : PBCodable <_INPBGeographicalFeatureList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_geographicalFeatures;
}

+ (Class)geographicalFeatureType;
@property(copy, nonatomic) NSArray *geographicalFeatures; // @synthesize geographicalFeatures=_geographicalFeatures;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)geographicalFeatureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long geographicalFeaturesCount;
- (void)addGeographicalFeature:(id)arg1;
- (void)clearGeographicalFeatures;
@property(readonly, nonatomic) _Bool hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

