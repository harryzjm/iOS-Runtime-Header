//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NUIContainerView;

@interface NUICollectionViewContainerCell : UICollectionViewCell
{
    NUIContainerView *_containerView;
}

+ (Class)_contentViewClass;
+ (Class)containerViewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NUIContainerView *containerView; // @synthesize containerView=_containerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
