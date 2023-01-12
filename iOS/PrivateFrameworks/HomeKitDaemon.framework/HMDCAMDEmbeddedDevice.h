//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCAMCommunicationProtocols-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HMDCAMDEmbeddedDevice : NSObject <HMDCAMCommunicationProtocols>
{
    NSMutableDictionary *_classInstances;
    _Bool _filterNSDataLogging;
}

- (void).cxx_destruct;
@property _Bool filterNSDataLogging; // @synthesize filterNSDataLogging=_filterNSDataLogging;
- (id)valueForUndefinedKey:(id)arg1;
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
- (id)instanceOfClass:(Class)arg1 forShortName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
