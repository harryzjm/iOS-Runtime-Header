//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterSession : NSObject
{
    NSMutableDictionary *_metadata;
    struct os_unfair_lock_s _metadataLock;
    _Bool _reportingEnabled;
    NSObject<TVPPlayback> *_player;
    NSString *_UUID;
    id _context;
}

+ (id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStop:(id)arg2;
+ (id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2;
+ (id)transitionTypeForMediaControllerAutoTransition:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
- (id)consumeMetadataForKey:(id)arg1;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (id)metadataForKey:(id)arg1;
- (id)description;
- (id)initWithPlayer:(id)arg1 context:(id)arg2;
- (id)consumeStartReason;
- (id)consumeStartType;
- (id)consumeStopReason;
- (id)consumeStopType;

@end

