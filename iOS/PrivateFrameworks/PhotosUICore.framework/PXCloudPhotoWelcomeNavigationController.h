//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;

@interface PXCloudPhotoWelcomeNavigationController : UINavigationController
{
    id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> _dismissDelegate;
}

+ (id)new;
+ (_Bool)shouldPresentWelcomeViewController:(_Bool *)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithWelcomeController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

@end
