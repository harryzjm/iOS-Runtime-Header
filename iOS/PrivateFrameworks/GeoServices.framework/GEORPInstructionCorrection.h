//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPhotoWithMetadata, NSData, NSString;

@interface GEORPInstructionCorrection : PBCodable <NSCopying>
{
    NSString *_comments;
    GEORPPhotoWithMetadata *_photo;
    unsigned int _routeStepIndex;
    NSData *_routeStepScreenshotImageData;
    unsigned int _routeStepSubstepIndex;
    struct {
        unsigned int routeStepIndex:1;
        unsigned int routeStepSubstepIndex:1;
    } _has;
}

@property(retain, nonatomic) NSData *routeStepScreenshotImageData; // @synthesize routeStepScreenshotImageData=_routeStepScreenshotImageData;
@property(nonatomic) unsigned int routeStepSubstepIndex; // @synthesize routeStepSubstepIndex=_routeStepSubstepIndex;
@property(retain, nonatomic) GEORPPhotoWithMetadata *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(nonatomic) unsigned int routeStepIndex; // @synthesize routeStepIndex=_routeStepIndex;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRouteStepScreenshotImageData;
@property(nonatomic) _Bool hasRouteStepSubstepIndex;
@property(readonly, nonatomic) _Bool hasPhoto;
@property(readonly, nonatomic) _Bool hasComments;
@property(nonatomic) _Bool hasRouteStepIndex;

@end
