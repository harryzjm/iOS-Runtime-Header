//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardTransitionSlice : NSObject
{
    struct CGRect _startRect;
    struct CGRect _endRect;
    UIKBCacheToken *_startToken;
    UIKBCacheToken *_endToken;
    _Bool _shiftContents;
    _Bool _delayCrossfade;
    int _normalization;
}

+ (id)sliceWithStart:(struct CGRect)arg1 end:(struct CGRect)arg2;
- (void).cxx_destruct;
@property _Bool delayCrossfade; // @synthesize delayCrossfade=_delayCrossfade;
@property int normalization; // @synthesize normalization=_normalization;
@property(retain) UIKBCacheToken *endToken; // @synthesize endToken=_endToken;
@property(retain) UIKBCacheToken *startToken; // @synthesize startToken=_startToken;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
- (id)description;
@property(readonly) _Bool hasGeometry;
- (void)addStartRect:(struct CGRect)arg1 end:(struct CGRect)arg2;
- (id)init;

@end

