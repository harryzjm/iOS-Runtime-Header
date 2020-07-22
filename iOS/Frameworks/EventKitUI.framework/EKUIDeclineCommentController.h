//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIAlertView;

@interface EKUIDeclineCommentController : NSObject
{
    UIAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
}

+ (id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)_newDeclineCommentControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dismissAnimated:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_completeWithButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2;
- (void)dealloc;

@end
