//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGGraph;

@interface PGGraphIngestProcessor : NSObject
{
    PGGraph *_graph;
}

@property(readonly, nonatomic) __weak PGGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (id)initWithGraph:(id)arg1;

@end

