//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFMediaSystemBuilder, HMAccessory, HUMediaSystemEditorHelper, UIViewController;

@protocol HUMediaSystemEditorHelperDelegate <NSObject>
@property(readonly, nonatomic) UIViewController *mediaSystemHelperPresentingViewController;
@property(readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
- (void)mediaSystemEditorHelper:(HUMediaSystemEditorHelper *)arg1 didAbortForAccessoryNeedingUpdate:(HMAccessory *)arg2;
- (void)mediaSystemEditorHelper:(HUMediaSystemEditorHelper *)arg1 needsToPresentViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)mediaSystemEditorHelper:(HUMediaSystemEditorHelper *)arg1 didModifyMediaSystemBuilder:(HFMediaSystemBuilder *)arg2;
- (void)mediaSystemEditorHelperDidEndCommitting:(HUMediaSystemEditorHelper *)arg1;
- (void)mediaSystemEditorHelperDidBeginCommitting:(HUMediaSystemEditorHelper *)arg1;
@end

