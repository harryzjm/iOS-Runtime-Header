//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TPSCloudDeviceInfo;
@protocol TPSCloudDeviceDataSource;

@interface TPSCloudDeviceValidation
{
    TPSCloudDeviceInfo *_deviceInfo;
    id <TPSCloudDeviceDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TPSCloudDeviceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TPSCloudDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (id)description;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDeviceInfo:(id)arg1;

@end
