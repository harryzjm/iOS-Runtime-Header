//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSArray;

@interface EKUICalendarsIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;
}

- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSArray *calendars; // @dynamic calendars;

@end
