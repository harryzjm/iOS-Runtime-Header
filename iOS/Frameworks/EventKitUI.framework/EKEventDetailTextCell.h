//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UITextView;
@protocol EKEventDetailTextCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailTextCell
{
    UILabel *_textTitleView;
    UITextView *_textView;
    CDUnknownBlockType _textFromEventBlock;
    NSString *_title;
    _Bool _isTruncatingText;
    id <EKEventDetailTextCellDelegate> _textDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EKEventDetailTextCellDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(readonly, nonatomic) _Bool isTruncatingText; // @synthesize isTruncatingText=_isTruncatingText;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (double)_layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setIsTruncatingText:(_Bool)arg1;
- (id)_textView;
- (id)_textTitleView;
- (_Bool)update;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 title:(id)arg3 textFromEventBlock:(CDUnknownBlockType)arg4;

@end
