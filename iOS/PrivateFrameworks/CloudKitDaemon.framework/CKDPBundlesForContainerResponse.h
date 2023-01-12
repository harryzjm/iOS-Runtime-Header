//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable
{
    NSMutableArray *_bundleIDs;
}

+ (Class)bundleIDType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bundleIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIDsCount;
- (void)addBundleID:(id)arg1;
- (void)clearBundleIDs;

@end

