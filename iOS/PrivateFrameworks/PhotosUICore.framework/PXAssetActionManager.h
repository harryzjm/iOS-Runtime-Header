//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXSelectionSnapshot;

@interface PXAssetActionManager
{
    PXSelectionSnapshot *_selectionSnapshot;
}

@property(readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)canPerformAssetVariationActions;
- (id)init;
- (id)initWithSelectionSnapshot:(id)arg1;
- (void)px_registerAdditionalPerformerClasses;

@end

