//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCSerializable-Protocol.h>

@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable>
{
    _Bool _disableAbTesting;
    _Bool _ignoreCache;
    _Bool _enableExtraLogs;
    NSArray *_overrideSegmentSetIDs;
    NSArray *_additionalSegmentSetIDs;
    unsigned long long _configurationSource;
    unsigned long long _debugEnvironment;
}

+ (id)defaultDebugOverrides;
@property(readonly, nonatomic) _Bool enableExtraLogs; // @synthesize enableExtraLogs=_enableExtraLogs;
@property(readonly, nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(readonly, nonatomic) unsigned long long debugEnvironment; // @synthesize debugEnvironment=_debugEnvironment;
@property(readonly, nonatomic) unsigned long long configurationSource; // @synthesize configurationSource=_configurationSource;
@property(readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs; // @synthesize additionalSegmentSetIDs=_additionalSegmentSetIDs;
@property(readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs; // @synthesize overrideSegmentSetIDs=_overrideSegmentSetIDs;
@property(readonly, nonatomic) _Bool disableAbTesting; // @synthesize disableAbTesting=_disableAbTesting;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool onlyUseFallbackURL;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisableAbTesting:(_Bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(_Bool)arg6 enableExtraLogs:(_Bool)arg7;
- (id)initWithDisableAbTesting:(_Bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(_Bool)arg6;
- (id)initWithDisableAbTesting:(_Bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(_Bool)arg4 debugEnvironment:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

