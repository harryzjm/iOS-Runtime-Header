//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface PBBridgeProblemCodeGenerator : NSObject
{
    NSString *_buildVersion;
    NSString *_payload;
    NSMutableString *_eventString;
    NSString *_errorCode;
    NSString *_advertisingName;
}

+ (id)sharedReportHelper;
@property(copy, nonatomic) NSString *advertisingName; // @synthesize advertisingName=_advertisingName;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSMutableString *eventString; // @synthesize eventString=_eventString;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void).cxx_destruct;
- (id)generateReportCode;
- (id)_generateReportCodeForRange:(struct _NSRange)arg1 forFrame:(long long)arg2 ofTotalFrames:(long long)arg3;
- (void)beginInstance;
- (id)init;

@end

