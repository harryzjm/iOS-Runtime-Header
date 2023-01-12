//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject
{
    NSString *_identifier;
    NSString *_preferredSessionType;
}

+ (id)requestWithIdentifier:(id)arg1 preferredSessionType:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *preferredSessionType; // @synthesize preferredSessionType=_preferredSessionType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

