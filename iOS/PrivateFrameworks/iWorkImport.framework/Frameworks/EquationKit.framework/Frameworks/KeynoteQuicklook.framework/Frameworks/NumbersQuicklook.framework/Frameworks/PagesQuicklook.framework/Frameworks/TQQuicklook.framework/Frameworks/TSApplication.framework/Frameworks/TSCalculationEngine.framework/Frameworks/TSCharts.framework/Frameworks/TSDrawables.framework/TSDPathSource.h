//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSDrawables/NSCopying-Protocol.h>
#import <TSDrawables/TSDMixing-Protocol.h>

@class NSString, TSUBezierPath;

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>
{
    _Bool _horizontalFlip;
    _Bool _verticalFlip;
    NSString *_localizationKey;
    NSString *_name;
    NSString *_identifier;
}

+ (id)pathSourceForShapeType:(long long)arg1 naturalSize:(struct CGSize)arg2;
+ (id)pathSourceWithArchive:(const struct PathSourceArchive *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasVerticalFlip; // @synthesize hasVerticalFlip=_verticalFlip;
@property(nonatomic) _Bool hasHorizontalFlip; // @synthesize hasHorizontalFlip=_horizontalFlip;
@property(copy, nonatomic) NSString *userDefinedIdentifier; // @synthesize userDefinedIdentifier=_identifier;
@property(copy, nonatomic) NSString *userDefinedName; // @synthesize userDefinedName=_name;
@property(copy, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
@property(readonly, nonatomic) NSString *inferredAccessibilityDescription;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)valueForSetSelector:(SEL)arg1;
@property(readonly, nonatomic) struct CGAffineTransform pathFlipTransform;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize)arg1;
@property(nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) Class preferredControllerClass;
- (id)interiorWrapPathForInset:(double)arg1 joinStyle:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) TSUBezierPath *interiorWrapPath;
@property(readonly, copy, nonatomic) TSUBezierPath *bezierPathWithoutFlips;
@property(readonly, copy, nonatomic) TSUBezierPath *bezierPath;
@property(readonly, nonatomic, getter=isClosed) _Bool closed;
@property(readonly, nonatomic) _Bool isCircular;
@property(readonly, nonatomic) _Bool isRectangularForever;
@property(readonly, nonatomic) _Bool isRectangular;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;
- (void)saveSharedToArchive:(struct PathSourceArchive *)arg1;
- (void)loadSharedFromArchive:(const struct PathSourceArchive *)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool isClosed;

@end
