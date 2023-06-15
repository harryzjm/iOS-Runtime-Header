//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SUUIPlayableAsset : NSObject
{
    _Bool _ITunesStream;
    _Bool _shouldUseITunesStoreSecureKeyDelivery;
    NSURL *_contentURL;
    double _initialPlaybackTime;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    double _playbackDuration;
    long long _storeItemIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) _Bool shouldUseITunesStoreSecureKeyDelivery; // @synthesize shouldUseITunesStoreSecureKeyDelivery=_shouldUseITunesStoreSecureKeyDelivery;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(readonly, retain, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(readonly, retain, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property(readonly, nonatomic, getter=isITunesStream) _Bool ITunesStream; // @synthesize ITunesStream=_ITunesStream;
@property(nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (id)initWithVideo:(id)arg1;
- (id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2;
- (id)initWithContentURL:(id)arg1;
- (id)init;

@end

