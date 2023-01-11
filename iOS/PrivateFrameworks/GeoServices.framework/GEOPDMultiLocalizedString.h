//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMultiLocalizedString : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedStrings;
}

+ (Class)localizedStringType;
@property(retain, nonatomic) NSMutableArray *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedStringsCount;
- (void)addLocalizedString:(id)arg1;
- (void)clearLocalizedStrings;
- (id)bestLocalizedName;

@end

