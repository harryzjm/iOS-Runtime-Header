//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface SLOpenGraphNode : NSObject
{
    _Bool _likedByMe;
    unsigned long long _numberOfLikes;
    unsigned long long _numberOfFriendLikes;
    int _fetchState;
    NSURL *_URL;
    NSArray *_likedByFriends;
}

@property(nonatomic) int fetchState; // @synthesize fetchState=_fetchState;
@property(readonly) NSArray *likedByFriends; // @synthesize likedByFriends=_likedByFriends;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)invalidate;
- (void)unlikeWithCompletion:(CDUnknownBlockType)arg1;
- (void)likeWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long friendLikeCount;
@property(readonly) unsigned long long globalLikeCount;
@property(readonly) _Bool likedByMe;
- (void)_startUpdateIfNeeded;
- (id)initWithURL:(id)arg1;
- (id)cache;

@end
