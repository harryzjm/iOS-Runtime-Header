//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFPodcastUtilities : NSObject
{
}

+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)createPreferredPlayerPathWithCompletion:(CDUnknownBlockType)arg1;
+ (void *)createLocalPlayerPath;
+ (void *)createPlayerPathForOrigin:(void *)arg1;
+ (struct _MRSystemAppPlaybackQueue *)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(_Bool)arg2;
+ (id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2;

@end
