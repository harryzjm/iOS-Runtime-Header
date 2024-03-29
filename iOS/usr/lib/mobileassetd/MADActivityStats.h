//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MADActivityStats : NSObject
{
    int _failureResult;
    unsigned long long _successfulOperations;
    unsigned long long _successWithIssues;
    NSString *_firstSuccessIssue;
    NSString *_lastSuccessIssue;
    unsigned long long _totalWarnings;
    NSString *_firstWarningMethod;
    NSString *_firstWarningMessage;
    NSString *_lastWarningMethod;
    NSString *_lastWarningMessage;
    unsigned long long _allocationFailures;
    unsigned long long _associateReplyFailures;
    NSString *_failureResultName;
    NSString *_failureReason;
    unsigned long long _additionalFailures;
    NSString *_firstAdditionalFailure;
    NSString *_lastAdditionalFailure;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastAdditionalFailure; // @synthesize lastAdditionalFailure=_lastAdditionalFailure;
@property(retain, nonatomic) NSString *firstAdditionalFailure; // @synthesize firstAdditionalFailure=_firstAdditionalFailure;
@property(nonatomic) unsigned long long additionalFailures; // @synthesize additionalFailures=_additionalFailures;
@property(retain, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(retain, nonatomic) NSString *failureResultName; // @synthesize failureResultName=_failureResultName;
@property(nonatomic) int failureResult; // @synthesize failureResult=_failureResult;
@property(nonatomic) unsigned long long associateReplyFailures; // @synthesize associateReplyFailures=_associateReplyFailures;
@property(nonatomic) unsigned long long allocationFailures; // @synthesize allocationFailures=_allocationFailures;
@property(retain, nonatomic) NSString *lastWarningMessage; // @synthesize lastWarningMessage=_lastWarningMessage;
@property(retain, nonatomic) NSString *lastWarningMethod; // @synthesize lastWarningMethod=_lastWarningMethod;
@property(retain, nonatomic) NSString *firstWarningMessage; // @synthesize firstWarningMessage=_firstWarningMessage;
@property(retain, nonatomic) NSString *firstWarningMethod; // @synthesize firstWarningMethod=_firstWarningMethod;
@property(nonatomic) unsigned long long totalWarnings; // @synthesize totalWarnings=_totalWarnings;
@property(retain, nonatomic) NSString *lastSuccessIssue; // @synthesize lastSuccessIssue=_lastSuccessIssue;
@property(retain, nonatomic) NSString *firstSuccessIssue; // @synthesize firstSuccessIssue=_firstSuccessIssue;
@property(nonatomic) unsigned long long successWithIssues; // @synthesize successWithIssues=_successWithIssues;
@property(nonatomic) unsigned long long successfulOperations; // @synthesize successfulOperations=_successfulOperations;
- (id)init;

@end

