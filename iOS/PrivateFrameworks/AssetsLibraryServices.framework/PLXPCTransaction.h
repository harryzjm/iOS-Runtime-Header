//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface PLXPCTransaction : NSObject
{
    const char *_identifier;
}

+ (id)openXPCTransactionStatus;
+ (void)_stopTrackingTransaction:(id)arg1;
+ (void)_startTrackingTransaction:(id)arg1;
+ (id)transaction:(const char *)arg1;
+ (void)discardCallStackSymbols:(id)arg1;
+ (id)callStackSymbols;
+ (void)initialize;
- (id)_statusDescription;
- (id)description;
- (void)stillAlive;
- (void)dealloc;
- (id)initWithIdentifier:(const char *)arg1;

@end

