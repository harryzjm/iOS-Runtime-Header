//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject
{
    NSMutableArray *_playerStack;
}

+ (id)sharedInstance;
- (void)removeControllerFromStack:(id)arg1;
- (void)moveControllerToTopOfStack:(id)arg1;
- (void)dealloc;
- (id)init;

@end

