//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject
{
    ASFriend *_friend;
    struct _HKFitnessFriendActivitySnapshot *_snapshot;
}

@property(retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) ASFriend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

