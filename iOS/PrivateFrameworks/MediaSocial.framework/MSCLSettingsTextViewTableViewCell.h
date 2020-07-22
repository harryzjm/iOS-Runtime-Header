//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MSCLTokenTextView;
@protocol MSCLTokenTextViewDelegate;

@interface MSCLSettingsTextViewTableViewCell : UITableViewCell
{
    MSCLTokenTextView *_textView;
    id <MSCLTokenTextViewDelegate> _changeDelegate;
}

@property(readonly, nonatomic) MSCLTokenTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <MSCLTokenTextViewDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
