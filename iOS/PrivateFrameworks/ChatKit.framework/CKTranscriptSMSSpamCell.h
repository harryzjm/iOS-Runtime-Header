//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

@interface CKTranscriptSMSSpamCell
{
    NSAttributedString *_attributedButtonText;
}

@property(copy, nonatomic) NSAttributedString *attributedButtonText; // @synthesize attributedButtonText=_attributedButtonText;
- (void).cxx_destruct;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end
