//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVContainerCollectionViewCell.h"

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewCell : TVContainerCollectionViewCell
{
    UIView<TVAuxiliaryViewSelecting> *_selectingView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView<TVAuxiliaryViewSelecting> *selectingView; // @synthesize selectingView=_selectingView;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

