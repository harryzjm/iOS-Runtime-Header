//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MREMeta : NSObject
{
    unsigned long long _trackId;
    unsigned long long _songId;
    NSString *_title;
    NSString *_artist;
}

@property(readonly, retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long songId; // @synthesize songId=_songId;
@property(readonly, nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
- (id)initWithTrackId:(unsigned long long)arg1 songId:(unsigned long long)arg2 title:(id)arg3 artist:(id)arg4;
- (void)dealloc;

@end
