//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPListPosition, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying>
{
    CKDPListPosition *_position;
    NSMutableArray *_values;
    _Bool _insertAfter;
    struct {
        unsigned int insertAfter:1;
    } _has;
}

+ (Class)valueType;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) _Bool insertAfter; // @synthesize insertAfter=_insertAfter;
@property(retain, nonatomic) CKDPListPosition *position; // @synthesize position=_position;
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
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;
@property(nonatomic) _Bool hasInsertAfter;
@property(readonly, nonatomic) _Bool hasPosition;

@end
