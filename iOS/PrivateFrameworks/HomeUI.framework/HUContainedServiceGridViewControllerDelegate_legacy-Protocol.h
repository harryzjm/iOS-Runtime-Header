//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUServiceGridViewControllerDelegate-Protocol.h>
#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUContainedServicesGridViewController_legacy, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUContainedServiceGridViewControllerDelegate_legacy <NSObject, HUServiceGridViewControllerDelegate>

@optional
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForContainedServiceGridViewController:(HUContainedServicesGridViewController_legacy *)arg1 item:(HFItem *)arg2;
- (_Bool)hasDetailsActionForContainedServiceGridViewController:(HUContainedServicesGridViewController_legacy *)arg1 item:(HFItem *)arg2;
@end

