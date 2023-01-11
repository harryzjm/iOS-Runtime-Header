//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <nfshared/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NFRunScriptParameters : NSObject <NSSecureCoding>
{
    _Bool _checkWhitelist;
    _Bool _initialSelectBeforeRun;
    _Bool _includeAPDUDuration;
    _Bool _deactivateAllApps;
    NSString *_seid;
    NSArray *_whitelistedAID;
    double _outTotalAPDUExecutionDuration;
    unsigned long long _outFinalSWStatus;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long outFinalSWStatus; // @synthesize outFinalSWStatus=_outFinalSWStatus;
@property double outTotalAPDUExecutionDuration; // @synthesize outTotalAPDUExecutionDuration=_outTotalAPDUExecutionDuration;
@property _Bool deactivateAllApps; // @synthesize deactivateAllApps=_deactivateAllApps;
@property _Bool includeAPDUDuration; // @synthesize includeAPDUDuration=_includeAPDUDuration;
@property _Bool initialSelectBeforeRun; // @synthesize initialSelectBeforeRun=_initialSelectBeforeRun;
@property(retain) NSArray *whitelistedAID; // @synthesize whitelistedAID=_whitelistedAID;
@property _Bool checkWhitelist; // @synthesize checkWhitelist=_checkWhitelist;
@property(retain) NSString *seid; // @synthesize seid=_seid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

