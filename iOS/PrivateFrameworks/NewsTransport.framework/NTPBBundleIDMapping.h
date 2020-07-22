//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying>
{
    NSMutableArray *_bundleIds;
}

+ (Class)bundleIdsType;
@property(retain, nonatomic) NSMutableArray *bundleIds; // @synthesize bundleIds=_bundleIds;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdsCount;
- (void)addBundleIds:(id)arg1;
- (void)clearBundleIds;

@end
