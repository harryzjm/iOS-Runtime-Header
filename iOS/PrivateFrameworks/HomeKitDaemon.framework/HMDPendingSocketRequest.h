//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDPendingSocketRequest : NSObject
{
    NSString *_applicationProtocolName;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSString *applicationProtocolName; // @synthesize applicationProtocolName=_applicationProtocolName;
- (id)initWithApplicationProtocolName:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

