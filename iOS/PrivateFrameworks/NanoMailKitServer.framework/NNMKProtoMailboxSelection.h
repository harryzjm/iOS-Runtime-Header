//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NNMKProtoMailboxSelection : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSMutableArray *_mailboxes;
    CDStruct_a125a100 _has;
}

+ (Class)mailboxesType;
+ (id)protoMailboxSelectionFromMailboxSelection:(id)arg1 fullSyncVersion:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
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
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mailboxesCount;
- (void)addMailboxes:(id)arg1;
- (void)clearMailboxes;
@property(nonatomic) _Bool hasFullSyncVersion;
- (id)mailboxSelection;

@end

