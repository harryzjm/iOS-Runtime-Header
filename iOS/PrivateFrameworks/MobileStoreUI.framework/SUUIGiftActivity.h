//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, SUUIClientContext, SUUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SUUIGiftActivity : UIActivity
{
    SUUIClientContext *_clientContext;
    SUUIProductPageItem *_item;
}

- (void).cxx_destruct;
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityViewController;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

