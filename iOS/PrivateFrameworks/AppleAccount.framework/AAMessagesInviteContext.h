//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface AAMessagesInviteContext : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_action;
    NSArray *_recipients;
    NSString *_messageBody;
    NSURL *_inviteURL;
    NSString *_secondaryTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(copy, nonatomic) NSURL *inviteURL; // @synthesize inviteURL=_inviteURL;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end
