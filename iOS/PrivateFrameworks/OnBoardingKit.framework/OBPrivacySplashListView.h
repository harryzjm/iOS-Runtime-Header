//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSMutableArray, UITextView;

@interface OBPrivacySplashListView : UIStackView
{
    _Bool _displayingPrivacyPane;
    UITextView *_footerTextView;
    NSMutableArray *_textViews;
    NSMutableArray *_stackedIconTextLists;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stackedIconTextLists; // @synthesize stackedIconTextLists=_stackedIconTextLists;
@property(retain, nonatomic) NSMutableArray *textViews; // @synthesize textViews=_textViews;
@property _Bool displayingPrivacyPane; // @synthesize displayingPrivacyPane=_displayingPrivacyPane;
@property(readonly, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTextAlignment;
- (void)updateFonts;
- (void)updateSpacing;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(_Bool)arg3;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2;

@end
