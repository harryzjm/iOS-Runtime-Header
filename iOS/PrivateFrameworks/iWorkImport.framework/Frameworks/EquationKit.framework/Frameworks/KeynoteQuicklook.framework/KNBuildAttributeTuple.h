//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class KNBuild, KNBuildAttributeValue, KNBuildChunk, KNBuildChunkIdentifier, NSString, NSUUID;

@interface KNBuildAttributeTuple : TSPObject
{
    NSString *_property;
    KNBuildAttributeValue *_attributeValue;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    _Bool _definedAttributeValue;
    _Bool _definedBuildChunkIdentifier;
    _Bool _definedBuildId;
}

+ (id)tupleWithChunk:(id)arg1 referent:(unsigned long long)arg2;
+ (id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) KNBuildAttributeValue *value; // @synthesize value=_attributeValue;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)description;
- (_Bool)isValidForSlide:(id)arg1;
@property(readonly, nonatomic) _Bool isChunkTuple;
@property(readonly, nonatomic) _Bool isBuildTuple;
@property(readonly, nonatomic) KNBuild *build;
@property(readonly, nonatomic) KNBuildChunk *chunk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4;

@end

