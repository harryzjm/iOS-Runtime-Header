//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <system_network/OS_nw_path_observer-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_dictionary, OS_nw_fd_wrapper;

@interface NWConcrete_nw_path_observer : NSObject <OS_nw_path_observer>
{
    NSObject<OS_dispatch_queue> *client_queue;
    CDUnknownBlockType update_block;
    NSObject<OS_nw_dictionary> *known_paths;
    NSObject<OS_nw_fd_wrapper> *fd;
    void *source;
    struct os_unfair_lock_s lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
