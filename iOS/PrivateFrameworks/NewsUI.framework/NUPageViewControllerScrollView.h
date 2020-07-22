//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;

@interface NUPageViewControllerScrollView : UIScrollView
{
    id <NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (_Bool)accessibilityScroll:(long long)arg1;

@end
