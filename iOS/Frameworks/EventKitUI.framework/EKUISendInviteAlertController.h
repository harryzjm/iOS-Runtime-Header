//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKitUI/UIActionSheetDelegate-Protocol.h>

@class NSString, UIAlertController;

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIAlertController *_alertController;
    EKUISendInviteAlertController *_strongSelf;
}

+ (id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain) EKUISendInviteAlertController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)cancelAnimated:(_Bool)arg1;
- (void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (_Bool)_useSheetForViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

