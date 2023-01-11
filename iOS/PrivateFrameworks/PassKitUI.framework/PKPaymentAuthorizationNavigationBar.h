//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationBar.h>

@class UILabel;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar
{
    UILabel *_environmentLabel;
}

+ (id)applePayBarButtonItem;
+ (id)cardOnFileBarButtonItemForRequestor:(unsigned long long)arg1;
+ (id)_leftBarButtonItemWithImage:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didUpdateInterfaceStyle;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
