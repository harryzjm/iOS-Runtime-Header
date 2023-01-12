//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationIndicatorView : UIView
{
    _Bool _isSourceList;
    NSIndexPath *_currentIndexPath;
    double _scaleFactor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool isSourceList; // @synthesize isSourceList=_isSourceList;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
- (void)drawRect:(struct CGRect)arg1;
- (void)positionHorizontallyCenteredInFrame:(struct CGRect)arg1;
- (void)positionOnCellFrame:(struct CGRect)arg1 above:(_Bool)arg2;
- (void)positionVerticallyCenteredInFrame:(struct CGRect)arg1;
- (id)initWithSourceListStyle:(_Bool)arg1;

@end

