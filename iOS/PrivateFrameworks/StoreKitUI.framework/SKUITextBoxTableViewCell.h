//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUITableViewCell.h"

@class SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUITextBoxTableViewCell : SKUITableViewCell
{
    SKUITextBoxView *_textBoxView;
    struct UIEdgeInsets _textBoxInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets textBoxInsets; // @synthesize textBoxInsets=_textBoxInsets;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView; // @synthesize textBoxView=_textBoxView;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

