//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UINavigationBar;

__attribute__((visibility("hidden")))
@interface PUSearchButtonItemCustomView : UIView
{
    _Bool _nudgesSearchIcon;
    UINavigationBar *_navigationBar;
}

@property(nonatomic) _Bool nudgesSearchIcon; // @synthesize nudgesSearchIcon=_nudgesSearchIcon;
@property(nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;

@end
