//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEvent;

__attribute__((visibility("hidden")))
@interface EKiMIPHandler : NSObject
{
    EKEvent *_event;
}

+ (id)emailsFromAttendees:(id)arg1;
+ (_Bool)shouldSendEmailForEvent:(id)arg1 withDiff:(id)arg2;
- (void).cxx_destruct;
@property(retain) EKEvent *event; // @synthesize event=_event;
- (id)iCalendarDocumentWithMethod:(int)arg1;
- (_Bool)sendEmail;
- (id)attachmentData;
- (int)icsMethod;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (id)attendees;
- (id)initWithEvent:(id)arg1;

@end

