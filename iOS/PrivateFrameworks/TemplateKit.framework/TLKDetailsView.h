//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSArray, NSString, TLKImage, TLKMultilineText, TLKRichText, TLKTextAreaView;

@interface TLKDetailsView <TLKTextAreaViewTesting>
{
    _Bool _secondaryTitleIsDetached;
    TLKRichText *_title;
    TLKMultilineText *_secondaryTitle;
    TLKImage *_secondaryTitleImage;
    NSArray *_details;
    TLKRichText *_footnote;
    TLKTextAreaView *_textAreaView;
}

@property(retain) TLKTextAreaView *textAreaView; // @synthesize textAreaView=_textAreaView;
@property(retain, nonatomic) TLKRichText *footnote; // @synthesize footnote=_footnote;
@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) TLKImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(nonatomic) _Bool secondaryTitleIsDetached; // @synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached;
@property(retain, nonatomic) TLKMultilineText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) TLKRichText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)footnoteLabelString;
- (id)textAreaLabelStrings;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

