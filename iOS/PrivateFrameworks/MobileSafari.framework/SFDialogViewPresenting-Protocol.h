//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class SFDialogController, SFDialogView;

@protocol SFDialogViewPresenting <NSObject>
- (void)dismissDialogView:(SFDialogView *)arg1 withAdditionalAnimations:(void (^)(void))arg2 forDialogController:(SFDialogController *)arg3;
- (void)presentDialogView:(SFDialogView *)arg1 withAdditionalAnimations:(void (^)(void))arg2 forDialogController:(SFDialogController *)arg3;
- (int)webProcessIDForDialogController:(SFDialogController *)arg1;
@end

