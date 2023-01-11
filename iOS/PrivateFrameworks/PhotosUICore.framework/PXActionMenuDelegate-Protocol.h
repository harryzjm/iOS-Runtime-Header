//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXActionMenuController, PXActionPerformer, UIViewController;

@protocol PXActionMenuDelegate <NSObject>
- (_Bool)actionMenu:(PXActionMenuController *)arg1 dismissViewController:(UIViewController *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)actionMenu:(PXActionMenuController *)arg1 presentViewController:(UIViewController *)arg2;

@optional
- (void)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 didChangeState:(unsigned long long)arg3;
@end

