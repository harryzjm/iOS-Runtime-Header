//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    UILayoutGuide *_contentLayoutGuide;
    NSArray *_rtlContentLayoutGuideConstraints;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // @synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

