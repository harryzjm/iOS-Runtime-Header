//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPLazySectionedCollectionDataSource-Protocol.h>

@class MPCPlayerResponse, NSIndexPath, NSString;

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource>
{
    MPCPlayerResponse *_response;
    NSIndexPath *_playingItemIndexPath;
}

@property(retain, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
