//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

#import <VideosUI/TVPContentKeyLoading-Protocol.h>
#import <VideosUI/TVPMediaItemReporting-Protocol.h>
#import <VideosUI/TVPMediaItemReportingDelegate-Protocol.h>
#import <VideosUI/VUIStoreFPSKeyLoaderDelegate-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, TVPPlayer, VUIMutableBookmark, VUIStoreFPSKeyLoader, VUIVideoManagedObject;

@interface VUIStoreAuxMediaItem : TVPBaseMediaItem <VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate>
{
    _Bool _isAudioOnly;
    _Bool _disableResumeMenu;
    _Bool _disableScrubbing;
    _Bool _isiTunesPurchasedOrRentedContent;
    _Bool _ignoreExistingOfflineKeyData;
    _Bool _isFamilySharingContent;
    _Bool _isLiveContent;
    _Bool _isHLS;
    _Bool _isForStartingDownload;
    NSURL *_fpsCertificateURL;
    NSURL *_fpsKeyServerURL;
    NSDictionary *_fpsAdditionalServerParams;
    NSString *_bookmarkID;
    NSNumber *_bookmarkOverrideTime;
    NSURL *_url;
    VUIMutableBookmark *_bookmark;
    TVPPlayer *_scrubPlayer;
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;
    NSError *_fpsKeyError;
    NSObject *_parentReportingToken;
    long long _playbackType;
    VUIVideoManagedObject *_videoManagedObject;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool isForStartingDownload; // @synthesize isForStartingDownload=_isForStartingDownload;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(retain, nonatomic) NSObject *parentReportingToken; // @synthesize parentReportingToken=_parentReportingToken;
@property(retain, nonatomic) NSError *fpsKeyError; // @synthesize fpsKeyError=_fpsKeyError;
@property(retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // @synthesize storeFPSKeyLoader=_storeFPSKeyLoader;
@property(retain, nonatomic) TVPPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) VUIMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool isLiveContent; // @synthesize isLiveContent=_isLiveContent;
@property(nonatomic) _Bool isFamilySharingContent; // @synthesize isFamilySharingContent=_isFamilySharingContent;
@property(nonatomic) _Bool ignoreExistingOfflineKeyData; // @synthesize ignoreExistingOfflineKeyData=_ignoreExistingOfflineKeyData;
@property(nonatomic) _Bool isiTunesPurchasedOrRentedContent; // @synthesize isiTunesPurchasedOrRentedContent=_isiTunesPurchasedOrRentedContent;
@property(nonatomic) _Bool disableScrubbing; // @synthesize disableScrubbing=_disableScrubbing;
@property(nonatomic) _Bool disableResumeMenu; // @synthesize disableResumeMenu=_disableResumeMenu;
@property(copy, nonatomic) NSNumber *bookmarkOverrideTime; // @synthesize bookmarkOverrideTime=_bookmarkOverrideTime;
@property(copy, nonatomic) NSString *bookmarkID; // @synthesize bookmarkID=_bookmarkID;
@property(nonatomic) _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // @synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
- (id)_offlineKeyDataForKeyRequest:(id)arg1;
- (void)_scrubPlayerItemDidLoad:(id)arg1;
- (void)_keepKeyLoaderAlive:(id)arg1;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
- (void)updateOfflineKeyWithIdentifier:(id)arg1 updatedOfflineKeyData:(id)arg2;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (void)mediaItem:(id)arg1 didChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;
- (void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3;
- (id)reportingDelegate;
- (void)cleanUpMediaItem;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (id)_replacementErrorForITunesPlaybackError:(id)arg1;
- (id)_replacementErrorForPlaybackError:(id)arg1;
- (id)replacementErrorForPlaybackError:(id)arg1;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemURL;
- (void)dealloc;
- (void)resetReportingEventCollection;
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;
- (id)initWithVideoManagedObject:(id)arg1 isForStartingDownload:(_Bool)arg2 externalBookmarkTime:(id)arg3 externalBookmarkTimeStamp:(id)arg4;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
