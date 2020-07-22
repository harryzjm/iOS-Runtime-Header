//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPWtwCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;
    NSMutableArray *_wtwLocations;
}

+ (Class)wtwLocationType;
@property(retain, nonatomic) NSMutableArray *wtwLocations; // @synthesize wtwLocations=_wtwLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)wtwLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)wtwLocationsCount;
- (void)addWtwLocation:(id)arg1;
- (void)clearWtwLocations;

@end

