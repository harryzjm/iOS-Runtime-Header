//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class CLRegion, NSCalendar, NSDate, NSDictionary, NSString, NSTimeZone;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (_Bool)isTriggeredByRegion;
- (_Bool)isTriggeredByDate;
- (void)validate;
- (long long)compareFireDates:(id)arg1;
- (_Bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *alertAction; // @dynamic alertAction;
@property(copy, nonatomic) NSString *alertBody; // @dynamic alertBody;
@property(copy, nonatomic) NSString *alertLaunchImage; // @dynamic alertLaunchImage;
@property(copy, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property(nonatomic) long long applicationIconBadgeNumber; // @dynamic applicationIconBadgeNumber;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(copy, nonatomic) CLRegion *region; // @dynamic region;
@property(nonatomic) _Bool regionTriggersOnce; // @dynamic regionTriggersOnce;
@property(copy, nonatomic) NSCalendar *repeatCalendar; // @dynamic repeatCalendar;
@property(nonatomic) unsigned long long repeatInterval; // @dynamic repeatInterval;
@property(copy, nonatomic) NSString *soundName; // @dynamic soundName;
@property(copy, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

@end

