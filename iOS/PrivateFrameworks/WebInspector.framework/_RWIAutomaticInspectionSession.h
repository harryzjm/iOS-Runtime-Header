//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _RWIAutomaticInspectionSession : NSObject
{
    NSString *_identifier;
    NSArray *_debuggers;
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    unsigned long long _currentDebuggerIndex;
}

@property(readonly, copy, nonatomic) NSArray *debuggers; // @synthesize debuggers=_debuggers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2;
- (void)_sendQuery;
- (_Bool)receivedRejectResponse;
- (void)start;
- (id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3;

@end

