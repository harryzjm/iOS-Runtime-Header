//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSessionDataSourceDescription, NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateArray:(id)arg1 owningSession:(id)arg2;
- (id)initWithPortType:(id)arg1;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2;
- (id)privateGetID;
- (struct PortDescriptionImpl *)privateGetImplementation;
- (_Bool)setPreferredDataSource:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly) NSString *UID;
@property(readonly) AVAudioSessionDataSourceDescription *preferredDataSource;
@property(readonly) AVAudioSessionDataSourceDescription *selectedDataSource;
- (unsigned long long)endpointType;
- (_Bool)isHeadphones;
- (_Bool)isLiveListenSupported;
@property(readonly) _Bool hasHardwareVoiceCallProcessing;
@property(readonly) NSArray *dataSources;
@property(readonly) NSArray *channels;
@property(readonly) NSString *portName;
@property(readonly) NSString *portType;
- (unsigned long long)hash;
- (_Bool)isEqualToPort:(id)arg1 compareStrict:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

