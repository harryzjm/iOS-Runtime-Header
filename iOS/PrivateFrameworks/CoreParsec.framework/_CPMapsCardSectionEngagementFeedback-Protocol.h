//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPPunchoutForFeedback;

@protocol _CPMapsCardSectionEngagementFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasResultId;
@property(copy, nonatomic) NSString *resultId;
@property(readonly, nonatomic) _Bool hasCardSectionId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(readonly, nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType;
@property(readonly, nonatomic) _Bool hasActionCardType;
@property(nonatomic) int actionCardType;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(nonatomic) int triggerEvent;
@property(readonly, nonatomic) _Bool hasDestination;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
