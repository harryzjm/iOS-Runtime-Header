//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCache.h>

@interface NSCache (TSPComponentManager)
- (void)tsp_cacheComponent:(id)arg1;
- (void)tsp_flushComponent:(id)arg1;
- (unsigned char)tsp_currentOperation;
- (id)tsp_currentComponent;
- (void)tsp_performOperation:(unsigned char)arg1 forComponent:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@end

