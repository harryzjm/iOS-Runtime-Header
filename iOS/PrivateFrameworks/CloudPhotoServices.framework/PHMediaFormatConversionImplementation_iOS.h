//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/PHMediaFormatConversionImplementation-Protocol.h>

@class NSString;

@interface PHMediaFormatConversionImplementation_iOS : NSObject <PHMediaFormatConversionImplementation>
{
}

- (void)addCommonMetadataFromRequest:(id)arg1 toOptions:(id)arg2;
- (void)performImageConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)performSinglePassVideoConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performVideoConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) long long transferBehaviorUserPreference;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

