//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPTracklistEnumerationResult-Protocol.h>

@class NSString;

@protocol MPTracklistEnumerationItem <MPTracklistEnumerationResult>
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@end
