//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell
{
    UILabel *_URLTitleView;
    UITextView *_URLView;
    int _lastLayoutPosition;
}

- (void).cxx_destruct;
- (id)_URLView;
- (id)_URLTitleView;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (_Bool)update;
- (void)setURL:(id)arg1;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;

@end

