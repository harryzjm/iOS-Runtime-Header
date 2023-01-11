//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@protocol _INPBIntentSlotResolutionResult <NSObject>
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasPayloadUnsupported;
@property(retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property(readonly, nonatomic) _Bool hasPayloadSuccess;
@property(retain, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property(readonly, nonatomic) _Bool hasPayloadNeedsValue;
@property(retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property(readonly, nonatomic) _Bool hasPayloadNeedsDisambiguation;
@property(retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property(readonly, nonatomic) _Bool hasPayloadConfirmation;
@property(retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

