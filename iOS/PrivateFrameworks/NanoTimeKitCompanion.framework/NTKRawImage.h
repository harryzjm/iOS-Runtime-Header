//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface NTKRawImage : NSObject
{
    int _width;
    int _height;
    const float *_contents;
}

+ (id)rawImageWithImage:(id)arg1 width:(int)arg2 height:(int)arg3;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) const float *contents; // @synthesize contents=_contents;
- (void)write:(id)arg1;
- (id)scaleToWidth:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)initWithContent:(MISSING_TYPE **)arg1 width:(int)arg2 height:(int)arg3;

@end

