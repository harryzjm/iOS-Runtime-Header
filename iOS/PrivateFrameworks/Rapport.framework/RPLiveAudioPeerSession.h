//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, RPMessageable;

__attribute__((visibility("hidden")))
@interface RPLiveAudioPeerSession : NSObject
{
    NSString *_destinationID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <RPMessageable> _messenger;
}

@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;

@end

