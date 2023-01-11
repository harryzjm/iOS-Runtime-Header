//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFace-Protocol.h>

@class NSString;
@protocol SXFontAttributes;

@interface SXTextSourceFontFace : NSObject <SXFontFace>
{
    NSString *_fontName;
    id <SXFontAttributes> _fontAttributes;
}

+ (id)basicFontAttributesForFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1 andAttributes:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXFontAttributes> fontAttributes; // @synthesize fontAttributes=_fontAttributes;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
