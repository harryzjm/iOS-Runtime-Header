//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKTranscriptCell
{
    _Bool _wantsDrawerLayout;
    BOOL _orientation;
    double _drawerPercentRevealed;
    double _associatedItemOffset;
}

@property(nonatomic) double associatedItemOffset; // @synthesize associatedItemOffset=_associatedItemOffset;
@property(nonatomic) double drawerPercentRevealed; // @synthesize drawerPercentRevealed=_drawerPercentRevealed;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool wantsDrawerLayout; // @synthesize wantsDrawerLayout=_wantsDrawerLayout;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)performReveal:(CDUnknownBlockType)arg1;
- (void)performHide:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForContents;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end

