//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGMIMetricsTrialMetadata : PBCodable <NSCopying>
{
    int _deploymentId;
    NSString *_experimentId;
    NSString *_treatmentId;
    struct {
        unsigned int deploymentId:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int deploymentId; // @synthesize deploymentId=_deploymentId;
@property(retain, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(retain, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeploymentId;
@property(readonly, nonatomic) _Bool hasTreatmentId;
@property(readonly, nonatomic) _Bool hasExperimentId;

@end
