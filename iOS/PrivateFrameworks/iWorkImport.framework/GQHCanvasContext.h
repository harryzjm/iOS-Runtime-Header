//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQHContext-Protocol.h>

@class GQDAffineGeometry, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface GQHCanvasContext : NSObject <GQHContext>
{
    GQDAffineGeometry *mGeometry;
    NSMutableString *mFunctionName;
    _Bool mHasFill;
    _Bool mHasStroke;
    struct __CFString *mBezierStr;
}

- (void)setCGPath:(struct CGPath *)arg1 state:(id)arg2;
- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(struct CGPoint)arg3 neighboringCP:(struct CGPoint)arg4 filledPath:(struct CGPath **)arg5 strokedPath:(struct CGPath **)arg6;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
- (struct GQHPathEndPointInfo)endPointInfoForPath:(struct CGPath *)arg1;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)translate:(struct CGSize)arg1 state:(id)arg2;
- (void)setBezierPath:(char *)arg1 state:(id)arg2;
- (void)setImageFill:(struct __CFURL *)arg1 srcSize:(struct CGSize)arg2 mode:(int)arg3 state:(id)arg4;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
- (void)createMaskedImageWithId:(struct __CFString *)arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath *)arg6 graphicStyle:(id)arg7 isFloating:(_Bool)arg8 state:(id)arg9;
- (void)createShapeWithId:(struct __CFString *)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(_Bool)arg5 state:(id)arg6;
- (void)teardownContext:(id)arg1;
- (void)prepareContext:(id)arg1;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

