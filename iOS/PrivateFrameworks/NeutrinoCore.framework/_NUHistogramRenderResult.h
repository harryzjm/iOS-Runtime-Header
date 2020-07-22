//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUHistogramRenderResult-Protocol.h>

@class NSString, NUImageHistogram;
@protocol NURenderStatistics;

@interface _NUHistogramRenderResult <NUHistogramRenderResult>
{
    NUImageHistogram *_histogram;
}

@property(readonly) NUImageHistogram *histogram; // @synthesize histogram=_histogram;
- (void).cxx_destruct;
- (id)initWithHistogram:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

