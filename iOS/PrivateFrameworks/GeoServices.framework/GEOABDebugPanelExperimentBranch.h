//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_branchLabel;
    NSString *_branchName;
    NSString *_experimentId;
    NSString *_experimentName;
}

@property(retain, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
@property(retain, nonatomic) NSString *branchLabel; // @synthesize branchLabel=_branchLabel;
@property(retain, nonatomic) NSString *experimentName; // @synthesize experimentName=_experimentName;
@property(retain, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBranchName;
@property(readonly, nonatomic) _Bool hasBranchLabel;
@property(readonly, nonatomic) _Bool hasExperimentName;
@property(readonly, nonatomic) _Bool hasExperimentId;

@end

