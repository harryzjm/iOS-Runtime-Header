//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMEventTrigger.h>

#import <Home/HFPrettyDescription-Protocol.h>
#import <Home/HFStateDumpSerializable-Protocol.h>

@class NSString;

@interface HMEventTrigger (HFDebugging) <HFPrettyDescription, HFStateDumpSerializable>
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

