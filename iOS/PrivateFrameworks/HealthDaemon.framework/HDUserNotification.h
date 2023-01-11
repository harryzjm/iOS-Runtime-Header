//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HDUserNotification : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_defaultButton;
    NSString *_cancelButton;
    NSString *_otherButton;
    NSDictionary *_additionalDescriptors;
    long long _alertLevel;
    unsigned long long _userNotificationOptions;
    CDUnknownBlockType _responseHandler;
    struct __CFUserNotification *_notification;
}

@property(nonatomic) struct __CFUserNotification *notification; // @synthesize notification=_notification;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) unsigned long long userNotificationOptions; // @synthesize userNotificationOptions=_userNotificationOptions;
@property(nonatomic) long long alertLevel; // @synthesize alertLevel=_alertLevel;
@property(copy, nonatomic) NSDictionary *additionalDescriptors; // @synthesize additionalDescriptors=_additionalDescriptors;
@property(copy, nonatomic) NSString *otherButton; // @synthesize otherButton=_otherButton;
@property(copy, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSString *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_handleResponse:(unsigned long long)arg1;
- (void)presentWithResponseHandler:(CDUnknownBlockType)arg1;

@end

