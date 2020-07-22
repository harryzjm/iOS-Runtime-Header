//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class CFCBNightShiftSchedule, NSNumber, NSString;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftMode;
- (_Bool)requiresResponse;
@property(retain, nonatomic) CFCBNightShiftSchedule *schedule;
@property(copy, nonatomic) NSString *option;
@property(copy, nonatomic) NSString *mode;
@property(copy, nonatomic) NSNumber *enable;
@property(copy, nonatomic) NSNumber *active;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
