//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NSDictionary, NSString;

@interface NEFilterControlProvider <NSExtensionRequestHandling>
{
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *URLAppendStringMap; // @synthesize URLAppendStringMap=_URLAppendStringMap;
@property(copy) NSDictionary *remediationMap; // @synthesize remediationMap=_remediationMap;
- (void)notifyRulesChanged;
- (void)handleRemediationForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
