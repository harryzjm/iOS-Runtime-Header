//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSError, RTPersistenceContext;

@protocol RTPersistenceContextDelegate <NSObject>
- (void)persistenceContextPerformedSave:(RTPersistenceContext *)arg1;
- (void)persistenceContext:(RTPersistenceContext *)arg1 encounteredError:(NSError *)arg2;
@end

