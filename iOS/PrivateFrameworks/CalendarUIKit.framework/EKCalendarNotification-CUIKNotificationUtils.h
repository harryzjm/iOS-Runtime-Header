//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarNotification (CUIKNotificationUtils)
- (_Bool)cuik_isTimeSensitive;
- (_Bool)cuik_shouldShowNotificationWithUnselectedCalendarsForFocus:(id)arg1;
- (id)timeSensitiveDescriptionString;
- (id)_identityStringForIdentity:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)_identityStringWithOptions:(unsigned long long)arg1;
- (id)descriptionStrings:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (id)titleStringWithOptions:(unsigned long long)arg1;
- (_Bool)supportsDisplay;
@end

