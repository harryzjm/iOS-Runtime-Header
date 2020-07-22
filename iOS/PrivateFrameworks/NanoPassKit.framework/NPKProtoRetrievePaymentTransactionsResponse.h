//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRetrievePaymentTransactionsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_transactionPassIDs;
    NSMutableArray *_transactionsBytes;
}

+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;
@property(retain, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property(retain, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;
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
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionPassIDsCount;
- (void)addTransactionPassIDs:(id)arg1;
- (void)clearTransactionPassIDs;
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionsBytesCount;
- (void)addTransactionsBytes:(id)arg1;
- (void)clearTransactionsBytes;

@end
