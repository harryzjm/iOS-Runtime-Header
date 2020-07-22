//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthPlugin-Protocol.h>
#import <HealthDaemon/HDXPCListenerDelegate-Protocol.h>

@class HDXPCListener, NSString;
@protocol HDHealthDaemon;

@interface HDHealthExtensionsPlugin : NSObject <HDXPCListenerDelegate, HDHealthPlugin, HDDiagnosticObject>
{
    HDXPCListener *_listener;
    id <HDHealthDaemon> _healthDaemon;
}

@property(readonly, nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)serverWithClient:(id)arg1 error:(id *)arg2;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)activate;
@property(readonly, copy, nonatomic) NSString *pluginIdentifier;
- (id)initWithHealthDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

