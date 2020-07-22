//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <AudioToolbox/AUAudioUnitXPCProtocol-Protocol.h>

@class AUAudioUnit, AUAudioUnitViewService, AUParameterTree, NSMutableArray, NSObject;
@protocol AUAudioUnitHostProtocol, OS_dispatch_queue, OS_voucher;

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol>
{
    AUAudioUnit *_audioUnit;
    _Bool _isUIExtension;
    struct AudioComponentDescription _componentDescription;
    id <AUAudioUnitHostProtocol> _remoteHost;
    struct AUExtRenderingServer *_renderServer;
    NSObject<OS_dispatch_queue> *_propertyObserverQueue;
    NSMutableArray *_pendingChangedProperties;
    int _deferPropertyChangeNotifications;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    AUAudioUnitViewService *_viewService;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) AUAudioUnitViewService *viewService; // @synthesize viewService=_viewService;
- (void)selectViewConfiguration:(id)arg1;
- (void)supportedViewConfigurations:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_fetchAndClearPendingChangedProperties;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(_Bool)arg2 address:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getParameter:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getParameterTree:(CDUnknownBlockType)arg1;
- (id)currentParameterTree;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)valueForProperty:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)valueForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)uninitialize:(CDUnknownBlockType)arg1;
- (void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned int)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(CDUnknownBlockType)arg8;
- (void)setWorkIntervalPort:(id)arg1;
- (void)initialize:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBusses:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)open:(CDUnknownBlockType)arg1;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)iOSViewController;
- (void)dealloc;
- (void)close:(CDUnknownBlockType)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (_Bool)_identifyBus:(id)arg1 scope:(unsigned int *)arg2 element:(unsigned int *)arg3;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;

@end

