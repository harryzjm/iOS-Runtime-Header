//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_identifiers;
}

+ (Class)identifiersType;
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
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
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)arg1;
- (void)clearIdentifiers;

@end

