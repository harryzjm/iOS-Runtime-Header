//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying>
{
    double _dateData;
    NSMutableArray *_codes;
    NSString *_providerURI;
    NSString *_recordTitle;
    NSString *_recordUUID;
    NSString *_textualValue;
    NSString *_ucumUnitString;
    NSMutableArray *_valueWithRanges;
    CDStruct_4140be0d _has;
}

+ (Class)valueWithRangeType;
+ (Class)codeType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recordUUID; // @synthesize recordUUID=_recordUUID;
@property(retain, nonatomic) NSString *providerURI; // @synthesize providerURI=_providerURI;
@property(retain, nonatomic) NSString *ucumUnitString; // @synthesize ucumUnitString=_ucumUnitString;
@property(retain, nonatomic) NSString *textualValue; // @synthesize textualValue=_textualValue;
@property(retain, nonatomic) NSMutableArray *valueWithRanges; // @synthesize valueWithRanges=_valueWithRanges;
@property(nonatomic) double dateData; // @synthesize dateData=_dateData;
@property(retain, nonatomic) NSString *recordTitle; // @synthesize recordTitle=_recordTitle;
@property(retain, nonatomic) NSMutableArray *codes; // @synthesize codes=_codes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRecordUUID;
@property(readonly, nonatomic) _Bool hasProviderURI;
@property(readonly, nonatomic) _Bool hasUcumUnitString;
@property(readonly, nonatomic) _Bool hasTextualValue;
- (id)valueWithRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)valueWithRangesCount;
- (void)addValueWithRange:(id)arg1;
- (void)clearValueWithRanges;
@property(nonatomic) _Bool hasDateData;
@property(readonly, nonatomic) _Bool hasRecordTitle;
- (id)codeAtIndex:(unsigned long long)arg1;
- (unsigned long long)codesCount;
- (void)addCode:(id)arg1;
- (void)clearCodes;

@end
