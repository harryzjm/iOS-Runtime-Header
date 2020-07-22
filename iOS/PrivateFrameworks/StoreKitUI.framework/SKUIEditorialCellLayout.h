//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIEditorialLinkViewDelegate-Protocol.h>

@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

@interface SKUIEditorialCellLayout <SKUIEditorialLinkViewDelegate>
{
    struct UIEdgeInsets _contentInset;
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (id)_textBoxView;
- (id)_linkView;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(_Bool)arg3;
- (void)resetContentInset;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_initContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

