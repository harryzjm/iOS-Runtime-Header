//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView
{
    double _itemSpacing;
    NSMutableArray *_entries;
    double _iconTextPadding;
    unsigned long long _dataDetectorTypes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) double iconTextPadding; // @synthesize iconTextPadding=_iconTextPadding;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 attributedText:(id)arg3;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
