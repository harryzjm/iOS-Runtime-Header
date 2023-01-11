//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UIInputResponderController, UIResponder, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate>
{
    long long _type;
    UIViewController *_modalViewController;
    UIView *_contextView;
    UIResponder *_pinnedResponder;
    UIInputResponderController *_inputResponderController;
    _Bool _dismissed;
    CDUnknownBlockType _dismissedHandler;
}

+ (id)textServiceSessionForType:(long long)arg1;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
+ (_Bool)shouldPresentServiceInSameWindowAsView:(id)arg1;
+ (_Bool)_canShowTextServiceForType:(long long)arg1;
+ (long long)availableTextServices;
+ (_Bool)_canShowTextServices;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
- (void)_endSession;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)dismissTextServiceAnimated:(_Bool)arg1;
- (long long)type;
- (_Bool)isDisplaying;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)sessionDidDismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
