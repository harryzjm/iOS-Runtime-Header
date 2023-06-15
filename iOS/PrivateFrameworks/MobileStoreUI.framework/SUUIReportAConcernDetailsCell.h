//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SUUIReportAConcernDetailsCell : UITableViewCell
{
    NSString *_placeholderText;
    UITextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void)updatePlaceholderText:(_Bool)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
@property(readonly, copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

