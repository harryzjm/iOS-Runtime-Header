//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICollectionViewCell.h"

@class SKUIEmbeddedMediaView;

__attribute__((visibility("hidden")))
@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell
{
    struct UIEdgeInsets _contentInset;
    SKUIEmbeddedMediaView *_mediaView;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;

@end

