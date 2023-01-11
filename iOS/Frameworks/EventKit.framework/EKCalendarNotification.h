//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>

@class EKObjectID, NSString, NSURL;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>
{
    long long _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_URL;
    EKObjectID *_objectID;
    struct CGColor *_dotColor;
    _Bool _hiddenFromNotificationCenter;
    _Bool _alerted;
    _Bool _couldBeJunk;
    NSString *_firstName;
    NSString *_lastName;
}

@property(nonatomic) _Bool couldBeJunk; // @synthesize couldBeJunk=_couldBeJunk;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(nonatomic) _Bool hiddenFromNotificationCenter; // @synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter;
@property(nonatomic) struct CGColor *dotColor; // @synthesize dotColor=_dotColor;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsAlert;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

