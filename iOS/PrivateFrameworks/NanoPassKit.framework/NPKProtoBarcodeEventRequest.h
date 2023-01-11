//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface NPKProtoBarcodeEventRequest : PBRequest <NSCopying>
{
    NSMutableArray *_associatedApplicationIdentifiers;
    NSData *_requestData;
}

+ (Class)associatedApplicationIdentifiersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *associatedApplicationIdentifiers; // @synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)associatedApplicationIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedApplicationIdentifiersCount;
- (void)addAssociatedApplicationIdentifiers:(id)arg1;
- (void)clearAssociatedApplicationIdentifiers;
@property(readonly, nonatomic) _Bool hasRequestData;

@end
