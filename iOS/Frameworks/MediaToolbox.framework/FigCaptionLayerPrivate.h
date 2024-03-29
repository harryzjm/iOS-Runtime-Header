//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FigCaptionLayerPrivate : NSObject
{
    struct OpaqueFigCFCaptionRenderer *renderer;
    NSMutableArray *captionElementLayers;
    struct OpaqueFigSimpleMutex *renderMutex;
    struct OpaqueFigReentrantMutex *layoutSublayersMutex;
    unsigned char shouldDrawGrid;
    struct CGRect videoRelativeToViewport;
    struct FigGeometryMargins captionsAvoidanceMargins;
    unsigned char enableGMSpew;
    NSMutableDictionary *options;
    _Bool separated;
    _Bool separatedUpdated;
}

@end

