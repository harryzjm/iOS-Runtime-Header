//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying>
{
    NSMutableArray *_alightNotificationFeedbacks;
    NSData *_directionResponseID;
    NSMutableArray *_guidanceFeedbacks;
    NSMutableArray *_stepFeedbacks;
    NSMutableArray *_trafficRerouteFeedbacks;
}

+ (Class)guidanceFeedbackType;
+ (Class)alightNotificationFeedbackType;
+ (Class)trafficRerouteFeedbackType;
+ (Class)stepFeedbackType;
@property(retain, nonatomic) NSMutableArray *guidanceFeedbacks; // @synthesize guidanceFeedbacks=_guidanceFeedbacks;
@property(retain, nonatomic) NSMutableArray *alightNotificationFeedbacks; // @synthesize alightNotificationFeedbacks=_alightNotificationFeedbacks;
@property(retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks; // @synthesize trafficRerouteFeedbacks=_trafficRerouteFeedbacks;
@property(retain, nonatomic) NSMutableArray *stepFeedbacks; // @synthesize stepFeedbacks=_stepFeedbacks;
@property(retain, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
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
- (id)guidanceFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceFeedbacksCount;
- (void)addGuidanceFeedback:(id)arg1;
- (void)clearGuidanceFeedbacks;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)alightNotificationFeedbacksCount;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)clearAlightNotificationFeedbacks;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficRerouteFeedbacksCount;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)clearTrafficRerouteFeedbacks;
- (id)stepFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepFeedbacksCount;
- (void)addStepFeedback:(id)arg1;
- (void)clearStepFeedbacks;
@property(readonly, nonatomic) _Bool hasDirectionResponseID;

@end

