//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TLKStackView.h"

@class NSMutableArray, TLKLabel;

__attribute__((visibility("hidden")))
@interface TLKContentsView : TLKStackView
{
    TLKLabel *_titleLabel;
    NSMutableArray *_detailsLabels;
}

+ (id)detailsLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *detailsLabels; // @synthesize detailsLabels=_detailsLabels;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2;
- (id)init;

@end

