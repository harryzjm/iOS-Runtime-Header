//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _screenSizeHeight;
    float _screenSizeWidth;
    _Bool _absolute;
    _Bool _integratedDisplay;
    struct {
        unsigned int screenSizeHeight:1;
        unsigned int screenSizeWidth:1;
        unsigned int absolute:1;
        unsigned int integratedDisplay:1;
    } _has;
}

@property(nonatomic) float screenSizeHeight; // @synthesize screenSizeHeight=_screenSizeHeight;
@property(nonatomic) float screenSizeWidth; // @synthesize screenSizeWidth=_screenSizeWidth;
@property(nonatomic) _Bool integratedDisplay; // @synthesize integratedDisplay=_integratedDisplay;
@property(nonatomic) _Bool absolute; // @synthesize absolute=_absolute;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasScreenSizeHeight;
@property(nonatomic) _Bool hasScreenSizeWidth;
@property(nonatomic) _Bool hasIntegratedDisplay;
@property(nonatomic) _Bool hasAbsolute;

@end
