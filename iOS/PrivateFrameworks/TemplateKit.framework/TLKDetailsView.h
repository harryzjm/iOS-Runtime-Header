//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSArray, NSString, TLKImage, TLKMultilineText, TLKObserver, TLKRichText, TLKTextAreaView;

@interface TLKDetailsView <TLKTextAreaViewTesting>
{
    _Bool _secondaryTitleIsDetached;
    TLKRichText *_title;
    TLKMultilineText *_secondaryTitle;
    TLKImage *_secondaryTitleImage;
    NSArray *_details;
    TLKRichText *_footnote;
    TLKTextAreaView *_textAreaView;
    TLKObserver *_detailsObserver;
}

+ (id)detailsFont;
@property(retain) TLKObserver *detailsObserver; // @synthesize detailsObserver=_detailsObserver;
@property(retain) TLKTextAreaView *textAreaView; // @synthesize textAreaView=_textAreaView;
@property(retain) TLKRichText *footnote; // @synthesize footnote=_footnote;
@property(retain) NSArray *details; // @synthesize details=_details;
@property(retain) TLKImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property _Bool secondaryTitleIsDetached; // @synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached;
@property(retain) TLKMultilineText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain) TLKRichText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)footnoteLabelString;
- (id)textAreaLabelStrings;
- (void)updateExistingDetailText:(id)arg1;
- (void)disableUnbatchedUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)observedPropertiesChanged;
- (id)observableProperties;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

