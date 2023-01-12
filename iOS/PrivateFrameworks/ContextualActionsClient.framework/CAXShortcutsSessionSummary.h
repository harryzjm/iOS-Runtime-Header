//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextualActionsClient/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CAXShortcutsSessionSummary : NSObject <NSSecureCoding>
{
    NSArray *_actions;
    NSString *_sessionIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)initWithActions:(id)arg1 sessionIdentifier:(id)arg2;

@end
