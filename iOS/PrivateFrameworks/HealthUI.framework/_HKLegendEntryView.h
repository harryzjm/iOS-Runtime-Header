//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class HKLegendEntry, UIImageView, UILabel, _HKLegendDot;

@interface _HKLegendEntryView : UIStackView
{
    HKLegendEntry *_currentLegendEntry;
    UILabel *_legendLabel;
    _HKLegendDot *_legendDot;
    UIImageView *_legendIcon;
    HKLegendEntry *_legendEntry;
}

@property(retain, nonatomic) HKLegendEntry *legendEntry; // @synthesize legendEntry=_legendEntry;
- (void).cxx_destruct;
- (id)initWithLegendEntry:(id)arg1;

@end
