//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUIContainerBoxView, UILabel;

@interface SearchUITitleCardSectionView
{
    UILabel *_label;
    NUIContainerBoxView *_containerView;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property(retain) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end

