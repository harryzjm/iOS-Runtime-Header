//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SyncedDefaults/SYDClientProtocol-Protocol.h>

@protocol SYDClientProtocol;

__attribute__((visibility("hidden")))
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>
{
    id <SYDClientProtocol> _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SYDClientProtocol> target; // @synthesize target=_target;
- (void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithTarget:(id)arg1;

@end
