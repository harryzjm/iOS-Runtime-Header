//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKPinnedConversationSummaryBubbleActivityItem, NSString, UILabel;

@interface CKPinnedConversationSummaryBubble
{
    CKPinnedConversationSummaryBubbleActivityItem *_summaryBubbleActivityItem;
    double _textScaleFactor;
    UILabel *_summaryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) double textScaleFactor; // @synthesize textScaleFactor=_textScaleFactor;
@property(readonly, nonatomic) CKPinnedConversationSummaryBubbleActivityItem *summaryBubbleActivityItem; // @synthesize summaryBubbleActivityItem=_summaryBubbleActivityItem;
- (struct UIEdgeInsets)contentViewPadding;
- (long long)contentViewContentMode;
- (void)_updateSummaryLabelTextColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)_updateFont;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (_Bool)supportsAlignmentWithOriginationSubAvatarFrame;
- (_Bool)supportsActivityItemViewContentScale;
- (void)_updateSummaryLabel;
- (void)setActivityItem:(id)arg1;
- (double)pillCornerRadius;
@property(retain, nonatomic) NSString *summaryText;
- (id)initWithSummaryBubbleActivityItem:(id)arg1;

@end
