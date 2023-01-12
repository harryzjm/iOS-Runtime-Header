//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

#import <CoreCDPUI/UITextViewDelegate-Protocol.h>

@class NSSet, NSString;
@protocol CDPUIAccessCodeEntryTextFieldDelegate;

@interface CDPUIAccessCodeEntryTextField : UITextView <UITextViewDelegate>
{
    NSSet *_separatorLocations;
    NSSet *_separatorDeleteLocations;
    NSString *_placeholder;
    id <CDPUIAccessCodeEntryTextFieldDelegate> _accessCodeInputDelegate;
    UITextView *_placeholderTextView;
}

+ (unsigned long long)wrappingKeyCharacterCount;
+ (unsigned long long)accessKeyCharacterCount;
- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *placeholderTextView; // @synthesize placeholderTextView=_placeholderTextView;
@property(nonatomic) __weak id <CDPUIAccessCodeEntryTextFieldDelegate> accessCodeInputDelegate; // @synthesize accessCodeInputDelegate=_accessCodeInputDelegate;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (unsigned long long)_numberOfSeparators;
- (unsigned long long)_totalCharacterLimit;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updatePlaceholderVisibility;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)setupSeparatorLocations;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
