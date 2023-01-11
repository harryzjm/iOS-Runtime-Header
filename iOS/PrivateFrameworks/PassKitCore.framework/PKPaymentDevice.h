//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSString, NSTimer, PKPaymentDeviceConfigurationData, PKSecureElement;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceConfigurationData *_configurationData;
    NSMutableArray *_metdataFetchTasks;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _skipLocationCheck;
}

+ (id)clientHardwarePlatformInfoHTTPHeader;
+ (id)clientInfoHTTPHeader;
- (void).cxx_destruct;
@property(nonatomic) _Bool skipLocationCheck; // @synthesize skipLocationCheck=_skipLocationCheck;
- (void)configurationDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeDeviceMetadataFetchTasksCompletionHandlers;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)primarySecureElementIdentifier;
- (void)SEPParingInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (_Bool)hasRegistrationRegionMap;
- (void)_populateDeviceMetadata:(id)arg1 withFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentDeviceMetadataFields:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisioningDataIncludingDeviceMetadata:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)trustedDeviceEnrollmentInfo;
- (id)configurationData;
- (void)rewrapDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
