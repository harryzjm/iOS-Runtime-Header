//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, TSDLayout, TSDWrapSegments, TSUPointerKeyDictionary, TSWPColumn;
@protocol TSWPLayoutTarget;

__attribute__((visibility("hidden")))
@interface TPTextWrapCookie : NSObject
{
    NSMutableArray *_floatingWrappables;
    TSUPointerKeyDictionary *_wrapSegmentsInverseTransformInRootDictionary;
    TSWPColumn *_column;
    TSDLayout<TSWPLayoutTarget> *_target;
    TSDWrapSegments *_interiorWrapSegments;
    struct CGAffineTransform _targetInverseTransformInRoot;
}

+ (id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2;
@property(readonly, nonatomic) struct CGAffineTransform targetInverseTransformInRoot; // @synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot;
@property(retain, nonatomic) TSDWrapSegments *interiorWrapSegments; // @synthesize interiorWrapSegments=_interiorWrapSegments;
@property(readonly, nonatomic) NSArray *floatingWrappables; // @synthesize floatingWrappables=_floatingWrappables;
@property(nonatomic) __weak TSDLayout<TSWPLayoutTarget> *target; // @synthesize target=_target;
@property(retain, nonatomic) TSWPColumn *column; // @synthesize column=_column;
- (void).cxx_destruct;
- (id)transformedWrapSegmentsForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform)arg2;
- (void)addFloatingWrappable:(id)arg1;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;

@end

