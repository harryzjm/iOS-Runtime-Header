//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface CRSFCardLoader : NSObject
{
    NSCache *_loadedCards;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
- (void)loadSFCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
