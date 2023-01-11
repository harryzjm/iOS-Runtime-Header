//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADAdVector : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _vectors;
    NSString *_version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
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
- (void)setVectors:(double *)arg1 count:(unsigned long long)arg2;
- (double)vectorAtIndex:(unsigned long long)arg1;
- (void)addVector:(double)arg1;
- (void)clearVectors;
@property(readonly, nonatomic) double *vectors;
@property(readonly, nonatomic) unsigned long long vectorsCount;
@property(readonly, nonatomic) _Bool hasVersion;
- (void)dealloc;

@end
