//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorStore : NSObject
{
    CDStruct_d0d7e7b7 _cache;
    CDStruct_d0d7e7b7 _expandedCache;
    UIImage *_defaultImage;
    _UIPageIndicatorStoreObject *_defaultObject;
    id <_UIPageIndicatorStoreDelegate> _delegate;
    UIImage *_preferredImage;
    UIImage *_preferredActiveImage;
    double _indicatorSpacing;
    long long _direction;
    NSMutableArray *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *store; // @synthesize store=_store;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(retain, nonatomic) UIImage *preferredActiveImage; // @synthesize preferredActiveImage=_preferredActiveImage;
@property(retain, nonatomic) UIImage *preferredImage; // @synthesize preferredImage=_preferredImage;
@property(nonatomic) __weak id <_UIPageIndicatorStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)validateDataStore;
- (long long)_objectIndexForPage:(long long)arg1 lower:(long long)arg2 upper:(long long)arg3;
- (long long)objectIndexForPage:(long long)arg1;
- (void)_resetStore;
- (void)_removeImageForPage:(long long)arg1 active:(_Bool)arg2;
- (void)_insertImage:(id)arg1 forPage:(long long)arg2 active:(_Bool)arg3;
- (double)indicatorPositionForContinuousPage:(double)arg1 expandedIndicatorPage:(long long)arg2;
- (struct CGSize)_contentSizeForIndicatorsInRange:(struct _NSRange)arg1 hasExpandedActiveIndicator:(_Bool)arg2;
- (struct CGSize)minimumContentSizeForIndicatorsInRange:(struct _NSRange)arg1 hasExpandedActiveIndicator:(_Bool)arg2;
- (struct CGSize)contentSizeForNumberOfPages:(long long)arg1 hasExpandedActiveIndicator:(_Bool)arg2;
- (struct CGSize)defaultIndicatorSize;
- (void)_updateImage:(id)arg1 forPage:(long long)arg2 active:(_Bool)arg3;
- (void)updateActiveImage:(id)arg1 forPage:(long long)arg2;
- (void)updateImage:(id)arg1 forPage:(long long)arg2;
- (void)updateStoreForNumberOfPages:(long long)arg1;
- (struct CGSize)_sizeForMaximumContentSizeFittingLength:(double)arg1 hasExpandedActiveIndicator:(_Bool)arg2;
- (struct CGSize)sizeForMaximumContentSizeFittingLength:(double)arg1 hasExpandedActiveIndicator:(_Bool)arg2;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)arg1 fittingLength:(double)arg2 hasExpandedActiveIndicator:(_Bool)arg3;
- (struct CGSize)_indicatorSizeForObject:(id)arg1;
- (struct CGSize)indicatorSizeForPage:(long long)arg1;
- (void)invalidateLayoutCache;
- (struct CGSize)resolvedIndicatorLayoutSizeForPage:(long long)arg1;
- (id)activeIndicatorImageForPage:(long long)arg1;
- (id)customActiveIndicatorImageForPage:(long long)arg1;
- (id)indicatorImageForPage:(long long)arg1;
- (id)customIndicatorImageForPage:(long long)arg1;
- (id)_defaultIndicatorImage;
@property(readonly, nonatomic) UIImage *indicatorImage;
@property(readonly, nonatomic) long long numberOfPages;
- (id)init;

@end

