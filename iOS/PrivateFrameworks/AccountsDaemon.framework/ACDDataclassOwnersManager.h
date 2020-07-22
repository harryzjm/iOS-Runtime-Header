//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject
{
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

- (void).cxx_destruct;
- (id)_dataclassOwnersManagerConnection;
- (_Bool)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id *)arg4;
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)init;

@end

