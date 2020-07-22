//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, TSDTextureSet;

__attribute__((visibility("hidden")))
@interface TSDMagicMoveAnimationMatch : NSObject
{
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    _Bool _isUsingMorphTexture;
    _Bool _didUseMorphTexture;
    _Bool _hasBeenTornDown;
    _Bool _isMorphMatch;
    _Bool _isTextStyleIdenticalExceptSize;
    _Bool _shouldDisableTextMorphing;
    TSDTextureSet *_outgoingTexture;
    TSDTextureSet *_incomingTexture;
    long long _matchType;
    NSDictionary *_outgoingTextureActionBuildFinalAttributes;
}

+ (unsigned long long)magicMoveMorphTexturesPerSecond;
@property(retain, nonatomic) NSDictionary *outgoingTextureActionBuildFinalAttributes; // @synthesize outgoingTextureActionBuildFinalAttributes=_outgoingTextureActionBuildFinalAttributes;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) _Bool shouldDisableTextMorphing; // @synthesize shouldDisableTextMorphing=_shouldDisableTextMorphing;
@property(nonatomic) _Bool isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize;
@property(nonatomic) _Bool isMorphMatch; // @synthesize isMorphMatch=_isMorphMatch;
@property(retain, nonatomic) TSDTextureSet *incomingTexture; // @synthesize incomingTexture=_incomingTexture;
@property(retain, nonatomic) TSDTextureSet *outgoingTexture; // @synthesize outgoingTexture=_outgoingTexture;
- (void)unlockCurrentMorphTexture;
- (id)lockCurrentMorphTexture;
- (void)clearMorphTexture;
- (void)addMorphTexture:(id)arg1;
@property(readonly, nonatomic) _Bool isMatched;
- (id)description;
- (void)teardown;
- (void)dealloc;
- (id)initWithMatchType:(long long)arg1 outgoingTexture:(id)arg2 incomingTexture:(id)arg3;
- (id)init;

@end

