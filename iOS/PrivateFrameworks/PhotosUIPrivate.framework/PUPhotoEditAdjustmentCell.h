//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PUPhotoEditBaseAdjustmentCellDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAdjustmentCell
{
    _Bool _shouldDisplayValueLabel;
    id <PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDisplayValueLabel; // @synthesize shouldDisplayValueLabel=_shouldDisplayValueLabel;
@property(nonatomic) __weak id <PUPhotoEditBaseAdjustmentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleButton:(id)arg1;
@property(nonatomic) _Bool displayMappedValue;
- (void)_updateValueLabelVisibility;
- (void)setIsUserModifying:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)reloadImage;
- (void)setImageIsColor:(_Bool)arg1;
- (void)setImageName:(id)arg1;
- (void)_setupEventHandler;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

