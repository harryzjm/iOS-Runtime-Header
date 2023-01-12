//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSMutableArray, NSString;

@interface HMIHLSPlaylist : HMFObject <HMFLogging>
{
    NSMutableArray *_lines;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *lines; // @synthesize lines=_lines;
- (void)end;
- (void)open;
- (void)appendSeparableSegmentWithPath:(id)arg1 duration:(double)arg2 byteRange:(struct _NSRange)arg3;
- (void)appendSeparableSegmentWithPath:(id)arg1 duration:(double)arg2;
- (void)appendInitializationSegmentWithPath:(id)arg1;
- (void)appendEncryptionModeWithPath:(id)arg1;
- (void)appendIFrameOnly;
@property(readonly) NSString *playlistString;
- (id)initWithTargetDuration:(double)arg1;
- (id)initWithPlaylistString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
