//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCVegaCGContext;

@interface CCVegaSVGRenderer : NSObject
{
    CCVegaCGContext *cgCanvas;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain) CCVegaCGContext *cgCanvas; // @synthesize cgCanvas;
- (struct CGPath *)newPathFromJSFunction:(id)arg1 item:(id)arg2;
- (id)parseString:(id)arg1 rendererContext:(id)arg2;
- (struct CGPath *)newPathFromParsedPath:(id)arg1 size:(double)arg2 rendererContext:(id)arg3;

@end
