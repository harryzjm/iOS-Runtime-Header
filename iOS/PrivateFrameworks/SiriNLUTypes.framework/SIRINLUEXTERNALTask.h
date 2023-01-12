//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRICOMMONDoubleValue, SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALTask : PBCodable <NSCopying>
{
    SIRICOMMONDoubleValue *_score;
    SIRINLUEXTERNALUsoGraph *_task;
    SIRINLUEXTERNALUUID *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SIRICOMMONDoubleValue *score; // @synthesize score=_score;
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *task; // @synthesize task=_task;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasTask;
@property(readonly, nonatomic) _Bool hasTaskId;

@end
