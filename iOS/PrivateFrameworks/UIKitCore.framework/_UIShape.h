//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIShape : NSObject <NSCopying>
{
    UIBezierPath *_path;
    double _cornerRadius;
    NSString *_cornerCurve;
    struct CGRect _rect;
}

+ (id)shapeWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3;
+ (id)shapeWithPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cornerCurve; // @synthesize cornerCurve=_cornerCurve;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _UIShape *zeroOriginShape;
@property(readonly, nonatomic) UIBezierPath *outline;
@property(readonly, nonatomic) _Bool isRect;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGSize size;
- (id)shapeConvertedFromCoordinateSpace:(id)arg1 toCoordinateSpace:(id)arg2;

@end
