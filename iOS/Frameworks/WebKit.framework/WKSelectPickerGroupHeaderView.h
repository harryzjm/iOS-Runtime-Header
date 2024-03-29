//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKSelectPickerGroupHeaderView : UIView
{
    struct RetainPtr<UILabel> _label;
    struct RetainPtr<UIImageView> _collapseIndicatorView;
    struct WeakObjCPtr<WKSelectPickerTableViewController> _tableViewController;
    _Bool _collapsed;
    long long _section;
}

+ (double)preferredHeight;
+ (double)preferredMargin;
+ (id)preferredFont;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (void)didTapHeader:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (void)setCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithGroupName:(id)arg1 section:(long long)arg2;

@end

