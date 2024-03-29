//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, NSURL, UITextView;

__attribute__((visibility("hidden")))
@interface PSUIFooterHyperlinkView : UITableViewHeaderFooterView
{
    NSString *_text;
    id _target;
    SEL _action;
    NSURL *_URL;
    UITextView *_textView;
    struct _NSRange _linkRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (_Bool)isValidLinkRange;
- (void)_linkify;
- (void)setupSubviewsAndContstraints;
- (void)refreshContentsWithSpecifier:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

