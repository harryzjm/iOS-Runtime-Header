//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarWidget/NSObject-Protocol.h>

@class NSArray, NextEventComplicationConfigurationIntent;

@protocol NextEventComplicationConfigurationIntentHandling <NSObject>
- (void)provideCalendarsOptionsCollectionForNextEventComplicationConfiguration:(NextEventComplicationConfigurationIntent *)arg1 withCompletion:(void (^)(id, NSError *))arg2;

@optional
- (void)provideCalendarsOptionsForNextEventComplicationConfiguration:(NextEventComplicationConfigurationIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)defaultCalendarsForNextEventComplicationConfiguration:(NextEventComplicationConfigurationIntent *)arg1;
- (void)handleNextEventComplicationConfiguration:(NextEventComplicationConfigurationIntent *)arg1 completion:(void (^)(NextEventComplicationConfigurationIntentResponse *))arg2;
- (void)confirmNextEventComplicationConfiguration:(NextEventComplicationConfigurationIntent *)arg1 completion:(void (^)(NextEventComplicationConfigurationIntentResponse *))arg2;
@end

