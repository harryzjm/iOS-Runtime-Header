//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying>
{
    double _averageHeartRateInBPM;
    long long _privateClassification;
    long long _symptomsStatus;
    HDCodableSample *_sample;
    NSData *_voltagePayload;
    struct {
        unsigned int averageHeartRateInBPM:1;
        unsigned int privateClassification:1;
        unsigned int symptomsStatus:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long symptomsStatus; // @synthesize symptomsStatus=_symptomsStatus;
@property(retain, nonatomic) NSData *voltagePayload; // @synthesize voltagePayload=_voltagePayload;
@property(nonatomic) double averageHeartRateInBPM; // @synthesize averageHeartRateInBPM=_averageHeartRateInBPM;
@property(nonatomic) long long privateClassification; // @synthesize privateClassification=_privateClassification;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSymptomsStatus;
@property(readonly, nonatomic) _Bool hasVoltagePayload;
@property(nonatomic) _Bool hasAverageHeartRateInBPM;
@property(nonatomic) _Bool hasPrivateClassification;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
