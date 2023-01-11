//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDStorefrontView, NSString, PBDataReader;

@interface GEOPDStorefrontPresentation : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    GEOPDStorefrontView *_closeUpView;
    NSString *_overlayImageUrl;
    GEOPDStorefrontView *_standOffView;
    struct {
        unsigned int read_closeUpView:1;
        unsigned int read_overlayImageUrl:1;
        unsigned int read_standOffView:1;
        unsigned int wrote_closeUpView:1;
        unsigned int wrote_overlayImageUrl:1;
        unsigned int wrote_standOffView:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *overlayImageUrl;
@property(readonly, nonatomic) _Bool hasOverlayImageUrl;
- (void)_readOverlayImageUrl;
@property(retain, nonatomic) GEOPDStorefrontView *standOffView;
@property(readonly, nonatomic) _Bool hasStandOffView;
- (void)_readStandOffView;
@property(retain, nonatomic) GEOPDStorefrontView *closeUpView;
@property(readonly, nonatomic) _Bool hasCloseUpView;
- (void)_readCloseUpView;

@end
