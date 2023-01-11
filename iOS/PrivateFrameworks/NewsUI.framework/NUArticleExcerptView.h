//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NewsUI/UIScrollViewDelegate-Protocol.h>

@class NFMultiDelegate, NSString, NUArticleExcerptReadMoreButton, NUArticleExcerptTraits, UIImageView, UILabel, UIScrollView, WKWebView;
@protocol UIScrollViewDelegate;

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate>
{
    NUArticleExcerptTraits *_traits;
    UIImageView *_headlineImageView;
    UILabel *_headlineTitleLabel;
    UILabel *_headlineDateLabel;
    WKWebView *_excerptWebView;
    NUArticleExcerptReadMoreButton *_readMoreButton;
    id <UIScrollViewDelegate> _delegate;
    UIScrollView *_imageScrollView;
    UIScrollView *_contentScrollView;
    UIView *_hairlineSeparatorView;
    UIView *_contentView;
    NFMultiDelegate *_multiDelegate;
}

+ (id)webViewConfiguration;
@property(readonly, nonatomic) NFMultiDelegate *multiDelegate; // @synthesize multiDelegate=_multiDelegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *hairlineSeparatorView; // @synthesize hairlineSeparatorView=_hairlineSeparatorView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(readonly, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NUArticleExcerptReadMoreButton *readMoreButton; // @synthesize readMoreButton=_readMoreButton;
@property(readonly, nonatomic) WKWebView *excerptWebView; // @synthesize excerptWebView=_excerptWebView;
@property(readonly, nonatomic) UILabel *headlineDateLabel; // @synthesize headlineDateLabel=_headlineDateLabel;
@property(readonly, nonatomic) UILabel *headlineTitleLabel; // @synthesize headlineTitleLabel=_headlineTitleLabel;
@property(readonly, nonatomic) UIImageView *headlineImageView; // @synthesize headlineImageView=_headlineImageView;
@property(copy, nonatomic) NUArticleExcerptTraits *traits; // @synthesize traits=_traits;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

