//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBShareSheetExposure : PBCodable <NSCopying>
{
    NSString *_contentId;
    int _contentType;
    NSString *_referencedArticleId;
    int _shareSheetExposureLocation;
    struct {
        unsigned int contentType:1;
        unsigned int shareSheetExposureLocation:1;
    } _has;
}

@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShareSheetExposureLocation;
@property(nonatomic) int shareSheetExposureLocation; // @synthesize shareSheetExposureLocation=_shareSheetExposureLocation;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasContentId;
- (int)StringAsContentType:(id)arg1;
- (id)contentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;

@end

