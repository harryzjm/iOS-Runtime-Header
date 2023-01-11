//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allCalendars;
    NSString *_calendarTitle;
    NSString *_calendarIdentifier;
    NSNumber *_calendarRGBAValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *calendarRGBAValue; // @synthesize calendarRGBAValue=_calendarRGBAValue;
@property(readonly, copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(readonly, nonatomic) _Bool allCalendars; // @synthesize allCalendars=_allCalendars;
- (id)matchingCalendarsFromArray:(id)arg1;
- (id)matchingRemindersListsFromArray:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3;
- (id)initWithAllCalendars;

@end
