//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject
{
    MPMediaEntity *_entity;
    NSString *_anchor;
    long long _deletionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long deletionType; // @synthesize deletionType=_deletionType;
@property(readonly, copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) MPMediaEntity *entity; // @synthesize entity=_entity;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3;

@end
