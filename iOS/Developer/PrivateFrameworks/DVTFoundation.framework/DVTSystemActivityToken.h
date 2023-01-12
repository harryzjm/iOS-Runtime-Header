//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSString;

@interface DVTSystemActivityToken : NSObject
{
    unsigned int _displaySleepAssertionID;
    unsigned int _systemSleepAssertionID;
    NSString *_reason;
    unsigned long long _activityOptions;
    id _processInfoToken;
}

+ (id)_descriptionOfOutstandingTokens:(id)arg1 withActivityOptions:(unsigned long long)arg2 logLevel:(unsigned long long)arg3;
+ (void)initialize;
+ (id)_stringForActivityOptions:(unsigned long long)arg1;
+ (void)_accessSystemActivityTokensWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain) id processInfoToken; // @synthesize processInfoToken=_processInfoToken;
@property unsigned long long activityOptions; // @synthesize activityOptions=_activityOptions;
@property(copy) NSString *reason; // @synthesize reason=_reason;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end

