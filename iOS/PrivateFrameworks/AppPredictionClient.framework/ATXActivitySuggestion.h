//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXActivitySuggestion-Protocol.h>

@class ATXActivity, NSArray, NSString;

@interface ATXActivitySuggestion : NSObject <ATXActivitySuggestion>
{
    ATXActivity *_activity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ATXActivity *activity; // @synthesize activity=_activity;
- (_Bool)isEqualToATXActivitySuggestion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *suggestionUUID;
@property(readonly, nonatomic) NSArray *triggers;
@property(readonly, nonatomic) unsigned long long location;
@property(readonly, copy, nonatomic) NSString *uuidString;
- (id)initWithActivity:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
