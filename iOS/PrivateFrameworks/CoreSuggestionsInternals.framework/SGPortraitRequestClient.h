//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASXPCClientHelper;

@interface SGPortraitRequestClient : NSObject
{
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 error:(id *)arg3;
- (id)extractionsFromSearchableItems:(id)arg1 error:(id *)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
