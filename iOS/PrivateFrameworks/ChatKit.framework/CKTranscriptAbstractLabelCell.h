//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface CKTranscriptAbstractLabelCell
{
    _Bool _wantsContactImageLayout;
    _Bool _wantsOffsetForReplyLine;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedText:(id)arg2 displayScale:(double)arg3;
@property(nonatomic) _Bool wantsOffsetForReplyLine; // @synthesize wantsOffsetForReplyLine=_wantsOffsetForReplyLine;
@property(nonatomic) _Bool wantsContactImageLayout; // @synthesize wantsContactImageLayout=_wantsContactImageLayout;
- (id)label;
- (id)cellView;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (_Bool)wantsDrawerLayout;
- (void)prepareForReuse;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (struct CGRect)contentAlignmentRect;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
