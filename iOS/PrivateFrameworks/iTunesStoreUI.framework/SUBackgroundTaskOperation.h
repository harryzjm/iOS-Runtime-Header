//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface SUBackgroundTaskOperation : ISOperation
{
    ISOperation *_operation;
    NSString *_permissionIdentifier;
    unsigned long long _taskIdentifier;
}

- (void)_takeBackgroundAssertion;
- (void)_removeBackgroundAssertion;
- (void)_cancelBackgroundAssertion;
- (void)run;
@property(readonly) NSString *permissionIdentifier;
@property(readonly) ISOperation *operation;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 identifier:(id)arg2;

@end

