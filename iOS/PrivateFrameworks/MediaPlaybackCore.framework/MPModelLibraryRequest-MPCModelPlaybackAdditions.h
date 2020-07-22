//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelLibraryRequest.h>

#import <MediaPlaybackCore/MPCModelPlaybackRequesting-Protocol.h>
#import <MediaPlaybackCore/MPCModelRequestRTCReporting-Protocol.h>

@class NSString;

@interface MPModelLibraryRequest (MPCModelPlaybackAdditions) <MPCModelPlaybackRequesting, MPCModelRequestRTCReporting>
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property(nonatomic) _Bool shouldExcludeNonShuffleItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
