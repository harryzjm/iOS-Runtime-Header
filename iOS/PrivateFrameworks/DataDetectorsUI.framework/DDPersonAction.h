//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDetectorsUI/CNAvatarCardControllerDelegate-Protocol.h>

@class CNAvatarCardController, CNContactStore, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DDPersonAction <CNAvatarCardControllerDelegate>
{
    CNContactStore *_store;
    CNAvatarCardController *_avatar;
    UIViewController *_presentingViewController;
}

+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) CNAvatarCardController *avatar; // @synthesize avatar=_avatar;
@property(retain) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (id)createViewController;
- (_Bool)requiresEmbeddingNavigationController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)mainValueFromURLString:(id)arg1 schemes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
