//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKGroupUpdateBannerView
{
    NSArray *_groupUpdates;
    unsigned long long _updateBannerType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long updateBannerType; // @synthesize updateBannerType=_updateBannerType;
@property(retain, nonatomic) NSArray *groupUpdates; // @synthesize groupUpdates=_groupUpdates;
- (void)cancelButtonTapped:(id)arg1;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)getContactDisplayName:(id)arg1;
- (double)titleLabelAlignmentX;
- (double)maxLabelWidthForSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)layoutMargins;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateAvatarView;
- (id)cancelGlyph;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 useNamedTitles:(_Bool)arg3 updates:(id)arg4 inUpdatesMode:(_Bool)arg5;

@end
