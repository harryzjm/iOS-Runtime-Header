//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol EKCellShortener;

@interface PreferencesValueCell
{
    id <EKCellShortener> _shortener;
}

@property(nonatomic) __weak id <EKCellShortener> shortener; // @synthesize shortener=_shortener;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_checkValueWidth;

@end
