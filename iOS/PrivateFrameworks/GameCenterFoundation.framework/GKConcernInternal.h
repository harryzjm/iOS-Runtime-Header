//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSString;

@interface GKConcernInternal
{
    GKPlayerInternal *_player;
    NSString *_message;
    unsigned int _concernID;
}

+ (id)secureCodedPropertyKeys;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int concernID; // @synthesize concernID=_concernID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

