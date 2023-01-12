//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, _UIImageContentRendition;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayout : NSObject
{
    struct {
        unsigned int contentsIsCGImage:1;
        unsigned int rendersContentAtNaturalSize:1;
    } _flags;
    CDUnknownBlockType _contentInfoGenerator;
    struct {
        _UIImageContentRendition *rendition;
        id contents;
        double drawScale;
    } _contentInfo;
    double _contentsScaleFactor;
    double _baselineOffsetFromTop;
    double _baselineOffsetFromBottom;
    struct UIEdgeInsets _contentInsets;
    struct CGAffineTransform _contentsTransform;
}

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(struct CGSize)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) double contentsScaleFactor; // @synthesize contentsScaleFactor=_contentsScaleFactor;
@property(readonly, nonatomic) struct CGAffineTransform contentsTransform; // @synthesize contentsTransform=_contentsTransform;
- (id)description;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)hasContents;
@property(readonly, nonatomic) UIColor *contentsMultiplyColor;
@property(readonly, nonatomic) id contents;

@end

