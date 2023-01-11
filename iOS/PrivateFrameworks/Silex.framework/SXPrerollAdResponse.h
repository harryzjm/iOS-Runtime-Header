//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;
@protocol SXPrerollAdMetadata;

@interface SXPrerollAdResponse
{
    NSURL *_videoURL;
    double _skipDuration;
    id <SXPrerollAdMetadata> _prerollAdMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SXPrerollAdMetadata> prerollAdMetadata; // @synthesize prerollAdMetadata=_prerollAdMetadata;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;

@end
