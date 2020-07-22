//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying>
{
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct {
        unsigned int durationInOldState:1;
    } _has;
}

+ (Class)stateTransitionFeedbackType;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
@property(retain, nonatomic) NSMutableArray *stateTransitionFeedbacks; // @synthesize stateTransitionFeedbacks=_stateTransitionFeedbacks;
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
@property(nonatomic) _Bool hasDurationInOldState;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateTransitionFeedbacksCount;
- (void)addStateTransitionFeedback:(id)arg1;
- (void)clearStateTransitionFeedbacks;

@end

