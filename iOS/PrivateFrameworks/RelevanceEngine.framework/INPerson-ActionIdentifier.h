//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPerson.h>

#import <RelevanceEngine/REDonatedActionIdentifierProviding-Protocol.h>

@class NSString;

@interface INPerson (ActionIdentifier) <REDonatedActionIdentifierProviding>
- (unsigned long long)re_actionIdentifierHashValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

