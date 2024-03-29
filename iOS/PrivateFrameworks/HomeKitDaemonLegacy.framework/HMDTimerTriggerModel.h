//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDTimerTriggerModel
{
}

+ (id)properties;
- (id)createPayload;

// Remaining properties
@property(copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;
@property(copy, nonatomic) NSData *fireDateTimeZone; // @dynamic fireDateTimeZone;
@property(copy, nonatomic) NSData *fireRepeatInterval; // @dynamic fireRepeatInterval;
@property(copy, nonatomic) NSData *recurrences; // @dynamic recurrences;
@property(copy, nonatomic) NSString *significantEvent; // @dynamic significantEvent;
@property(copy, nonatomic) NSData *significantEventOffset; // @dynamic significantEventOffset;

@end

