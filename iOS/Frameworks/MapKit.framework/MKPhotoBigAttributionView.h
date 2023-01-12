//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapItem, NSString, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface MKPhotoBigAttributionView : UIView
{
    UIImageView *_imageView;
    UIView *_backgroundView;
    _Bool _needsImageLoad;
    UIActivityIndicatorView *_spinner;
    long long _context;
    long long _type;
    MKMapItem *_mapItem;
    UIView *_contentView;
}

+ (id)bigAttributionViewForMapItem:(id)arg1 attributionType:(long long)arg2 isFirstParty:(_Bool)arg3 context:(long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)layoutSubviews;
- (void)willStartAnimatingActivityIndicatorView;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
- (void)didEndAnimatingActivityIndicatorView;
- (void)updateBackgroundIfNeeded;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)beginAnimatingActivityIndicator;
- (id)initWithContext:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

