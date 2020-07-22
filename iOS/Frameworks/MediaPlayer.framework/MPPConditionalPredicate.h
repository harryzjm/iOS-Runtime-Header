//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying>
{
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}

@property(retain, nonatomic) MPPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(retain, nonatomic) MPPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(retain, nonatomic) MPPMediaPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasElsePredicate;
@property(readonly, nonatomic) _Bool hasThenPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
- (void)dealloc;

@end

