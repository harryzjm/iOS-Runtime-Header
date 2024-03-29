//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, PBUnknownFields;
@protocol GEOSurchargeType;

__attribute__((visibility("hidden")))
@interface GEORequestOptions : PBCodable
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_requestOptions;
    int _optionUsed;
    struct {
        unsigned int has_optionUsed:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) id <GEOSurchargeType> selectedSurchargeType;
@property(readonly, nonatomic) unsigned long long selectedSurchargeTypeIndex;
@property(readonly, nonatomic) NSArray *surchargeTypes;

@end

