//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoVariationParams : PBCodable
{
    int _errorCode;
    int _loopFadeLen;
    int _loopPeriod;
    int _loopStart;
    struct {
        unsigned int loopFadeLen:1;
        unsigned int loopPeriod:1;
        unsigned int loopStart:1;
    } _has;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) int loopStart; // @synthesize loopStart=_loopStart;
@property(nonatomic) int loopPeriod; // @synthesize loopPeriod=_loopPeriod;
@property(nonatomic) int loopFadeLen; // @synthesize loopFadeLen=_loopFadeLen;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLoopStart;
@property(nonatomic) _Bool hasLoopPeriod;
@property(nonatomic) _Bool hasLoopFadeLen;
- (id)exportToLegacyDictionary;

@end

