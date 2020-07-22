//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECColumnWidthConvertor : NSObject
{
    int mMultiplier;
}

- (double)xlColumnWidthFromXlBaseColumnWidth:(double)arg1;
- (double)xlColumnWidthFromLasso:(double)arg1;
- (double)lassoColumnWidthFromXl:(double)arg1;
- (void)setupWithEDFont:(id)arg1 state:(id)arg2;
- (float)fontWidthAdjustmentFor:(id)arg1;
- (struct CGSize)stringSizeWithFont:(id)arg1 edFont:(id)arg2 drawingState:(id)arg3;

@end

