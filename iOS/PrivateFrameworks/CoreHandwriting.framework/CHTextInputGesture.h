//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDrawing, CHTextInputTargetContentInfo, CHTokenizedTextResult, NSLocale;
@protocol CHStroke;

@interface CHTextInputGesture : NSObject
{
    _Bool _preferCharacterLevel;
    long long _gestureType;
    CHTextInputTargetContentInfo *_targetContentInfo;
    NSLocale *_locale;
    CHDrawing *_normalizedDrawing;
    CHDrawing *_originalDrawing;
    id <CHStroke> _lastStroke;
    CHTokenizedTextResult *__textResult;
    struct _NSRange __storedAffectedRange;
}

+ (_Bool)isDrawingCenterOnBlank:(id)arg1 targetContentInfo:(id)arg2 insertionLocation:(long long *)arg3;
+ (_Bool)isVerticalBarShapeFromLineResult:(id)arg1 originalDrawing:(id)arg2 isDirectionDownward:(_Bool *)arg3;
+ (_Bool)shouldReclassifyGestureType:(long long)arg1;
+ (_Bool)isEditGestureForDrawing:(id)arg1 targetContentInfo:(id)arg2 tentativeResultType:(long long)arg3;
+ (id)verticalBarGestureFromLineResult:(id)arg1 currentGesture:(id)arg2;
+ (long long)_cursorPositionForPoint:(struct CGPoint)arg1 referenceString:(id)arg2 referenceCharRects:(struct CGRect *)arg3 searchingRange:(struct _NSRange)arg4;
+ (struct _NSRange)rangeOfTokenAtCharacterIndex:(long long)arg1 inString:(id)arg2 locale:(id)arg3;
+ (void)_shouldExpandToFullTokensForScriptInString:(id)arg1 withRange:(struct _NSRange)arg2 shouldExpandStart:(_Bool *)arg3 shouldExpandEnd:(_Bool *)arg4;
+ (struct _NSRange)_affectedRangeByRefiningShapeBasedGesture:(struct _NSRange)arg1 resultType:(long long)arg2 drawing:(id)arg3 targetContentInfo:(id)arg4;
+ (_Bool)_isShapeBasedRangeRefinementSupportedForResultType:(long long)arg1;
@property(nonatomic) struct _NSRange _storedAffectedRange; // @synthesize _storedAffectedRange=__storedAffectedRange;
@property(retain, nonatomic) CHTokenizedTextResult *_textResult; // @synthesize _textResult=__textResult;
@property(readonly, nonatomic) id <CHStroke> lastStroke; // @synthesize lastStroke=_lastStroke;
@property(readonly, nonatomic) _Bool preferCharacterLevel; // @synthesize preferCharacterLevel=_preferCharacterLevel;
@property(readonly, nonatomic) CHDrawing *originalDrawing; // @synthesize originalDrawing=_originalDrawing;
@property(readonly, nonatomic) CHDrawing *normalizedDrawing; // @synthesize normalizedDrawing=_normalizedDrawing;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) CHTextInputTargetContentInfo *targetContentInfo; // @synthesize targetContentInfo=_targetContentInfo;
@property(nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
- (struct _NSRange)_affectedRangeByAdjustingToTokensIfNeeded:(struct _NSRange)arg1 allowSubtoken:(_Bool)arg2 didExpand:(_Bool *)arg3;
- (struct _NSRange)_affectedRangeByAdjustingForProtectedCharacters:(struct _NSRange)arg1;
- (struct _NSRange)_affectedRangeByRemovingTerminatingNewLines:(struct _NSRange)arg1;
- (struct _NSRange)_affectedRangeByTrimmingSpaces:(struct _NSRange)arg1;
- (void)getAffectedRange:(struct _NSRange *)arg1 expandedToFullTokens:(_Bool *)arg2;
- (id)textResult;
- (void)dealloc;
- (id)initWithGestureType:(long long)arg1 targetContentInfo:(id)arg2 locale:(id)arg3 normalizedDrawing:(id)arg4 originalDrawing:(id)arg5 lastStroke:(id)arg6 preferCharacterLevel:(_Bool)arg7;

@end
