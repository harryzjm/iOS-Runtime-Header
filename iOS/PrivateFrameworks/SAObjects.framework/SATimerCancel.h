//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SATimerTimerAction-Protocol.h>

@class NSString;

@interface SATimerCancel <SATimerTimerAction>
{
}

+ (id)cancelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cancel;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

