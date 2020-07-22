//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, UIView;
@protocol UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatorConstraintController : NSObject
{
    double _constantAxisDimension;
    UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *_separatorView;
    NSLayoutConstraint *_fixedHeightConstraint;
    NSLayoutConstraint *_fixedWidthConstraint;
    long long _constantSizedAxis;
}

@property(nonatomic) long long constantSizedAxis; // @synthesize constantSizedAxis=_constantSizedAxis;
@property(readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint; // @synthesize fixedWidthConstraint=_fixedWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint; // @synthesize fixedHeightConstraint=_fixedHeightConstraint;
@property(readonly, nonatomic) __weak UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (_Bool)_isFixedWidth;
- (void)_updateConstantSizedConstraints;
- (void)separatorViewDidUpdateConstraints;
@property(nonatomic) double constantAxisDimension; // @synthesize constantAxisDimension=_constantAxisDimension;
- (id)initWithSeparatorView:(id)arg1;

@end
