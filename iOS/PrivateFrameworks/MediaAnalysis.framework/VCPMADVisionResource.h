//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VNSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVisionResource
{
    NSObject<OS_dispatch_queue> *_queue;
    VNSession *_session;
}

- (void).cxx_destruct;
- (void)purge;
@property(readonly, nonatomic) VNSession *session;
- (id)init;

@end
