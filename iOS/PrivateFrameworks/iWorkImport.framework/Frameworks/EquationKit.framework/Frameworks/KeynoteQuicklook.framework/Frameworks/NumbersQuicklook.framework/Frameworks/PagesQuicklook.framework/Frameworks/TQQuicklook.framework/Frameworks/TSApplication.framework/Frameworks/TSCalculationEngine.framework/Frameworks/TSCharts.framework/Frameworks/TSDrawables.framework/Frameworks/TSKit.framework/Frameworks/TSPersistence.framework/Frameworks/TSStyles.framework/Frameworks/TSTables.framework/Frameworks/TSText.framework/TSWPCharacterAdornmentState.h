//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, TSDFill, TSDShadow, TSDStroke, TSUSparseArray;

@interface TSWPCharacterAdornmentState : NSObject
{
    _Bool _hasValidFillState;
    _Bool _fillsCurrentTextContainer;
    _Bool _hasValidStrokeState;
    TSDFill *_currentAdornmentFill;
    TSUSparseArray *_currentFillPaths;
    TSUSparseArray *_currentRubyFillPaths;
    TSDShadow *_currentFillShadow;
    NSMutableSet *_currentDropCapAdornments;
    TSDStroke *_currentAdornmentStroke;
    TSUSparseArray *_currentStrokePaths;
    TSUSparseArray *_currentRubyStrokePaths;
    TSDShadow *_currentStrokeShadow;
    struct _NSRange _currentFillRange;
    struct _NSRange _currentStrokeRange;
    struct CGRect _currentFillRect;
    struct CGRect _currentStrokeRect;
}

+ (id)p_deepCopyPathArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TSDShadow *currentStrokeShadow; // @synthesize currentStrokeShadow=_currentStrokeShadow;
@property(retain, nonatomic) TSUSparseArray *currentRubyStrokePaths; // @synthesize currentRubyStrokePaths=_currentRubyStrokePaths;
@property(retain, nonatomic) TSUSparseArray *currentStrokePaths; // @synthesize currentStrokePaths=_currentStrokePaths;
@property(nonatomic) struct CGRect currentStrokeRect; // @synthesize currentStrokeRect=_currentStrokeRect;
@property(nonatomic) struct _NSRange currentStrokeRange; // @synthesize currentStrokeRange=_currentStrokeRange;
@property(retain, nonatomic) TSDStroke *currentAdornmentStroke; // @synthesize currentAdornmentStroke=_currentAdornmentStroke;
@property(nonatomic) _Bool hasValidStrokeState; // @synthesize hasValidStrokeState=_hasValidStrokeState;
@property(retain, nonatomic) NSMutableSet *currentDropCapAdornments; // @synthesize currentDropCapAdornments=_currentDropCapAdornments;
@property(nonatomic) _Bool fillsCurrentTextContainer; // @synthesize fillsCurrentTextContainer=_fillsCurrentTextContainer;
@property(retain, nonatomic) TSDShadow *currentFillShadow; // @synthesize currentFillShadow=_currentFillShadow;
@property(retain, nonatomic) TSUSparseArray *currentRubyFillPaths; // @synthesize currentRubyFillPaths=_currentRubyFillPaths;
@property(retain, nonatomic) TSUSparseArray *currentFillPaths; // @synthesize currentFillPaths=_currentFillPaths;
@property(nonatomic) struct CGRect currentFillRect; // @synthesize currentFillRect=_currentFillRect;
@property(nonatomic) struct _NSRange currentFillRange; // @synthesize currentFillRange=_currentFillRange;
@property(retain, nonatomic) TSDFill *currentAdornmentFill; // @synthesize currentAdornmentFill=_currentAdornmentFill;
@property(nonatomic) _Bool hasValidFillState; // @synthesize hasValidFillState=_hasValidFillState;
- (void)resetFillState;
- (void)setStateWithFill:(id)arg1 range:(struct _NSRange)arg2 rect:(struct CGRect)arg3 paths:(id)arg4 rubyPaths:(id)arg5 shadow:(id)arg6 fillsCurrentTextContainer:(_Bool)arg7;
- (void)resetStrokeState;
- (void)setStateWithStroke:(id)arg1 range:(struct _NSRange)arg2 rect:(struct CGRect)arg3 paths:(id)arg4 rubyPaths:(id)arg5 shadow:(id)arg6;
- (id)init;

@end
