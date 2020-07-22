//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol NTKContainerViewLayoutDelegate;

@interface NTKContainerView : UIView
{
    id <NTKContainerViewLayoutDelegate> _layoutDelegate;
}

@property(nonatomic) __weak id <NTKContainerViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
