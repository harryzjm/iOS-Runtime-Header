//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebModelInterface-Protocol.h>

@class AMSUIWebNavigationBarModel, UIViewController;
@protocol AMSUIWebPagePresenter;

@protocol AMSUIWebPageProvider <AMSUIWebModelInterface>
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
- (UIViewController<AMSUIWebPagePresenter> *)createViewController;
@end
