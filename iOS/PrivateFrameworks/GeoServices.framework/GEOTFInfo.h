//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTFInfo : PBCodable <NSCopying>
{
    NSString *_comment;
    NSString *_language;
}

@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
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
@property(readonly, nonatomic) _Bool hasComment;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

