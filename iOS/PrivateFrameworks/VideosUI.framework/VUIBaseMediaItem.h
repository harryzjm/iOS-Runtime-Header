//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class VUIMediaStartTimeCollection;

@interface VUIBaseMediaItem : TVPBaseMediaItem
{
    VUIMediaStartTimeCollection *_startTimeCollection;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) VUIMediaStartTimeCollection *startTimeCollection; // @synthesize startTimeCollection=_startTimeCollection;
- (id)mediaItemMetadataForProperty:(id)arg1;

@end
