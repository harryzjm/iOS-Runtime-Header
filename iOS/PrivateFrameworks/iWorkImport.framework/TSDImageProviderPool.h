//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDataCullingListener-Protocol.h>

@class NSString, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSDImageProviderPool : NSObject <TSPDataCullingListener>
{
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    unsigned long long mOpenFileDescriptorLimit;
    _Bool mHaveRaisedFileDescriptorLimit;
}

+ (Class)p_providerClassForData:(id)arg1 validateLength:(_Bool)arg2;
+ (Class)p_providerClassForData:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPool;
+ (id)_singletonAlloc;
- (void)p_updateFileDescriptorLimit;
- (unsigned long long)p_removeProvidersWithZeroInterest;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)flushProvidersToFreeMemoryIfNecessaryExcludingProvider:(id)arg1;
- (unsigned long long)p_estimatedSizeOfAllProviders;
- (unsigned long long)p_imageProviderMemoryThreshold;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)arg1;
- (unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)arg1;
- (void)p_clearCacheForData:(id)arg1;
- (void)didReplaceContentsOfData:(id)arg1;
- (void)willCullData:(id)arg1;
- (void)flushImageProviders;
- (void)p_flushRandomImageProvidersExcludingProvider:(id)arg1;
- (_Bool)p_rngSaysToFlush;
- (void)willCloseDocumentContext:(id)arg1;
- (void)removeInterestInProviderForData:(id)arg1;
- (void)addInterestInProviderForData:(id)arg1;
- (id)p_providerForData:(id)arg1 temporary:(_Bool)arg2 shouldValidate:(_Bool)arg3;
- (_Bool)isBitmapData:(id)arg1;
- (id)temporaryProviderForData:(id)arg1 shouldValidate:(_Bool)arg2;
- (id)providerForData:(id)arg1 shouldValidate:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

