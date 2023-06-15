//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIAction, UIButton, UILabel, UIView;
@protocol SFFluidTabOverviewItemViewBorrowedContentProvider;

__attribute__((visibility("hidden")))
@interface SFFluidTabOverviewItemView
{
    UIButton *_deleteButton;
    NSArray *_deleteButtonConstraints;
    UIView *_highlightView;
    UIView *_borrowedContentViewContainer;
    _Bool _wantsBorrowedContentView;
    UILabel *_label;
    UIAction *_deleteButtonAction;
    UIView *_borrowedContentView;
    id <SFFluidTabOverviewItemViewBorrowedContentProvider> _borrowedContentProvider;
    double _controlsAlpha;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double controlsAlpha; // @synthesize controlsAlpha=_controlsAlpha;
@property(nonatomic) __weak id <SFFluidTabOverviewItemViewBorrowedContentProvider> borrowedContentProvider; // @synthesize borrowedContentProvider=_borrowedContentProvider;
@property(readonly, nonatomic) _Bool wantsBorrowedContentView; // @synthesize wantsBorrowedContentView=_wantsBorrowedContentView;
@property(retain, nonatomic) UIView *borrowedContentView; // @synthesize borrowedContentView=_borrowedContentView;
@property(retain, nonatomic) UIAction *deleteButtonAction; // @synthesize deleteButtonAction=_deleteButtonAction;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

