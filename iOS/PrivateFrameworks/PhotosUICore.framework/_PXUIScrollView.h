//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@protocol PXUIScrollViewDelegate;

@interface _PXUIScrollView : UIScrollView
{
    id <PXUIScrollViewDelegate> _px_delegate;
    struct CGPoint _pagingOriginOffset;
}

@property(nonatomic) struct CGPoint pagingOriginOffset; // @synthesize pagingOriginOffset=_pagingOriginOffset;
@property(nonatomic, setter=px_setDelegate:) __weak id <PXUIScrollViewDelegate> px_delegate; // @synthesize px_delegate=_px_delegate;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_updatePagingOrigin;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (void)px_addSubview:(id)arg1;

@end

