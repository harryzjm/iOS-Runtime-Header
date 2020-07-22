//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPMediaItemArtwork, NSString;
@protocol OS_dispatch_queue;

@interface MPContentItem : NSObject
{
    void *_mediaRemoteDeltaContentItem;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _Bool _hasChanges;
    void *_mediaRemoteContentItem;
    MPMediaItemArtwork *_artwork;
}

+ (_Bool)shouldPushArtworkData;
+ (void)performSuppressingChangeNotifications:(CDUnknownBlockType)arg1;
+ (_Bool)isSuppressingChangeNotifications;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(readonly, nonatomic) void *_mediaRemoteContentItem; // @synthesize _mediaRemoteContentItem;
- (void).cxx_destruct;
- (void)_loadArtwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_changeDictionary;
- (void)_applyDeferredNotification;
- (void)_postItemChangedNotificationWithDeltaBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isPlayable) _Bool playable;
@property(nonatomic, getter=isStreamingContent) _Bool streamingContent;
@property(nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(nonatomic, getter=isContainer) _Bool container;
@property(nonatomic) float playbackProgress;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (void)dealloc;
- (id)_initWithMediaRemoteContentItem:(void *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

