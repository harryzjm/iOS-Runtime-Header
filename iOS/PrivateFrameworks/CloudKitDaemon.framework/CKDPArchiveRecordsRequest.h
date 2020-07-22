//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_idsToArchives;
}

+ (Class)idsToArchiveType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *idsToArchives; // @synthesize idsToArchives=_idsToArchives;
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
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;
- (unsigned long long)idsToArchivesCount;
- (void)addIdsToArchive:(id)arg1;
- (void)clearIdsToArchives;

@end

