//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerRequest;
@protocol MusicKit_SoftLinking_MPCPlayerPath;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCPlayerRequest : NSObject
{
    MPCPlayerRequest *_underlyingPlayerRequest;
}

- (void).cxx_destruct;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) MPCPlayerRequest *_underlyingPlayerRequest;
@property(retain, nonatomic) id <MusicKit_SoftLinking_MPCPlayerPath> playerPath;
@property(nonatomic) long long historyCount;
@property(nonatomic) long long forwardCount;
- (id)initWithUnderlyingPlayerRequest:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

