//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayoutContext-Protocol.h>

@class NSString;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>
{
    struct __CFString *_fontName;
    double _fontSize;
    double _columnWidth;
}

@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (double)containerWidth;
- (struct __CFString *)baseFontName;
- (double)baseFontSize;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

