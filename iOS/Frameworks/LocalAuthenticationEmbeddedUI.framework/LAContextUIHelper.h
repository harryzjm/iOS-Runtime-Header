//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAAuthorizationViewController, NSString;

__attribute__((visibility("hidden")))
@interface LAContextUIHelper : NSObject
{
    LAAuthorizationViewController *_ui;
}

- (void).cxx_destruct;
- (void)contextDidBecomeInvalid:(id)arg1;
- (void)cancel;
- (void)authenticateWithOptions:(id)arg1 availableMechanisms:(id)arg2 hostVC:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

