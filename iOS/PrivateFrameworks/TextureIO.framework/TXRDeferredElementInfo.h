//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface TXRDeferredElementInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    NSMutableArray *_faces;
}

@property(readonly, nonatomic) NSMutableArray *faces; // @synthesize faces=_faces;
- (void).cxx_destruct;
- (id)initAsCubemap:(_Bool)arg1;

@end
