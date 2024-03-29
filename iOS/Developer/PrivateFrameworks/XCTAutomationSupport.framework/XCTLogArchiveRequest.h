//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTLogArchiveRequesting-Protocol.h>

@class NSDate, NSString, NSXPCConnection;

@interface XCTLogArchiveRequest : NSObject <XCTLogArchiveRequesting>
{
    struct atomic_flag _hasExecuted;
    NSDate *_startDate;
    NSString *_outputPath;
    NSXPCConnection *_connection;
}

+ (id)logArchiveCollectorConnection;
+ (id)requestWithStartDate:(id)arg1 outputPath:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStartDate:(id)arg1 outputPath:(id)arg2;
- (id)initWithStartDate:(id)arg1 outputPath:(id)arg2 connection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

