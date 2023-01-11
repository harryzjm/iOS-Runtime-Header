//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject
{
    _Bool _networkAccessAllowed;
    _Bool _wantsProgress;
    _Bool _transient;
    NSString *_taskIdentifier;
    CDUnknownBlockType _dataHandler;
    NSString *_clientBundleID;
    unsigned long long _downloadIntent;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long downloadIntent; // @synthesize downloadIntent=_downloadIntent;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) _Bool wantsProgress; // @synthesize wantsProgress=_wantsProgress;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(readonly, nonatomic) _Bool shouldPrioritize;

@end
