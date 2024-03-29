//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface UITextRenderingAttributes : NSObject
{
    UIFont *_font;
    double _minimumFontSize;
    double _actualFontSize;
    double _lineSpacing;
    long long _lineBreakMode;
    long long _baselineAdjustment;
    long long _alignment;
    _Bool _includeEmoji;
    struct CGRect _truncationRect;
    _Bool _drawUnderline;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

