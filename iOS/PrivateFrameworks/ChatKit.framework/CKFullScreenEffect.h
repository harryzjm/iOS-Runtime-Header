//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKAudioControllerDelegate-Protocol.h>

@class CKAudioController, CKMessagePartChatItem, NSString;
@protocol CKFullScreenEffectDelegate;

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate>
{
    CKAudioController *_audioController;
    float _currentVolume;
    BOOL messageOrientation;
    _Bool _triggeredByResponseKit;
    NSString *_identifier;
    CKMessagePartChatItem *_triggeringChatItem;
    id <CKFullScreenEffectDelegate> _delegate;
}

+ (id)stickerFilter;
+ (id)tapBackFilter;
+ (id)bigEmojiFilter;
+ (id)_monochromeDimmingFilterWithType:(int)arg1;
@property(nonatomic) __weak id <CKFullScreenEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMessagePartChatItem *triggeringChatItem; // @synthesize triggeringChatItem=_triggeringChatItem;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
@property(nonatomic) BOOL messageOrientation; // @synthesize messageOrientation;
- (void).cxx_destruct;
- (_Bool)effectIsDark;
- (_Bool)_supportsSoundEffects;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_didPrepareSoundEffect;
- (void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(_Bool)arg3;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)stopSoundEffect;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)_ensureAudioPlayer;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (void)animateFiltersForCell:(id)arg1;
- (void)applyMessageFiltersToCells:(id)arg1;
- (int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(_Bool *)arg2 orientation:(char *)arg3;
- (void)dealloc;
- (_Bool)soundEffectHasHapticTrack;
- (id)soundEffectFileURL;
- (id)messageFilters;
- (id)backgroundColor;
- (double)duration;
- (_Bool)isForegroundEffect;
- (_Bool)shouldDrawOverNavigationBar;
- (Class)effectViewClass;
- (unsigned long long)layerCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

