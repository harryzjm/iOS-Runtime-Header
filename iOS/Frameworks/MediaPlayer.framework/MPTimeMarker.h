//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPTimeMarker : NSObject
{
    double _duration;
    unsigned long long _index;
    double _time;
    NSString *_title;
    NSURL *_url;
    int _markerType;
    NSDictionary *_metadata;
}

@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) int markerType; // @synthesize markerType=_markerType;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)urlTitleTrimmingCharacterSet;
@property(readonly, nonatomic) _Bool hasArtworkAtPlaybackTime;
@property(readonly, nonatomic) double maxTime;
@property(readonly, nonatomic) double comparableTime;
- (id)description;
- (id)initWithMarkerType:(int)arg1;

@end

