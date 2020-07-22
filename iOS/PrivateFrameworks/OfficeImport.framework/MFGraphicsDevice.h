//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MFDeviceContext, MFObjectTable, NSDictionary, NSMutableArray;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject
{
    MFDeviceContext *m_currentDC;
    NSMutableArray *m_DCStack;
    int m_gStateStackHeight;
    MFDeviceContext *m_firstClipDC;
    NSObject<MFDeviceDriver> *m_deviceDriver;
    MFObjectTable *m_objectTable;
    MFObjectTable *m_stockObjects;
    NSDictionary *m_colorMap;
    NSDictionary *m_fillMap;
}

- (int)plgBlt:(struct CGPoint *)arg1 in_sourceImage:(id)arg2 in_xSrc:(int)arg3 in_ySrc:(int)arg4 in_widthSrc:(int)arg5 in_heightSrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;
- (int)maskBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;
- (int)alphaBlend:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_sourceConstantOpacity:(unsigned char)arg10 in_useSourceAlphaChannel:(_Bool)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 usePaletteForBilevel:(_Bool)arg13;
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;
- (int)bitBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_rop:(unsigned int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10;
- (int)patBlt:(int)arg1 in_y:(int)arg2 in_width:(int)arg3 in_height:(int)arg4 in_rop:(unsigned int)arg5;
- (id)createBitmap:(unsigned int)arg1 in_height:(unsigned int)arg2 in_planes:(unsigned int)arg3 in_bitsPerPixel:(unsigned int)arg4 in_bitmap:(const char *)arg5 in_bitmapSize:(unsigned int)arg6;
- (id)createDIBitmap:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(const char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5;
- (id)createDIBitmap:(const char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3;
- (int)frameRegion:(unsigned int)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;
- (int)frameRegionWithRects:(id)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;
- (int)fillRgn:(unsigned int)arg1 in_brushID:(unsigned int)arg2;
- (int)fillRgnWithRects:(id)arg1 in_brushID:(unsigned int)arg2;
- (int)invertRgn:(unsigned int)arg1;
- (int)invertRgnWithRects:(id)arg1;
- (int)paintRgn:(unsigned int)arg1;
- (int)paintRgnWithRects:(id)arg1;
- (int)setMetaRgn;
- (int)intersectClipRect:(struct CGRect)arg1;
- (int)excludeClipRect:(struct CGRect)arg1;
- (int)setClipRegion:(unsigned int)arg1;
- (int)selectClipRegionWithRects:(id)arg1 in_mode:(int)arg2;
- (int)selectClipPath:(int)arg1;
- (int)strokeAndFillPath:(_Bool)arg1 in_fill:(_Bool)arg2;
- (int)endPath;
- (int)widenPath;
- (int)beginPath;
- (int)abortPath;
- (int)setRop2:(int)arg1;
- (int)setMapMode:(int)arg1;
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1 in_command:(int)arg2;
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;
- (void)createStockObjects;
- (int)createPatternBrush:(id)arg1 index:(unsigned int)arg2 usePaletteForBilevel:(_Bool)arg3;
- (int)createPalette:(id)arg1 in_index:(unsigned int)arg2;
- (int)resizePalette:(unsigned int)arg1 in_index:(unsigned int)arg2;
- (int)setPaletteEntries:(unsigned int)arg1 in_colours:(id)arg2 in_index:(unsigned int)arg3;
- (id)createColorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 flags:(unsigned char)arg4;
- (int)createPen:(int)arg1 width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4 index:(unsigned int)arg5;
- (int)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22 index:(unsigned int)arg23;
- (int)createFontIndirect:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
- (int)createBrush:(int)arg1 in_colour:(id)arg2 hatchstyle:(int)arg3 index:(unsigned int)arg4;
- (int)createRegion:(id)arg1;
- (int)deleteObject:(int)arg1;
- (int)getStockObject:(unsigned int)arg1;
- (int)selectObject:(int)arg1;
- (int)setPolyFillMode:(int)arg1;
- (int)realizePalette;
- (int)roundRect:(int)arg1 top:(int)arg2 right:(int)arg3 bottom:(int)arg4 rx:(double)arg5 ry:(double)arg6;
- (int)closeCurrentPath:(_Bool)arg1;
- (int)bezier:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 x4:(int)arg7 y4:(int)arg8;
- (int)bezierTo:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6;
- (int)chord:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;
- (int)arcTo:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;
- (int)angleArc:(int)arg1 y:(int)arg2 radius:(unsigned int)arg3 startAngle:(double)arg4 sweepAngle:(double)arg5;
- (int)pie:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;
- (int)arc:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;
- (int)polyPolyline:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;
- (int)polyline:(struct CGPoint *)arg1 in_count:(int)arg2;
- (int)setArcDirection:(int)arg1;
- (int)polyPolygon:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;
- (int)polygon:(struct CGPoint *)arg1 in_count:(int)arg2;
- (int)lineTo:(double)arg1 y:(double)arg2;
- (int)moveTo:(double)arg1 y:(double)arg2;
- (int)offsetClipRegionByX:(int)arg1 y:(int)arg2;
- (int)selectClipRegion:(id)arg1 combineMode:(int)arg2;
- (int)removeClip;
- (int)selectClippingPath:(id)arg1 combineMode:(int)arg2;
- (id)clippingPathByCombiningClippingPath:(id)arg1 withClippingPath:(id)arg2 combineMode:(int)arg3;
- (id)clippingPathByCombiningEmptyClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;
- (id)clippingPathByCombiningImplicitClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;
- (id)currentCummulatedClippingPath;
- (id)normalizedClippingPathWithClippingPath:(id)arg1;
- (int)restoreDC:(int)arg1;
- (int)restoreDC;
- (int)saveDC;
- (void)setClippingPath:(id)arg1;
- (void)addClippingPathToCurrentDCAndCurrentContext:(id)arg1;
- (void)applyDCAtIndexToCurrentContext:(unsigned long long)arg1;
- (void)applyClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;
- (void)addClippingPathToCurrentContext:(id)arg1 dc:(id)arg2;
- (id)clipEverythingClippingPath;
- (id)implicitClippingPath;
- (void)applyNonClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;
- (unsigned long long)clippingStartDCIndex;
- (unsigned long long)firstClipDCIndex;
- (unsigned long long)currentDCIndex;
- (void)restoreGState:(id)arg1;
- (void)saveGState:(id)arg1;
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;
- (int)ellipse:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;
- (int)rectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;
- (int)extTextOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;
- (int)extTextOut:(int)arg1 y:(int)arg2 in_text:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;
- (int)textOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3;
- (int)textOut:(int)arg1 y:(int)arg2 in_text:(id)arg3;
- (int)setTextAlign:(_Bool)arg1 textHorizontalAlign:(int)arg2 textVerticalAlign:(int)arg3 textDirection:(int)arg4;
- (int)setTextCharExtra:(int)arg1;
- (int)setTextJustification:(int)arg1 in_breakCount:(int)arg2;
- (int)setTextColour:(id)arg1;
- (int)setStretchBltMode:(int)arg1;
- (int)setBrushOrg:(double)arg1 y:(double)arg2;
- (int)setBkMode:(int)arg1;
- (int)setBkColour:(id)arg1;
- (int)setMiterLimit:(double)arg1;
- (int)description:(id)arg1;
- (int)comment:(id)arg1;
- (void)done;
- (id)recolor:(unsigned char)arg1 in_green:(unsigned char)arg2 in_blue:(unsigned char)arg3 fill:(_Bool)arg4;
- (id)recolor:(id)arg1 fill:(_Bool)arg2;
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;
- (id)getCurrentFont;
- (struct CGRect)getCanvas;
- (void)dealloc;
- (id)initWithCanvas:(struct CGRect)arg1;

@end

