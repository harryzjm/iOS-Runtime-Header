//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group;

@interface NSFileProviderService : NSObject
{
    NSString *_name;
    id _endpointCreatingProxy;
    NSObject<OS_dispatch_group> *_requestFinishedGroup;
}

@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)fetchFileProviderConnectionAndReturnError:(id *)arg1;
- (void)getFileProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3;
- (void)dealloc;

@end
