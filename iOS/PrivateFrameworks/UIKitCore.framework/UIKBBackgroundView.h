//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class NSObject, NSString, UIKBRenderConfig, UIKBTree, UITextInputTraits;

__attribute__((visibility("hidden")))
@interface UIKBBackgroundView <UIKBCacheableView>
{
    UIKBTree *_keyplane;
    UITextInputTraits *_inputTraits;
    int _visualStyle;
    NSObject *_geometryCacheKey;
    struct CGRect _splitLeftRect;
    struct CGRect _splitLeftCacheRect;
    struct CGRect _splitRightRect;
    struct CGRect _splitRightCacheRect;
    unsigned long long _topCorners;
    _Bool _isSplit;
    _Bool _centerFilled;
    _Bool _hasCandidateKeys;
    UIKBRenderConfig *_renderConfig;
}

@property(retain, nonatomic) NSObject *geometryCacheKey; // @synthesize geometryCacheKey=_geometryCacheKey;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(readonly, nonatomic) long long assetIdiom;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)drawContentsOfRenderers:(id)arg1;
- (_Bool)_canDrawContent;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
