//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactPickerViewController, NSString, SKUIClientContext, SKUIItem, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUITonePurchaseController : NSObject
{
    SKUIClientContext *_clientContext;
    CNContactPickerViewController *_contactPickerController;
    CDUnknownBlockType _completionBlock;
    SKUIItem *_item;
    UIViewController *_parentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_showContactPicker;
- (void)_presentViewController:(id)arg1;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)_finishContactPicker:(id)arg1 withContact:(id)arg2;
- (void)_dismissContactPicker;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

