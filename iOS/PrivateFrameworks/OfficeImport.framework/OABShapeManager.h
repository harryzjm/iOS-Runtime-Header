//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeManager
{
    void *mShape;
}

- (_Bool)hidden;
- (_Bool)textPathStrikethrough;
- (_Bool)textPathSmallcaps;
- (_Bool)textPathUnderline;
- (_Bool)textPathItalic;
- (_Bool)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (_Bool)isTextPath;
- (_Bool)isShadowed;
- (_Bool)isStroked;
- (_Bool)isFilled;
- (_Bool)isShadowOK;
- (_Bool)isStrokeOK;
- (_Bool)isFillOK;
- (id)initWithShape:(void *)arg1;
- (id)initWithShape:(void *)arg1 masterShape:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

