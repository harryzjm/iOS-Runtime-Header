//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfigVideo
{
    long long _resolution;
    NSMutableSet *_payloads;
    unsigned int _framerate;
    unsigned long long _keyFrameInterval;
    NSMutableArray *_subStreamConfigs;
    _Bool _isTemporalStream;
    _Bool _isSubStream;
    unsigned short _parentStreamID;
}

@property(nonatomic) unsigned short parentStreamID; // @synthesize parentStreamID=_parentStreamID;
@property(nonatomic) _Bool isSubStream; // @synthesize isSubStream=_isSubStream;
@property(nonatomic) _Bool isTemporalStream; // @synthesize isTemporalStream=_isTemporalStream;
@property(readonly, nonatomic) NSArray *subStreamConfigs; // @synthesize subStreamConfigs=_subStreamConfigs;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSSet *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
- (id)streamIds;
- (void)addSubStreamConfig:(id)arg1;
- (void)addPayload:(int)arg1;
- (void)dealloc;
- (id)init;

@end

