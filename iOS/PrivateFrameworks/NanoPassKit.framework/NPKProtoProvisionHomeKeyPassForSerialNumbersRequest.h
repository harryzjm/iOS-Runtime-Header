//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoProvisionHomeKeyPassForSerialNumbersRequest : PBRequest <NSCopying>
{
    NSMutableArray *_serialNumbers;
}

+ (Class)serialNumbersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *serialNumbers; // @synthesize serialNumbers=_serialNumbers;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serialNumbersAtIndex:(unsigned long long)arg1;
- (unsigned long long)serialNumbersCount;
- (void)addSerialNumbers:(id)arg1;
- (void)clearSerialNumbers;

@end
