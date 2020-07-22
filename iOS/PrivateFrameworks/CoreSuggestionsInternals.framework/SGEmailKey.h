//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGEmailKey <SGEntityKey>
{
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly) NSString *messageId; // @dynamic messageId;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToEmailKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)toMailMessageKey;
- (id)initWithMailMessageKey:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
