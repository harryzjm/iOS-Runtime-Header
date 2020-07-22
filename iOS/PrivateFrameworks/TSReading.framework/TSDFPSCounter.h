//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSDFPSCounter : NSObject
{
    NSMutableArray *_dateArray;
}

- (id)p_getFPSInfo:(_Bool)arg1;
- (void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(_Bool)arg6 slide:(long long)arg7;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)p_fpsSummaryStringIncludingGraph:(_Bool)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrame;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

