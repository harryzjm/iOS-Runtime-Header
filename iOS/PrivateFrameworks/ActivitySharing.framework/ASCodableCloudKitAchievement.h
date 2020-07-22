//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitSample, NSString;

@interface ASCodableCloudKitAchievement : PBCodable <NSCopying>
{
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    long long _workActivityType;
    NSString *_definitionIdentifier;
    ASCodableCloudKitSample *_sample;
    struct {
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int workActivityType:1;
    } _has;
}

@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(nonatomic) long long workActivityType; // @synthesize workActivityType=_workActivityType;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) ASCodableCloudKitSample *sample; // @synthesize sample=_sample;
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
@property(readonly, nonatomic) _Bool hasDefinitionIdentifier;
@property(nonatomic) _Bool hasWorkActivityType;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasCompletedDate;
@property(readonly, nonatomic) _Bool hasSample;

@end
