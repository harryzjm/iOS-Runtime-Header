//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, SFStructuredLocation;

@protocol SFCalendarEvent <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) SFStructuredLocation *location;
@property(nonatomic) _Bool isAllDay;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSString *title;
@end

