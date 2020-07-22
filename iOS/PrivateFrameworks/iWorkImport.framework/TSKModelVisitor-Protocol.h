//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSCHChartDrawableInfo, TSDConnectionLineInfo, TSDGroupInfo, TSDImageInfo, TSDMovieInfo, TSDShapeInfo, TSTInfo, TSWPShapeInfo, TSWPStorage, TSWPTOCInfo;

@protocol TSKModelVisitor <NSObject>
- (void)visitTSWPTOCInfo:(TSWPTOCInfo *)arg1;
- (void)visitTSWPStorage:(TSWPStorage *)arg1;
- (void)visitTSWPShapeInfo:(TSWPShapeInfo *)arg1;
- (void)visitTSTInfo:(TSTInfo *)arg1;
- (void)visitTSDShapeInfo:(TSDShapeInfo *)arg1;
- (void)visitTSDMovieInfo:(TSDMovieInfo *)arg1;
- (void)visitTSDImageInfo:(TSDImageInfo *)arg1;
- (void)visitTSDGroupInfo:(TSDGroupInfo *)arg1;
- (void)visitTSDConnectionLineInfo:(TSDConnectionLineInfo *)arg1;
- (void)visitTSCHChartDrawableInfo:(TSCHChartDrawableInfo *)arg1;
@end
