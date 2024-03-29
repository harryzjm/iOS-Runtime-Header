//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol HMDAccessoryBrowserDelegate;

__attribute__((visibility("hidden")))
@interface HMDPairedAccessoryInformation : NSObject
{
    NSString *_identifier;
    NSData *_setupHash;
    unsigned long long _transports;
    id <HMDAccessoryBrowserDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) __weak id <HMDAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long transports; // @synthesize transports=_transports;
@property(readonly) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;
- (id)init;

@end

