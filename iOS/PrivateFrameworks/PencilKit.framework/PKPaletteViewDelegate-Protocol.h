//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSUndoManager, PKPaletteView;

@protocol PKPaletteViewDelegate <NSObject>

@optional
- (void)paletteViewDidChangeScaleFactor:(PKPaletteView *)arg1;
- (void)paletteViewDidChangePosition:(PKPaletteView *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)paletteViewDidChangePosition:(PKPaletteView *)arg1;
- (NSUndoManager *)paletteViewUndoManager:(PKPaletteView *)arg1;
@end

