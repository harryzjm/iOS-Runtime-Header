//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/CNCustomPresentation-Protocol.h>
#import <ContactsUI/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <ContactsUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _CNCustomActionSheetPresentation : NSObject <UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate, CNCustomPresentation>
{
    UIView *_sourceView;
    CDUnknownBlockType _dismissHandler;
    UIViewController *_viewController;
    unsigned long long _permittedArrowDirections;
    struct CGRect _sourceRect;
}

@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (id)presentedViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)prepareForPresentationOfController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

