//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TPAlert : NSObject
{
    CDUnknownBlockType _completion;
    struct __CFUserNotification *_userNotification;
}

@property(nonatomic) struct __CFUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)otherResponse;
- (void)alternateResponse;
- (void)defaultResponse;
- (id)otherButtonTitle;
- (id)alternateButtonTitle;
- (id)defaultButtonTitle;
- (id)message;
- (id)title;
- (void)showOnViewController:(id)arg1;
- (void)show;
- (void)dealloc;

@end

