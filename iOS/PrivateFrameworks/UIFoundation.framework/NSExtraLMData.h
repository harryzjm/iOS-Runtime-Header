//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIStyleEffectConfiguration, NSLayoutManagerTextBlockRowArrayCache, NSLock, NSMutableArray, NSMutableSet, NSParagraphArbitrator, NSRunStorage, NSTextContainer;

@interface NSExtraLMData : NSObject
{
    NSRunStorage *_attachmentSizesRun;
    struct CGRect _currentAttachmentRect;
    unsigned long long _currentAttachmentIndex;
    NSLock *_fillHoleLock;
    NSRunStorage *_fragmentRunsExtras;
    id _temporaryAttributes;
    NSTextContainer *_firstTextContainer;
    struct __CFDictionary *_textContainerIndexes;
    struct __CFDictionary *_textContainerGlyphIndexes;
    long long _typesetterBehavior;
    struct CGRect _cachedFontBounds;
    double _cachedUnderlineThickness;
    double _cachedUnderlinePosition;
    double _cachedUnderlineAdjustment;
    struct _NSRange _cachedUnderlineRange;
    NSMutableArray *_blockRunsArray;
    double _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    struct _NSGlyphTree _glyphTree;
    struct _NSLayoutTree _layoutTree;
    struct _NSRange _firstTextViewVisibleCharRange;
    struct CGSize _firstTextViewVisibleOffset;
    struct _NSRange _lastInvalidatedCharRange;
    double _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    NSParagraphArbitrator *_paragraphArbitrator;
    CUIStyleEffectConfiguration *_styleEffectConfig;
    NSMutableSet *_viewProviders;
    struct __lmFlags2 {
        unsigned int glyphCause:6;
        unsigned int layoutCause:6;
        unsigned int delegateRespondsToTempAttrs:1;
        unsigned int processingFirstTextViewVisible:1;
        unsigned int temporarySpacingChange:1;
        unsigned int alwaysDrawsActive:1;
        unsigned int usesOldShowPackedGlyphs:1;
        unsigned int drawsUnderlinesLikeWebKit:1;
        unsigned int drawsDebugBaselines:1;
        unsigned int mirrorsTextAlignment:1;
        unsigned int forcesTrackingFloor:1;
        unsigned int isLiveScrolling:1;
        unsigned int hasCustomUnderlineColor:1;
        unsigned int applicationPlatformContext:3;
        unsigned int limitsLayoutForSuspiciousContents:1;
        unsigned int delegateRespondsToRenderingColor:1;
        unsigned int firstTextViewRespondsToRenderingColor:1;
        unsigned int reserved:3;
    } _lmFlags2;
    struct _NSGlyphIndexForPointCache _glyphIndexForPointCache;
    long long _currentChangeInLength;
    double _timeStampForResizeInScroll;
}

@end

