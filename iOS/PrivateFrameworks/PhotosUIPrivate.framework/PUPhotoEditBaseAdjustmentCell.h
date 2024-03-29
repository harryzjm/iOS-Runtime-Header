//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

__attribute__((visibility("hidden")))
@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell
{
    NSString *_imageName;
    _Bool _imageIsColor;
    _Bool _enabled;
    _Bool _isUserModifying;
    PUPhotoEditAdjustmentControl *_containerButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton; // @synthesize containerButton=_containerButton;
@property(nonatomic) _Bool isUserModifying; // @synthesize isUserModifying=_isUserModifying;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool imageIsColor; // @synthesize imageIsColor=_imageIsColor;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)resetToDefault;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
@property(nonatomic) double identityValue;
@property(nonatomic) double defaultValue;
@property(nonatomic) double value;
- (id)focusEffect;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupContainerButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

