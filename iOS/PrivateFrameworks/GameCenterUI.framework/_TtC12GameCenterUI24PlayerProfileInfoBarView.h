//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI24PlayerProfileInfoBarView : UIView
{
    MISSING_TYPE *centerContentInScrollView;
    MISSING_TYPE *infoItemPairs;
    MISSING_TYPE *separators;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *gradient;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSArray *accessibilityInfoItemPairs;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

