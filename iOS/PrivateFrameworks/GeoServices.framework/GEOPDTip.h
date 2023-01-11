//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDUser, NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTip : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _tipTime;
    NSMutableArray *_snippets;
    NSString *_tipId;
    GEOPDUser *_tipster;
    struct {
        unsigned int tipTime:1;
    } _has;
}

+ (Class)snippetType;
+ (id)tipsForPlaceData:(id)arg1;
@property(retain, nonatomic) NSString *tipId; // @synthesize tipId=_tipId;
@property(retain, nonatomic) GEOPDUser *tipster; // @synthesize tipster=_tipster;
@property(nonatomic) double tipTime; // @synthesize tipTime=_tipTime;
@property(retain, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;
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
@property(readonly, nonatomic) _Bool hasTipId;
@property(readonly, nonatomic) _Bool hasTipster;
@property(nonatomic) _Bool hasTipTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;

@end

