//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/NSObject-Protocol.h>

@class NSArray;

@protocol TSKChangeSourceObserver <NSObject>

@optional
- (void)didProcessAllChanges;
- (void)processChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
- (void)preprocessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
@end
