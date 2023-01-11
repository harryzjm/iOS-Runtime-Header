//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout
{
    NFLSingleComponentLayout *_leftSixImageOnTopComponent;
    NFLSingleComponentLayout *_rightSixImageOnTopComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLSingleComponentLayout *_bottomImageOnSideComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFLSingleComponentLayout *bottomImageOnSideComponent; // @synthesize bottomImageOnSideComponent=_bottomImageOnSideComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *topPairComponent; // @synthesize topPairComponent=_topPairComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *rightSixImageOnTopComponent; // @synthesize rightSixImageOnTopComponent=_rightSixImageOnTopComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *leftSixImageOnTopComponent; // @synthesize leftSixImageOnTopComponent=_leftSixImageOnTopComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)columnSpan;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (_Bool)isValid;

@end
