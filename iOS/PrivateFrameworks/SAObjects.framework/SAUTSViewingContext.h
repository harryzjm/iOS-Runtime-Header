//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, SAUTSContent;

@interface SAUTSViewingContext
{
}

+ (id)viewingContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)viewingContext;
@property(copy, nonatomic) NSArray *viewingHistory;
@property(copy, nonatomic) NSNumber *playbackPositionInMilliseconds;
@property(nonatomic) _Bool paused;
@property(copy, nonatomic) NSString *nowPlayingAppId;
@property(retain, nonatomic) SAUTSContent *nowPlaying;
@property(copy, nonatomic) NSNumber *durationInMilliseconds;
@property(nonatomic) _Bool commercialPlaying;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

