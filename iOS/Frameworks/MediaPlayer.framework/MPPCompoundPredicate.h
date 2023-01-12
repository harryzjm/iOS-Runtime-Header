//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPPCompoundPredicate : PBCodable
{
    NSMutableArray *_predicates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *predicates; // @synthesize predicates=_predicates;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)predicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)predicatesCount;
- (void)addPredicates:(id)arg1;
- (void)clearPredicates;
- (void)dealloc;

@end

