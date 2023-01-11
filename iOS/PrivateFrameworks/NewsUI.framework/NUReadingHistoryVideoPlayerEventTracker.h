//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString;
@protocol NUVideoReadingHistory;

@interface NUReadingHistoryVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>
{
    id <NUVideoReadingHistory> _readingHistory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NUVideoReadingHistory> readingHistory; // @synthesize readingHistory=_readingHistory;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithReadingHistory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
