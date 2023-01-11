//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol QLThumbnailAdditionIndexInterface, QLThumbnailsInterface;

@interface QLThumbnailServiceProxy : NSObject
{
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2;
- (void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2;
- (void)askThumbnailAdditionIndex:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)indexProxy;
- (void)dealloc;
- (id)init;

@end
