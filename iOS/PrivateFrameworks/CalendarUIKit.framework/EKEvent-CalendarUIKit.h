//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (CalendarUIKit)
+ (_Bool)updateVirtualConference:(id)arg1 replacing:(id)arg2 with:(id)arg3;
+ (id)actionStringsPluralDisplayName;
+ (id)actionStringsDisplayName;
- (_Bool)CUIK_deleteActionShouldDeclineEvent;
- (void)fixInvalidatedVirtualConferenceURLs:(long long)arg1;
- (_Bool)CUIKEditingContext_removeWithSpan:(long long)arg1 error:(id *)arg2;
- (_Bool)CUIKEditingContext_saveWithSpan:(long long)arg1 error:(id *)arg2;
- (id)actionStringsDisplayTitle;
@end

