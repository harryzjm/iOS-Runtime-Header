//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITapGestureRecognizer;
@protocol PUPhotoEditBaseAdjustmentCellDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAutoAdjustmentCell
{
    id <PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <PUPhotoEditBaseAdjustmentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performPrimaryAction;
- (void)handleButton:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setImageName:(id)arg1;
- (void)_configureContainerButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

