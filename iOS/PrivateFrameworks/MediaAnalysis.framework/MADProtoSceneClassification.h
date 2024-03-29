//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface MADProtoSceneClassification : PBCodable
{
    double _confidence;
    VCPProtoBounds *_boundingBox;
    unsigned int _sceneIdentifier;
}

+ (id)protoFromPhotosSceneClassification:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VCPProtoBounds *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned int sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBoundingBox;
- (id)photosSceneClassification;

@end

