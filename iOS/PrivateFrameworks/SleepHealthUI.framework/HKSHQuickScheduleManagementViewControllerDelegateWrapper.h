//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSHQuickScheduleManagementViewController;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HKSHQuickScheduleManagementViewControllerDelegateWrapper : NSObject
{
    id <HKSHQuickScheduleManagementViewControllerDelegate> _wrappedDelegate;
    HKSHQuickScheduleManagementViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak HKSHQuickScheduleManagementViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <HKSHQuickScheduleManagementViewControllerDelegate> wrappedDelegate; // @synthesize wrappedDelegate=_wrappedDelegate;
- (void)quickScheduleManagementViewControllerWillSave:(id)arg1;
- (void)quickScheduleManagementViewController:(id)arg1 shouldPresent:(id)arg2;
- (void)quickScheduleManagementViewControllerDidCancel:(id)arg1;
- (void)quickScheduleManagementViewController:(id)arg1 didSave:(id)arg2;

@end

