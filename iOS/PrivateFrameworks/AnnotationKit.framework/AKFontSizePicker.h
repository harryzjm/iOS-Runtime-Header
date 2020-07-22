//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <AnnotationKit/UICollectionViewDataSource-Protocol.h>
#import <AnnotationKit/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, UICollectionView, UILabel, UISlider, UIStepper;

@interface AKFontSizePicker : UIControl <UICollectionViewDataSource, UICollectionViewDelegate>
{
    double _value;
    CDUnknownBlockType _willBeginTrackingUpdates;
    CDUnknownBlockType _didEndTrackingUpdates;
    long long _style;
    UILabel *_label;
    UIStepper *_stepper;
    UISlider *_slider;
    UICollectionView *_sizeList;
    NSArray *_sizeListValues;
}

@property(retain, nonatomic) NSArray *sizeListValues; // @synthesize sizeListValues=_sizeListValues;
@property(retain, nonatomic) UICollectionView *sizeList; // @synthesize sizeList=_sizeList;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType didEndTrackingUpdates; // @synthesize didEndTrackingUpdates=_didEndTrackingUpdates;
@property(copy, nonatomic) CDUnknownBlockType willBeginTrackingUpdates; // @synthesize willBeginTrackingUpdates=_willBeginTrackingUpdates;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_selectSizeInList;
- (struct CGSize)_itemSizeInContainer;
- (void)_increaseSize:(id)arg1;
- (void)_decreaseSize:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderTouchDown:(id)arg1;
- (void)_handleValueChanged:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
