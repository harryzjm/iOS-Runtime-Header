//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSString;

@interface CFCBGetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNightShiftMode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)getNightShiftStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
