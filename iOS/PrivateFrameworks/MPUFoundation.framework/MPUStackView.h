//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIWindow;
@protocol MPUStackViewDataSource;

@interface MPUStackView : UIView
{
    struct {
        struct CGSize baseSize;
        struct CGRect bounds;
        struct CGPoint centerInLocalCoordinates;
        _Bool forcesIntegralX;
        _Bool forcesIntegralY;
        struct UIOffset maximumRelativeOffsetStep;
        double scale;
        struct CGSize sizeInsetStep;
        struct CGPoint vanishingPoint;
    } _configuration;
    long long _distanceIgnoreCount;
    NSMutableArray *_items;
    UIWindow *_window;
    id <MPUStackViewDataSource> _dataSource;
    Class _itemClass;
    NSString *_itemReuseIdentifier;
    long long _numberOfItems;
    UIView *_perspectiveTargetView;
}

@property(nonatomic) __weak UIView *perspectiveTargetView; // @synthesize perspectiveTargetView=_perspectiveTargetView;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *itemReuseIdentifier; // @synthesize itemReuseIdentifier=_itemReuseIdentifier;
@property(readonly, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) __weak id <MPUStackViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_updateGeometryFieldsInConfiguration;
- (id)_dequeueReusableItem;
- (void)updateForChangedDistanceFromVanishingPoint;
- (struct CGSize)sizeOfItemAtIndex:(double)arg1;
- (void)reloadDataWithTransition:(long long)arg1;
- (void)reloadData;
- (struct UIOffset)relativeOffsetOfItemAtIndex:(double)arg1 withCenter:(struct CGPoint)arg2;
- (id)itemAtIndex:(long long)arg1;
- (void)endIgnoringDistanceUpdates;
- (void)beginIgnoringDistanceUpdates;
@property(nonatomic) struct CGPoint vanishingPoint;
@property(nonatomic) struct CGSize sizeInsetStep;
@property(nonatomic) struct UIOffset maximumRelativeOffsetStep;
@property(nonatomic) _Bool forcesIntegralY;
@property(nonatomic) _Bool forcesIntegralX;
@property(nonatomic) struct CGSize baseSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

