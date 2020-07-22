//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUJoiningMediaProviderPredicateRecord : NSObject
{
    PUMediaProvider *_mediaProvider;
    CDUnknownBlockType _predicate;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)arg1 predicate:(CDUnknownBlockType)arg2;

@end

