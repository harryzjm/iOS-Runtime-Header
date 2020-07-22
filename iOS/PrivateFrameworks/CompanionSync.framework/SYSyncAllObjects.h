//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SYMessageHeader;

@interface SYSyncAllObjects : PBCodable <NSCopying>
{
    unsigned long long _version;
    NSMutableArray *_allObjects;
    SYMessageHeader *_header;
    NSString *_syncID;
}

+ (Class)allObjectsType;
@property(retain, nonatomic) NSMutableArray *allObjects; // @synthesize allObjects=_allObjects;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
- (id)allObjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allObjectsCount;
- (void)addAllObjects:(id)arg1;
- (void)clearAllObjects;

@end

