//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface NEFilterDataProvider <NSExtensionRequestHandling>
{
}

- (id)handleRemediationForFlow:(id)arg1;
- (void)handleRulesChanged;
- (id)handleOutboundDataCompleteForFlow:(id)arg1;
- (id)handleInboundDataCompleteForFlow:(id)arg1;
- (id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleNewFlow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
