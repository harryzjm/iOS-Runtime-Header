//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayer, GKPlayerPhotoView, NSDictionary, UILabel;

@interface GKBasePlayerCell
{
    UILabel *_nameLabel;
    GKPlayerPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
}

+ (double)defaultRowHeight;
+ (id)phoneMetrics;
+ (id)padMetrics;
+ (id)itemHeightListForIdiom:(long long)arg1;
+ (id)itemHeightList;
+ (_Bool)requiresConstraintBasedLayout;
+ (void)initialize;
@property(retain, nonatomic) NSDictionary *metricsOverrides; // @synthesize metricsOverrides=_metricsOverrides;
@property(retain, nonatomic) GKPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id)popoverSourceView;
- (void)prepareForReuse;
- (_Bool)canRemoveItem;
- (void)didUpdateModel;
- (void)setRepresentedItem:(id)arg1;
@property(retain, nonatomic) GKPlayer *player;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)alignmentRectForText;

@end

