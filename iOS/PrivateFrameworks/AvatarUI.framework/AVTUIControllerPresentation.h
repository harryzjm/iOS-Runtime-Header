//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMessagesAppViewController, UIViewController;

@interface AVTUIControllerPresentation : NSObject
{
    UIViewController *_controller;
    MSMessagesAppViewController *_modalMessagesController;
}

+ (id)pendingGlobalPresentation;
+ (void)setPendingGlobalPresentation:(id)arg1;
@property(nonatomic) __weak MSMessagesAppViewController *modalMessagesController; // @synthesize modalMessagesController=_modalMessagesController;
@property(readonly, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)initWithController:(id)arg1;

@end

