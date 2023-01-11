//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResult-Protocol.h>

@class NSString, SNFileServerInfo;

@interface SNFileServerDiscoveryResult : NSObject <SNResult>
{
    SNFileServerInfo *_serverInfo;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) SNFileServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
- (id)initWithServerInfo:(id)arg1 state:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
