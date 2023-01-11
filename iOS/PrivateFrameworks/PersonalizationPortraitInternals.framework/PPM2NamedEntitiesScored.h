//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2NamedEntitiesScored : PBCodable <NSCopying>
{
    NSString *_activeTreatments;
    NSString *_bundleId;
    unsigned int _resultSizeLog10;
    _Bool _error;
    _Bool _exclusionSpec;
    _Bool _limitHit;
    _Bool _timeLimited;
    _Bool _timeSpec;
    CDStruct_68ee747f _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(nonatomic) _Bool exclusionSpec; // @synthesize exclusionSpec=_exclusionSpec;
@property(nonatomic) _Bool timeLimited; // @synthesize timeLimited=_timeLimited;
@property(nonatomic) _Bool timeSpec; // @synthesize timeSpec=_timeSpec;
@property(nonatomic) _Bool limitHit; // @synthesize limitHit=_limitHit;
@property(nonatomic) unsigned int resultSizeLog10; // @synthesize resultSizeLog10=_resultSizeLog10;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasExclusionSpec;
@property(nonatomic) _Bool hasTimeLimited;
@property(nonatomic) _Bool hasTimeSpec;
@property(nonatomic) _Bool hasLimitHit;
@property(nonatomic) _Bool hasResultSizeLog10;
@property(readonly, nonatomic) _Bool hasBundleId;

@end
