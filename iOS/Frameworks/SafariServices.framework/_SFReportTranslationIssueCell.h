//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class UICellAccessory;

__attribute__((visibility("hidden")))
@interface _SFReportTranslationIssueCell : UICollectionViewListCell
{
    UICellAccessory *_cellAccessoryCheckmark;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)hideCheckmark;
- (void)toggleCheckmark;
@property(readonly, nonatomic) _Bool isCheckmarkHidden;
- (void)setUpTranslationIssueCellWithString:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end

