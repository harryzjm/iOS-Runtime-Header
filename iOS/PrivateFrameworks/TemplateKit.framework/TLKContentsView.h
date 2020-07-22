//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UILabel;

@interface TLKContentsView
{
    unsigned long long _style;
    UILabel *_titleLabel;
    NSMutableArray *_detailsLabels;
}

+ (id)detailsLabelWithStyle:(unsigned long long)arg1;
@property(retain) NSMutableArray *detailsLabels; // @synthesize detailsLabels=_detailsLabels;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2;
- (id)init;

@end

